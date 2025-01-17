#include <gtk/gtk.h>

static void show_main_menu(GtkWidget *widget, gpointer data);
static void show_product_list_page(GtkWidget *widget, gpointer data);
static void show_product_detail_page(GtkWidget *widget, gpointer data);

static void clear_window(GtkWidget *window) {
    GList *children, *iter;

    children = gtk_container_get_children(GTK_CONTAINER(window));
    for (iter = children; iter != NULL; iter = g_list_next(iter)) {
        gtk_widget_destroy(GTK_WIDGET(iter->data));
    }
    g_list_free(children);
}

static void show_main_menu(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the main menu title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Main Menu</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("Navigate to a different page by clicking one of the buttons below.");
    gtk_box_pack_start(GTK_BOX(main_box), description_label, FALSE, FALSE, 0);

    // Create a scrolled window
    GtkWidget *scrolled_window = gtk_scrolled_window_new(NULL, NULL);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scrolled_window), GTK_POLICY_NEVER, GTK_POLICY_AUTOMATIC);
    gtk_box_pack_start(GTK_BOX(main_box), scrolled_window, TRUE, TRUE, 0);

    // Create a box to hold buttons inside the scrolled window
    GtkWidget *button_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(scrolled_window), button_box);

    // Create buttons with limited size
    GtkWidget *button_product_list_page = gtk_button_new_with_label("Product List Page");
    gtk_widget_set_size_request(button_product_list_page, 200, 50);
    g_signal_connect(button_product_list_page, "clicked", G_CALLBACK(show_product_list_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_product_list_page, FALSE, FALSE, 0);
    GtkWidget *button_product_detail_page = gtk_button_new_with_label("Product Detail Page");
    gtk_widget_set_size_request(button_product_detail_page, 200, 50);
    g_signal_connect(button_product_detail_page, "clicked", G_CALLBACK(show_product_detail_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_product_detail_page, FALSE, FALSE, 0);

    gtk_widget_show_all(window);
}

/** The page that lists all products */
static void show_product_list_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Product List Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page that lists all products");
    gtk_box_pack_start(GTK_BOX(main_box), description_label, FALSE, FALSE, 0);

    // Create a box to hold the back button
    GtkWidget *button_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_box_pack_start(GTK_BOX(main_box), button_box, TRUE, TRUE, 0);

    // Create a smaller back button
    GtkWidget *back_button = gtk_button_new_with_label("Back");
    gtk_widget_set_size_request(back_button, 100, 30);  // Set smaller size for the button
    g_signal_connect(back_button, "clicked", G_CALLBACK(show_main_menu), window);
    gtk_box_pack_start(GTK_BOX(button_box), back_button, FALSE, FALSE, 0);

    gtk_widget_show_all(window);
}
/** The page that shows the details of a product */
static void show_product_detail_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Product Detail Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page that shows the details of a product");
    gtk_box_pack_start(GTK_BOX(main_box), description_label, FALSE, FALSE, 0);

    // Create a box to hold the back button
    GtkWidget *button_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_box_pack_start(GTK_BOX(main_box), button_box, TRUE, TRUE, 0);

    // Create a smaller back button
    GtkWidget *back_button = gtk_button_new_with_label("Back");
    gtk_widget_set_size_request(back_button, 100, 30);  // Set smaller size for the button
    g_signal_connect(back_button, "clicked", G_CALLBACK(show_main_menu), window);
    gtk_box_pack_start(GTK_BOX(button_box), back_button, FALSE, FALSE, 0);

    gtk_widget_show_all(window);
}

static void activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window;

    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Multi Platform UI App");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);

    show_main_menu(NULL, window);  // Show the main menu on startup

    gtk_widget_show_all(window);
}

int main(int argc, char **argv) {
    GtkApplication *app;
    int status;

    app = gtk_application_new("org.gtk.example", G_APPLICATION_FLAGS_NONE);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    return status;
}