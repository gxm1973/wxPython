/////////////////////////////////////////////////////////////////////////////
// Name:        dcmemory.h
// Purpose:     wxMemoryDC class
// Author:      Stefan Csomor
// Modified by:
// Created:     1998-01-01
// RCS-ID:      $Id$
// Copyright:   (c) Stefan Csomor
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_DCMEMORY_H_
#define _WX_DCMEMORY_H_

#include "wx/mac/carbon/dcclient.h"

class WXDLLEXPORT wxMemoryDCImpl: public wxPaintDCImpl
{
public:
    wxMemoryDCImpl( wxMemoryDC *owner );
    wxMemoryDCImpl( wxMemoryDC *owner, wxBitmap& bitmap );
    wxMemoryDCImpl( wxMemoryDC *owner, wxDC *dc ); 
    
    virtual ~wxMemoryDCImpl();

protected:
    virtual void DoGetSize( int *width, int *height ) const;
    virtual wxBitmap DoGetAsBitmap(const wxRect *subrect) const 
       { return subrect == NULL ? GetSelectedBitmap() : GetSelectedBitmap().GetSubBitmap(*subrect); }
    virtual void DoSelect(const wxBitmap& bitmap);

private:
    void Init();

    wxBitmap  m_selected;
    
private:
    DECLARE_CLASS(wxMemoryDCImpl)
    DECLARE_NO_COPY_CLASS(wxMemoryDCImpl)
};

#endif
    // _WX_DCMEMORY_H_
