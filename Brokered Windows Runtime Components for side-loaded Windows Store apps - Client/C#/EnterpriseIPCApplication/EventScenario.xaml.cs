//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
//
//*********************************************************

using System;
using Windows.UI.Core;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Navigation;
using SDKTemplate;

using Fabrikam;

namespace EnterpriseIPCApplication
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class EventScenario
    {
        // A pointer back to the main page.  This is needed if you want to call methods in MainPage such
        // as NotifyUser()
        MainPage rootPage = MainPage.Current;

        public EventScenario()
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
        /// This is the click handler for the 'EventSubscribe' button.  
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void EventButton_Click(object sender, RoutedEventArgs e)
        {
            Button b = sender as Button;
            if (b != null)
            {
                SubscribedTextBlock.Text = "Subscribed";
                // subscribe to the periodic event and use the Dispatcher to update
                // the Events Results List.  Note that it is important to await the
                // call to RunAsync so that exceptions propagate properly. 
                App.Server.PeriodicEvent += async (s, periodicEventString) =>
                {
                    await this.Dispatcher.RunAsync(CoreDispatcherPriority.Normal, () =>
                    {
                        this.EventsList.Items.Add(periodicEventString);
                    });
                };
            }
        }
    }
}
