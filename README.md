# Broker_x64

This repository is for this [Stackoverflow post](https://stackoverflow.com/questions/44962542) which demoes how to build a brokered runtime component (.winmd) for a 64-bit side-loaded Windows Store app running on Windows 8.1.

Microsoft's documentation is not clear about how to build the winmd file, and how to register the proxy if the app itself is 64-bit. There are a bunch of compilation switches that are too complicated for an app developer.

You can download the [original sample](https://code.msdn.microsoft.com/windowsapps/Brokered-Windows-Runtime-9d64cada) from Microsoft, or you can use the zip files in this repository. 

This sample is only for Visual Studio 2013/Windows Store app 8.1 only. There are other samples for Visual Studio 2015/17 and UWP app.
