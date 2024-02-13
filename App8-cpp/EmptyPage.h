#pragma once

#include "EmptyPage.g.h"

namespace winrt::App8_cpp::implementation
{
    struct EmptyPage : EmptyPageT<EmptyPage>
    {
        EmptyPage() 
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }
    };
}

namespace winrt::App8_cpp::factory_implementation
{
    struct EmptyPage : EmptyPageT<EmptyPage, implementation::EmptyPage>
    {
    };
}
