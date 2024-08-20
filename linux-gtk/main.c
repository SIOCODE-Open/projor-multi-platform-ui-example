#include <gtk/gtk.h>

static void show_main_menu(GtkWidget *widget, gpointer data);
static void show_dashboard(GtkWidget *widget, gpointer data);
static void show_inventory_list_page(GtkWidget *widget, gpointer data);
static void show_inventory_detail_page(GtkWidget *widget, gpointer data);
static void show_add_inventory_item_page(GtkWidget *widget, gpointer data);
static void show_edit_inventory_item_page(GtkWidget *widget, gpointer data);
static void show_delete_inventory_item_page(GtkWidget *widget, gpointer data);
static void show_order_list_page(GtkWidget *widget, gpointer data);
static void show_order_detail_page(GtkWidget *widget, gpointer data);
static void show_add_order_page(GtkWidget *widget, gpointer data);
static void show_edit_order_page(GtkWidget *widget, gpointer data);
static void show_delete_order_page(GtkWidget *widget, gpointer data);
static void show_supplier_list_page(GtkWidget *widget, gpointer data);
static void show_supplier_detail_page(GtkWidget *widget, gpointer data);
static void show_add_supplier_page(GtkWidget *widget, gpointer data);
static void show_edit_supplier_page(GtkWidget *widget, gpointer data);
static void show_delete_supplier_page(GtkWidget *widget, gpointer data);
static void show_shipment_list_page(GtkWidget *widget, gpointer data);
static void show_shipment_detail_page(GtkWidget *widget, gpointer data);
static void show_add_shipment_page(GtkWidget *widget, gpointer data);
static void show_edit_shipment_page(GtkWidget *widget, gpointer data);
static void show_delete_shipment_page(GtkWidget *widget, gpointer data);
static void show_stocktaking_list_page(GtkWidget *widget, gpointer data);
static void show_stocktaking_detail_page(GtkWidget *widget, gpointer data);
static void show_add_stocktaking_page(GtkWidget *widget, gpointer data);
static void show_edit_stocktaking_page(GtkWidget *widget, gpointer data);
static void show_delete_stocktaking_page(GtkWidget *widget, gpointer data);

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
    GtkWidget *button_dashboard = gtk_button_new_with_label("Dashboard");
    gtk_widget_set_size_request(button_dashboard, 200, 50);
    g_signal_connect(button_dashboard, "clicked", G_CALLBACK(show_dashboard), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_dashboard, FALSE, FALSE, 0);
    GtkWidget *button_inventory_list_page = gtk_button_new_with_label("Inventory List Page");
    gtk_widget_set_size_request(button_inventory_list_page, 200, 50);
    g_signal_connect(button_inventory_list_page, "clicked", G_CALLBACK(show_inventory_list_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_inventory_list_page, FALSE, FALSE, 0);
    GtkWidget *button_inventory_detail_page = gtk_button_new_with_label("Inventory Detail Page");
    gtk_widget_set_size_request(button_inventory_detail_page, 200, 50);
    g_signal_connect(button_inventory_detail_page, "clicked", G_CALLBACK(show_inventory_detail_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_inventory_detail_page, FALSE, FALSE, 0);
    GtkWidget *button_add_inventory_item_page = gtk_button_new_with_label("Add Inventory Item Page");
    gtk_widget_set_size_request(button_add_inventory_item_page, 200, 50);
    g_signal_connect(button_add_inventory_item_page, "clicked", G_CALLBACK(show_add_inventory_item_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_add_inventory_item_page, FALSE, FALSE, 0);
    GtkWidget *button_edit_inventory_item_page = gtk_button_new_with_label("Edit Inventory Item Page");
    gtk_widget_set_size_request(button_edit_inventory_item_page, 200, 50);
    g_signal_connect(button_edit_inventory_item_page, "clicked", G_CALLBACK(show_edit_inventory_item_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_edit_inventory_item_page, FALSE, FALSE, 0);
    GtkWidget *button_delete_inventory_item_page = gtk_button_new_with_label("Delete Inventory Item Page");
    gtk_widget_set_size_request(button_delete_inventory_item_page, 200, 50);
    g_signal_connect(button_delete_inventory_item_page, "clicked", G_CALLBACK(show_delete_inventory_item_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_delete_inventory_item_page, FALSE, FALSE, 0);
    GtkWidget *button_order_list_page = gtk_button_new_with_label("Order List Page");
    gtk_widget_set_size_request(button_order_list_page, 200, 50);
    g_signal_connect(button_order_list_page, "clicked", G_CALLBACK(show_order_list_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_order_list_page, FALSE, FALSE, 0);
    GtkWidget *button_order_detail_page = gtk_button_new_with_label("Order Detail Page");
    gtk_widget_set_size_request(button_order_detail_page, 200, 50);
    g_signal_connect(button_order_detail_page, "clicked", G_CALLBACK(show_order_detail_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_order_detail_page, FALSE, FALSE, 0);
    GtkWidget *button_add_order_page = gtk_button_new_with_label("Add Order Page");
    gtk_widget_set_size_request(button_add_order_page, 200, 50);
    g_signal_connect(button_add_order_page, "clicked", G_CALLBACK(show_add_order_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_add_order_page, FALSE, FALSE, 0);
    GtkWidget *button_edit_order_page = gtk_button_new_with_label("Edit Order Page");
    gtk_widget_set_size_request(button_edit_order_page, 200, 50);
    g_signal_connect(button_edit_order_page, "clicked", G_CALLBACK(show_edit_order_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_edit_order_page, FALSE, FALSE, 0);
    GtkWidget *button_delete_order_page = gtk_button_new_with_label("Delete Order Page");
    gtk_widget_set_size_request(button_delete_order_page, 200, 50);
    g_signal_connect(button_delete_order_page, "clicked", G_CALLBACK(show_delete_order_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_delete_order_page, FALSE, FALSE, 0);
    GtkWidget *button_supplier_list_page = gtk_button_new_with_label("Supplier List Page");
    gtk_widget_set_size_request(button_supplier_list_page, 200, 50);
    g_signal_connect(button_supplier_list_page, "clicked", G_CALLBACK(show_supplier_list_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_supplier_list_page, FALSE, FALSE, 0);
    GtkWidget *button_supplier_detail_page = gtk_button_new_with_label("Supplier Detail Page");
    gtk_widget_set_size_request(button_supplier_detail_page, 200, 50);
    g_signal_connect(button_supplier_detail_page, "clicked", G_CALLBACK(show_supplier_detail_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_supplier_detail_page, FALSE, FALSE, 0);
    GtkWidget *button_add_supplier_page = gtk_button_new_with_label("Add Supplier Page");
    gtk_widget_set_size_request(button_add_supplier_page, 200, 50);
    g_signal_connect(button_add_supplier_page, "clicked", G_CALLBACK(show_add_supplier_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_add_supplier_page, FALSE, FALSE, 0);
    GtkWidget *button_edit_supplier_page = gtk_button_new_with_label("Edit Supplier Page");
    gtk_widget_set_size_request(button_edit_supplier_page, 200, 50);
    g_signal_connect(button_edit_supplier_page, "clicked", G_CALLBACK(show_edit_supplier_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_edit_supplier_page, FALSE, FALSE, 0);
    GtkWidget *button_delete_supplier_page = gtk_button_new_with_label("Delete Supplier Page");
    gtk_widget_set_size_request(button_delete_supplier_page, 200, 50);
    g_signal_connect(button_delete_supplier_page, "clicked", G_CALLBACK(show_delete_supplier_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_delete_supplier_page, FALSE, FALSE, 0);
    GtkWidget *button_shipment_list_page = gtk_button_new_with_label("Shipment List Page");
    gtk_widget_set_size_request(button_shipment_list_page, 200, 50);
    g_signal_connect(button_shipment_list_page, "clicked", G_CALLBACK(show_shipment_list_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_shipment_list_page, FALSE, FALSE, 0);
    GtkWidget *button_shipment_detail_page = gtk_button_new_with_label("Shipment Detail Page");
    gtk_widget_set_size_request(button_shipment_detail_page, 200, 50);
    g_signal_connect(button_shipment_detail_page, "clicked", G_CALLBACK(show_shipment_detail_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_shipment_detail_page, FALSE, FALSE, 0);
    GtkWidget *button_add_shipment_page = gtk_button_new_with_label("Add Shipment Page");
    gtk_widget_set_size_request(button_add_shipment_page, 200, 50);
    g_signal_connect(button_add_shipment_page, "clicked", G_CALLBACK(show_add_shipment_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_add_shipment_page, FALSE, FALSE, 0);
    GtkWidget *button_edit_shipment_page = gtk_button_new_with_label("Edit Shipment Page");
    gtk_widget_set_size_request(button_edit_shipment_page, 200, 50);
    g_signal_connect(button_edit_shipment_page, "clicked", G_CALLBACK(show_edit_shipment_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_edit_shipment_page, FALSE, FALSE, 0);
    GtkWidget *button_delete_shipment_page = gtk_button_new_with_label("Delete Shipment Page");
    gtk_widget_set_size_request(button_delete_shipment_page, 200, 50);
    g_signal_connect(button_delete_shipment_page, "clicked", G_CALLBACK(show_delete_shipment_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_delete_shipment_page, FALSE, FALSE, 0);
    GtkWidget *button_stocktaking_list_page = gtk_button_new_with_label("Stocktaking List Page");
    gtk_widget_set_size_request(button_stocktaking_list_page, 200, 50);
    g_signal_connect(button_stocktaking_list_page, "clicked", G_CALLBACK(show_stocktaking_list_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_stocktaking_list_page, FALSE, FALSE, 0);
    GtkWidget *button_stocktaking_detail_page = gtk_button_new_with_label("Stocktaking Detail Page");
    gtk_widget_set_size_request(button_stocktaking_detail_page, 200, 50);
    g_signal_connect(button_stocktaking_detail_page, "clicked", G_CALLBACK(show_stocktaking_detail_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_stocktaking_detail_page, FALSE, FALSE, 0);
    GtkWidget *button_add_stocktaking_page = gtk_button_new_with_label("Add Stocktaking Page");
    gtk_widget_set_size_request(button_add_stocktaking_page, 200, 50);
    g_signal_connect(button_add_stocktaking_page, "clicked", G_CALLBACK(show_add_stocktaking_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_add_stocktaking_page, FALSE, FALSE, 0);
    GtkWidget *button_edit_stocktaking_page = gtk_button_new_with_label("Edit Stocktaking Page");
    gtk_widget_set_size_request(button_edit_stocktaking_page, 200, 50);
    g_signal_connect(button_edit_stocktaking_page, "clicked", G_CALLBACK(show_edit_stocktaking_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_edit_stocktaking_page, FALSE, FALSE, 0);
    GtkWidget *button_delete_stocktaking_page = gtk_button_new_with_label("Delete Stocktaking Page");
    gtk_widget_set_size_request(button_delete_stocktaking_page, 200, 50);
    g_signal_connect(button_delete_stocktaking_page, "clicked", G_CALLBACK(show_delete_stocktaking_page), window);
    gtk_box_pack_start(GTK_BOX(button_box), button_delete_stocktaking_page, FALSE, FALSE, 0);

    gtk_widget_show_all(window);
}

/** The main dashboard providing an overview of warehouse operations */
static void show_dashboard(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Dashboard</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The main dashboard providing an overview of warehouse operations");
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
/** The page that lists all items in the inventory */
static void show_inventory_list_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Inventory List Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page that lists all items in the inventory");
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
/** The page that shows details of a specific inventory item */
static void show_inventory_detail_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Inventory Detail Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page that shows details of a specific inventory item");
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
/** The page where new inventory items can be added */
static void show_add_inventory_item_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Add Inventory Item Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page where new inventory items can be added");
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
/** The page for editing existing inventory items */
static void show_edit_inventory_item_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Edit Inventory Item Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page for editing existing inventory items");
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
/** The page for deleting an inventory item */
static void show_delete_inventory_item_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Delete Inventory Item Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page for deleting an inventory item");
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
/** The page that lists all customer orders */
static void show_order_list_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Order List Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page that lists all customer orders");
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
/** The page that shows details of a specific customer order */
static void show_order_detail_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Order Detail Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page that shows details of a specific customer order");
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
/** The page for creating a new customer order */
static void show_add_order_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Add Order Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page for creating a new customer order");
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
/** The page for editing an existing customer order */
static void show_edit_order_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Edit Order Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page for editing an existing customer order");
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
/** The page for deleting a customer order */
static void show_delete_order_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Delete Order Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page for deleting a customer order");
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
/** The page that lists all suppliers */
static void show_supplier_list_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Supplier List Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page that lists all suppliers");
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
/** The page that shows details of a specific supplier */
static void show_supplier_detail_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Supplier Detail Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page that shows details of a specific supplier");
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
/** The page for adding a new supplier */
static void show_add_supplier_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Add Supplier Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page for adding a new supplier");
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
/** The page for editing an existing supplier */
static void show_edit_supplier_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Edit Supplier Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page for editing an existing supplier");
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
/** The page for deleting a supplier */
static void show_delete_supplier_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Delete Supplier Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page for deleting a supplier");
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
/** The page that lists all shipments */
static void show_shipment_list_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Shipment List Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page that lists all shipments");
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
/** The page that shows details of a specific shipment */
static void show_shipment_detail_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Shipment Detail Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page that shows details of a specific shipment");
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
/** The page for adding a new shipment */
static void show_add_shipment_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Add Shipment Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page for adding a new shipment");
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
/** The page for editing an existing shipment */
static void show_edit_shipment_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Edit Shipment Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page for editing an existing shipment");
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
/** The page for deleting a shipment */
static void show_delete_shipment_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Delete Shipment Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page for deleting a shipment");
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
/** The page that lists all stocktaking activities */
static void show_stocktaking_list_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Stocktaking List Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page that lists all stocktaking activities");
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
/** The page that shows details of a specific stocktaking activity */
static void show_stocktaking_detail_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Stocktaking Detail Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page that shows details of a specific stocktaking activity");
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
/** The page for initiating a new stocktaking activity */
static void show_add_stocktaking_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Add Stocktaking Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page for initiating a new stocktaking activity");
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
/** The page for editing an existing stocktaking activity */
static void show_edit_stocktaking_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Edit Stocktaking Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page for editing an existing stocktaking activity");
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
/** The page for deleting a stocktaking activity */
static void show_delete_stocktaking_page(GtkWidget *widget, gpointer data) {
    GtkWidget *window = GTK_WIDGET(data);

    clear_window(window);  // Clear the previous contents

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), main_box);

    // Add the Product List Page title
    GtkWidget *title_label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(title_label), "<span font='24'>Delete Stocktaking Page</span>");
    gtk_box_pack_start(GTK_BOX(main_box), title_label, FALSE, FALSE, 0);

    // Add the description label
    GtkWidget *description_label = gtk_label_new("The page for deleting a stocktaking activity");
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