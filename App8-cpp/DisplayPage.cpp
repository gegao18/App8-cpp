#include "pch.h"
#include "DisplayPage.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#if __has_include("DisplayPage.g.cpp")
#include "DisplayPage.g.cpp"
#endif

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Storage;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;
using namespace Microsoft::UI::Xaml::Documents;
using namespace Microsoft::UI::Xaml::Media;

namespace winrt::App8_cpp::implementation
{
    void DisplayPage::codeSnippetLoaded(IInspectable const&, RoutedEventArgs const&)
    {
        textBlock = TextBlock();
        textBlock.FontFamily(Microsoft::UI::Xaml::Media::FontFamily(L"Consolas"));
        textBlock.Text(L"Sample code");
        codeSnippet().Content(textBlock);
    }

    void DisplayPage::rootGrid_Unloaded(IInspectable const&, RoutedEventArgs const&)
    {
        textBlock = nullptr;
        codeSnippet().Content(nullptr);
    }

    void DisplayPage::backButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        DependencyObject parent = Parent();
        Microsoft::UI::Xaml::Controls::Frame frame = parent.try_as<Microsoft::UI::Xaml::Controls::Frame>();
        if (frame)
        {
            frame.Navigate(xaml_typename<DemoListPage>());
        }
    }
}
