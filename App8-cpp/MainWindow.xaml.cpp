#include "pch.h"
#include "MainWindow.xaml.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App8_cpp::implementation
{
    void MainWindow::NavigationView_SelectionChanged(NavigationView const&, NavigationViewSelectionChangedEventArgs const& args)
    {
        if (args.SelectedItem() == demoList())
        {
            contentFrame5().Navigate(winrt::xaml_typename<DemoListPage>());
        }
        else if (args.SelectedItem() == emptyPage())
        {
            contentFrame5().Navigate(winrt::xaml_typename<EmptyPage>());
        }
    }
}
