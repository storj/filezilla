#ifndef FILEZILLA_INTERFACE_TEXTCTRLEX_HEADER
#define FILEZILLA_INTERFACE_TEXTCTRLEX_HEADER

#include <wx/textctrl.h>

#ifdef __WXMAC__
// Subclassed wxTextCtrl to disable pasting of formatting, we're only ever interested in the text.
class wxTextCtrlEx : public wxTextCtrl
{
public:
	virtual void Paste();
};

const wxTextAttr& GetDefaultTextCtrlStyle(wxTextCtrl* ctrl);

#else

#define wxTextCtrlEx wxTextCtrl

#endif

#endif
