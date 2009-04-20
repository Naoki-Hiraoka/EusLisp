/* Xlib function entries */

#include "../c/eus.h"
#include <dlfcn.h>
#pragma init (init_object_module)

/*  EusLisp X window entries */
/*  This file is needed to be linked with Xfdreign in order to
/*  extract Xlib functions from the archive.
/*  XVERSION should be set properly when compiled.
/*  1988-Dec (c) T.MATSUI
*/

extern XDeleteContext;
extern XFindContext;
extern XSaveContext;
extern XrmParseCommand;
extern Xpermalloc;
extern XrmQuarkToString;
extern XrmStringToQuark;
extern XrmUniqueQuark;
extern XAllocColorCells;
extern XAllocColorPlanes;
extern XAllowEvents;
extern XAutoRepeatOff;
extern XAutoRepeatOn;
extern XSetWindowBackground;
extern XSetWindowBorderWidth;
extern XBell;
extern XSetWindowBorder;
extern XDisableAccessControl;
extern XEnableAccessControl;
extern XSetAccessControl;
extern XSetCloseDownMode;
extern XChangeActivePointerGrab;
extern XSetWindowColormap;
extern XChangeGC;
extern XChangeKeyboardControl;
extern XChangePointerControl;
extern XChangeProperty;
extern XAddToSaveSet;
extern XChangeSaveSet;
extern XRemoveFromSaveSet;
extern XChangeWindowAttributes;
extern XResizeWindow;
extern XCheckIfEvent;
extern XCheckMaskEvent;
extern XCheckWindowEvent;
extern XCheckTypedEvent;
extern XCheckTypedWindowEvent;
extern XCirculateSubwindows;
extern XCirculateSubwindowsDown;
extern XCirculateSubwindowsUp;
extern XCloseDisplay;
extern XClearWindow;
extern XClearArea;
extern XMoveResizeWindow;
extern XConvertSelection;
extern XCopyArea;
extern XCopyColormapAndFree;
extern XCopyGC;
extern XCopyPlane;
extern XCreateBitmapFromData;
extern XCreateColormap;
extern XCreatePixmapCursor;
extern XCreateGC;
extern XGContextFromGC;
extern XCreateGlyphCursor;
extern XCreatePixmapFromBitmapData;
extern XCreatePixmap;
extern XCreateSimpleWindow;
extern XCreateFontCursor;
extern XDefineCursor;
extern XDeleteProperty;
extern XDestroySubwindows;
extern XDestroyWindow;
extern XDisplayName;
extern XDrawArc;
extern XDrawArcs;
extern XDrawLine;
extern XDrawLines;
extern XDrawPoint;
extern XDrawPoints;
extern XDrawRectangle;
extern XDrawRectangles;
extern XDrawSegments;
extern XGetErrorDatabaseText;
extern XGetErrorText;
extern XSetErrorHandler;
extern XSetIOErrorHandler;
extern XFetchName;
extern XGetIconName;
extern XFillArc;
extern XFillArcs;
extern XFillPolygon;
extern XFillRectangle;
extern XFillRectangles;
extern XFlush;
extern XFreeFont;
extern XLoadQueryFont;
extern XQueryFont;
extern XFreeFontNames;
extern XListFonts;
extern XFreeFontInfo;
extern XListFontsWithInfo;
extern XFreeColormap;
extern XFreeColors;
extern XFreeCursor;
extern XFreeGC;
extern XFreePixmap;
extern XActivateScreenSaver;
extern XForceScreenSaver;
extern XResetScreenSaver;
extern XSetArcMode;
extern XSetFillRule;
extern XSetFillStyle;
extern XSetGraphicsExposures;
extern XSetSubwindowMode;
extern XGeometry;
extern XGetAtomName;
extern XAllocNamedColor;
extern XGetDefault;
extern XFreeFontPath;
extern XGetFontPath;
extern XGetFontProperty;
extern XGetGeometry;
extern XGetGCValues;
extern XAllocColor;
extern XGetClassHint;
extern XGetIconSizes;
extern XGetNormalHints;
extern XGetSizeHints;
extern XGetTransientForHint;
extern XGetWMHints;
extern XGetZoomHints;
extern XGetInputFocus;
extern XGetImage;
extern XGetSubImage;
extern XGetKeyboardControl;
extern XGetMotionEvents;
extern XGetPointerControl;
extern XGetKeyboardMapping;
extern XGetPointerMapping;
extern XGetWindowProperty;
extern XGetSelectionOwner;
extern XGetScreenSaver;
extern XGetStandardColormap;
extern XGetWindowAttributes;
extern XGrabButton;
extern XGrabKey;
extern XGrabKeyboard;
extern XGrabPointer;
extern XGrabServer;
extern XAddHost;
extern XAddHosts;
extern XRemoveHost;
extern XRemoveHosts;
extern XIfEvent;
extern XCreateImage;
extern XDrawImageString;
extern XDrawImageString16;
extern XESetCloseDisplay;
extern XESetCopyGC;
extern XESetCreateFont;
extern XESetCreateGC;
extern XESetError;
extern XESetErrorString;
extern XESetEventToWire;
extern XESetFlushGC;
extern XESetFreeFont;
extern XESetFreeGC;
extern XESetWireToEvent;
extern XInitExtension;
extern XInstallColormap;
extern XInternAtom;

#ifdef X_V11R2
extern MatchEvent;
#endif 

extern XKeycodeToKeysym;
extern XKeysymToKeycode;
extern XLookupKeysym;
extern XLookupString;
extern XRebindKeysym;
extern XRefreshKeyboardMapping;
/* extern XUseKeymap; */
extern XKillClient;
extern XListHosts;
extern XListInstalledColormaps;
extern XListProperties;
extern XFreeExtensionList;
extern XListExtensions;
extern XLoadFont;
extern XLookupColor;
extern XLowerWindow;
extern XAddPixel;
extern XAllPlanes;
extern XBitmapBitOrder;
extern XBitmapPad;
extern XBitmapUnit;
extern XBlackPixel;
extern XBlackPixelOfScreen;
extern XCellsOfScreen;
extern XConnectionNumber;
extern XDefaultColormap;
extern XDefaultColormapOfScreen;
extern XDefaultDepth;
extern XDefaultDepthOfScreen;
extern XDefaultGC;
extern XDefaultGCOfScreen;
extern XDefaultRootWindow;
extern XDefaultScreen;
extern XDefaultScreenOfDisplay;
extern XDefaultVisual;
extern XDefaultVisualOfScreen;
extern XDestroyImage;
extern XDisplayCells;
extern XDisplayHeight;
extern XDisplayHeightMM;
extern XDisplayOfScreen;
extern XDisplayPlanes;
extern XDisplayString;
extern XDisplayWidth;
extern XDisplayWidthMM;
extern XDoesBackingStore;
extern XDoesSaveUnders;
extern XEventMaskOfScreen;
extern XGetPixel;
extern XHeightMMOfScreen;
extern XHeightOfScreen;
extern XImageByteOrder;
extern XLastKnownRequestProcessed;
extern XMaxCmapsOfScreen;
extern XMinCmapsOfScreen;
extern XNextRequest;
extern XNoOp;
extern XPlanesOfScreen;
extern XProtocolRevision;
extern XProtocolVersion;
extern XPutPixel;
extern XQLength;
extern XRootWindow;
extern XRootWindowOfScreen;
extern XScreenCount;
extern XScreenOfDisplay;
extern XServerVendor;
extern XSubImage;
extern XVendorRelease;
extern XWhitePixel;
extern XWhitePixelOfScreen;
extern XWidthMMOfScreen;
extern XWidthOfScreen;
extern XMapRaised;
extern XMapSubwindows;
extern XMapWindow;
extern XMaskEvent;
extern XDeleteModifiermapEntry;
extern XFreeModifiermap;
extern XGetModifierMapping;
extern XInsertModifiermapEntry;
extern XNewModifiermap;
extern XSetModifierMapping;
extern XMoveWindow;
extern XNextEvent;
extern XOpenDisplay;
extern XParseColor;
/* extern ReadInteger; */
extern XParseGeometry;
extern XPeekEvent;
extern XPeekIfEvent;
extern XEventsQueued;
extern XPending;
extern XSetWindowBackgroundPixmap;
extern XSetWindowBorderPixmap;
extern XPolygonRegion;
extern XDrawText;
extern XDrawText16;
extern XPutBackEvent;
extern XPutImage;
extern XQueryBestSize;
extern XQueryColor;
extern XQueryColors;
extern XQueryBestCursor;
extern XQueryExtension;
extern XQueryKeymap;
extern XQueryPointer;
extern XQueryBestStipple;
extern XQueryTextExtents16;
extern XQueryTextExtents;
extern XQueryBestTile;
extern XQueryTree;
extern XRaiseWindow;
extern XReadBitmapFile;
extern XRecolorCursor;
extern XConfigureWindow;
extern XClipBox;
extern XCreateRegion;
extern XDestroyRegion;
extern XEmptyRegion;
extern XEqualRegion;
extern XIntersectRegion;
extern XOffsetRegion;
extern XPointInRegion;
extern XRectInRegion;
extern XSetRegion;
extern XShrinkRegion;
extern XSubtractRegion;
extern XUnionRectWithRegion;
extern XUnionRegion;
extern XXorRegion;
/* extern combineRegs; */
extern XReparentWindow;
extern XRestackWindows;
extern XRotateWindowProperties;
extern XSelectInput;
extern XSendEvent;
extern XSetBackground;
extern XSetClipRectangles;
extern XSetClipMask;
extern XSetClipOrigin;
extern XSetDashes;
extern XSetFontPath;
extern XSetFont;
extern XSetForeground;
extern XSetFunction;
extern XSetClassHint;
extern XSetCommand;
extern XSetIconSizes;
extern XSetNormalHints;
extern XSetSizeHints;
extern XSetStandardProperties;
extern XSetTransientForHint;
extern XSetWMHints;
extern XSetZoomHints;
extern XSetInputFocus;
extern XSetLineAttributes;
extern XSetPlaneMask;
extern XChangeKeyboardMapping;
extern XSetPointerMapping;
extern XSetSelectionOwner;
extern XSetScreenSaver;
extern XSetState;
extern XSetStipple;
extern XSetStandardColormap;
extern XSetTile;
extern XSetTSOrigin;
extern XFetchBuffer;
extern XFetchBytes;
extern XRotateBuffers;
extern XStoreBuffer;
extern XStoreBytes;
extern XStoreColor;
extern XStoreColors;
extern XStoreNamedColor;
extern XSetIconName;
extern XStoreName;
extern XKeysymToString;
extern XStringToKeysym;
extern XSync;
extern XSetAfterFunction;
extern XSynchronize;
extern XDrawString;
extern XDrawString16;
extern XTextExtents;
extern XTextWidth;
extern XTextExtents16;
extern XTextWidth16;
extern XTranslateCoordinates;
extern XUndefineCursor;
extern XUngrabButton;
extern XUngrabKeyboard;
extern XUngrabKey;
extern XUngrabPointer;
extern XUngrabServer;
extern XUninstallColormap;
extern XUnloadFont;
extern XUnmapSubwindows;
extern XUnmapWindow;
extern XGetVisualInfo;
extern XMatchVisualInfo;
extern XWarpPointer;
extern XWindowEvent;
extern XCreateWindow;
extern XWriteBitmapFile;
extern XFree;
extern XrmGetFileDatabase;
extern XrmGetResource;
extern XrmGetStringDatabase;
extern XrmInitialize;
extern XrmMergeDatabases;
extern XrmPutFileDatabase;
extern XrmPutLineResource;
extern XrmPutResource;
extern XrmPutStringResource;
extern XrmQGetResource;
extern XrmQGetSearchList;
extern XrmQGetSearchResource;
extern XrmQPutResource;
extern XrmQPutStringResource;
extern XrmStringToBindingQuarkList;
extern XrmStringToQuarkList;
#if X_V11R6_1
extern XInitThreads;
extern XLockDisplay;
extern XUnlockDisplay;
#endif


extern pointer sysmod;

pointer defxforeign(ctx,xentry)
register context *ctx;
char *xentry;
{ pointer fc, xsym;
  integer_t entry; int i, len;
  char lname[100];
  len=strlen(xentry);
  for (i=0; i<len-1; i++) lname[i]=toupper(xentry[i+1]);
  lname[i]=0;
#if Cygwin /* dlopen libX11.dll */
   integer_t dlhandle;
   dlhandle=(integer_t)dlopen("/usr/bin/cygX11-6.dll", RTLD_LAZY);
   if( dlhandle==0 )
     dlhandle=(integer_t)dlopen("libX11.dll", RTLD_LAZY);
   entry=(integer_t)dlsym(dlhandle, xentry);
#else
  entry=(integer_t)dlsym((void *)((integer_t)(sysmod->c.ldmod.handle) & ~3), xentry);
#endif
  if (entry){
    xsym=intern(ctx,lname, len-1, xpkg);
    fc=makeobject(C_FCODE);
    xsym->c.sym.spefunc=fc;
    fc->c.fcode.codevec=makeint(0);
    fc->c.fcode.quotevec=makeint(0);
    fc->c.fcode.subrtype=SUBR_FUNCTION;
    fc->c.fcode.paramtypes=NIL;
    fc->c.fcode.resulttype=K_INTEGER;
    fc->c.fcode.entry=makeint(entry>>2);
    fc->c.fcode.entry2=makeint(entry);   /* kanehiro's patch 2000.12.13 */
/*  
    printf("x: %s at %x, %x\n", xsym->c.sym.pname->c.str.chars, 
                                entry, fc->c.fcode.entry); 
*/
    export(xsym,xpkg); 
  }
  return(xsym);}
  
pointer xforeign(ctx,n,argv)
register context *ctx;
int n;
pointer argv[];
{
  defxforeign(ctx,"XDeleteContext");
  defxforeign(ctx,"XFindContext");
  defxforeign(ctx,"XSaveContext");
  defxforeign(ctx,"XrmParseCommand");
  defxforeign(ctx,"Xpermalloc");
  defxforeign(ctx,"XrmQuarkToString");
  defxforeign(ctx,"XrmStringToQuark");
  defxforeign(ctx,"XrmUniqueQuark");
  defxforeign(ctx,"XAllocColorCells");
  defxforeign(ctx,"XAllocColorPlanes");
  defxforeign(ctx,"XAllowEvents");
  defxforeign(ctx,"XAutoRepeatOff");
  defxforeign(ctx,"XAutoRepeatOn");
  defxforeign(ctx,"XSetWindowBackground");
  defxforeign(ctx,"XSetWindowBorderWidth");
  defxforeign(ctx,"XBell");
  defxforeign(ctx,"XSetWindowBorder");
  defxforeign(ctx,"XDisableAccessControl");
  defxforeign(ctx,"XEnableAccessControl");
  defxforeign(ctx,"XSetAccessControl");
  defxforeign(ctx,"XSetCloseDownMode");
  defxforeign(ctx,"XChangeActivePointerGrab");
  defxforeign(ctx,"XSetWindowColormap");
  defxforeign(ctx,"XChangeGC");
  defxforeign(ctx,"XGetGCValues");
  defxforeign(ctx,"XChangeKeyboardControl");
  defxforeign(ctx,"XChangePointerControl");
  defxforeign(ctx,"XChangeProperty");
  defxforeign(ctx,"XAddToSaveSet");
  defxforeign(ctx,"XChangeSaveSet");
  defxforeign(ctx,"XRemoveFromSaveSet");
  defxforeign(ctx,"XChangeWindowAttributes");
  defxforeign(ctx,"XResizeWindow");
  defxforeign(ctx,"XCheckIfEvent");
  defxforeign(ctx,"XCheckMaskEvent");
  defxforeign(ctx,"XCheckWindowEvent");
  defxforeign(ctx,"XCheckTypedEvent");
  defxforeign(ctx,"XCheckTypedWindowEvent");
  defxforeign(ctx,"XCirculateSubwindows");
  defxforeign(ctx,"XCirculateSubwindowsDown");
  defxforeign(ctx,"XCirculateSubwindowsUp");
  defxforeign(ctx,"XCloseDisplay");
  defxforeign(ctx,"XClearWindow");
  defxforeign(ctx,"XClearArea");
  defxforeign(ctx,"XMoveResizeWindow");
  defxforeign(ctx,"XConvertSelection");
  defxforeign(ctx,"XCopyArea");
  defxforeign(ctx,"XCopyColormapAndFree");
  defxforeign(ctx,"XCopyGC");
  defxforeign(ctx,"XCopyPlane");
  defxforeign(ctx,"XCreateBitmapFromData");
  defxforeign(ctx,"XCreateColormap");
  defxforeign(ctx,"XCreatePixmapCursor");
  defxforeign(ctx,"XCreateGC");
  defxforeign(ctx,"XGContextFromGC");
  defxforeign(ctx,"XCreateGlyphCursor");
  defxforeign(ctx,"XCreatePixmapFromBitmapData");
  defxforeign(ctx,"XCreatePixmap");
  defxforeign(ctx,"XCreateSimpleWindow");
  defxforeign(ctx,"XCreateFontCursor");
  defxforeign(ctx,"XDefineCursor");
  defxforeign(ctx,"XDeleteProperty");
  defxforeign(ctx,"XDestroySubwindows");
  defxforeign(ctx,"XDestroyWindow");
  defxforeign(ctx,"XDisplayName");
  defxforeign(ctx,"XDrawArc");
  defxforeign(ctx,"XDrawArcs");
  defxforeign(ctx,"XDrawLine");
  defxforeign(ctx,"XDrawLines");
  defxforeign(ctx,"XDrawPoint");
  defxforeign(ctx,"XDrawPoints");
  defxforeign(ctx,"XDrawRectangle");
  defxforeign(ctx,"XDrawRectangles");
  defxforeign(ctx,"XDrawSegments");
  defxforeign(ctx,"XGetErrorDatabaseText");
  defxforeign(ctx,"XGetErrorText");
  defxforeign(ctx,"XSetErrorHandler");
  defxforeign(ctx,"XSetIOErrorHandler");
  defxforeign(ctx,"XFetchName");
  defxforeign(ctx,"XGetIconName");
  defxforeign(ctx,"XFillArc");
  defxforeign(ctx,"XFillArcs");
  defxforeign(ctx,"XFillPolygon");
  defxforeign(ctx,"XFillRectangle");
  defxforeign(ctx,"XFillRectangles");
  defxforeign(ctx,"XFlush");
  defxforeign(ctx,"XFreeFont");
  defxforeign(ctx,"XLoadQueryFont");
  defxforeign(ctx,"XQueryFont");
  defxforeign(ctx,"XFreeFontNames");
  defxforeign(ctx,"XListFonts");
  defxforeign(ctx,"XFreeFontInfo");
  defxforeign(ctx,"XListFontsWithInfo");
  defxforeign(ctx,"XFreeColormap");
  defxforeign(ctx,"XFreeColors");
  defxforeign(ctx,"XFreeCursor");
  defxforeign(ctx,"XFreeGC");
  defxforeign(ctx,"XFreePixmap");
  defxforeign(ctx,"XActivateScreenSaver");
  defxforeign(ctx,"XForceScreenSaver");
  defxforeign(ctx,"XResetScreenSaver");
  defxforeign(ctx,"XSetArcMode");
  defxforeign(ctx,"XSetFillRule");
  defxforeign(ctx,"XSetFillStyle");
  defxforeign(ctx,"XSetGraphicsExposures");
  defxforeign(ctx,"XSetSubwindowMode");
  defxforeign(ctx,"XGeometry");
  defxforeign(ctx,"XGetAtomName");
  defxforeign(ctx,"XAllocNamedColor");
  defxforeign(ctx,"XGetDefault");
  defxforeign(ctx,"XFreeFontPath");
  defxforeign(ctx,"XGetFontPath");
  defxforeign(ctx,"XGetFontProperty");
  defxforeign(ctx,"XGetGeometry");
  defxforeign(ctx,"XAllocColor");
  defxforeign(ctx,"XGetClassHint");
  defxforeign(ctx,"XGetIconSizes");
  defxforeign(ctx,"XGetNormalHints");
  defxforeign(ctx,"XGetSizeHints");
  defxforeign(ctx,"XGetTransientForHint");
  defxforeign(ctx,"XGetWMHints");
  defxforeign(ctx,"XGetZoomHints");
  defxforeign(ctx,"XGetInputFocus");
  defxforeign(ctx,"XGetImage");
  defxforeign(ctx,"XGetSubImage");
  defxforeign(ctx,"XGetKeyboardControl");
  defxforeign(ctx,"XGetMotionEvents");
  defxforeign(ctx,"XGetPointerControl");
  defxforeign(ctx,"XGetKeyboardMapping");
  defxforeign(ctx,"XGetPointerMapping");
  defxforeign(ctx,"XGetWindowProperty");
  defxforeign(ctx,"XGetSelectionOwner");
  defxforeign(ctx,"XGetScreenSaver");
  defxforeign(ctx,"XGetStandardColormap");
  defxforeign(ctx,"XGetWindowAttributes");
  defxforeign(ctx,"XGrabButton");
  defxforeign(ctx,"XGrabKey");
  defxforeign(ctx,"XGrabKeyboard");
  defxforeign(ctx,"XGrabPointer");
  defxforeign(ctx,"XGrabServer");
  defxforeign(ctx,"XAddHost");
  defxforeign(ctx,"XAddHosts");
  defxforeign(ctx,"XRemoveHost");
  defxforeign(ctx,"XRemoveHosts");
  defxforeign(ctx,"XIfEvent");
  defxforeign(ctx,"XCreateImage");
  defxforeign(ctx,"XDrawImageString");
  defxforeign(ctx,"XDrawImageString16");
  defxforeign(ctx,"XESetCloseDisplay");
  defxforeign(ctx,"XESetCopyGC");
  defxforeign(ctx,"XESetCreateFont");
  defxforeign(ctx,"XESetCreateGC");
  defxforeign(ctx,"XESetError");
  defxforeign(ctx,"XESetErrorString");
  defxforeign(ctx,"XESetEventToWire");
  defxforeign(ctx,"XESetFlushGC");
  defxforeign(ctx,"XESetFreeFont");
  defxforeign(ctx,"XESetFreeGC");
  defxforeign(ctx,"XESetWireToEvent");
  defxforeign(ctx,"XInitExtension");
  defxforeign(ctx,"XInstallColormap");
  defxforeign(ctx,"XInternAtom");

  defxforeign(ctx,"XKeycodeToKeysym");
  defxforeign(ctx,"XKeysymToKeycode");
  defxforeign(ctx,"XLookupKeysym");
  defxforeign(ctx,"XLookupString");
  defxforeign(ctx,"XRebindKeysym");
  defxforeign(ctx,"XRefreshKeyboardMapping");
/* usekeymap cannot be found in X11R4 */
/*   (defxforeign USEKEYMAP Xlib "XKillClient"); */
  defxforeign(ctx,"XListHosts");
  defxforeign(ctx,"XListInstalledColormaps");
  defxforeign(ctx,"XListProperties");
  defxforeign(ctx,"XFreeExtensionList");
  defxforeign(ctx,"XListExtensions");
  defxforeign(ctx,"XLoadFont");
  defxforeign(ctx,"XLookupColor");
  defxforeign(ctx,"XLowerWindow");
  defxforeign(ctx,"XAddPixel");
  defxforeign(ctx,"XAllPlanes");
  defxforeign(ctx,"XBitmapBitOrder");
  defxforeign(ctx,"XBitmapPad");
  defxforeign(ctx,"XBitmapUnit");
  defxforeign(ctx,"XBlackPixel");
  defxforeign(ctx,"XBlackPixelOfScreen");
  defxforeign(ctx,"XCellsOfScreen");
  defxforeign(ctx,"XConnectionNumber");
  defxforeign(ctx,"XDefaultColormap");
  defxforeign(ctx,"XDefaultColormapOfScreen");
  defxforeign(ctx,"XDefaultDepth");
  defxforeign(ctx,"XDefaultDepthOfScreen");
  defxforeign(ctx,"XDefaultGC");
  defxforeign(ctx,"XDefaultGCOfScreen");
  defxforeign(ctx,"XDefaultRootWindow");
  defxforeign(ctx,"XDefaultScreen");
  defxforeign(ctx,"XDefaultScreenOfDisplay");
  defxforeign(ctx,"XDefaultVisual");
  defxforeign(ctx,"XDefaultVisualOfScreen");
  defxforeign(ctx,"XDestroyImage");
  defxforeign(ctx,"XDisplayCells");
  defxforeign(ctx,"XDisplayHeight");
  defxforeign(ctx,"XDisplayHeightMM");
  defxforeign(ctx,"XDisplayOfScreen");
  defxforeign(ctx,"XDisplayPlanes");
  defxforeign(ctx,"XDisplayString");
  defxforeign(ctx,"XDisplayWidth");
  defxforeign(ctx,"XDisplayWidthMM");
  defxforeign(ctx,"XDoesBackingStore");
  defxforeign(ctx,"XDoesSaveUnders");
  defxforeign(ctx,"XEventMaskOfScreen");
  defxforeign(ctx,"XGetPixel");
  defxforeign(ctx,"XHeightMMOfScreen");
  defxforeign(ctx,"XHeightOfScreen");
  defxforeign(ctx,"XImageByteOrder");
  defxforeign(ctx,"XLastKnownRequestProcessed");
  defxforeign(ctx,"XMaxCmapsOfScreen");
  defxforeign(ctx,"XMinCmapsOfScreen");
  defxforeign(ctx,"XNextRequest");
  defxforeign(ctx,"XNoOp");
  defxforeign(ctx,"XPlanesOfScreen");
  defxforeign(ctx,"XProtocolRevision");
  defxforeign(ctx,"XProtocolVersion");
  defxforeign(ctx,"XPutPixel");
  defxforeign(ctx,"XQLength");
  defxforeign(ctx,"XRootWindow");
  defxforeign(ctx,"XRootWindowOfScreen");
  defxforeign(ctx,"XScreenCount");
  defxforeign(ctx,"XScreenOfDisplay");
  defxforeign(ctx,"XServerVendor");
  defxforeign(ctx,"XSubImage");
  defxforeign(ctx,"XVendorRelease");
  defxforeign(ctx,"XWhitePixel");
  defxforeign(ctx,"XWhitePixelOfScreen");
  defxforeign(ctx,"XWidthMMOfScreen");
  defxforeign(ctx,"XWidthOfScreen");
  defxforeign(ctx,"XMapRaised");
  defxforeign(ctx,"XMapSubwindows");
  defxforeign(ctx,"XMapWindow");
  defxforeign(ctx,"XMaskEvent");
  defxforeign(ctx,"XDeleteModifiermapEntry");
  defxforeign(ctx,"XFreeModifiermap");
  defxforeign(ctx,"XGetModifierMapping");
  defxforeign(ctx,"XInsertModifiermapEntry");
  defxforeign(ctx,"XNewModifiermap");
  defxforeign(ctx,"XSetModifierMapping");
  defxforeign(ctx,"XMoveWindow");
  defxforeign(ctx,"XNextEvent");
  defxforeign(ctx,"XOpenDisplay");
  defxforeign(ctx,"XParseColor");
/*   defxforeign(ctx,"ReadInteger"); */
  defxforeign(ctx,"XParseGeometry");
  defxforeign(ctx,"XPeekEvent");
  defxforeign(ctx,"XPeekIfEvent");
  defxforeign(ctx,"XEventsQueued");
  defxforeign(ctx,"XPending");
  defxforeign(ctx,"XSetWindowBackgroundPixmap");
  defxforeign(ctx,"XSetWindowBorderPixmap");
  defxforeign(ctx,"XPolygonRegion");
  defxforeign(ctx,"XDrawText");
  defxforeign(ctx,"XDrawText16");
  defxforeign(ctx,"XPutBackEvent");
  defxforeign(ctx,"XPutImage");
  defxforeign(ctx,"XQueryBestSize");
  defxforeign(ctx,"XQueryColor");
  defxforeign(ctx,"XQueryColors");
  defxforeign(ctx,"XQueryBestCursor");
  defxforeign(ctx,"XQueryExtension");
  defxforeign(ctx,"XQueryKeymap");
  defxforeign(ctx,"XQueryPointer");
  defxforeign(ctx,"XQueryBestStipple");
  defxforeign(ctx,"XQueryTextExtents16");
  defxforeign(ctx,"XQueryTextExtents");
  defxforeign(ctx,"XQueryBestTile");
  defxforeign(ctx,"XQueryTree");
  defxforeign(ctx,"XRaiseWindow");
  defxforeign(ctx,"XReadBitmapFile");
  defxforeign(ctx,"XRecolorCursor");
  defxforeign(ctx,"XConfigureWindow");
  defxforeign(ctx,"XClipBox");
  defxforeign(ctx,"XCreateRegion");
  defxforeign(ctx,"XDestroyRegion");
  defxforeign(ctx,"XEmptyRegion");
  defxforeign(ctx,"XEqualRegion");
  defxforeign(ctx,"XIntersectRegion");
  defxforeign(ctx,"XOffsetRegion");
  defxforeign(ctx,"XPointInRegion");
  defxforeign(ctx,"XRectInRegion");
  defxforeign(ctx,"XSetRegion");
  defxforeign(ctx,"XShrinkRegion");
  defxforeign(ctx,"XSubtractRegion");
  defxforeign(ctx,"XUnionRectWithRegion");
  defxforeign(ctx,"XUnionRegion");
  defxforeign(ctx,"XXorRegion");
/*   defxforeign(ctx,"combineRegs"); */
  defxforeign(ctx,"XReparentWindow");
  defxforeign(ctx,"XRestackWindows");
  defxforeign(ctx,"XRotateWindowProperties");
  defxforeign(ctx,"XSelectInput");
  defxforeign(ctx,"XSendEvent");
  defxforeign(ctx,"XSetBackground");
  defxforeign(ctx,"XSetClipRectangles");
  defxforeign(ctx,"XSetClipMask");
  defxforeign(ctx,"XSetClipOrigin");
  defxforeign(ctx,"XSetDashes");
  defxforeign(ctx,"XSetFontPath");
  defxforeign(ctx,"XSetFont");
  defxforeign(ctx,"XSetForeground");
  defxforeign(ctx,"XSetFunction");
  defxforeign(ctx,"XSetClassHint");
  defxforeign(ctx,"XSetCommand");
  defxforeign(ctx,"XSetIconSizes");
  defxforeign(ctx,"XSetNormalHints");
  defxforeign(ctx,"XSetSizeHints");
  defxforeign(ctx,"XSetStandardProperties");
  defxforeign(ctx,"XSetTransientForHint");
  defxforeign(ctx,"XSetWMHints");
  defxforeign(ctx,"XSetZoomHints");
  defxforeign(ctx,"XSetInputFocus");
  defxforeign(ctx,"XSetLineAttributes");
  defxforeign(ctx,"XSetPlaneMask");
  defxforeign(ctx,"XChangeKeyboardMapping");
  defxforeign(ctx,"XSetPointerMapping");
  defxforeign(ctx,"XSetSelectionOwner");
  defxforeign(ctx,"XSetScreenSaver");
  defxforeign(ctx,"XSetState");
  defxforeign(ctx,"XSetStipple");
  defxforeign(ctx,"XSetStandardColormap");
  defxforeign(ctx,"XSetTile");
  defxforeign(ctx,"XSetTSOrigin");
  defxforeign(ctx,"XFetchBuffer");
  defxforeign(ctx,"XFetchBytes");
  defxforeign(ctx,"XRotateBuffers");
  defxforeign(ctx,"XStoreBuffer");
  defxforeign(ctx,"XStoreBytes");
  defxforeign(ctx,"XStoreColor");
  defxforeign(ctx,"XStoreColors");
  defxforeign(ctx,"XStoreNamedColor");
  defxforeign(ctx,"XSetIconName");
  defxforeign(ctx,"XStoreName");
  defxforeign(ctx,"XKeysymToString");
  defxforeign(ctx,"XStringToKeysym");
  defxforeign(ctx,"XSync");
  defxforeign(ctx,"XSetAfterFunction");
  defxforeign(ctx,"XSynchronize");
  defxforeign(ctx,"XDrawString");
  defxforeign(ctx,"XDrawString16");
  defxforeign(ctx,"XTextExtents");
  defxforeign(ctx,"XTextWidth");
  defxforeign(ctx,"XTextExtents16");
  defxforeign(ctx,"XTextWidth16");
  defxforeign(ctx,"XTranslateCoordinates");
  defxforeign(ctx,"XUndefineCursor");
  defxforeign(ctx,"XUngrabButton");
  defxforeign(ctx,"XUngrabKeyboard");
  defxforeign(ctx,"XUngrabKey");
  defxforeign(ctx,"XUngrabPointer");
  defxforeign(ctx,"XUngrabServer");
  defxforeign(ctx,"XUninstallColormap");
  defxforeign(ctx,"XUnloadFont");
  defxforeign(ctx,"XUnmapSubwindows");
  defxforeign(ctx,"XUnmapWindow");
  defxforeign(ctx,"XGetVisualInfo");
  defxforeign(ctx,"XMatchVisualInfo");
  defxforeign(ctx,"XWarpPointer");
  defxforeign(ctx,"XWindowEvent");
  defxforeign(ctx,"XCreateWindow");
  defxforeign(ctx,"XWriteBitmapFile");
  defxforeign(ctx,"XFree");
  defxforeign(ctx,"XrmGetFileDatabase");
  defxforeign(ctx,"XrmGetResource");
  defxforeign(ctx,"XrmGetStringDatabase");
  defxforeign(ctx,"XrmInitialize");
  defxforeign(ctx,"XrmMergeDatabases");
  defxforeign(ctx,"XrmPutFileDatabase");
  defxforeign(ctx,"XrmPutLineResource");
  defxforeign(ctx,"XrmPutResource");
  defxforeign(ctx,"XrmPutStringResource");
  defxforeign(ctx,"XrmQGetResource");
  defxforeign(ctx,"XrmQGetSearchList");
  defxforeign(ctx,"XrmQGetSearchResource");
  defxforeign(ctx,"XrmQPutResource");
  defxforeign(ctx,"XrmQPutStringResource");
  defxforeign(ctx,"XrmStringToBindingQuarkList");
  defxforeign(ctx,"XrmStringToQuarkList");
#if X_V11R6_1
  defxforeign(ctx,"XInitThreads");
  defxforeign(ctx,"XLockDisplay");
  defxforeign(ctx,"XUnlockDisplay");
#endif
  return(argv[0]);
}

static init_object_module()
  { add_module_initializer("xforeign", xforeign);}
