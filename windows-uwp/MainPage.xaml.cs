using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;

namespace windows_uwp
{
    /// <summary>
    /// The main page, which is implemented as a main menu.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
        }

        /// <summary>
        /// Navigates to the Dashboard page.
        /// </summary>
        public void OnNavigateToDashboard(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(Dashboard));
        }
        /// <summary>
        /// Navigates to the Inventory List Page page.
        /// </summary>
        public void OnNavigateToInventoryListPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(InventoryListPage));
        }
        /// <summary>
        /// Navigates to the Inventory Detail Page page.
        /// </summary>
        public void OnNavigateToInventoryDetailPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(InventoryDetailPage));
        }
        /// <summary>
        /// Navigates to the Add Inventory Item Page page.
        /// </summary>
        public void OnNavigateToAddInventoryItemPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(AddInventoryItemPage));
        }
        /// <summary>
        /// Navigates to the Edit Inventory Item Page page.
        /// </summary>
        public void OnNavigateToEditInventoryItemPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(EditInventoryItemPage));
        }
        /// <summary>
        /// Navigates to the Delete Inventory Item Page page.
        /// </summary>
        public void OnNavigateToDeleteInventoryItemPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(DeleteInventoryItemPage));
        }
        /// <summary>
        /// Navigates to the Order List Page page.
        /// </summary>
        public void OnNavigateToOrderListPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(OrderListPage));
        }
        /// <summary>
        /// Navigates to the Order Detail Page page.
        /// </summary>
        public void OnNavigateToOrderDetailPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(OrderDetailPage));
        }
        /// <summary>
        /// Navigates to the Add Order Page page.
        /// </summary>
        public void OnNavigateToAddOrderPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(AddOrderPage));
        }
        /// <summary>
        /// Navigates to the Edit Order Page page.
        /// </summary>
        public void OnNavigateToEditOrderPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(EditOrderPage));
        }
        /// <summary>
        /// Navigates to the Delete Order Page page.
        /// </summary>
        public void OnNavigateToDeleteOrderPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(DeleteOrderPage));
        }
        /// <summary>
        /// Navigates to the Supplier List Page page.
        /// </summary>
        public void OnNavigateToSupplierListPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(SupplierListPage));
        }
        /// <summary>
        /// Navigates to the Supplier Detail Page page.
        /// </summary>
        public void OnNavigateToSupplierDetailPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(SupplierDetailPage));
        }
        /// <summary>
        /// Navigates to the Add Supplier Page page.
        /// </summary>
        public void OnNavigateToAddSupplierPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(AddSupplierPage));
        }
        /// <summary>
        /// Navigates to the Edit Supplier Page page.
        /// </summary>
        public void OnNavigateToEditSupplierPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(EditSupplierPage));
        }
        /// <summary>
        /// Navigates to the Delete Supplier Page page.
        /// </summary>
        public void OnNavigateToDeleteSupplierPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(DeleteSupplierPage));
        }
        /// <summary>
        /// Navigates to the Shipment List Page page.
        /// </summary>
        public void OnNavigateToShipmentListPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(ShipmentListPage));
        }
        /// <summary>
        /// Navigates to the Shipment Detail Page page.
        /// </summary>
        public void OnNavigateToShipmentDetailPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(ShipmentDetailPage));
        }
        /// <summary>
        /// Navigates to the Add Shipment Page page.
        /// </summary>
        public void OnNavigateToAddShipmentPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(AddShipmentPage));
        }
        /// <summary>
        /// Navigates to the Edit Shipment Page page.
        /// </summary>
        public void OnNavigateToEditShipmentPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(EditShipmentPage));
        }
        /// <summary>
        /// Navigates to the Delete Shipment Page page.
        /// </summary>
        public void OnNavigateToDeleteShipmentPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(DeleteShipmentPage));
        }
        /// <summary>
        /// Navigates to the Stocktaking List Page page.
        /// </summary>
        public void OnNavigateToStocktakingListPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(StocktakingListPage));
        }
        /// <summary>
        /// Navigates to the Stocktaking Detail Page page.
        /// </summary>
        public void OnNavigateToStocktakingDetailPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(StocktakingDetailPage));
        }
        /// <summary>
        /// Navigates to the Add Stocktaking Page page.
        /// </summary>
        public void OnNavigateToAddStocktakingPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(AddStocktakingPage));
        }
        /// <summary>
        /// Navigates to the Edit Stocktaking Page page.
        /// </summary>
        public void OnNavigateToEditStocktakingPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(EditStocktakingPage));
        }
        /// <summary>
        /// Navigates to the Delete Stocktaking Page page.
        /// </summary>
        public void OnNavigateToDeleteStocktakingPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(DeleteStocktakingPage));
        }

    }
}