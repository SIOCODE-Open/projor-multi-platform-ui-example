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
        /// Navigates to the Product List Page page.
        /// </summary>
        public void OnNavigateToProductListPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(ProductListPage));
        }
        /// <summary>
        /// Navigates to the Product Detail Page page.
        /// </summary>
        public void OnNavigateToProductDetailPage(object sender, RoutedEventArgs e)
        {
            Frame.Navigate(typeof(ProductDetailPage));
        }

    }
}