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
    /// The page for initiating a new stocktaking activity
    /// </summary>
    public sealed partial class AddStocktakingPage : Page
    {
        public AddStocktakingPage()
        {
            this.InitializeComponent();
        }
        
        public void OnNavigateBack(object sender, RoutedEventArgs e)
        {
            Frame.GoBack();
        }
    }
}