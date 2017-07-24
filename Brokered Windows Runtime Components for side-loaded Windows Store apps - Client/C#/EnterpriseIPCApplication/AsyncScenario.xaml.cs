//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
//
//*********************************************************

using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Navigation;
using SDKTemplate;
using System;

namespace EnterpriseIPCApplication
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class AsyncScenario
    {
        // A pointer back to the main page.  This is needed if you want to call methods in MainPage such
        // as NotifyUser()
        MainPage rootPage = MainPage.Current;

        public AsyncScenario()
        {
            this.InitializeComponent();
        }

        /// <summary>
        /// Invoked when this page is about to be displayed in a Frame.
        /// </summary>
        /// <param name="e">Event data that describes how this page was reached.  The Parameter
        /// property is typically used to configure the page.</param>
        protected override void OnNavigatedTo(NavigationEventArgs e)
        {
        }

        /// <summary>
        /// This is the click handler for the 'Async' button.  
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private async void AsyncButton_Click(object sender, RoutedEventArgs e)
        {
            Button b = sender as Button;
            if (b != null)
            {
                AsyncProgressText.Text = "Waiting for async operation...";
                int result = await App.Server.FindElementAsync(1000);
                AsyncResultBox.Text = result.ToString();
                AsyncProgressText.Text = "";
            }
        }
    }
}
