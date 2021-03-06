/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/vlad/Nim/lib -o /home/vlad/Experiments/computer_graphics/software_renderers/src/nimcache/sdl2_nim_sdl_image.o /home/vlad/Experiments/computer_graphics/software_renderers/src/nimcache/sdl2_nim_sdl_image.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#undef linux
#undef near
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct Version_yqvHhRjjQka1OoCKz3pwmg Version_yqvHhRjjQka1OoCKz3pwmg;
typedef struct SurfaceObj_p38hmQYM8dSHCxdlRSTN3A SurfaceObj_p38hmQYM8dSHCxdlRSTN3A;
typedef struct RWops_eDjAEsZ0dMPUbPNzsgqbqA RWops_eDjAEsZ0dMPUbPNzsgqbqA;
typedef struct PixelFormat_wU9cDPZQN8lu0JgltTtFK0Q PixelFormat_wU9cDPZQN8lu0JgltTtFK0Q;
typedef struct Rect_qiXweduDJk1iLE5aHysNdQ Rect_qiXweduDJk1iLE5aHysNdQ;
typedef union RWopsKind_B9bGTbwHI302xDKkFwe5RZQ RWopsKind_B9bGTbwHI302xDKkFwe5RZQ;
typedef struct RWopsAndroidio_9bmucCZftzIUfLB0AYNuuMQ RWopsAndroidio_9bmucCZftzIUfLB0AYNuuMQ;
typedef struct RWopsWindowsio_MbwOJIFSPqDwSbRWn1ygSA RWopsWindowsio_MbwOJIFSPqDwSbRWn1ygSA;
typedef struct RWopsWindowsioBuffer_szd2VVBRm6mbSNMdL8LkKQ RWopsWindowsioBuffer_szd2VVBRm6mbSNMdL8LkKQ;
typedef struct RWopsStdio_R4gEF6TLygfCBTS9cRm1fYg RWopsStdio_R4gEF6TLygfCBTS9cRm1fYg;
typedef struct RWopsMemio_p9aMmhyg8NTeSTHMEwEBG7Q RWopsMemio_p9aMmhyg8NTeSTHMEwEBG7Q;
typedef struct RWopsUnknownio_xAX1nygcCVgIHhbOn0eDSA RWopsUnknownio_xAX1nygcCVgIHhbOn0eDSA;
typedef struct Palette_uR3LHDHYgbK2Xt6nAh5vfg Palette_uR3LHDHYgbK2Xt6nAh5vfg;
typedef struct Color_YizDHyEvJtgQk2fn8KdZUA Color_YizDHyEvJtgQk2fn8KdZUA;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(Version_yqvHhRjjQka1OoCKz3pwmg*, TY_QJJGRMaC9c9aiPD48gqb6D7A) (void);
typedef N_CDECL_PTR(int, TY_4hSZquf3VZZvlELaYshEWg) (int flags);
typedef N_CDECL_PTR(void, TY_ln4kdL5W9bbX4a1xl8nnVXQ) (void);
typedef N_CDECL_PTR(SurfaceObj_p38hmQYM8dSHCxdlRSTN3A*, TY_NvLXCVcBxqGQ6m0yNYSIYA) (RWops_eDjAEsZ0dMPUbPNzsgqbqA* src, int freesrc, NCSTRING kind);
typedef N_CDECL_PTR(SurfaceObj_p38hmQYM8dSHCxdlRSTN3A*, TY_oTI7Gk9b9bgxQuZMQRpglP1w) (NCSTRING file);
typedef N_CDECL_PTR(SurfaceObj_p38hmQYM8dSHCxdlRSTN3A*, TY_ov47cSW7te2Rk6vJnziJZA) (RWops_eDjAEsZ0dMPUbPNzsgqbqA* src, int freesrc);
typedef N_CDECL_PTR(void**, TY_1LIoIPgxf1fnU6YXXXDfCA) (void* renderer, NCSTRING file);
typedef N_CDECL_PTR(void*, TY_VQBltFKZwH39aVWDIW09ctKw) (void* renderer, RWops_eDjAEsZ0dMPUbPNzsgqbqA* src, int freesrc);
typedef N_CDECL_PTR(void*, TY_lSYJUnFztE9b6X3AgW6kREA) (void* renderer, RWops_eDjAEsZ0dMPUbPNzsgqbqA* src, int freesrc, NCSTRING kind);
typedef N_CDECL_PTR(int, TY_pcLKO4pFPDvuTZj9c0HX5oA) (RWops_eDjAEsZ0dMPUbPNzsgqbqA* src);
typedef N_CDECL_PTR(SurfaceObj_p38hmQYM8dSHCxdlRSTN3A*, TY_S403pLp7LI39aIsuKW8zoFQ) (RWops_eDjAEsZ0dMPUbPNzsgqbqA* src);
typedef N_CDECL_PTR(SurfaceObj_p38hmQYM8dSHCxdlRSTN3A*, TY_lLmyBWj475zW9aMpourOsiA) (NCSTRING* xpm);
typedef N_CDECL_PTR(int, TY_4PR3PdkHeWAxO0xtL1uU2w) (SurfaceObj_p38hmQYM8dSHCxdlRSTN3A* surface, NCSTRING file);
typedef N_CDECL_PTR(int, TY_0LUZrv2Ou7x5wWF9bYPB5fw) (SurfaceObj_p38hmQYM8dSHCxdlRSTN3A* surface, RWops_eDjAEsZ0dMPUbPNzsgqbqA* dst, int freedst);
struct  Version_yqvHhRjjQka1OoCKz3pwmg  {
NU8 major;
NU8 minor;
NU8 patch;
};
struct  Rect_qiXweduDJk1iLE5aHysNdQ  {
int x;
int y;
int w;
int h;
};
struct  SurfaceObj_p38hmQYM8dSHCxdlRSTN3A  {
NU32 flags;
PixelFormat_wU9cDPZQN8lu0JgltTtFK0Q* format;
int w;
int h;
int pitch;
void* pixels;
void* userdata;
int locked;
void* lock_data;
Rect_qiXweduDJk1iLE5aHysNdQ clip_rect;
void* map;
int refcount;
};
typedef N_CDECL_PTR(NI64, TY_p9adtE9afP6ObPoIZKMFxiAA) (RWops_eDjAEsZ0dMPUbPNzsgqbqA* context);
typedef N_CDECL_PTR(NI64, TY_tpgoL9bwK9bkzBn2qq83QKag) (RWops_eDjAEsZ0dMPUbPNzsgqbqA* context, NI64 offset, int whence);
typedef N_CDECL_PTR(size_t, TY_vPnfrHDX45Ib7P40WFtTvg) (RWops_eDjAEsZ0dMPUbPNzsgqbqA* context, void* p, size_t size, size_t maxnum);
struct  RWopsAndroidio_9bmucCZftzIUfLB0AYNuuMQ  {
void* fileNameRef;
void* inputStreamRef;
void* readableByteChannelRef;
void* readMethod;
void* assetFileDescriptorRef;
long position;
long size;
long offset;
int fd;
};
struct  RWopsWindowsioBuffer_szd2VVBRm6mbSNMdL8LkKQ  {
void* data;
size_t size;
size_t left;
};
struct  RWopsWindowsio_MbwOJIFSPqDwSbRWn1ygSA  {
NIM_BOOL append;
void* h;
RWopsWindowsioBuffer_szd2VVBRm6mbSNMdL8LkKQ buffer;
};
struct  RWopsStdio_R4gEF6TLygfCBTS9cRm1fYg  {
NIM_BOOL autoclose;
FILE* fp;
};
struct  RWopsMemio_p9aMmhyg8NTeSTHMEwEBG7Q  {
NU8* base;
NU8* here;
NU8* stop;
};
struct  RWopsUnknownio_xAX1nygcCVgIHhbOn0eDSA  {
void* data1;
void* data2;
};
union  RWopsKind_B9bGTbwHI302xDKkFwe5RZQ  {
RWopsAndroidio_9bmucCZftzIUfLB0AYNuuMQ androidio;
RWopsWindowsio_MbwOJIFSPqDwSbRWn1ygSA windowsio;
RWopsStdio_R4gEF6TLygfCBTS9cRm1fYg stdio;
RWopsMemio_p9aMmhyg8NTeSTHMEwEBG7Q mem;
RWopsUnknownio_xAX1nygcCVgIHhbOn0eDSA unknown;
};
struct  RWops_eDjAEsZ0dMPUbPNzsgqbqA  {
TY_p9adtE9afP6ObPoIZKMFxiAA size;
TY_tpgoL9bwK9bkzBn2qq83QKag seek;
TY_vPnfrHDX45Ib7P40WFtTvg read;
TY_vPnfrHDX45Ib7P40WFtTvg write;
TY_pcLKO4pFPDvuTZj9c0HX5oA close;
NU32 kind;
RWopsKind_B9bGTbwHI302xDKkFwe5RZQ mem;
};
typedef NU8 TY_bN9bddWn8oiNSHn2MqEJSZQ[2];
struct  PixelFormat_wU9cDPZQN8lu0JgltTtFK0Q  {
NU32 format;
Palette_uR3LHDHYgbK2Xt6nAh5vfg* palette;
NU8 BitsPerPixel;
NU8 BytesPerPixel;
TY_bN9bddWn8oiNSHn2MqEJSZQ padding;
NU32 Rmask;
NU32 Gmask;
NU32 Bmask;
NU32 Amask;
NU8 Rloss;
NU8 Gloss;
NU8 Bloss;
NU8 Aloss;
NU8 Rshift;
NU8 Gshift;
NU8 Bshift;
NU8 Ashift;
int refcount;
PixelFormat_wU9cDPZQN8lu0JgltTtFK0Q* next;
};
struct  Palette_uR3LHDHYgbK2Xt6nAh5vfg  {
int ncolors;
Color_YizDHyEvJtgQk2fn8KdZUA* colors;
NU32 version;
int refcount;
};
struct  Color_YizDHyEvJtgQk2fn8KdZUA  {
NU8 r;
NU8 g;
NU8 b;
NU8 a;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static void* TM_KBqytsBOSVgv4K9bnF5oGYQ_2;
TY_QJJGRMaC9c9aiPD48gqb6D7A Dl_143005_;
TY_4hSZquf3VZZvlELaYshEWg Dl_143012_;
TY_ln4kdL5W9bbX4a1xl8nnVXQ Dl_143015_;
TY_NvLXCVcBxqGQ6m0yNYSIYA Dl_143017_;
TY_oTI7Gk9b9bgxQuZMQRpglP1w Dl_143023_;
TY_ov47cSW7te2Rk6vJnziJZA Dl_143026_;
TY_1LIoIPgxf1fnU6YXXXDfCA Dl_143036_;
TY_VQBltFKZwH39aVWDIW09ctKw Dl_143041_;
TY_lSYJUnFztE9b6X3AgW6kREA Dl_143047_;
TY_pcLKO4pFPDvuTZj9c0HX5oA Dl_143201_;
TY_pcLKO4pFPDvuTZj9c0HX5oA Dl_143205_;
TY_pcLKO4pFPDvuTZj9c0HX5oA Dl_143209_;
TY_pcLKO4pFPDvuTZj9c0HX5oA Dl_143213_;
TY_pcLKO4pFPDvuTZj9c0HX5oA Dl_143217_;
TY_pcLKO4pFPDvuTZj9c0HX5oA Dl_143221_;
TY_pcLKO4pFPDvuTZj9c0HX5oA Dl_143225_;
TY_pcLKO4pFPDvuTZj9c0HX5oA Dl_143229_;
TY_pcLKO4pFPDvuTZj9c0HX5oA Dl_143233_;
TY_pcLKO4pFPDvuTZj9c0HX5oA Dl_143237_;
TY_pcLKO4pFPDvuTZj9c0HX5oA Dl_143241_;
TY_pcLKO4pFPDvuTZj9c0HX5oA Dl_143245_;
TY_pcLKO4pFPDvuTZj9c0HX5oA Dl_143249_;
TY_pcLKO4pFPDvuTZj9c0HX5oA Dl_143253_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143257_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143261_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143265_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143269_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143273_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143277_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143281_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143285_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143289_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143293_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143297_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143301_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143305_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143309_;
TY_S403pLp7LI39aIsuKW8zoFQ Dl_143313_;
TY_lLmyBWj475zW9aMpourOsiA Dl_143317_;
TY_4PR3PdkHeWAxO0xtL1uU2w Dl_143320_;
TY_0LUZrv2Ou7x5wWF9bYPB5fw Dl_143324_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_KBqytsBOSVgv4K9bnF5oGYQ_4, "libSDL2_image.so", 16);
STRING_LITERAL(TM_KBqytsBOSVgv4K9bnF5oGYQ_6, "libSDL2_image.so.0.0.1", 22);
STRING_LITERAL(TM_KBqytsBOSVgv4K9bnF5oGYQ_8, "libSDL2_image.so.0", 18);
STRING_LITERAL(TM_KBqytsBOSVgv4K9bnF5oGYQ_10, "libSDL2_image-2.0.so", 20);
STRING_LITERAL(TM_KBqytsBOSVgv4K9bnF5oGYQ_12, "libSDL2_image-2.0.so.0.0.1", 26);
STRING_LITERAL(TM_KBqytsBOSVgv4K9bnF5oGYQ_14, "libSDL2_image-2.0.so.0", 22);
STRING_LITERAL(TM_KBqytsBOSVgv4K9bnF5oGYQ_15, "libSDL2_image(|-2.0).so(|.0.0.1|.0)", 35);

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}
NIM_EXTERNC N_NOINLINE(void, sdl2_nim_sdl_imageInit000)(void) {
	nimfr_("sdl_image", "sdl_image.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, sdl2_nim_sdl_imageDatInit000)(void) {
if (!((TM_KBqytsBOSVgv4K9bnF5oGYQ_2 = nimLoadLibrary((NimStringDesc*) &TM_KBqytsBOSVgv4K9bnF5oGYQ_4))
||(TM_KBqytsBOSVgv4K9bnF5oGYQ_2 = nimLoadLibrary((NimStringDesc*) &TM_KBqytsBOSVgv4K9bnF5oGYQ_6))
||(TM_KBqytsBOSVgv4K9bnF5oGYQ_2 = nimLoadLibrary((NimStringDesc*) &TM_KBqytsBOSVgv4K9bnF5oGYQ_8))
||(TM_KBqytsBOSVgv4K9bnF5oGYQ_2 = nimLoadLibrary((NimStringDesc*) &TM_KBqytsBOSVgv4K9bnF5oGYQ_10))
||(TM_KBqytsBOSVgv4K9bnF5oGYQ_2 = nimLoadLibrary((NimStringDesc*) &TM_KBqytsBOSVgv4K9bnF5oGYQ_12))
||(TM_KBqytsBOSVgv4K9bnF5oGYQ_2 = nimLoadLibrary((NimStringDesc*) &TM_KBqytsBOSVgv4K9bnF5oGYQ_14))
)) nimLoadLibraryError((NimStringDesc*) &TM_KBqytsBOSVgv4K9bnF5oGYQ_15);
	Dl_143005_ = (TY_QJJGRMaC9c9aiPD48gqb6D7A) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_Linked_Version");
	Dl_143012_ = (TY_4hSZquf3VZZvlELaYshEWg) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_Init");
	Dl_143015_ = (TY_ln4kdL5W9bbX4a1xl8nnVXQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_Quit");
	Dl_143017_ = (TY_NvLXCVcBxqGQ6m0yNYSIYA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadTyped_RW");
	Dl_143023_ = (TY_oTI7Gk9b9bgxQuZMQRpglP1w) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_Load");
	Dl_143026_ = (TY_ov47cSW7te2Rk6vJnziJZA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_Load_RW");
	Dl_143036_ = (TY_1LIoIPgxf1fnU6YXXXDfCA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadTexture");
	Dl_143041_ = (TY_VQBltFKZwH39aVWDIW09ctKw) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadTexture_RW");
	Dl_143047_ = (TY_lSYJUnFztE9b6X3AgW6kREA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadTextureTyped_RW");
	Dl_143201_ = (TY_pcLKO4pFPDvuTZj9c0HX5oA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_isICO");
	Dl_143205_ = (TY_pcLKO4pFPDvuTZj9c0HX5oA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_isCUR");
	Dl_143209_ = (TY_pcLKO4pFPDvuTZj9c0HX5oA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_isBMP");
	Dl_143213_ = (TY_pcLKO4pFPDvuTZj9c0HX5oA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_isGIF");
	Dl_143217_ = (TY_pcLKO4pFPDvuTZj9c0HX5oA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_isJPG");
	Dl_143221_ = (TY_pcLKO4pFPDvuTZj9c0HX5oA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_isLBM");
	Dl_143225_ = (TY_pcLKO4pFPDvuTZj9c0HX5oA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_isPCX");
	Dl_143229_ = (TY_pcLKO4pFPDvuTZj9c0HX5oA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_isPNG");
	Dl_143233_ = (TY_pcLKO4pFPDvuTZj9c0HX5oA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_isPNM");
	Dl_143237_ = (TY_pcLKO4pFPDvuTZj9c0HX5oA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_isTIF");
	Dl_143241_ = (TY_pcLKO4pFPDvuTZj9c0HX5oA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_isXCF");
	Dl_143245_ = (TY_pcLKO4pFPDvuTZj9c0HX5oA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_isXPM");
	Dl_143249_ = (TY_pcLKO4pFPDvuTZj9c0HX5oA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_isXV");
	Dl_143253_ = (TY_pcLKO4pFPDvuTZj9c0HX5oA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_isWEBP");
	Dl_143257_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadICO_RW");
	Dl_143261_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadCUR_RW");
	Dl_143265_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadBMP_RW");
	Dl_143269_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadGIF_RW");
	Dl_143273_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadJPG_RW");
	Dl_143277_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadLBM_RW");
	Dl_143281_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadPCX_RW");
	Dl_143285_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadPNG_RW");
	Dl_143289_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadPNM_RW");
	Dl_143293_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadTGA_RW");
	Dl_143297_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadTIF_RW");
	Dl_143301_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadXCF_RW");
	Dl_143305_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadXPM_RW");
	Dl_143309_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadXV_RW");
	Dl_143313_ = (TY_S403pLp7LI39aIsuKW8zoFQ) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadWEBP_RW");
	Dl_143317_ = (TY_lLmyBWj475zW9aMpourOsiA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_ReadXPMFromArray");
	Dl_143320_ = (TY_4PR3PdkHeWAxO0xtL1uU2w) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_SavePNG");
	Dl_143324_ = (TY_0LUZrv2Ou7x5wWF9bYPB5fw) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_SavePNG_RW");
}

