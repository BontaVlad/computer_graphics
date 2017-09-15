/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/vlad/Nim/lib -o /home/vlad/Experiments/computer_graphics/software_renderers/src/nimcache/sdl2_sdl2.o /home/vlad/Experiments/computer_graphics/software_renderers/src/nimcache/sdl2_sdl2.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef linux
#undef near
typedef struct Event_Uzh9aP43ffUpM9aa6vZvNEug Event_Uzh9aP43ffUpM9aa6vZvNEug;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w;
typedef struct RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw;
typedef struct KeyboardEventObj_T9cLiQTAfT4u62zIltLlWzQ KeyboardEventObj_T9cLiQTAfT4u62zIltLlWzQ;
typedef struct TY_Ye8PLO8qqXk1tek2VP9c0UQ TY_Ye8PLO8qqXk1tek2VP9c0UQ;
typedef struct TY_rTI1z5tLuTbP9b133u2ve6A TY_rTI1z5tLuTbP9b133u2ve6A;
typedef struct KeySym_y3t7PyKCT9aYLDh9bLHT3UPw KeySym_y3t7PyKCT9aYLDh9bLHT3UPw;
typedef NI32 EventType_9ayvRjKFMoE6pV9bOp5OUI5w;
typedef NU8 TY_Y1pDC6KIrpu9aJMBN9aOQMhw[52];
struct  Event_Uzh9aP43ffUpM9aa6vZvNEug  {
EventType_9ayvRjKFMoE6pV9bOp5OUI5w kind;
TY_Y1pDC6KIrpu9aJMBN9aOQMhw padding;
};
typedef NI32 SDL_Return_8wc8or7UFANAtbisKJq7lw;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(SDL_Return_8wc8or7UFANAtbisKJq7lw, TY_fvOXafK39cW5YZA9b9bzinu9cw) (int flags);
typedef N_CDECL_PTR(NCSTRING, TY_09bvyvHFtWbkzL5AHgf0bKw) (void);
typedef N_CDECL_PTR(NIM_BOOL, TY_CS9bxA1KE4RHFQ1vMCkCBmg) (NCSTRING name, NCSTRING value);
typedef N_CDECL_PTR(WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w*, TY_1K9aSViCbSUpZMtRI9aw9a2Rg) (NCSTRING title, int x, int y, int w, int h, NU32 flags);
typedef N_CDECL_PTR(RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg*, TY_eGPD9aEHv9b8sVQMCQaPsYkg) (WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window, int index, int flags);
typedef N_CDECL_PTR(SDL_Return_8wc8or7UFANAtbisKJq7lw, TY_BzAZji9bzvN1k9ae25rIlb8A) (RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NU8 r, NU8 g, NU8 b, NU8 a);
struct  RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg  {
char dummy;
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct  TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw  {
char dummy;
};
typedef NI32 Bool32_lrv4aZgVTmBUYdrYUkLMlg;
typedef N_CDECL_PTR(Bool32_lrv4aZgVTmBUYdrYUkLMlg, TY_b9aXpKFbsyZ0PIk3aYRVCAA) (Event_Uzh9aP43ffUpM9aa6vZvNEug* event);
typedef N_CDECL_PTR(int, TY_zHpDbFN4o9bvP9cAphXAUHXg) (RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer);
struct TY_Ye8PLO8qqXk1tek2VP9c0UQ {
int Field0;
int Field1;
int Field2;
int Field3;
};
typedef N_CDECL_PTR(SDL_Return_8wc8or7UFANAtbisKJq7lw, TY_uEPg0xGcL9ao0XgF3q7VnpA) (RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw* texture, TY_Ye8PLO8qqXk1tek2VP9c0UQ* srcrect, TY_Ye8PLO8qqXk1tek2VP9c0UQ* dstrect, double angle, TY_rTI1z5tLuTbP9b133u2ve6A* center, int flip);
typedef N_CDECL_PTR(SDL_Return_8wc8or7UFANAtbisKJq7lw, TY_wbFMpEnGfJo5HTFBx413GA) (RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw* texture, TY_Ye8PLO8qqXk1tek2VP9c0UQ* srcrect, TY_Ye8PLO8qqXk1tek2VP9c0UQ* dstrect);
typedef N_CDECL_PTR(void, TY_9a8AalbnAaIxTUMpzQQqpjw) (RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer);
typedef N_CDECL_PTR(void, TY_T629bWTbvDFNyKAaO0BGGIQ) (WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window);
typedef N_CDECL_PTR(void, TY_ln4kdL5W9bbX4a1xl8nnVXQ) (void);
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w  {
char dummy;
};
typedef NI32 Scancode_ZC4j1APU9aAJPXuZfLFUG0w;
struct  KeySym_y3t7PyKCT9aYLDh9bLHT3UPw  {
Scancode_ZC4j1APU9aAJPXuZfLFUG0w scancode;
int sym;
NI16 modstate;
int unicode;
};
struct  KeyboardEventObj_T9cLiQTAfT4u62zIltLlWzQ  {
EventType_9ayvRjKFMoE6pV9bOp5OUI5w kind;
NU32 timestamp;
NU32 windowID;
NU8 state;
NIM_BOOL repeat;
NU8 pad1;
NU8 pad2;
KeySym_y3t7PyKCT9aYLDh9bLHT3UPw keysym;
};
struct TY_rTI1z5tLuTbP9b133u2ve6A {
int Field0;
int Field1;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
Event_Uzh9aP43ffUpM9aa6vZvNEug defaultEvent_LbtYyFPe9bpTC9bKZ8rWJeKQ;
static void* TM_ZcjcXgoBjElsmUGY1Ljosg_2;
TY_fvOXafK39cW5YZA9b9bzinu9cw Dl_148765_;
TY_09bvyvHFtWbkzL5AHgf0bKw Dl_149654_;
TY_CS9bxA1KE4RHFQ1vMCkCBmg Dl_150006_;
TY_1K9aSViCbSUpZMtRI9aw9a2Rg Dl_149356_;
TY_eGPD9aEHv9b8sVQMCQaPsYkg Dl_148811_;
TY_BzAZji9bzvN1k9ae25rIlb8A Dl_148617_;
TNimType NTI_RZ5I89cPVLRdJchBQYVCSfg_;
TNimType NTI_7lSakCSU4VtJLR9aqvUx9buA_;
TNimType NTI_6n0oqQPDsaMFNhtiJ29bOXw_;
TNimType NTI_X6TOzpP8PAev43Vu8HltPQ_;
TY_b9aXpKFbsyZ0PIk3aYRVCAA Dl_149605_;
TY_zHpDbFN4o9bvP9cAphXAUHXg Dl_149017_;
TY_uEPg0xGcL9ao0XgF3q7VnpA Dl_148995_;
TY_wbFMpEnGfJo5HTFBx413GA Dl_148988_;
TY_9a8AalbnAaIxTUMpzQQqpjw Dl_149036_;
TY_9a8AalbnAaIxTUMpzQQqpjw Dl_148648_;
TY_T629bWTbvDFNyKAaO0BGGIQ Dl_149388_;
TY_ln4kdL5W9bbX4a1xl8nnVXQ Dl_148777_;
STRING_LITERAL(TM_ZcjcXgoBjElsmUGY1Ljosg_4, "libSDL2.so", 10);
STRING_LITERAL(TM_ZcjcXgoBjElsmUGY1Ljosg_5, "libSDL2.so", 10);

N_NIMCALL(NIM_BOOL, toBool_9bg9codirrpaPKZJuSwGJgEg)(SDL_Return_8wc8or7UFANAtbisKJq7lw some) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (some == ((SDL_Return_8wc8or7UFANAtbisKJq7lw) 0));
	return result;
}

N_NIMCALL(NIM_BOOL, toBool_3fq5Y9cfgYx8q7J9ba6TTYbQ)(Bool32_lrv4aZgVTmBUYdrYUkLMlg some) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((NIM_BOOL) (some));
	return result;
}

N_NIMCALL(KeyboardEventObj_T9cLiQTAfT4u62zIltLlWzQ*, key_Sy9cYLza36NW1QN9asfW9a0LA)(Event_Uzh9aP43ffUpM9aa6vZvNEug* event) {
	KeyboardEventObj_T9cLiQTAfT4u62zIltLlWzQ* result;
{	result = (KeyboardEventObj_T9cLiQTAfT4u62zIltLlWzQ*)0;
	result = ((KeyboardEventObj_T9cLiQTAfT4u62zIltLlWzQ*) (event));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_CDECL(TY_Ye8PLO8qqXk1tek2VP9c0UQ, rect_GH33Rh9bTnVBRLuu9bU7xoyA)(int x, int y, int w, int h) {
	TY_Ye8PLO8qqXk1tek2VP9c0UQ result;
	memset((void*)(&result), 0, sizeof(result));
	result.Field0 = x;
	result.Field1 = y;
	result.Field2 = w;
	result.Field3 = h;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, sdl2_sdl2Init000)(void) {
	Event_Uzh9aP43ffUpM9aa6vZvNEug T1_;
	memset((void*)(&T1_), 0, sizeof(T1_));
	T1_.kind = ((EventType_9ayvRjKFMoE6pV9bOp5OUI5w) 256);
	defaultEvent_LbtYyFPe9bpTC9bKZ8rWJeKQ = T1_;
}

NIM_EXTERNC N_NOINLINE(void, sdl2_sdl2DatInit000)(void) {
static TNimNode TM_ZcjcXgoBjElsmUGY1Ljosg_0[2];
NTI_RZ5I89cPVLRdJchBQYVCSfg_.size = sizeof(RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg);
NTI_RZ5I89cPVLRdJchBQYVCSfg_.kind = 18;
NTI_RZ5I89cPVLRdJchBQYVCSfg_.base = 0;
NTI_RZ5I89cPVLRdJchBQYVCSfg_.flags = 3;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[0].len = 0; TM_ZcjcXgoBjElsmUGY1Ljosg_0[0].kind = 2;
NTI_RZ5I89cPVLRdJchBQYVCSfg_.node = &TM_ZcjcXgoBjElsmUGY1Ljosg_0[0];
NTI_7lSakCSU4VtJLR9aqvUx9buA_.size = sizeof(RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg*);
NTI_7lSakCSU4VtJLR9aqvUx9buA_.kind = 21;
NTI_7lSakCSU4VtJLR9aqvUx9buA_.base = (&NTI_RZ5I89cPVLRdJchBQYVCSfg_);
NTI_7lSakCSU4VtJLR9aqvUx9buA_.flags = 3;
NTI_6n0oqQPDsaMFNhtiJ29bOXw_.size = sizeof(TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw);
NTI_6n0oqQPDsaMFNhtiJ29bOXw_.kind = 18;
NTI_6n0oqQPDsaMFNhtiJ29bOXw_.base = 0;
NTI_6n0oqQPDsaMFNhtiJ29bOXw_.flags = 3;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[1].len = 0; TM_ZcjcXgoBjElsmUGY1Ljosg_0[1].kind = 2;
NTI_6n0oqQPDsaMFNhtiJ29bOXw_.node = &TM_ZcjcXgoBjElsmUGY1Ljosg_0[1];
NTI_X6TOzpP8PAev43Vu8HltPQ_.size = sizeof(TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw*);
NTI_X6TOzpP8PAev43Vu8HltPQ_.kind = 21;
NTI_X6TOzpP8PAev43Vu8HltPQ_.base = (&NTI_6n0oqQPDsaMFNhtiJ29bOXw_);
NTI_X6TOzpP8PAev43Vu8HltPQ_.flags = 3;
if (!((TM_ZcjcXgoBjElsmUGY1Ljosg_2 = nimLoadLibrary((NimStringDesc*) &TM_ZcjcXgoBjElsmUGY1Ljosg_4))
)) nimLoadLibraryError((NimStringDesc*) &TM_ZcjcXgoBjElsmUGY1Ljosg_5);
	Dl_148765_ = (TY_fvOXafK39cW5YZA9b9bzinu9cw) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_Init");
	Dl_149654_ = (TY_09bvyvHFtWbkzL5AHgf0bKw) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_GetError");
	Dl_150006_ = (TY_CS9bxA1KE4RHFQ1vMCkCBmg) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_SetHint");
	Dl_149356_ = (TY_1K9aSViCbSUpZMtRI9aw9a2Rg) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_CreateWindow");
	Dl_148811_ = (TY_eGPD9aEHv9b8sVQMCQaPsYkg) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_CreateRenderer");
	Dl_148617_ = (TY_BzAZji9bzvN1k9ae25rIlb8A) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_SetRenderDrawColor");
	Dl_149605_ = (TY_b9aXpKFbsyZ0PIk3aYRVCAA) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_PollEvent");
	Dl_149017_ = (TY_zHpDbFN4o9bvP9cAphXAUHXg) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_RenderClear");
	Dl_148995_ = (TY_uEPg0xGcL9ao0XgF3q7VnpA) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_RenderCopyEx");
	Dl_148988_ = (TY_wbFMpEnGfJo5HTFBx413GA) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_RenderCopy");
	Dl_149036_ = (TY_9a8AalbnAaIxTUMpzQQqpjw) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_RenderPresent");
	Dl_148648_ = (TY_9a8AalbnAaIxTUMpzQQqpjw) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_DestroyRenderer");
	Dl_149388_ = (TY_T629bWTbvDFNyKAaO0BGGIQ) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_DestroyWindow");
	Dl_148777_ = (TY_ln4kdL5W9bbX4a1xl8nnVXQ) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_Quit");
}

