#pragma once

#include "DemoListPage.g.h"

namespace winrt::App8_cpp::implementation
{
    struct DemoListPage : DemoListPageT<DemoListPage>
    {
        DemoListPage()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        void GridView_ItemClick(Windows::Foundation::IInspectable const&, Microsoft::UI::Xaml::Controls::ItemClickEventArgs const& e);
    };
}

namespace winrt::App8_cpp::factory_implementation
{
    struct DemoListPage : DemoListPageT<DemoListPage, implementation::DemoListPage>
    {
    };
}
