//
// Created by Jfm Meyers on 11/18/16.
//

#ifndef GMODLUAHAX_GMODCLIENTPRTS_H
#define GMODLUAHAX_GMODCLIENTPRTS_H
//00577b60 T _Bt3Zip_MatchFinder_GetMatches
//00577930 T _Bt3Zip_MatchFinder_Skip
//00444410 T _CreateInterface
//00576840 T _GetMatchesSpec1
//005779e0 T _Hc3Zip_MatchFinder_GetMatches
//005778c0 T _Hc3Zip_MatchFinder_Skip
//00580220 T _LzmaCompress
//005797e0 T _LzmaDec_Allocate
//005796c0 T _LzmaDec_AllocateProbs
//00579ee0 T _LzmaDec_DecodeToBuf
//00579950 T _LzmaDec_DecodeToDic
//005795e0 T _LzmaDec_Free
//005795b0 T _LzmaDec_FreeProbs
//00579570 T _LzmaDec_Init
//00577c50 T _LzmaDec_InitDicAndState
//00579dd0 T _LzmaDecode
//0057a140 T _LzmaEncProps_GetDictSize
//0057a000 T _LzmaEncProps_Init
//0057a060 T _LzmaEncProps_Normalize
//0057efe0 T _LzmaEnc_CodeOneMemBlock
//0057fea0 T _LzmaEnc_Construct
//00580060 T _LzmaEnc_Create
//0057fe20 T _LzmaEnc_Destroy
//0057fda0 T _LzmaEnc_Destruct
//0057faa0 T _LzmaEnc_Encode
//0057a180 T _LzmaEnc_FastPosInit
//0057ef90 T _LzmaEnc_Finish
//0057b480 T _LzmaEnc_FreeLits
//0057efc0 T _LzmaEnc_GetCurBuf
//0057efa0 T _LzmaEnc_GetNumAvailableBytes
//0057eb40 T _LzmaEnc_Init
//0057a4b0 T _LzmaEnc_InitPriceTables
//0057eec0 T _LzmaEnc_InitPrices
//0057fbf0 T _LzmaEnc_MemEncode
//0057fbb0 T _LzmaEnc_MemPrepare
//0057fd60 T _LzmaEnc_PrepareForLzma2
//0057f290 T _LzmaEnc_RestoreState
//0057f530 T _LzmaEnc_SaveState
//0057a1e0 T _LzmaEnc_SetProps
//0057f200 T _LzmaEnc_WriteProperties
//00580090 T _LzmaEncode
//00579620 T _LzmaProps_Decode
//005802c0 T _LzmaUncompress
//00576420 T _MatchFinder_Construct
//00576550 T _MatchFinder_Create
//00576b90 T _MatchFinder_CreateVTable
//00576500 T _MatchFinder_Free
//005762f0 T _MatchFinder_GetIndexByte
//00576300 T _MatchFinder_GetNumAvailableBytes
//005762e0 T _MatchFinder_GetPointerToCurrentPos
//00576750 T _MatchFinder_Init
//00577760 T _MatchFinder_MoveBlock
//005763e0 T _MatchFinder_NeedMove
//00576800 T _MatchFinder_Normalize3
//00576400 T _MatchFinder_ReadIfRequired
//00576310 T _MatchFinder_ReduceOffsets
//005762c0 T _MyAlloc
//005762d0 T _MyFree
//00561aa0 T md5_finish(md5_context*, unsigned char*)
//005610d0 T md5_starts(md5_context*)
//005619e0 T md5_update(md5_context*, unsigned char*, int)
//00560f80 T crc32_start(unsigned long)
//00561c30 T md5(unsigned char*, int, unsigned char*)
//00560e80 T crc32(void const*, int, unsigned long, unsigned long*)
//00561cb0 T md5_32(void const*, int, unsigned int, void*)
//00560df0 T globber(char const*, char const*)
//00561d40 T md5hash(void const*, int, unsigned int)
//0056bdf0 T wildcmp(char const*, char const*)
//0056f1b0 T CharToHex(char)
//00560f90 T crc32_add(unsigned long&, void const*, int)
//005610c0 T crc32_end(unsigned long&)
//0056f71c T stlencoders::decode_error::~decode_error()
//0056f702 T stlencoders::decode_error::~decode_error()
//0056f748 T stlencoders::invalid_length::~invalid_length()
//0056f774 T stlencoders::invalid_length::~invalid_length()
//0056f78e T stlencoders::invalid_character::~invalid_character()
//0056f7ba T stlencoders::invalid_character::~invalid_character()
//0056f7e0 T unsigned char stlencoders::base64<char, stlencoders::base64_traits<char> >::seek<__gnu_cxx::__normal_iterator<char*, std::string> >(__gnu_cxx::__normal_iterator<char*, std::string>&, __gnu_cxx::__normal_iterator<char*, std::string> const&, stlencoders::base64<char, stlencoders::base64_traits<char> >::noskip&)
//0056f8e0 T std::back_insert_iterator<std::string> stlencoders::base64<char, stlencoders::base64_traits<char> >::decode<__gnu_cxx::__normal_iterator<char*, std::string>, std::back_insert_iterator<std::string>, stlencoders::base64<char, stlencoders::base64_traits<char> >::noskip>(__gnu_cxx::__normal_iterator<char*, std::string>, __gnu_cxx::__normal_iterator<char*, std::string>, std::back_insert_iterator<std::string>, stlencoders::base64<char, stlencoders::base64_traits<char> >::noskip)
//0056f590 T std::back_insert_iterator<std::string> stlencoders::base64<char, stlencoders::base64_traits<char> >::encode<__gnu_cxx::__normal_iterator<char*, std::string>, std::back_insert_iterator<std::string> >(__gnu_cxx::__normal_iterator<char*, std::string>, __gnu_cxx::__normal_iterator<char*, std::string>, std::back_insert_iterator<std::string>, bool)
//0058c290 T XZip::FileExists(char const*)
//0058c0d0 T XZip::GetZipItem(XZip::HZIP__*, int, XZip::ZIPENTRY*)
//0058d6f6 T XZip::TTreeState::TTreeState()
//0058d5f0 T XZip::TTreeState::TTreeState()
//0058e220 T XZip::bi_reverse(unsigned int, int)
//00591690 T XZip::build_tree(XZip::TState&, XZip::tree_desc*)
//0058fc10 T XZip::copy_block(XZip::TState&, char*, unsigned int, int)
//005913d0 T XZip::gen_bitlen(XZip::TState&, XZip::tree_desc*)
//00898ff4 S XZip::has_seeded
//005864a0 T XZip::huft_build(unsigned int*, unsigned int, unsigned int, unsigned int const*, unsigned int const*, XZip::inflate_huft_s**, unsigned int*, XZip::inflate_huft_s*, unsigned int*, unsigned int*)
//005878d0 T XZip::inflateEnd(XZip::z_stream_s*)
//0058d820 T XZip::init_block(XZip::TState&)
//00898fec S XZip::lasterrorU
//00898ff0 S XZip::lasterrorZ
//0058d8c0 T XZip::pqdownheap(XZip::TState&, XZip::ct_data*, int)
//0058ebd0 T XZip::putcentral(XZip::zlist*, unsigned int (*)(void*, char const*, unsigned int), void*)
//0058c210 T XZip::FindZipItem(XZip::HZIP__*, char const*, bool, int*, XZip::ZIPENTRY*)
//00592f80 T XZip::GetFileInfo(__sFILE*, unsigned long*, long*, XZip::iztimes*, unsigned long*)
//00586180 T XZip::GetFilePosU(__sFILE*)
//00592bc0 T XZip::GetFilePosZ(__sFILE*)
//0058fa70 T XZip::fill_window(XZip::TState&)
//00591d30 T XZip::flush_block(XZip::TState&, char*, unsigned long, int)
//0058ea20 T XZip::putextended(XZip::zlist*, unsigned int (*)(void*, char const*, unsigned int), void*)
//0058f470 T XZip::update_keys(unsigned long*, char)
//005877d0 T XZip::zlibVersion()
//00590330 T XZip::HasZipSuffix(char const*)
//00587bd0 T XZip::IsZipHandleU(XZip::HZIP__*)
//0058f570 T XZip::IsZipHandleZ(XZip::HZIP__*)
//00587540 T XZip::Uupdate_keys(unsigned long*, char)
//005940c0 T XZip::ZipAddFolder(XZip::HZIP__*, char const*)
//005941c0 T XZip::ZipAddHandle(XZip::HZIP__*, char const*, __sFILE*)
//00594140 T XZip::ZipAddHandle(XZip::HZIP__*, char const*, __sFILE*, unsigned int)
//0058f700 T XZip::ZipGetMemory(XZip::HZIP__*, void**, unsigned long*)
//0058f4d0 T XZip::decrypt_byte(unsigned long*)
//00592370 T XZip::deflate_fast(XZip::TState&)
//00587930 T XZip::inflateInit2(XZip::z_stream_s*)
//00587800 T XZip::inflateReset(XZip::z_stream_s*)
//00586f10 T XZip::inflate_fast(unsigned int, unsigned int, XZip::inflate_huft_s const*, XZip::inflate_huft_s const*, XZip::inflate_blocks_state*, XZip::z_stream_s*)
//0058d5c0 T XZip::OpenZipHandle(__sFILE*, char const*)
//005875a0 T XZip::Udecrypt_byte(unsigned long*)
//00591c70 T XZip::build_bl_tree(XZip::TState&)
//00587430 T XZip::get_crc_table()
//00588160 T XZip::inflate_codes(XZip::inflate_blocks_state*, XZip::z_stream_s*, int)
//00588010 T XZip::inflate_flush(XZip::inflate_blocks_state*, XZip::z_stream_s*, int)
//0058e370 T XZip::longest_match(XZip::TState&, unsigned int)
//0058daa0 T XZip::set_file_type(XZip::TState&)
//0058b810 T XZip::unzLocateFile(XZip::unz_s*, char const*, int)
//00594050 T XZip::ZipAddInternal(XZip::HZIP__*, char const*, void*, unsigned int, unsigned long)
//0058dc70 T XZip::compress_block(XZip::TState&, XZip::ct_data*, XZip::ct_data*)
//00588ab0 T XZip::inflate_blocks(XZip::inflate_blocks_state*, XZip::z_stream_s*, int)
//00590930 T XZip::send_all_trees(XZip::TState&, int, int, int)
//005861d0 T XZip::timet2filetime(unsigned long)
//00592ed0 T XZip::CreateZipHandle(__sFILE*, char const*)
//0058c2c0 T XZip::EnsureDirectory(char const*, char const*)
//0058d450 T XZip::OpenZipInternal(void*, unsigned int, unsigned long, char const*)
//00587f30 T XZip::SetUnzipBaseDir(XZip::HZIP__*, char const*)
//0058cb00 T XZip::UnzipItemHandle(XZip::HZIP__*, int, __sFILE*)
//0058b6a0 T XZip::unzGoToNextFile(XZip::unz_s*)
//0058cec0 T XZip::unzOpenInternal(XZip::LUFILE*)
//00587b20 T XZip::unzGetGlobalInfo(XZip::unz_s*, XZip::unz_global_info_s*)
//0058b740 T XZip::unzGoToFirstFile(XZip::unz_s*)
//0058a120 T XZip::unzlocal_getByte(XZip::LUFILE*, int*)
//0058a1c0 T XZip::unzlocal_getLong(XZip::LUFILE*, unsigned long*)
//00592d20 T XZip::CreateZipInternal(void*, unsigned int, unsigned long, char const*)
//00587bf0 T XZip::FormatZipMessageU(unsigned long, char*, unsigned int)
//0058f7a0 T XZip::FormatZipMessageZ(unsigned long, char*, unsigned int)
//0058c9a0 T XZip::UnzipItemInternal(XZip::HZIP__*, int, void*, unsigned int, unsigned long)
//005861e0 T XZip::inflate_codes_new(unsigned int, unsigned int, XZip::inflate_huft_s const*, XZip::inflate_huft_s const*, XZip::z_stream_s*)
//0065e364 S XZip::inflate_copyright
//0058a4a0 T XZip::unzlocal_getShort(XZip::LUFILE*, unsigned long*)
//005862f0 T XZip::inflate_blocks_new(XZip::z_stream_s*, unsigned long (*)(unsigned long, unsigned char const*, unsigned int), unsigned int)
//00586230 T XZip::inflate_codes_free(XZip::inflate_codes_state*, XZip::z_stream_s*)
//00586c20 T XZip::inflate_trees_bits(unsigned int*, unsigned int*, XZip::inflate_huft_s**, XZip::inflate_huft_s*, XZip::z_stream_s*)
//0058aec0 T XZip::unzOpenCurrentFile(XZip::unz_s*, char const*)
//0058a850 T XZip::unzReadCurrentFile(XZip::unz_s*, void*, unsigned int, bool*)
//005863e0 T XZip::inflate_blocks_free(XZip::inflate_blocks_state*, XZip::z_stream_s*)
//00586ed0 T XZip::inflate_trees_fixed(unsigned int*, unsigned int*, XZip::inflate_huft_s const**, XZip::inflate_huft_s const**, XZip::z_stream_s*)
//00589e60 T XZip::unzCloseCurrentFile(XZip::unz_s*)
//0058a650 T XZip::unzGetGlobalComment(XZip::unz_s*, char*, unsigned long)
//0058ba10 T XZip::dosdatetime2filetime(unsigned short, unsigned short)
//00592f00 T XZip::filetime2dosdatetime(long, unsigned short*, unsigned short*)
//00586250 T XZip::inflate_blocks_reset(XZip::inflate_blocks_state*, XZip::z_stream_s*, unsigned long*)
//00586d00 T XZip::inflate_trees_dynamic(unsigned int, unsigned int, unsigned int*, unsigned int*, unsigned int*, XZip::inflate_huft_s**, XZip::inflate_huft_s**, XZip::inflate_huft_s*, XZip::z_stream_s*)
//0058b7c0 T XZip::unzGetCurrentFileInfo(XZip::unz_s*, XZip::unz_file_info_s*, char*, unsigned long, void*, unsigned long, char*, unsigned long)
//0058a750 T XZip::unzGetLocalExtrafield(XZip::unz_s*, void*, unsigned int)
//005861c0 T XZip::LocalFileTimeToFileTime(long*, long*)
//00589de0 T XZip::unzStringFileNameCompare(char const*, char const*, int)
//00587b40 T XZip::unzlocal_DosDateToTmuDate(unsigned long, XZip::tm_unz_s*)
//0058cbe0 T XZip::unzlocal_SearchCentralDir(XZip::LUFILE*)
//00587ab0 T XZip::strcmpcasenosensitive_internal(char const*, char const*)
//0058b0e0 T XZip::unzlocal_GetCurrentFileInfoInternal(XZip::unz_s*, XZip::unz_file_info_s*, XZip::unz_file_info_internal_s*, char*, unsigned long, void*, unsigned long, char*, unsigned long)
//0058ac70 T XZip::unzlocal_CheckCurrentFileCoherencyHeader(XZip::unz_s*, unsigned int*, unsigned long*, unsigned int*)
//0058f586 T XZip::TZip::AddCentral()
//005932c2 T XZip::TZip::open_handle(__sFILE*, unsigned int)
//005934e2 T XZip::TZip::Add(char const*, void*, unsigned int, unsigned long)
//0058ff28 T XZip::TZip::read(char*, unsigned int)
//0058fde6 T XZip::TZip::Close()
//00590004 T XZip::TZip::oseek(unsigned int)
//0058ffde T XZip::TZip::sread(XZip::TState&, char*, unsigned int)
//00590072 T XZip::TZip::write(char const*, unsigned int)
//00592bfe T XZip::TZip::Create(void*, unsigned int, unsigned long)
//0058fd9a T XZip::TZip::iclose()
//00590216 T XZip::TZip::istore()
//00590284 T XZip::TZip::sflush(void*, char const*, unsigned int*)
//0058f69e T XZip::TZip::swrite(void*, char const*, unsigned int)
//0059297c T XZip::TZip::ideflate(XZip::zlist*)
//005930fc T XZip::TZip::open_dir()
//005931cc T XZip::TZip::open_mem(void*, unsigned int)
//0058f6ae T XZip::TZip::GetMemory(void**, unsigned long*)
//00593440 T XZip::TZip::open_file(char const*)
//00590700 T XZip::Trace(char const*, ...)
//0058f370 T XZip::crc32(unsigned long, unsigned char const*, unsigned long)
//0058d800 T XZip::Assert(XZip::TState&, bool, char const*)
//00593070 T XZip::GetNow(long*, unsigned short*, unsigned short*)
//00587ed6 T XZip::TUnzip::SetUnzipBaseDir(char const*)
//0058ba70 T XZip::TUnzip::Get(int, XZip::ZIPENTRY*)
//0058c144 T XZip::TUnzip::Find(char const*, bool, int*, XZip::ZIPENTRY*)
//0058d372 T XZip::TUnzip::Open(void*, unsigned int, unsigned long)
//00589f74 T XZip::TUnzip::Close()
//0058c428 T XZip::TUnzip::Unzip(int, void*, unsigned int, unsigned long)
//005906f0 T XZip::Tracec(bool, char const*, ...)
//00594230 T XZip::ZipAdd(XZip::HZIP__*, char const*, void*, unsigned int)
//005942b0 T XZip::ZipAdd(XZip::HZIP__*, char const*, char const*)
//0058f100 T XZip::putend(int, unsigned long, unsigned long, unsigned long, char*, unsigned int (*)(void*, char const*, unsigned int), void*)
//00587440 T XZip::ucrc32(unsigned long, unsigned char const*, unsigned int)
//00587bb0 T XZip::unzeof(XZip::unz_s*)
//005877e0 T XZip::zError(int)
//00587a70 T XZip::zcfree(void*, void*)
//0058d590 T XZip::OpenZip(char const*, char const*)
//0058d560 T XZip::OpenZip(void*, unsigned int, char const*)
//00587640 T XZip::adler32(unsigned long, unsigned char const*, unsigned int)
//0058db30 T XZip::bi_init(XZip::TState&, char*, unsigned int, int)
//00590e80 T XZip::ct_init(XZip::TState&, unsigned short*)
//00592600 T XZip::deflate(XZip::TState&)
//00589a10 T XZip::inflate(XZip::z_stream_s*, int)
//00590590 T XZip::lm_init(XZip::TState&, int, unsigned short*)
//0058d210 T XZip::lufopen(void*, unsigned int, unsigned long, unsigned long*)
//0058a0a0 T XZip::lufread(void*, unsigned long, unsigned long, XZip::LUFILE*)
//0058a5e0 T XZip::lufseek(XZip::LUFILE*, long, int)
//0058cb70 T XZip::luftell(XZip::LUFILE*)
//00587b90 T XZip::unztell(XZip::unz_s*)
//00587a50 T XZip::zcalloc(void*, unsigned int, unsigned int)
//005875c0 T XZip::zdecode(unsigned long*, char)
//0058f4f0 T XZip::zencode(unsigned long*, char)
//00590710 T XZip::ct_tally(XZip::TState&, int, int)
//00587fd0 T XZip::lufclose(XZip::LUFILE*)
//00587a90 T XZip::luferror(XZip::LUFILE*)
//0058e6b0 T XZip::putlocal(XZip::zlist*, unsigned int (*)(void*, char const*, unsigned int), void*)
//00589f20 T XZip::unzClose(XZip::unz_s*)
//00589ff0 T XZip::CloseZipU(XZip::HZIP__*)
//0058fe40 T XZip::CloseZipZ(XZip::HZIP__*)
//00592ea0 T XZip::CreateZip(char const*, char const*)
//00592e70 T XZip::CreateZip(void*, unsigned int, char const*)
//0058ca90 T XZip::UnzipItem(XZip::HZIP__*, int, char const*)
//0058ca10 T XZip::UnzipItem(XZip::HZIP__*, int, void*, unsigned int)
//0058e260 T XZip::bi_windup(XZip::TState&)
//00590db0 T XZip::gen_codes(XZip::TState&, XZip::ct_data*, int)
//005902c0 T XZip::lustricmp(char const*, char const*)
//0058d9a0 T XZip::scan_tree(XZip::TState&, XZip::ct_data*, int)
//0058db80 T XZip::send_bits(XZip::TState&, int, int)
//0058de30 T XZip::send_tree(XZip::TState&, XZip::ct_data*, int)
//0056d89a T Bootil::AutoBuffer::EnsureCapacity(unsigned int)
//0056da02 T Bootil::AutoBuffer::Clear()
//0056d938 T Bootil::AutoBuffer::AutoBuffer(int)
//0056da3e T Bootil::AutoBuffer::AutoBuffer(int)
//0056d9ca T Bootil::AutoBuffer::~AutoBuffer()
//0056d996 T Bootil::AutoBuffer::~AutoBuffer()
//0056da9c T Bootil::AutoBuffer::~AutoBuffer()
//0057351e T Bootil::Compression::Zip::File::ExtractFile(int, std::string const&)
//00573408 T Bootil::Compression::Zip::File::GetFileName(int)
//005732fe T Bootil::Compression::Zip::File::GetNumItems()
//00573836 T Bootil::Compression::Zip::File::EnsureWriter()
//00573440 T Bootil::Compression::Zip::File::RefreshFiles()
//0057391e T Bootil::Compression::Zip::File::WriteAndClose(std::string const&)
//0057386c T Bootil::Compression::Zip::File::WriteAndClose(Bootil::Buffer&)
//0057354c T Bootil::Compression::Zip::File::ExtractToFolder(std::string const&)
//005732d2 T Bootil::Compression::Zip::File::Init()
//005737f6 T Bootil::Compression::Zip::File::Close()
//005732e4 T Bootil::Compression::Zip::File::IsOpen()
//0057398c T Bootil::Compression::Zip::File::AddFile(std::string const&, std::string const&)
//00573af0 T Bootil::Compression::Zip::File::File(void*, unsigned int, std::string const&)
//00573b8a T Bootil::Compression::Zip::File::File(std::string const&, std::string const&)
//00573306 T Bootil::Compression::Zip::File::File()
//00573a5e T Bootil::Compression::Zip::File::File(void*, unsigned int, std::string const&)
//00573af6 T Bootil::Compression::Zip::File::File(std::string const&, std::string const&)
//00573336 T Bootil::Compression::Zip::File::File()
//00573390 T Bootil::Compression::GZip::Compress(void const*, unsigned int, Bootil::Buffer&)
//005749d0 T Bootil::Compression::LZMA::ExtractToFile(void const*, unsigned int, std::string const&, Bootil::Compression::ProgressCallback*)
//00574910 T Bootil::Compression::LZMA::PropsAreValid(unsigned char const*)
//00574970 T Bootil::Compression::LZMA::ExtractInThread(void const*, unsigned int, std::string const&)
//00575358 T Bootil::Compression::LZMA::ExtractionThread::OnProgress(float, unsigned int, unsigned int)
//0057532a T Bootil::Compression::LZMA::ExtractionThread::GetProgress()
//0057522a T Bootil::Compression::LZMA::ExtractionThread::Run()
//0057504c T Bootil::Compression::LZMA::ExtractionThread::Destroy()
//005752fe T Bootil::Compression::LZMA::ExtractionThread::Success()
//005752d2 T Bootil::Compression::LZMA::ExtractionThread::Finished()
//0057505c T Bootil::Compression::LZMA::ExtractionThread::ExtractionThread(void const*, unsigned int, std::string const&)
//005751ac T Bootil::Compression::LZMA::ExtractionThread::~ExtractionThread()
//00575136 T Bootil::Compression::LZMA::ExtractionThread::~ExtractionThread()
//00574eb0 T Bootil::Compression::LZMA::Extract(void const*, unsigned int, Bootil::Buffer&, Bootil::Compression::ProgressCallback*)
//005747f0 T Bootil::Compression::LZMA::Compress(void const*, unsigned int, Bootil::Buffer&, int, int)
//00573b90 T Bootil::Compression::FastLZ::ExtractInThread(void const*, unsigned int, unsigned int, std::string const&)
//00573e5e T Bootil::Compression::FastLZ::ExtractionThread::GetProgress()
//005745ba T Bootil::Compression::FastLZ::ExtractionThread::Run()
//00573e3c T Bootil::Compression::FastLZ::ExtractionThread::Destroy()
//00574756 T Bootil::Compression::FastLZ::ExtractionThread::Success()
//0057472a T Bootil::Compression::FastLZ::ExtractionThread::Finished()
//00574400 T Bootil::Compression::FastLZ::ExtractionThread::ExtractionThread(void const*, unsigned int, unsigned int, std::string const&)
//00574542 T Bootil::Compression::FastLZ::ExtractionThread::~ExtractionThread()
//005744d2 T Bootil::Compression::FastLZ::ExtractionThread::~ExtractionThread()
//005732b0 T Bootil::Compression::FastLZ::Is(void const*, unsigned int)
//00573bf0 T Bootil::Compression::FastLZ::Extract(void const*, unsigned int, Bootil::Buffer&)
//00573d10 T Bootil::Compression::FastLZ::Compress(void const*, unsigned int, Bootil::Buffer&)
//005628d0 T Bootil::IsShuttingDown()
//00568a20 T void Bootil::Data::Json::WriteValue<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&, Bootil::Data::TreeT<std::string> const&)
//00568ec0 T void Bootil::Data::Json::WriteValue<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&, Bootil::Data::TreeT<std::string> const&)
//00568cc0 T void Bootil::Data::Json::DoJsonExport<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&, Bootil::Data::TreeT<std::string> const&)
//00569160 T void Bootil::Data::Json::DoJsonExport<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&, Bootil::Data::TreeT<std::string> const&)
//00564b50 T Bootil::Data::Json::Export(Bootil::Data::TreeT<std::string> const&, std::string&, bool)
//005653c0 T Bootil::Data::Json::Import(Bootil::Data::TreeT<std::string>&, char const*)
//00564dc0 T Bootil::Data::Json::DoImport(Bootil::Data::TreeT<std::string>&, rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//005675f8 T Bootil::Data::TreeT<std::string>& Bootil::Data::TreeT<std::string>::SetChildVar<bool>(std::string, bool)
//00567668 T Bootil::Data::TreeT<std::string>& Bootil::Data::TreeT<std::string>::SetChildVar<double>(std::string, double)
//00567838 T Bootil::Data::TreeT<std::string>& Bootil::Data::TreeT<std::string>::SetChildVar<int>(std::string, int)
//00567394 T void Bootil::Data::TreeT<std::string>::Var<bool>(bool)
//005673fa T void Bootil::Data::TreeT<std::string>::Var<double>(double)
//005677d4 T void Bootil::Data::TreeT<std::string>::Var<int>(int)
//005674f6 T Bootil::Data::TreeT<std::string>::AddChild()
//00567584 T Bootil::Data::TreeT<std::string>::SetChild(std::string, std::string)
//0056775c T Bootil::Data::TreeT<std::string>::TreeT(Bootil::Data::TreeT<std::string> const&)
//00565576 T Bootil::Data::TreeT<std::string>::~TreeT()
//0056a4c0 T Bootil::File::GetTempDir()
//0056a880 T Bootil::File::RemoveFile(std::string const&)
//0056a900 T Bootil::File::CreateFolder(std::string const&, bool)
//0056aec0 T Bootil::File::RemoveFolder(std::string const&, bool)
//0056a6b0 T Bootil::File::GetTempFilename()
//0056b3c0 T Bootil::File::GetFilesInFolder(std::string const&, std::vector<std::string, std::allocator<std::string> >&, bool)
//0056a130 T Bootil::File::RelativeToAbsolute(std::string const&)
//0056ae20 T Bootil::File::CRC(std::string const&)
//0056a170 T Bootil::File::Copy(std::string const&, std::string const&)
//0056aeb0 T Bootil::File::Find(std::vector<std::string, std::allocator<std::string> >*, std::vector<std::string, std::allocator<std::string> >*, std::string const&, bool)
//0056ace0 T Bootil::File::Read(std::string const&, Bootil::Buffer&)
//0056a390 T Bootil::File::Read(std::string const&, std::string&)
//0056ac00 T Bootil::File::Size(std::string const&)
//0056ac30 T Bootil::File::Write(std::string const&, Bootil::Buffer const&)
//0056a2f0 T Bootil::File::Write(std::string const&, std::string const&)
//0056a250 T Bootil::File::Append(std::string const&, std::string const&)
//0056abd0 T Bootil::File::Exists(std::string const&)
//0056a8b0 T Bootil::File::IsFolder(std::string const&)
//0056db70 T Bootil::Math::Random::Int(int, int)
//0056db40 T Bootil::Math::Random::Bool()
//0056db90 T Bootil::Math::Random::Seed(unsigned int)
//00569ab0 T Bootil::Debug::PopupMessage(char const*, ...)
//00569600 T Bootil::Debug::SuppressPopups(bool)
//00569660 T Bootil::Debug::Crash::SetupCallback()
//00569620 T Bootil::Debug::Crash::SetMinidumpFunction(void (*)(unsigned int, void*))
//00569640 T Bootil::Debug::Crash::FunctionCalledOnCrash(unsigned int, void*)
//00569720 T Bootil::Debug::Crash::DoCrash()
//00569e40 T Bootil::Debug::Internal::DoAssert(char const*, unsigned int, char const*, char const*, char const*, ...)
//00569ff8 T Bootil::Debug::IListener::Add(Bootil::Debug::IListener*)
//00569f50 T Bootil::Debug::IListener::Remove(Bootil::Debug::IListener*)
//00569670 T Bootil::Debug::LastError()
//00569580 T Bootil::Debug::Listeners()
//00570700 T std::string Bootil::ToStr<float>(float const&)
//00570780 T std::string Bootil::ToStr<int>(int const&)
//00570740 T std::string Bootil::ToStr<unsigned int>(unsigned int const&)
//005706c0 T std::string Bootil::ToStr<unsigned long long>(unsigned long long const&)
//0056d554 T Bootil::Buffer::GetCurrent()
//0056d6a0 T Bootil::Buffer::ReadString()
//0056d572 T Bootil::Buffer::SetWritten(unsigned int)
//0056d828 T Bootil::Buffer::WriteBuffer(Bootil::Buffer const&)
//0056d762 T Bootil::Buffer::WriteString(std::string const&, bool)
//0056d48c T Bootil::Buffer::EnsureCapacity(unsigned int)
//0056d4ce T Bootil::Buffer::SetExternalBuffer(void*, int)
//0056d65a T Bootil::Buffer::Read(void*, int)
//0056d478 T Bootil::Buffer::Clear()
//0056d70a T Bootil::Buffer::Write(void const*, unsigned int)
//0056d560 T Bootil::Buffer::SetPos(unsigned int)
//0056d5b0 T Bootil::Buffer::MoveMem(unsigned int, unsigned int, unsigned int)
//0056d5f8 T Bootil::Buffer::TrimLeft(unsigned int)
//0056d4fc T Bootil::Buffer::Buffer(void*, int)
//0056d49e T Bootil::Buffer::Buffer()
//0056d3e0 T Bootil::Buffer::Buffer(void*, int)
//0056d41c T Bootil::Buffer::Buffer()
//0056d460 T Bootil::Buffer::~Buffer()
//0056d44c T Bootil::Buffer::~Buffer()
//0056d886 T Bootil::Buffer::~Buffer()
//005754c0 T Bootil::Hasher::MD5::Easy(void const*, unsigned int)
//00575500 T Bootil::Hasher::MD5::String(std::string const&)
//00575560 T Bootil::Hasher::CRC32::Add(unsigned long&, void const*, unsigned int)
//00575550 T Bootil::Hasher::CRC32::End(unsigned long&)
//00575460 T Bootil::Hasher::CRC32::Easy(void const*, unsigned int, unsigned long)
//00575570 T Bootil::Hasher::CRC32::Start(unsigned long)
//00575580 T Bootil::Hasher::CRC32::String(std::string const&, unsigned long)
//00569740 T Bootil::Output::Msg(char const*, ...)
//00569be0 T Bootil::Output::Error(char const*, ...)
//00569900 T Bootil::Output::Warning(char const*, ...)
//00572b60 T Bootil::String::ToCharBuffer(std::string const&, char*, int)
//00572520 T Bootil::String::To::Int(std::string const&)
//00572560 T Bootil::String::To::Bool(std::string const&)
//005726c0 T Bootil::String::To::Float(std::string const&)
//00572680 T Bootil::String::To::Double(std::string const&)
//00572710 T Bootil::String::To::Floats(std::string const&, float*, int)
//005728e0 T Bootil::String::To::UInt64(std::string const&)
//005702a0 T Bootil::String::File::FixSlashes(std::string&, std::string const&, std::string const&)
//00570030 T Bootil::String::File::LastDirectory(std::string&)
//0056ff80 T Bootil::String::File::StripFilename(std::string&)
//0056fca0 T Bootil::String::File::IsAbsolutePath(std::string const&)
//0056ff00 T Bootil::String::File::StripExtension(std::string&)
//0056fde0 T Bootil::String::File::UpOneDirectory(std::string&)
//00570160 T Bootil::String::File::ExtractFilename(std::string&)
//00570200 T Bootil::String::File::IsFileExtension(std::string const&, std::string const&)
//0056fd20 T Bootil::String::File::GetFileExtension(std::string const&)
//005702b0 T Bootil::String::File::ToWindowsSlashes(std::string&)
//0056faa0 T Bootil::String::File::CleanPath(std::string&)
//00572080 T Bootil::String::Test::StartsWith(std::string const&, std::string const&)
//00572160 T Bootil::String::Test::ContainsAny(std::string const&, std::string const&)
//00572110 T Bootil::String::Test::ContainsChar(std::string const&, char)
//005721d0 T Bootil::String::Test::ContainsOnly(std::string const&, std::string const&)
//00572380 T Bootil::String::Test::Contains(std::string const&, std::string const&, bool)
//005720b0 T Bootil::String::Test::EndsWith(std::string const&, std::string const&)
//005722b0 T Bootil::String::Test::ICompare(std::string const&, std::string const&)
//00572260 T Bootil::String::Test::IsNumber(std::string const&)
//00572340 T Bootil::String::Test::Wildcard(std::string const&, std::string const&)
//00572bc0 T Bootil::String::Util::TrimBefore(std::string&, std::string const&, bool)
//00572d80 T Bootil::String::Util::SplitLength(std::string const&, int, std::vector<std::string, std::allocator<std::string> >&)
//00572980 T Bootil::String::Util::FindAndReplace(std::string&, std::string const&, std::string const&)
//00572a80 T Bootil::String::Util::Trim(std::string&, std::string const&)
//00572af0 T Bootil::String::Util::Count(std::string const&, char)
//00572e70 T Bootil::String::Util::Split(std::string const&, std::string const&, std::vector<std::string, std::allocator<std::string> >&)
//00572a40 T Bootil::String::Util::TrimLeft(std::string&, std::string const&)
//00572ca0 T Bootil::String::Util::TrimAfter(std::string&, std::string const&, bool)
//00572a00 T Bootil::String::Util::TrimRight(std::string&, std::string const&)
//0056dc00 T Bootil::String::Lower(std::string&)
//0056dc50 T Bootil::String::Upper(std::string&)
//0056f4b0 T Bootil::String::Decode::Base64(std::string&)
//0056f300 T Bootil::String::Encode::URL(std::string&)
//0056f270 T Bootil::String::Encode::Base64(std::string&)
//00570900 T Bootil::String::Format::NiceDouble(double)
//00570830 T Bootil::String::Format::BinaryToHex(void const*, unsigned int)
//00570cb0 T Bootil::String::Format::MemoryPerSecond(int)
//00570b30 T Bootil::String::Format::CommaSeperatedInt(int)
//005707c0 T Bootil::String::Format::Int(int)
//00570520 T Bootil::String::Format::Time(std::string const&, unsigned int)
//00570640 T Bootil::String::Format::Print(char const*, ...)
//005705c0 T Bootil::String::Format::Print(wchar_t const*, ...)
//00570470 T Bootil::String::Format::YesNo(bool)
//00570c00 T Bootil::String::Format::Memory(int)
//005707f0 T Bootil::String::Format::UInt64(unsigned long long)
//00570dd0 T Bootil::String::Format::VarArgs(char const*, char*)
//005703f0 T Bootil::String::Format::VarArgs(wchar_t const*, char*)
//00570a10 T Bootil::String::Format::NiceFloat(float)
//0056dd90 T Bootil::String::Random(int, bool, bool, bool, bool)
//0056f0b0 T Bootil::String::Convert::ToWide(std::string const&)
//0056efe0 T Bootil::String::Convert::FromWide(std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&)
//00570ea0 T Bootil::String::Sanitize::Javascript(std::string&)
//00571200 T Bootil::String::Sanitize::Filename(std::string&)
//0056dce0 T Bootil::String::SortList(std::vector<std::string, std::allocator<std::string> >&, bool)
//005629d0 T Bootil::Console::BGColorPop()
//00562a30 T Bootil::Console::FGColorPop()
//00562c00 T Bootil::Console::WaitForKey()
//00562c20 T Bootil::Console::BGColorPush(Bootil::Console::ConsoleColor)
//00562cf0 T Bootil::Console::FGColorPush(Bootil::Console::ConsoleColor)
//00562950 T Bootil::Console::UpdateColor()
//00562970 T Bootil::Console::PosPushRelative(int, int)
//00562990 T Bootil::Console::SetCursorVisible(bool)
//005629a0 T Bootil::Console::Cls()
//00562dc0 T Bootil::Console::Msg(Bootil::Console::ConsoleColor, Bootil::Console::ConsoleColor, char const*, ...)
//00563fb0 T Bootil::Console::Input::PostOutput()
//00898fa4 S Bootil::Console::Input::m_CaretPos
//00564130 T Bootil::Console::Input::OnBackspace()
//00563b00 T Bootil::Console::Input::GetLineInProgress()
//00563af0 T Bootil::Console::Input::Plat_GetConsoleCharNonBlocking()
//00563fe0 T Bootil::Console::Input::Cycle()
//00563b30 T Bootil::Console::Input::Flush()
//005641d0 T Bootil::Console::Input::OnLeft()
//00563ff0 T Bootil::Console::Input::GetLine()
//00564190 T Bootil::Console::Input::OnRight()
//00898fc0 S Bootil::Console::Input::m_Lines
//00563dc0 T Bootil::Console::Input::DrawLine()
//00563cd0 T Bootil::Console::Input::OnReturn()
//00563bd0 T Bootil::Console::Input::ClearLine()
//00563c40 T Bootil::Console::Input::PreOutput()
//00898fa0 S Bootil::Console::Input::m_strLine
//00562980 T Bootil::Console::PosPop()
//00562960 T Bootil::Console::PosPush(int, int)
//005628b0 T Bootil::Startup()
//0056cde0 T Bootil::Threads::RunFunction(void*)
//0056ce00 T Bootil::Threads::RunFunctionThenDestroyThread(void*)
//0056cc68 T Bootil::Threads::Mutex::Lock()
//0056cc50 T Bootil::Threads::Mutex::Unlock()
//0056cc30 T Bootil::Threads::Mutex::TryLock()
//0056ccdc T Bootil::Threads::Mutex::Mutex()
//0056cbc0 T Bootil::Threads::Mutex::Mutex()
//0056cc80 T Bootil::Threads::Mutex::~Mutex()
//0056ccae T Bootil::Threads::Mutex::~Mutex()
//0056cf02 T Bootil::Threads::Thread::SetClosing(bool)
//0056cd70 T Bootil::Threads::Thread::RunInThread(void*)
//0056cfc0 T Bootil::Threads::Thread::WantsToClose()
//0056d04c T Bootil::Threads::Thread::StartInThread()
//00575020 T Bootil::Threads::Thread::OnThreadFinished()
//0056ce50 T Bootil::Threads::Thread::StartInThreadAndDestroy()
//0056ce9c T Bootil::Threads::Thread::StartInThreadAndDetatch()
//0056cf2e T Bootil::Threads::Thread::Join()
//0056cee8 T Bootil::Threads::Thread::Lock()
//0056d018 T Bootil::Threads::Thread::Unlock()
//0056cfec T Bootil::Threads::Thread::Running()
//0056d032 T Bootil::Threads::Thread::TryLock()
//0056d328 T Bootil::Threads::Thread::Thread()
//0056d35c T Bootil::Threads::Thread::Thread()
//0056d0ba T Bootil::Threads::Thread::~Thread()
//0056d18c T Bootil::Threads::Thread::~Thread()
//0056d25a T Bootil::Threads::Thread::~Thread()
//0056c350 T Bootil::Platform::CurrentDir()
//0056c220 T Bootil::Platform::GetKeyChar()
//0056bf10 T Bootil::Platform::LibraryLoad(std::string const&)
//0056bef0 T Bootil::Platform::OpenWebpage(std::string const&)
//0056c140 T Bootil::Platform::ProgramName()
//0056bf60 T Bootil::Platform::Architecture()
//0056beb0 T Bootil::Platform::DesktopWidth()
//0056c240 T Bootil::Platform::IsKeyPressed()
//0056bf30 T Bootil::Platform::LibraryClose(void*)
//0056c020 T Bootil::Platform::PlatformName()
//0056bf00 T Bootil::Platform::StartProcess(std::string const&, bool)
//0056c080 T Bootil::Platform::TemporaryDir()
//0056bec0 T Bootil::Platform::DesktopHeight()
//0056c0e0 T Bootil::Platform::ProgramFolder()
//0056bee0 T Bootil::Platform::DebuggerOutput(std::string const&)
//0056ca20 T Bootil::Platform::CurrentUserName()
//0056c1a0 T Bootil::Platform::FullProgramName()
//0056bf40 T Bootil::Platform::GetAbsolutePath(std::string const&)
//0056c2d0 T Bootil::Platform::GetMilliseconds()
//0056bea0 T Bootil::Platform::SetupAssociation(std::string)
//0056cab0 T Bootil::Platform::FormatSystemError(unsigned long)
//0056bfc0 T Bootil::Platform::PlatformNameShort()
//0056c3e0 T Bootil::Platform::TemporaryFilename()
//0056bf20 T Bootil::Platform::GetFunctionAddress(void*, std::string const&)
//0056bed0 T Bootil::Platform::Popup(std::string const&, std::string const&)
//0056c3c0 T Bootil::Platform::Sleep(unsigned int)
//0056c5b0 T Bootil::Platform::FindFiles(std::vector<std::string, std::allocator<std::string> >*, std::vector<std::string, std::allocator<std::string> >*, std::string const&, bool)
//0056cb10 T Bootil::Platform::LastError()
//005628c0 T Bootil::Shutdown()
//00562140 T tthread::this_thread::get_id()
//00561dd0 T tthread::thread::wrapper_function(void*)
//005621d6 T tthread::thread::hardware_concurrency()
//00562228 T tthread::thread::join()
//005621ee T tthread::thread::detach()
//005623e0 T tthread::thread::thread(void (*)(void*), void*)
//0056230e T tthread::thread::thread(void (*)(void*), void*)
//0056226a T tthread::thread::~thread()
//005622bc T tthread::thread::~thread()
//000d3c80 T Awesomium::WebViewListener::Load::~Load()
//000d3c70 T Awesomium::WebViewListener::Load::~Load()
//000d3ca0 T Awesomium::WebViewListener::View::~View()
//000d3c90 T Awesomium::WebViewListener::View::~View()
//005684ae T rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StartArray()
//00568638 T rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StartObject()
//005681c4 T rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::PrettyPrefix(rapidjson::Type)
//005687c2 T rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::EndArray(unsigned int)
//005688ee T rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::EndObject(unsigned int)
//005669f4 T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseArray<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//0056596e T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseFalse<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//00566c76 T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseValue<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//00565a40 T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseNumber<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//00566d8a T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseObject<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//0056648c T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseStringToStream<0u, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream>(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream&)
//00567120 T bool rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::Parse<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//005657ea T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseNull<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//005658ac T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseTrue<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//0056725c T rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >& rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseStream<0u, rapidjson::UTF8<char>, rapidjson::GenericStringStream<rapidjson::UTF8<char> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&)
//0056689a T rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::String(char const*, unsigned int, bool)
//005656ea T rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc(void*, unsigned long, unsigned long)
//00566290 T void rapidjson::UTF8<char>::Encode<rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream>(rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream&, unsigned int)
//0056802c T rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StartArray()
//005680f8 T rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StartObject()
//005678a4 T rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::WriteString(char const*, unsigned int)
//00567f52 T rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::Prefix(rapidjson::Type)
//00567bfa T rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::WriteInt(int)
//00567d04 T rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::WriteBool(bool)
//005655d0 T rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::Stack(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>*, unsigned long)
//0056949a T bool Bootil::Data::TreeT<std::string>::StringToVar<bool>(std::string const&) const
//00569460 T double Bootil::Data::TreeT<std::string>::StringToVar<double>(std::string const&) const
//005694ea T float Bootil::Data::TreeT<std::string>::StringToVar<float>(std::string const&) const
//005694b4 T int Bootil::Data::TreeT<std::string>::StringToVar<int>(std::string const&) const
//005693de T std::string Bootil::Data::TreeT<std::string>::VarToString<bool>(bool) const
//00569476 T std::string Bootil::Data::TreeT<std::string>::VarToString<double>(double) const
//00569500 T std::string Bootil::Data::TreeT<std::string>::VarToString<float>(float) const
//005694ca T std::string Bootil::Data::TreeT<std::string>::VarToString<int>(int) const
//005693c0 T unsigned char Bootil::Data::TreeT<std::string>::VarID<std::string>() const
//005693d2 T unsigned char Bootil::Data::TreeT<std::string>::VarID<bool>() const
//005693d8 T unsigned char Bootil::Data::TreeT<std::string>::VarID<double>() const
//005693c6 T unsigned char Bootil::Data::TreeT<std::string>::VarID<float>() const
//005693cc T unsigned char Bootil::Data::TreeT<std::string>::VarID<int>() const
//0056d57e T Bootil::Buffer::GetWritten() const
//0056d540 T Bootil::Buffer::GetPos() const
//0056d548 T Bootil::Buffer::GetBase(unsigned int) const
//0056d538 T Bootil::Buffer::GetSize() const
//00562192 T tthread::thread::get_id() const
//00562160 T tthread::thread::joinable() const
//0056b9a0 T char* std::string::_S_construct<std::istreambuf_iterator<char, std::char_traits<char> > >(std::istreambuf_iterator<char, std::char_traits<char> >, std::istreambuf_iterator<char, std::char_traits<char> >, std::allocator<char> const&, std::input_iterator_tag)
//00565530 T std::_List_base<Bootil::Data::TreeT<std::string>, std::allocator<Bootil::Data::TreeT<std::string> > >::~_List_base()
//005634a0 T std::_Deque_base<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> >::_M_create_nodes(Bootil::Console::ConsoleColor**, Bootil::Console::ConsoleColor**)
//00563524 T std::_Deque_base<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> >::_M_initialize_map(unsigned long)
//00563718 T std::_Deque_base<Bootil::Console::PosInfo, std::allocator<Bootil::Console::PosInfo> >::_M_create_nodes(Bootil::Console::PosInfo**, Bootil::Console::PosInfo**)
//00563794 T std::_Deque_base<Bootil::Console::PosInfo, std::allocator<Bootil::Console::PosInfo> >::_M_initialize_map(unsigned long)
//0056453a T std::_Deque_base<std::string, std::allocator<std::string> >::_M_create_nodes(std::string**, std::string**)
//005645b4 T std::_Deque_base<std::string, std::allocator<std::string> >::_M_initialize_map(unsigned long)
//00574278 T std::map<int, Bootil::Compression::Zip::File::Entry, std::less<int>, std::allocator<std::pair<int const, Bootil::Compression::Zip::File::Entry> > >::operator[](int const&)
//00567462 T std::list<Bootil::Data::TreeT<std::string>, std::allocator<Bootil::Data::TreeT<std::string> > >::_M_create_node(Bootil::Data::TreeT<std::string> const&)
//005674ca T std::list<Bootil::Data::TreeT<std::string>, std::allocator<Bootil::Data::TreeT<std::string> > >::push_back(Bootil::Data::TreeT<std::string> const&)
//005676d6 T std::list<Bootil::Data::TreeT<std::string>, std::allocator<Bootil::Data::TreeT<std::string> > >::list(std::list<Bootil::Data::TreeT<std::string>, std::allocator<Bootil::Data::TreeT<std::string> > > const&)
//00563992 T std::deque<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> >::_M_reallocate_map(unsigned long, bool)
//0056361c T std::deque<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> >::deque(std::deque<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> > const&)
//0056388c T std::deque<Bootil::Console::PosInfo, std::allocator<Bootil::Console::PosInfo> >::deque(std::deque<Bootil::Console::PosInfo, std::allocator<Bootil::Console::PosInfo> > const&)
//00564a66 T std::deque<std::string, std::allocator<std::string> >::_M_push_back_aux(std::string const&)
//00564916 T std::deque<std::string, std::allocator<std::string> >::_M_reallocate_map(unsigned long, bool)
//00564330 T std::deque<std::string, std::allocator<std::string> >::_M_destroy_data_aux(std::_Deque_iterator<std::string, std::string&, std::string*>, std::_Deque_iterator<std::string, std::string&, std::string*>)
//005646ac T std::deque<std::string, std::allocator<std::string> >::deque(std::deque<std::string, std::allocator<std::string> > const&)
//0056481e T std::deque<std::string, std::allocator<std::string> >::~deque()
//00573070 T std::vector<std::string, std::allocator<std::string> >::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, std::string const&)
//00562822 T std::_Rb_tree<_opaque_pthread_t*, std::pair<_opaque_pthread_t* const, unsigned long>, std::_Select1st<std::pair<_opaque_pthread_t* const, unsigned long> >, std::less<_opaque_pthread_t*>, std::allocator<std::pair<_opaque_pthread_t* const, unsigned long> > >::_M_destroy_node(std::_Rb_tree_node<std::pair<_opaque_pthread_t* const, unsigned long> >*)
//005623f8 T std::_Rb_tree<_opaque_pthread_t*, std::pair<_opaque_pthread_t* const, unsigned long>, std::_Select1st<std::pair<_opaque_pthread_t* const, unsigned long> >, std::less<_opaque_pthread_t*>, std::allocator<std::pair<_opaque_pthread_t* const, unsigned long> > >::_M_insert_unique(std::pair<_opaque_pthread_t* const, unsigned long> const&)
//0056252e T std::_Rb_tree<_opaque_pthread_t*, std::pair<_opaque_pthread_t* const, unsigned long>, std::_Select1st<std::pair<_opaque_pthread_t* const, unsigned long> >, std::less<_opaque_pthread_t*>, std::allocator<std::pair<_opaque_pthread_t* const, unsigned long> > >::_M_insert_unique(std::_Rb_tree_iterator<std::pair<_opaque_pthread_t* const, unsigned long> >, std::pair<_opaque_pthread_t* const, unsigned long> const&)
//005623f0 T std::_Rb_tree<_opaque_pthread_t*, std::pair<_opaque_pthread_t* const, unsigned long>, std::_Select1st<std::pair<_opaque_pthread_t* const, unsigned long> >, std::less<_opaque_pthread_t*>, std::allocator<std::pair<_opaque_pthread_t* const, unsigned long> > >::_S_left(std::_Rb_tree_node_base*)
//00562838 T std::_Rb_tree<_opaque_pthread_t*, std::pair<_opaque_pthread_t* const, unsigned long>, std::_Select1st<std::pair<_opaque_pthread_t* const, unsigned long> >, std::less<_opaque_pthread_t*>, std::allocator<std::pair<_opaque_pthread_t* const, unsigned long> > >::_M_erase(std::_Rb_tree_node<std::pair<_opaque_pthread_t* const, unsigned long> >*)
//00573e78 T std::_Rb_tree<int, std::pair<int const, Bootil::Compression::Zip::File::Entry>, std::_Select1st<std::pair<int const, Bootil::Compression::Zip::File::Entry> >, std::less<int>, std::allocator<std::pair<int const, Bootil::Compression::Zip::File::Entry> > >::_M_create_node(std::pair<int const, Bootil::Compression::Zip::File::Entry> const&)
//00574346 T std::_Rb_tree<int, std::pair<int const, Bootil::Compression::Zip::File::Entry>, std::_Select1st<std::pair<int const, Bootil::Compression::Zip::File::Entry> >, std::less<int>, std::allocator<std::pair<int const, Bootil::Compression::Zip::File::Entry> > >::_M_destroy_node(std::_Rb_tree_node<std::pair<int const, Bootil::Compression::Zip::File::Entry> >*)
//00573ef2 T std::_Rb_tree<int, std::pair<int const, Bootil::Compression::Zip::File::Entry>, std::_Select1st<std::pair<int const, Bootil::Compression::Zip::File::Entry> >, std::less<int>, std::allocator<std::pair<int const, Bootil::Compression::Zip::File::Entry> > >::_M_insert_unique(std::pair<int const, Bootil::Compression::Zip::File::Entry> const&)
//00574008 T std::_Rb_tree<int, std::pair<int const, Bootil::Compression::Zip::File::Entry>, std::_Select1st<std::pair<int const, Bootil::Compression::Zip::File::Entry> >, std::less<int>, std::allocator<std::pair<int const, Bootil::Compression::Zip::File::Entry> > >::_M_insert_unique(std::_Rb_tree_iterator<std::pair<int const, Bootil::Compression::Zip::File::Entry> >, std::pair<int const, Bootil::Compression::Zip::File::Entry> const&)
//00573e70 T std::_Rb_tree<int, std::pair<int const, Bootil::Compression::Zip::File::Entry>, std::_Select1st<std::pair<int const, Bootil::Compression::Zip::File::Entry> >, std::less<int>, std::allocator<std::pair<int const, Bootil::Compression::Zip::File::Entry> > >::_S_left(std::_Rb_tree_node_base*)
//00574372 T std::_Rb_tree<int, std::pair<int const, Bootil::Compression::Zip::File::Entry>, std::_Select1st<std::pair<int const, Bootil::Compression::Zip::File::Entry> >, std::less<int>, std::allocator<std::pair<int const, Bootil::Compression::Zip::File::Entry> > >::_M_erase(std::_Rb_tree_node<std::pair<int const, Bootil::Compression::Zip::File::Entry> >*)
//0056e870 T void std::__adjust_heap<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, int, std::string>(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, int, int, std::string)
//0056df00 T void std::__adjust_heap<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, int, std::string>(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, int, int, std::string)
//0056ea50 T void std::__heap_select<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//0056e120 T void std::__heap_select<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//0056ee60 T void std::__insertion_sort<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//0056e610 T void std::__insertion_sort<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//0056ebf0 T void std::__introsort_loop<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, int>(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, int)
//0056e310 T void std::__introsort_loop<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, int>(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, int)
//0056b910 T std::string* std::__uninitialized_copy_aux<std::string*, std::string*>(std::string*, std::string*, std::string*, std::__false_type)
//00564410 T std::_Deque_iterator<std::string, std::string&, std::string*> std::__uninitialized_copy_aux<std::_Deque_iterator<std::string, std::string const&, std::string const*>, std::_Deque_iterator<std::string, std::string&, std::string*> >(std::_Deque_iterator<std::string, std::string const&, std::string const*>, std::_Deque_iterator<std::string, std::string const&, std::string const*>, std::_Deque_iterator<std::string, std::string&, std::string*>, std::__false_type)
//0056eda0 T void std::__unguarded_insertion_sort<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//0056e550 T void std::__unguarded_insertion_sort<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//0056e7b0 T void std::sort<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//0056eb40 T void std::pop_heap<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//0056e250 T void std::pop_heap<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//0056e9a0 T void std::make_heap<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//0056e060 T void std::make_heap<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//0083ed50 S typeinfo for CBaseHudChat
//007e7090 S typeinfo for C_BaseEntity
//007c6828 D typeinfo for stlencoders::decode_error
//007c6850 D typeinfo for stlencoders::invalid_length
//007c6878 D typeinfo for stlencoders::invalid_character
//00870ce0 S typeinfo for vgui::Panel
//0087d2d8 S typeinfo for Bootil::AutoBuffer
//007c6950 D typeinfo for Bootil::Compression::ProgressCallback
//007c6938 D typeinfo for Bootil::Compression::Job
//007c69c0 D typeinfo for Bootil::Compression::LZMA::ExtractionThread
//007c68e0 D typeinfo for Bootil::Compression::FastLZ::ExtractionThread
//0087d2b8 S typeinfo for Bootil::Buffer
//0087d298 S typeinfo for Bootil::Threads::Thread
//007a0ce0 D typeinfo for Awesomium::WebViewListener::Load
//007a0cd0 D typeinfo for Awesomium::WebViewListener::View
//006bc2c4 S typeinfo name for CBaseHudChat
//006b8c50 S typeinfo name for C_BaseEntity
//006c4940 S typeinfo name for stlencoders::decode_error
//006c4960 S typeinfo name for stlencoders::invalid_length
//006c4980 S typeinfo name for stlencoders::invalid_character
//006c2894 S typeinfo name for vgui::Panel
//0065dc90 S typeinfo name for Bootil::AutoBuffer
//006c4a0c S typeinfo name for Bootil::Compression::ProgressCallback
//006c49f0 S typeinfo name for Bootil::Compression::Job
//006c4a38 S typeinfo name for Bootil::Compression::LZMA::ExtractionThread
//006c49bc S typeinfo name for Bootil::Compression::FastLZ::ExtractionThread
//0065dc70 S typeinfo name for Bootil::Buffer
//0065dbf0 S typeinfo name for Bootil::Threads::Thread
//006b7060 S typeinfo name for Awesomium::WebViewListener::Load
//006b7010 S typeinfo name for Awesomium::WebViewListener::View
//007c6810 D vtable for stlencoders::decode_error
//007c6838 D vtable for stlencoders::invalid_length
//007c6860 D vtable for stlencoders::invalid_character
//0087d2c0 S vtable for Bootil::AutoBuffer
//007c6940 D vtable for Bootil::Compression::ProgressCallback
//007c6920 D vtable for Bootil::Compression::Job
//007c6960 D vtable for Bootil::Compression::LZMA::ExtractionThread
//007c68a0 D vtable for Bootil::Compression::FastLZ::ExtractionThread
//0087d2a0 S vtable for Bootil::Buffer
//0087d280 S vtable for Bootil::Threads::Thread
//007a0d50 D vtable for Awesomium::WebViewListener::Load
//007a0d70 D vtable for Awesomium::WebViewListener::View
//005753f0 T non-virtual thunk to Bootil::Compression::LZMA::ExtractionThread::GetProgress()
//00575030 T non-virtual thunk to Bootil::Compression::LZMA::ExtractionThread::Destroy()
//005753c0 T non-virtual thunk to Bootil::Compression::LZMA::ExtractionThread::Success()
//00575390 T non-virtual thunk to Bootil::Compression::LZMA::ExtractionThread::Finished()
//00573e50 T non-virtual thunk to Bootil::Compression::FastLZ::ExtractionThread::GetProgress()
//00573e20 T non-virtual thunk to Bootil::Compression::FastLZ::ExtractionThread::Destroy()
//005747c0 T non-virtual thunk to Bootil::Compression::FastLZ::ExtractionThread::Success()
//00574790 T non-virtual thunk to Bootil::Compression::FastLZ::ExtractionThread::Finished()
//00575420 T non-virtual thunk to Bootil::Compression::LZMA::ExtractionThread::OnProgress(float, unsigned int, unsigned int)
//006c4840 S unsigned char const& stlencoders::lookup<stlencoders::detail::base64_table, unsigned char>(char)::table
//0079a440 D CFmtStrN<256>::CFmtStrN(char const*, ...)::scAsserted
//006c4700 S __ZZN9rapidjson12GenericValueINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEEC4ENS_4TypeEE12defaultFlags
//006c4600 S void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseStringToStream<0u, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream>(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream&)::escape
//006c4720 S rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::WriteString(char const*, unsigned int)::escape
//006c4820 S rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::WriteString(char const*, unsigned int)::hexDigits
//006c32a0 S rapidjson::internal::Pow10(int)::e
//006c6b80 S __dist_code
//006c7400 S __length_code
//005856b0 T __tr_align
//005857f0 T __tr_flush_bits
//005859f0 T __tr_flush_block
//00584160 T __tr_init
//00585870 T __tr_stored_block
//00584970 T __tr_tally
//00580360 T _adler32
//00580600 T _adler32_combine
//005806c0 T _adler32_combine64
//00580850 T _compress
//00580780 T _compress2
//00580830 T _compressBound
//00580910 T _crc32
//00580e10 T _crc32_combine
//00580e30 T _crc32_combine64
//00892108 S _cvar
//00582810 T _deflate
//00580f10 T _deflateBound
//005813e0 T _deflateCopy
//00581010 T _deflateEnd
//00583e80 T _deflateInit2_
//00584110 T _deflateInit_
//00583b20 T _deflateParams
//00580e80 T _deflatePending
//00583c20 T _deflatePrime
//00583da0 T _deflateReset
//00583cc0 T _deflateResetKeep
//00582650 T _deflateSetDictionary
//00580e50 T _deflateSetHeader
//00580ec0 T _deflateTune
//0065dd64 S _deflate_copyright
//00575620 T _fastlz_compress
//00575db0 T _fastlz_compress_level
//00575df0 T _fastlz_decompress
//00580900 T _get_crc_table
//00898fe8 S _seeder
//005b6d20 T _sqlite3_aggregate_context
//005a04a0 T _sqlite3_aggregate_count
//005be650 T _sqlite3_auto_extension
//005d4e90 T _sqlite3_backup_finish
//005d51f0 T _sqlite3_backup_init
//005a00b0 T _sqlite3_backup_pagecount
//005a00a0 T _sqlite3_backup_remaining
//005d2350 T _sqlite3_backup_step
//005b6da0 T _sqlite3_bind_blob
//005b6de0 T _sqlite3_bind_double
//005b6e80 T _sqlite3_bind_int
//005b6eb0 T _sqlite3_bind_int64
//005b6f80 T _sqlite3_bind_null
//005a0720 T _sqlite3_bind_parameter_count
//005b6fc0 T _sqlite3_bind_parameter_index
//005a0730 T _sqlite3_bind_parameter_name
//005b7010 T _sqlite3_bind_text
//005b7050 T _sqlite3_bind_text16
//005b7090 T _sqlite3_bind_value
//005bae90 T _sqlite3_bind_zeroblob
//005a0850 T _sqlite3_blob_bytes
//005baf80 T _sqlite3_blob_close
//005bb010 T _sqlite3_blob_open
//005bbd10 T _sqlite3_blob_read
//005bbec0 T _sqlite3_blob_write
//005aa600 T _sqlite3_busy_handler
//005aa6e0 T _sqlite3_busy_timeout
//005aa540 T _sqlite3_changes
//005bad50 T _sqlite3_clear_bindings
//005b7190 T _sqlite3_close
//005aa9a0 T _sqlite3_collation_needed
//005aaa00 T _sqlite3_collation_needed16
//005b76f0 T _sqlite3_column_blob
//005b7790 T _sqlite3_column_bytes
//005b7850 T _sqlite3_column_bytes16
//005a04b0 T _sqlite3_column_count
//005a0600 T _sqlite3_column_decltype
//005a0690 T _sqlite3_column_decltype16
//005b7910 T _sqlite3_column_double
//005b79c0 T _sqlite3_column_int
//005b7a60 T _sqlite3_column_int64
//005a04e0 T _sqlite3_column_name
//005a0570 T _sqlite3_column_name16
//005b7b00 T _sqlite3_column_text
//005b7ba0 T _sqlite3_column_text16
//005b7c40 T _sqlite3_column_type
//005b7ce0 T _sqlite3_column_value
//005aa840 T _sqlite3_commit_hook
//0059a9d0 T _sqlite3_compileoption_get
//0059b8d0 T _sqlite3_compileoption_used
//005a9d60 T _sqlite3_complete
//005b7d90 T _sqlite3_complete16
//005b0dd0 T _sqlite3_config
//005a0460 T _sqlite3_context_db_handle
//005b7ea0 T _sqlite3_create_collation
//005b7f50 T _sqlite3_create_collation16
//005bc070 T _sqlite3_create_collation_v2
//005b80b0 T _sqlite3_create_function
//005b8160 T _sqlite3_create_function16
//005b82c0 T _sqlite3_create_module
//005bae60 T _sqlite3_create_module_v2
//005a04c0 T _sqlite3_data_count
//005aaaf0 T _sqlite3_db_config
//005a07c0 T _sqlite3_db_handle
//005aa470 T _sqlite3_db_mutex
//0059aa20 T _sqlite3_db_status
//005b82f0 T _sqlite3_declare_vtab
//005a7de0 T _sqlite3_enable_load_extension
//0059faf0 T _sqlite3_enable_shared_cache
//005b1a40 T _sqlite3_errcode
//005b8580 T _sqlite3_errmsg
//005b8670 T _sqlite3_errmsg16
//005b8780 T _sqlite3_exec
//005a0420 T _sqlite3_expired
//005b19b0 T _sqlite3_extended_errcode
//005aaa90 T _sqlite3_extended_result_codes
//005b60f0 T _sqlite3_file_control
//005b8e00 T _sqlite3_finalize
//0059b380 T _sqlite3_free
//005a8eb0 T _sqlite3_free_table
//005aaa70 T _sqlite3_get_autocommit
//005a0470 T _sqlite3_get_auxdata
//005b8f00 T _sqlite3_get_table
//005aaa60 T _sqlite3_global_recover
//005b6480 T _sqlite3_initialize
//005aa770 T _sqlite3_interrupt
//005aa530 T _sqlite3_last_insert_rowid
//005aa280 T _sqlite3_libversion
//005aa2a0 T _sqlite3_libversion_number
//005aa960 T _sqlite3_limit
//005d3800 T _sqlite3_load_extension
//005b0940 T _sqlite3_log
//005b9160 T _sqlite3_malloc
//0059b0a0 T _sqlite3_memory_alarm
//005b1960 T _sqlite3_memory_highwater
//005b1990 T _sqlite3_memory_used
//005b6c70 T _sqlite3_mprintf
//005bc120 T _sqlite3_mutex_alloc
//0059ad60 T _sqlite3_mutex_enter
//0059ad40 T _sqlite3_mutex_free
//0059ada0 T _sqlite3_mutex_leave
//0059ad80 T _sqlite3_mutex_try
//005a07d0 T _sqlite3_next_stmt
//005b91d0 T _sqlite3_open
//005b9200 T _sqlite3_open16
//005bc150 T _sqlite3_open_v2
//0059ed00 T _sqlite3_os_end
//005be8d0 T _sqlite3_os_init
//005babb0 T _sqlite3_overload_function
//005b9340 T _sqlite3_prepare
//005b9380 T _sqlite3_prepare16
//005bad10 T _sqlite3_prepare16_v2
//005bacd0 T _sqlite3_prepare_v2
//005aa7e0 T _sqlite3_profile
//005aa660 T _sqlite3_progress_handler
//005bcb20 T _sqlite3_randomness
//005b93c0 T _sqlite3_realloc
//0059b080 T _sqlite3_release_memory
//005b93f0 T _sqlite3_reset
//005b6a90 T _sqlite3_reset_auto_extension
//005b94d0 T _sqlite3_result_blob
//005b9540 T _sqlite3_result_double
//005b95a0 T _sqlite3_result_error
//005b95e0 T _sqlite3_result_error16
//005bc500 T _sqlite3_result_error_code
//005bc180 T _sqlite3_result_error_nomem
//005bc1b0 T _sqlite3_result_error_toobig
//005b9620 T _sqlite3_result_int
//005b96b0 T _sqlite3_result_int64
//005b9740 T _sqlite3_result_null
//005b9750 T _sqlite3_result_text
//005b97c0 T _sqlite3_result_text16
//005b9830 T _sqlite3_result_text16be
//005b98a0 T _sqlite3_result_text16le
//005b9910 T _sqlite3_result_value
//005bc470 T _sqlite3_result_zeroblob
//005aa900 T _sqlite3_rollback_hook
//005a27b0 T _sqlite3_set_authorizer
//005b9990 T _sqlite3_set_auxdata
//005b6b10 T _sqlite3_shutdown
//005bc1f0 T _sqlite3_sleep
//005b1ad0 T _sqlite3_snprintf
//005bc240 T _sqlite3_soft_heap_limit
//005aa290 T _sqlite3_sourceid
//005a0150 T _sqlite3_sql
//005b18e0 T _sqlite3_status
//005b9a60 T _sqlite3_step
//005a0820 T _sqlite3_stmt_status
//0059b860 T _sqlite3_strnicmp
//00899010 S _sqlite3_temp_directory
//005bc570 T _sqlite3_test_control
//005aaa80 T _sqlite3_thread_cleanup
//005aa2b0 T _sqlite3_threadsafe
//005aa550 T _sqlite3_total_changes
//005aa780 T _sqlite3_trace
//005ba920 T _sqlite3_transfer_bindings
//005aa8a0 T _sqlite3_update_hook
//005a0450 T _sqlite3_user_data
//005ba9d0 T _sqlite3_value_blob
//005baa70 T _sqlite3_value_bytes
//005baab0 T _sqlite3_value_bytes16
//005baaf0 T _sqlite3_value_double
//005bab10 T _sqlite3_value_int
//005bab20 T _sqlite3_value_int64
//005bab30 T _sqlite3_value_numeric_type
//005a0560 T _sqlite3_value_text
//005a05f0 T _sqlite3_value_text16
//005bab90 T _sqlite3_value_text16be
//005baba0 T _sqlite3_value_text16le
//005a0440 T _sqlite3_value_type
//0065eac8 S _sqlite3_version
//005bc300 T _sqlite3_vfs_find
//005bc3a0 T _sqlite3_vfs_register
//0059adc0 T _sqlite3_vfs_unregister
//005b6bd0 T _sqlite3_vmprintf
//00586120 T _zError
//0087d380 S _z_errmsg
//00586160 T _zcalloc
//00586140 T _zcfree
//00586110 T _zlibCompileFlags
//00586100 T _zlibVersion

#endif //GMODLUAHAX_GMODCLIENTPRTS_H
