
struct ImGui_ImplDX12_InitInfo
{
    ID3D12Device*               Device;
    ID3D12CommandQueue*         CommandQueue;       
    int                         NumFramesInFlight;
    DXGI_FORMAT                 RTVFormat;          
    DXGI_FORMAT                 DSVFormat;          
    void*                       UserData;
    ID3D12DescriptorHeap*       SrvDescriptorHeap;
    void                        (*SrvDescriptorAllocFn)(ImGui_ImplDX12_InitInfo* info, D3D12_CPU_DESCRIPTOR_HANDLE* out_cpu_desc_handle, D3D12_GPU_DESCRIPTOR_HANDLE* out_gpu_desc_handle);
    void                        (*SrvDescriptorFreeFn)(ImGui_ImplDX12_InitInfo* info, D3D12_CPU_DESCRIPTOR_HANDLE cpu_desc_handle, D3D12_GPU_DESCRIPTOR_HANDLE gpu_desc_handle);
    ImGui_ImplDX12_InitInfo()   { memset((void*)this, 0, sizeof(*this)); }
};
 bool     ImGui_ImplDX12_Init(ImGui_ImplDX12_InitInfo* info);
 void     ImGui_ImplDX12_Shutdown();
 void     ImGui_ImplDX12_NewFrame();
 void     ImGui_ImplDX12_RenderDrawData(ImDrawData* draw_data, ID3D12GraphicsCommandList* graphics_command_list);
 bool     ImGui_ImplDX12_CreateDeviceObjects();
 void     ImGui_ImplDX12_InvalidateDeviceObjects();
 void     ImGui_ImplDX12_UpdateTexture(ImTextureData* tex);
struct ImGui_ImplDX12_RenderState
{
    ID3D12Device*               Device;
    ID3D12GraphicsCommandList*  CommandList;
};