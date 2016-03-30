//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace com { namespace microsoft { namespace OICBridge { namespace oic { namespace r { namespace channel {

// Methods
// Readable Properties
public ref class channelGetChannelUpDownRequestedEventArgs sealed
{
public:
    channelGetChannelUpDownRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property channelGetChannelUpDownResult^ Result
    {
        channelGetChannelUpDownResult^ get() { return m_result; }
        void set(_In_ channelGetChannelUpDownResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<channelGetChannelUpDownResult^>^ GetResultAsync(channelGetChannelUpDownRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<channelGetChannelUpDownResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<channelGetChannelUpDownResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    channelGetChannelUpDownResult^ m_result;
};

// Writable Properties
public ref class channelSetChannelUpDownRequestedEventArgs sealed
{
public:
    channelSetChannelUpDownRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ value);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property Platform::String^ Value
    {
        Platform::String^ get() { return m_value; }
    }

    property channelSetChannelUpDownResult^ Result
    {
        channelSetChannelUpDownResult^ get() { return m_result; }
        void set(_In_ channelSetChannelUpDownResult^ value) { m_result = value; }
    }

    static Windows::Foundation::IAsyncOperation<channelSetChannelUpDownResult^>^ GetResultAsync(channelSetChannelUpDownRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<channelSetChannelUpDownResult^>
        {
            return t;
        });
    }

    Windows::Foundation::Deferral^ GetDeferral();

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<channelSetChannelUpDownResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    Platform::String^ m_value;
    channelSetChannelUpDownResult^ m_result;
};

} } } } } } 
