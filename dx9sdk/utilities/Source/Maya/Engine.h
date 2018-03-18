#ifndef ENGINE_H
#define ENGINE_H

#include "windows.h"
#include "d3d9.h"

class CManager;

//we create a CEngine in it's own thread but you don't have to
//this prevents abnormal crashing caused by living in the same thread as OpenGL
class CEngine
{
public:
	virtual HRESULT Create(CManager* pPreviewPipeline) = 0;
    virtual HRESULT Destroy() = 0;

	virtual HRESULT GetD3DObject( IDirect3D9** ppObject ) = 0;
	virtual HRESULT GetD3DDevice( IDirect3DDevice9** ppDevice ) = 0;
};

#endif