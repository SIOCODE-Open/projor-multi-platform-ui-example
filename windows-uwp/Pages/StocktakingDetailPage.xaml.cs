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
    /// The page that shows details of a specific stocktaking activity
    /// </summary>
    public sealed partial class StocktakingDetailPage : Page
    {
        public StocktakingDetailPage()
        {
            this.InitializeComponent();
        }
        
        public void OnNavigateBack(object sender, RoutedEventArgs e)
        {
            Frame.GoBack();
        }
    }
}