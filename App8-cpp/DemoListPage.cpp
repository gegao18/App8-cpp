#include "pch.h"
#include "DemoListPage.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#if __has_include("DemoListPage.g.cpp")
#include "DemoListPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;

namespace winrt::App8_cpp::implementation
{
	void DemoListPage::GridView_ItemClick(IInspectable const&, ItemClickEventArgs const& e)
	{
		DependencyObject parent = Parent();
		Microsoft::UI::Xaml::Controls::Frame frame = parent.try_as<Microsoft::UI::Xaml::Controls::Frame>();
		if (frame)
		{
			frame.Navigate(xaml_typename<DisplayPage>());
		}
	}
}
