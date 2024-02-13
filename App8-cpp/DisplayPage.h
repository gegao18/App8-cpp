#pragma once

#include "DisplayPage.g.h"

namespace winrt::App8_cpp::implementation
{
    struct DisplayPage : DisplayPageT<DisplayPage>
    {
        DisplayPage() 
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        void codeSnippetLoaded(Windows::Foundation::IInspectable const&, Microsoft::UI::Xaml::RoutedEventArgs const&);
        void rootGrid_Unloaded(Windows::Foundation::IInspectable const&, Microsoft::UI::Xaml::RoutedEventArgs const&);
        void backButton_Click(Windows::Foundation::IInspectable const&, Microsoft::UI::Xaml::RoutedEventArgs const&);

        Microsoft::UI::Xaml::Controls::TextBlock textBlock;
        byte mb[1024 * 1024];
    };
}

namespace winrt::App8_cpp::factory_implementation
{
    struct DisplayPage : DisplayPageT<DisplayPage, implementation::DisplayPage>
    {
    };
}
