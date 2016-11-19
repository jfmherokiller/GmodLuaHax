//
// Created by Jfm Meyers on 11/18/16.
//

#ifndef GMODLUAHAX_GMODSERVERPRTS_H
#define GMODLUAHAX_GMODSERVERPRTS_H
//008e36d0 T _Bt3Zip_MatchFinder_GetMatches
//008e34a0 T _Bt3Zip_MatchFinder_Skip
//008978d0 T _CreateInterface
//008e23b0 T _GetMatchesSpec1
//008e3550 T _Hc3Zip_MatchFinder_GetMatches
//008e3430 T _Hc3Zip_MatchFinder_Skip
//008ebd90 T _LzmaCompress
//008e5350 T _LzmaDec_Allocate
//008e5230 T _LzmaDec_AllocateProbs
//008e5a50 T _LzmaDec_DecodeToBuf
//008e54c0 T _LzmaDec_DecodeToDic
//008e5150 T _LzmaDec_Free
//008e5120 T _LzmaDec_FreeProbs
//008e50e0 T _LzmaDec_Init
//008e37c0 T _LzmaDec_InitDicAndState
//008e5940 T _LzmaDecode
//008e5cb0 T _LzmaEncProps_GetDictSize
//008e5b70 T _LzmaEncProps_Init
//008e5bd0 T _LzmaEncProps_Normalize
//008eab50 T _LzmaEnc_CodeOneMemBlock
//008eba10 T _LzmaEnc_Construct
//008ebbd0 T _LzmaEnc_Create
//008eb990 T _LzmaEnc_Destroy
//008eb910 T _LzmaEnc_Destruct
//008eb610 T _LzmaEnc_Encode
//008e5cf0 T _LzmaEnc_FastPosInit
//008eab00 T _LzmaEnc_Finish
//008e6ff0 T _LzmaEnc_FreeLits
//008eab30 T _LzmaEnc_GetCurBuf
//008eab10 T _LzmaEnc_GetNumAvailableBytes
//008ea6b0 T _LzmaEnc_Init
//008e6020 T _LzmaEnc_InitPriceTables
//008eaa30 T _LzmaEnc_InitPrices
//008eb760 T _LzmaEnc_MemEncode
//008eb720 T _LzmaEnc_MemPrepare
//008eb8d0 T _LzmaEnc_PrepareForLzma2
//008eae00 T _LzmaEnc_RestoreState
//008eb0a0 T _LzmaEnc_SaveState
//008e5d50 T _LzmaEnc_SetProps
//008ead70 T _LzmaEnc_WriteProperties
//008ebc00 T _LzmaEncode
//008e5190 T _LzmaProps_Decode
//008ebe30 T _LzmaUncompress
//008e1f90 T _MatchFinder_Construct
//008e20c0 T _MatchFinder_Create
//008e2700 T _MatchFinder_CreateVTable
//008e2070 T _MatchFinder_Free
//008e1e60 T _MatchFinder_GetIndexByte
//008e1e70 T _MatchFinder_GetNumAvailableBytes
//008e1e50 T _MatchFinder_GetPointerToCurrentPos
//008e22c0 T _MatchFinder_Init
//008e32d0 T _MatchFinder_MoveBlock
//008e1f50 T _MatchFinder_NeedMove
//008e2370 T _MatchFinder_Normalize3
//008e1f70 T _MatchFinder_ReadIfRequired
//008e1e80 T _MatchFinder_ReduceOffsets
//008e1e30 T _MyAlloc
//008e1e40 T _MyFree
//008ce510 T md5_finish(md5_context*, unsigned char*)
//008cdb40 T md5_starts(md5_context*)
//008ce450 T md5_update(md5_context*, unsigned char*, int)
//008cd9f0 T crc32_start(unsigned long)
//008ce6a0 T md5(unsigned char*, int, unsigned char*)
//008cd8f0 T crc32(void const*, int, unsigned long, unsigned long*)
//008ce720 T md5_32(void const*, int, unsigned int, void*)
//008cd860 T globber(char const*, char const*)
//008ce7b0 T md5hash(void const*, int, unsigned int)
//008d9430 T wildcmp(char const*, char const*)
//008cda00 T crc32_add(unsigned long&, void const*, int)
//008cdb30 T crc32_end(unsigned long&)
//008f7e00 T XZip::FileExists(char const*)
//008f7c40 T XZip::GetZipItem(XZip::HZIP__*, int, XZip::ZIPENTRY*)
//008f9266 T XZip::TTreeState::TTreeState()
//008f9160 T XZip::TTreeState::TTreeState()
//008f9d90 T XZip::bi_reverse(unsigned int, int)
//008fd200 T XZip::build_tree(XZip::TState&, XZip::tree_desc*)
//008fb780 T XZip::copy_block(XZip::TState&, char*, unsigned int, int)
//008fcf40 T XZip::gen_bitlen(XZip::TState&, XZip::tree_desc*)
//00e45134 S XZip::has_seeded
//008f2010 T XZip::huft_build(unsigned int*, unsigned int, unsigned int, unsigned int const*, unsigned int const*, XZip::inflate_huft_s**, unsigned int*, XZip::inflate_huft_s*, unsigned int*, unsigned int*)
//008f3440 T XZip::inflateEnd(XZip::z_stream_s*)
//008f9390 T XZip::init_block(XZip::TState&)
//00e4512c S XZip::lasterrorU
//00e45130 S XZip::lasterrorZ
//008f9430 T XZip::pqdownheap(XZip::TState&, XZip::ct_data*, int)
//008fa740 T XZip::putcentral(XZip::zlist*, unsigned int (*)(void*, char const*, unsigned int), void*)
//008f7d80 T XZip::FindZipItem(XZip::HZIP__*, char const*, bool, int*, XZip::ZIPENTRY*)
//008feaf0 T XZip::GetFileInfo(__sFILE*, unsigned long*, long*, XZip::iztimes*, unsigned long*)
//008f1cf0 T XZip::GetFilePosU(__sFILE*)
//008fe730 T XZip::GetFilePosZ(__sFILE*)
//008fb5e0 T XZip::fill_window(XZip::TState&)
//008fd8a0 T XZip::flush_block(XZip::TState&, char*, unsigned long, int)
//008fa590 T XZip::putextended(XZip::zlist*, unsigned int (*)(void*, char const*, unsigned int), void*)
//008fafe0 T XZip::update_keys(unsigned long*, char)
//008f3340 T XZip::zlibVersion()
//008fbea0 T XZip::HasZipSuffix(char const*)
//008f3740 T XZip::IsZipHandleU(XZip::HZIP__*)
//008fb0e0 T XZip::IsZipHandleZ(XZip::HZIP__*)
//008f30b0 T XZip::Uupdate_keys(unsigned long*, char)
//008ffc30 T XZip::ZipAddFolder(XZip::HZIP__*, char const*)
//008ffd30 T XZip::ZipAddHandle(XZip::HZIP__*, char const*, __sFILE*)
//008ffcb0 T XZip::ZipAddHandle(XZip::HZIP__*, char const*, __sFILE*, unsigned int)
//008fb270 T XZip::ZipGetMemory(XZip::HZIP__*, void**, unsigned long*)
//008fb040 T XZip::decrypt_byte(unsigned long*)
//008fdee0 T XZip::deflate_fast(XZip::TState&)
//008f34a0 T XZip::inflateInit2(XZip::z_stream_s*)
//008f3370 T XZip::inflateReset(XZip::z_stream_s*)
//008f2a80 T XZip::inflate_fast(unsigned int, unsigned int, XZip::inflate_huft_s const*, XZip::inflate_huft_s const*, XZip::inflate_blocks_state*, XZip::z_stream_s*)
//008f9130 T XZip::OpenZipHandle(__sFILE*, char const*)
//008f3110 T XZip::Udecrypt_byte(unsigned long*)
//008fd7e0 T XZip::build_bl_tree(XZip::TState&)
//008f2fa0 T XZip::get_crc_table()
//008f3cd0 T XZip::inflate_codes(XZip::inflate_blocks_state*, XZip::z_stream_s*, int)
//008f3b80 T XZip::inflate_flush(XZip::inflate_blocks_state*, XZip::z_stream_s*, int)
//008f9ee0 T XZip::longest_match(XZip::TState&, unsigned int)
//008f9610 T XZip::set_file_type(XZip::TState&)
//008f7380 T XZip::unzLocateFile(XZip::unz_s*, char const*, int)
//008ffbc0 T XZip::ZipAddInternal(XZip::HZIP__*, char const*, void*, unsigned int, unsigned long)
//008f97e0 T XZip::compress_block(XZip::TState&, XZip::ct_data*, XZip::ct_data*)
//008f4620 T XZip::inflate_blocks(XZip::inflate_blocks_state*, XZip::z_stream_s*, int)
//008fc4a0 T XZip::send_all_trees(XZip::TState&, int, int, int)
//008f1d40 T XZip::timet2filetime(unsigned long)
//008fea40 T XZip::CreateZipHandle(__sFILE*, char const*)
//008f7e30 T XZip::EnsureDirectory(char const*, char const*)
//008f8fc0 T XZip::OpenZipInternal(void*, unsigned int, unsigned long, char const*)
//008f3aa0 T XZip::SetUnzipBaseDir(XZip::HZIP__*, char const*)
//008f8670 T XZip::UnzipItemHandle(XZip::HZIP__*, int, __sFILE*)
//008f7210 T XZip::unzGoToNextFile(XZip::unz_s*)
//008f8a30 T XZip::unzOpenInternal(XZip::LUFILE*)
//008f3690 T XZip::unzGetGlobalInfo(XZip::unz_s*, XZip::unz_global_info_s*)
//008f72b0 T XZip::unzGoToFirstFile(XZip::unz_s*)
//008f5c90 T XZip::unzlocal_getByte(XZip::LUFILE*, int*)
//008f5d30 T XZip::unzlocal_getLong(XZip::LUFILE*, unsigned long*)
//008fe890 T XZip::CreateZipInternal(void*, unsigned int, unsigned long, char const*)
//008f3760 T XZip::FormatZipMessageU(unsigned long, char*, unsigned int)
//008fb310 T XZip::FormatZipMessageZ(unsigned long, char*, unsigned int)
//008f8510 T XZip::UnzipItemInternal(XZip::HZIP__*, int, void*, unsigned int, unsigned long)
//008f1d50 T XZip::inflate_codes_new(unsigned int, unsigned int, XZip::inflate_huft_s const*, XZip::inflate_huft_s const*, XZip::z_stream_s*)
//00a2a39c S XZip::inflate_copyright
//008f6010 T XZip::unzlocal_getShort(XZip::LUFILE*, unsigned long*)
//008f1e60 T XZip::inflate_blocks_new(XZip::z_stream_s*, unsigned long (*)(unsigned long, unsigned char const*, unsigned int), unsigned int)
//008f1da0 T XZip::inflate_codes_free(XZip::inflate_codes_state*, XZip::z_stream_s*)
//008f2790 T XZip::inflate_trees_bits(unsigned int*, unsigned int*, XZip::inflate_huft_s**, XZip::inflate_huft_s*, XZip::z_stream_s*)
//008f6a30 T XZip::unzOpenCurrentFile(XZip::unz_s*, char const*)
//008f63c0 T XZip::unzReadCurrentFile(XZip::unz_s*, void*, unsigned int, bool*)
//008f1f50 T XZip::inflate_blocks_free(XZip::inflate_blocks_state*, XZip::z_stream_s*)
//008f2a40 T XZip::inflate_trees_fixed(unsigned int*, unsigned int*, XZip::inflate_huft_s const**, XZip::inflate_huft_s const**, XZip::z_stream_s*)
//008f59d0 T XZip::unzCloseCurrentFile(XZip::unz_s*)
//008f61c0 T XZip::unzGetGlobalComment(XZip::unz_s*, char*, unsigned long)
//008f7580 T XZip::dosdatetime2filetime(unsigned short, unsigned short)
//008fea70 T XZip::filetime2dosdatetime(long, unsigned short*, unsigned short*)
//008f1dc0 T XZip::inflate_blocks_reset(XZip::inflate_blocks_state*, XZip::z_stream_s*, unsigned long*)
//008f2870 T XZip::inflate_trees_dynamic(unsigned int, unsigned int, unsigned int*, unsigned int*, unsigned int*, XZip::inflate_huft_s**, XZip::inflate_huft_s**, XZip::inflate_huft_s*, XZip::z_stream_s*)
//008f7330 T XZip::unzGetCurrentFileInfo(XZip::unz_s*, XZip::unz_file_info_s*, char*, unsigned long, void*, unsigned long, char*, unsigned long)
//008f62c0 T XZip::unzGetLocalExtrafield(XZip::unz_s*, void*, unsigned int)
//008f1d30 T XZip::LocalFileTimeToFileTime(long*, long*)
//008f5950 T XZip::unzStringFileNameCompare(char const*, char const*, int)
//008f36b0 T XZip::unzlocal_DosDateToTmuDate(unsigned long, XZip::tm_unz_s*)
//008f8750 T XZip::unzlocal_SearchCentralDir(XZip::LUFILE*)
//008f3620 T XZip::strcmpcasenosensitive_internal(char const*, char const*)
//008f6c50 T XZip::unzlocal_GetCurrentFileInfoInternal(XZip::unz_s*, XZip::unz_file_info_s*, XZip::unz_file_info_internal_s*, char*, unsigned long, void*, unsigned long, char*, unsigned long)
//008f67e0 T XZip::unzlocal_CheckCurrentFileCoherencyHeader(XZip::unz_s*, unsigned int*, unsigned long*, unsigned int*)
//008fb0f6 T XZip::TZip::AddCentral()
//008fee32 T XZip::TZip::open_handle(__sFILE*, unsigned int)
//008ff052 T XZip::TZip::Add(char const*, void*, unsigned int, unsigned long)
//008fba98 T XZip::TZip::read(char*, unsigned int)
//008fb956 T XZip::TZip::Close()
//008fbb74 T XZip::TZip::oseek(unsigned int)
//008fbb4e T XZip::TZip::sread(XZip::TState&, char*, unsigned int)
//008fbbe2 T XZip::TZip::write(char const*, unsigned int)
//008fe76e T XZip::TZip::Create(void*, unsigned int, unsigned long)
//008fb90a T XZip::TZip::iclose()
//008fbd86 T XZip::TZip::istore()
//008fbdf4 T XZip::TZip::sflush(void*, char const*, unsigned int*)
//008fb20e T XZip::TZip::swrite(void*, char const*, unsigned int)
//008fe4ec T XZip::TZip::ideflate(XZip::zlist*)
//008fec6c T XZip::TZip::open_dir()
//008fed3c T XZip::TZip::open_mem(void*, unsigned int)
//008fb21e T XZip::TZip::GetMemory(void**, unsigned long*)
//008fefb0 T XZip::TZip::open_file(char const*)
//008fc270 T XZip::Trace(char const*, ...)
//008faee0 T XZip::crc32(unsigned long, unsigned char const*, unsigned long)
//008f9370 T XZip::Assert(XZip::TState&, bool, char const*)
//008febe0 T XZip::GetNow(long*, unsigned short*, unsigned short*)
//008f3a46 T XZip::TUnzip::SetUnzipBaseDir(char const*)
//008f75e0 T XZip::TUnzip::Get(int, XZip::ZIPENTRY*)
//008f7cb4 T XZip::TUnzip::Find(char const*, bool, int*, XZip::ZIPENTRY*)
//008f8ee2 T XZip::TUnzip::Open(void*, unsigned int, unsigned long)
//008f5ae4 T XZip::TUnzip::Close()
//008f7f98 T XZip::TUnzip::Unzip(int, void*, unsigned int, unsigned long)
//008fc260 T XZip::Tracec(bool, char const*, ...)
//008ffda0 T XZip::ZipAdd(XZip::HZIP__*, char const*, void*, unsigned int)
//008ffe20 T XZip::ZipAdd(XZip::HZIP__*, char const*, char const*)
//008fac70 T XZip::putend(int, unsigned long, unsigned long, unsigned long, char*, unsigned int (*)(void*, char const*, unsigned int), void*)
//008f2fb0 T XZip::ucrc32(unsigned long, unsigned char const*, unsigned int)
//008f3720 T XZip::unzeof(XZip::unz_s*)
//008f3350 T XZip::zError(int)
//008f35e0 T XZip::zcfree(void*, void*)
//008f9100 T XZip::OpenZip(char const*, char const*)
//008f90d0 T XZip::OpenZip(void*, unsigned int, char const*)
//008f31b0 T XZip::adler32(unsigned long, unsigned char const*, unsigned int)
//008f96a0 T XZip::bi_init(XZip::TState&, char*, unsigned int, int)
//008fc9f0 T XZip::ct_init(XZip::TState&, unsigned short*)
//008fe170 T XZip::deflate(XZip::TState&)
//008f5580 T XZip::inflate(XZip::z_stream_s*, int)
//008fc100 T XZip::lm_init(XZip::TState&, int, unsigned short*)
//008f8d80 T XZip::lufopen(void*, unsigned int, unsigned long, unsigned long*)
//008f5c10 T XZip::lufread(void*, unsigned long, unsigned long, XZip::LUFILE*)
//008f6150 T XZip::lufseek(XZip::LUFILE*, long, int)
//008f86e0 T XZip::luftell(XZip::LUFILE*)
//008f3700 T XZip::unztell(XZip::unz_s*)
//008f35c0 T XZip::zcalloc(void*, unsigned int, unsigned int)
//008f3130 T XZip::zdecode(unsigned long*, char)
//008fb060 T XZip::zencode(unsigned long*, char)
//008fc280 T XZip::ct_tally(XZip::TState&, int, int)
//008f3b40 T XZip::lufclose(XZip::LUFILE*)
//008f3600 T XZip::luferror(XZip::LUFILE*)
//008fa220 T XZip::putlocal(XZip::zlist*, unsigned int (*)(void*, char const*, unsigned int), void*)
//008f5a90 T XZip::unzClose(XZip::unz_s*)
//008f5b60 T XZip::CloseZipU(XZip::HZIP__*)
//008fb9b0 T XZip::CloseZipZ(XZip::HZIP__*)
//008fea10 T XZip::CreateZip(char const*, char const*)
//008fe9e0 T XZip::CreateZip(void*, unsigned int, char const*)
//008f8600 T XZip::UnzipItem(XZip::HZIP__*, int, char const*)
//008f8580 T XZip::UnzipItem(XZip::HZIP__*, int, void*, unsigned int)
//008f9dd0 T XZip::bi_windup(XZip::TState&)
//008fc920 T XZip::gen_codes(XZip::TState&, XZip::ct_data*, int)
//008fbe30 T XZip::lustricmp(char const*, char const*)
//008f9510 T XZip::scan_tree(XZip::TState&, XZip::ct_data*, int)
//008f96f0 T XZip::send_bits(XZip::TState&, int, int)
//008f99a0 T XZip::send_tree(XZip::TState&, XZip::ct_data*, int)
//008daeda T Bootil::AutoBuffer::EnsureCapacity(unsigned int)
//008db042 T Bootil::AutoBuffer::Clear()
//008daf78 T Bootil::AutoBuffer::AutoBuffer(int)
//008db07e T Bootil::AutoBuffer::AutoBuffer(int)
//008db00a T Bootil::AutoBuffer::~AutoBuffer()
//008dafd6 T Bootil::AutoBuffer::~AutoBuffer()
//008db0dc T Bootil::AutoBuffer::~AutoBuffer()
//008df08e T Bootil::Compression::Zip::File::ExtractFile(int, std::string const&)
//008def78 T Bootil::Compression::Zip::File::GetFileName(int)
//008dee6e T Bootil::Compression::Zip::File::GetNumItems()
//008df3a6 T Bootil::Compression::Zip::File::EnsureWriter()
//008defb0 T Bootil::Compression::Zip::File::RefreshFiles()
//008df48e T Bootil::Compression::Zip::File::WriteAndClose(std::string const&)
//008df3dc T Bootil::Compression::Zip::File::WriteAndClose(Bootil::Buffer&)
//008df0bc T Bootil::Compression::Zip::File::ExtractToFolder(std::string const&)
//008dee42 T Bootil::Compression::Zip::File::Init()
//008df366 T Bootil::Compression::Zip::File::Close()
//008dee54 T Bootil::Compression::Zip::File::IsOpen()
//008df4fc T Bootil::Compression::Zip::File::AddFile(std::string const&, std::string const&)
//008df660 T Bootil::Compression::Zip::File::File(void*, unsigned int, std::string const&)
//008df6fa T Bootil::Compression::Zip::File::File(std::string const&, std::string const&)
//008dee76 T Bootil::Compression::Zip::File::File()
//008df5ce T Bootil::Compression::Zip::File::File(void*, unsigned int, std::string const&)
//008df666 T Bootil::Compression::Zip::File::File(std::string const&, std::string const&)
//008deea6 T Bootil::Compression::Zip::File::File()
//008def00 T Bootil::Compression::GZip::Compress(void const*, unsigned int, Bootil::Buffer&)
//008e0540 T Bootil::Compression::LZMA::ExtractToFile(void const*, unsigned int, std::string const&, Bootil::Compression::ProgressCallback*)
//008e0480 T Bootil::Compression::LZMA::PropsAreValid(unsigned char const*)
//008e04e0 T Bootil::Compression::LZMA::ExtractInThread(void const*, unsigned int, std::string const&)
//008e0ec8 T Bootil::Compression::LZMA::ExtractionThread::OnProgress(float, unsigned int, unsigned int)
//008e0e9a T Bootil::Compression::LZMA::ExtractionThread::GetProgress()
//008e0d9a T Bootil::Compression::LZMA::ExtractionThread::Run()
//008e0bbc T Bootil::Compression::LZMA::ExtractionThread::Destroy()
//008e0e6e T Bootil::Compression::LZMA::ExtractionThread::Success()
//008e0e42 T Bootil::Compression::LZMA::ExtractionThread::Finished()
//008e0bcc T Bootil::Compression::LZMA::ExtractionThread::ExtractionThread(void const*, unsigned int, std::string const&)
//008e0d1c T Bootil::Compression::LZMA::ExtractionThread::~ExtractionThread()
//008e0ca6 T Bootil::Compression::LZMA::ExtractionThread::~ExtractionThread()
//008e0a20 T Bootil::Compression::LZMA::Extract(void const*, unsigned int, Bootil::Buffer&, Bootil::Compression::ProgressCallback*)
//008e0360 T Bootil::Compression::LZMA::Compress(void const*, unsigned int, Bootil::Buffer&, int, int)
//008df700 T Bootil::Compression::FastLZ::ExtractInThread(void const*, unsigned int, unsigned int, std::string const&)
//008df9ce T Bootil::Compression::FastLZ::ExtractionThread::GetProgress()
//008e012a T Bootil::Compression::FastLZ::ExtractionThread::Run()
//008df9ac T Bootil::Compression::FastLZ::ExtractionThread::Destroy()
//008e02c6 T Bootil::Compression::FastLZ::ExtractionThread::Success()
//008e029a T Bootil::Compression::FastLZ::ExtractionThread::Finished()
//008dff70 T Bootil::Compression::FastLZ::ExtractionThread::ExtractionThread(void const*, unsigned int, unsigned int, std::string const&)
//008e00b2 T Bootil::Compression::FastLZ::ExtractionThread::~ExtractionThread()
//008e0042 T Bootil::Compression::FastLZ::ExtractionThread::~ExtractionThread()
//008dee20 T Bootil::Compression::FastLZ::Is(void const*, unsigned int)
//008df760 T Bootil::Compression::FastLZ::Extract(void const*, unsigned int, Bootil::Buffer&)
//008df880 T Bootil::Compression::FastLZ::Compress(void const*, unsigned int, Bootil::Buffer&)
//008cf340 T Bootil::IsShuttingDown()
//008d5490 T void Bootil::Data::Json::WriteValue<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&, Bootil::Data::TreeT<std::string> const&)
//008d5930 T void Bootil::Data::Json::WriteValue<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&, Bootil::Data::TreeT<std::string> const&)
//008d5730 T void Bootil::Data::Json::DoJsonExport<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&, Bootil::Data::TreeT<std::string> const&)
//008d5bd0 T void Bootil::Data::Json::DoJsonExport<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&, Bootil::Data::TreeT<std::string> const&)
//008d15c0 T Bootil::Data::Json::Export(Bootil::Data::TreeT<std::string> const&, std::string&, bool)
//008d1e30 T Bootil::Data::Json::Import(Bootil::Data::TreeT<std::string>&, char const*)
//008d1830 T Bootil::Data::Json::DoImport(Bootil::Data::TreeT<std::string>&, rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//008d4068 T Bootil::Data::TreeT<std::string>& Bootil::Data::TreeT<std::string>::SetChildVar<bool>(std::string, bool)
//008d40d8 T Bootil::Data::TreeT<std::string>& Bootil::Data::TreeT<std::string>::SetChildVar<double>(std::string, double)
//008d42a8 T Bootil::Data::TreeT<std::string>& Bootil::Data::TreeT<std::string>::SetChildVar<int>(std::string, int)
//008d3e04 T void Bootil::Data::TreeT<std::string>::Var<bool>(bool)
//008d3e6a T void Bootil::Data::TreeT<std::string>::Var<double>(double)
//008d4244 T void Bootil::Data::TreeT<std::string>::Var<int>(int)
//008d3f66 T Bootil::Data::TreeT<std::string>::AddChild()
//008d3ff4 T Bootil::Data::TreeT<std::string>::SetChild(std::string, std::string)
//008d41cc T Bootil::Data::TreeT<std::string>::TreeT(Bootil::Data::TreeT<std::string> const&)
//008d1fe6 T Bootil::Data::TreeT<std::string>::~TreeT()
//008d7b90 T Bootil::File::GetTempDir()
//008d7f50 T Bootil::File::RemoveFile(std::string const&)
//008d7fd0 T Bootil::File::CreateFolder(std::string const&, bool)
//008d8590 T Bootil::File::RemoveFolder(std::string const&, bool)
//008d6bce T Bootil::File::ChangeMonitor::HasChanges()
//008d6bcc T Bootil::File::ChangeMonitor::StartWatch()
//008d74ce T Bootil::File::ChangeMonitor::WatchFolder(std::string const&, bool)
//008d6bca T Bootil::File::ChangeMonitor::CheckForChanges()
//008d7178 T Bootil::File::ChangeMonitor::NoteFileChanged(std::string const&)
//008d6ce0 T Bootil::File::ChangeMonitor::Stop()
//008d70a0 T Bootil::File::ChangeMonitor::GetChange()
//008d6c20 T Bootil::File::ChangeMonitor::ChangeMonitor()
//008d6ba0 T Bootil::File::ChangeMonitor::ChangeMonitor()
//008d6d56 T Bootil::File::ChangeMonitor::~ChangeMonitor()
//008d6e2a T Bootil::File::ChangeMonitor::~ChangeMonitor()
//008d7d80 T Bootil::File::GetTempFilename()
//008d8a90 T Bootil::File::GetFilesInFolder(std::string const&, std::vector<std::string, std::allocator<std::string> >&, bool)
//008d7800 T Bootil::File::RelativeToAbsolute(std::string const&)
//008d84f0 T Bootil::File::CRC(std::string const&)
//008d7840 T Bootil::File::Copy(std::string const&, std::string const&)
//008d8580 T Bootil::File::Find(std::vector<std::string, std::allocator<std::string> >*, std::vector<std::string, std::allocator<std::string> >*, std::string const&, bool)
//008d83b0 T Bootil::File::Read(std::string const&, Bootil::Buffer&)
//008d7a60 T Bootil::File::Read(std::string const&, std::string&)
//008d82d0 T Bootil::File::Size(std::string const&)
//008d8300 T Bootil::File::Write(std::string const&, Bootil::Buffer const&)
//008d79c0 T Bootil::File::Write(std::string const&, std::string const&)
//008d7920 T Bootil::File::Append(std::string const&, std::string const&)
//008d82a0 T Bootil::File::Exists(std::string const&)
//008d7f80 T Bootil::File::IsFolder(std::string const&)
//008db1b0 T Bootil::Math::Random::Int(int, int)
//008db180 T Bootil::Math::Random::Bool()
//008db1d0 T Bootil::Math::Random::Seed(unsigned int)
//008d6520 T Bootil::Debug::PopupMessage(char const*, ...)
//008d6070 T Bootil::Debug::SuppressPopups(bool)
//008d60d0 T Bootil::Debug::Crash::SetupCallback()
//008d6090 T Bootil::Debug::Crash::SetMinidumpFunction(void (*)(unsigned int, void*))
//008d60b0 T Bootil::Debug::Crash::FunctionCalledOnCrash(unsigned int, void*)
//008d6190 T Bootil::Debug::Crash::DoCrash()
//008d68b0 T Bootil::Debug::Internal::DoAssert(char const*, unsigned int, char const*, char const*, char const*, ...)
//008d6a68 T Bootil::Debug::IListener::Add(Bootil::Debug::IListener*)
//008d69c0 T Bootil::Debug::IListener::Remove(Bootil::Debug::IListener*)
//008d60e0 T Bootil::Debug::LastError()
//008d5ff0 T Bootil::Debug::Listeners()
//008dd450 T std::string Bootil::ToStr<float>(float const&)
//008dd4d0 T std::string Bootil::ToStr<int>(int const&)
//008dd490 T std::string Bootil::ToStr<unsigned int>(unsigned int const&)
//008dd410 T std::string Bootil::ToStr<unsigned long long>(unsigned long long const&)
//008dab94 T Bootil::Buffer::GetCurrent()
//008dace0 T Bootil::Buffer::ReadString()
//008dabb2 T Bootil::Buffer::SetWritten(unsigned int)
//008dae68 T Bootil::Buffer::WriteBuffer(Bootil::Buffer const&)
//008dada2 T Bootil::Buffer::WriteString(std::string const&, bool)
//008daacc T Bootil::Buffer::EnsureCapacity(unsigned int)
//008dab0e T Bootil::Buffer::SetExternalBuffer(void*, int)
//008dac9a T Bootil::Buffer::Read(void*, int)
//008daab8 T Bootil::Buffer::Clear()
//008dad4a T Bootil::Buffer::Write(void const*, unsigned int)
//008daba0 T Bootil::Buffer::SetPos(unsigned int)
//008dabf0 T Bootil::Buffer::MoveMem(unsigned int, unsigned int, unsigned int)
//008dac38 T Bootil::Buffer::TrimLeft(unsigned int)
//008dab3c T Bootil::Buffer::Buffer(void*, int)
//008daade T Bootil::Buffer::Buffer()
//008daa20 T Bootil::Buffer::Buffer(void*, int)
//008daa5c T Bootil::Buffer::Buffer()
//008daaa0 T Bootil::Buffer::~Buffer()
//008daa8c T Bootil::Buffer::~Buffer()
//008daec6 T Bootil::Buffer::~Buffer()
//008e1030 T Bootil::Hasher::MD5::Easy(void const*, unsigned int)
//008e1070 T Bootil::Hasher::MD5::String(std::string const&)
//008e10d0 T Bootil::Hasher::CRC32::Add(unsigned long&, void const*, unsigned int)
//008e10c0 T Bootil::Hasher::CRC32::End(unsigned long&)
//008e0fd0 T Bootil::Hasher::CRC32::Easy(void const*, unsigned int, unsigned long)
//008e10e0 T Bootil::Hasher::CRC32::Start(unsigned long)
//008e10f0 T Bootil::Hasher::CRC32::String(std::string const&, unsigned long)
//008d61b0 T Bootil::Output::Msg(char const*, ...)
//008d6650 T Bootil::Output::Error(char const*, ...)
//008d6370 T Bootil::Output::Warning(char const*, ...)
//008de6d0 T Bootil::String::ToCharBuffer(std::string const&, char*, int)
//008de090 T Bootil::String::To::Int(std::string const&)
//008de0d0 T Bootil::String::To::Bool(std::string const&)
//008de230 T Bootil::String::To::Float(std::string const&)
//008de1f0 T Bootil::String::To::Double(std::string const&)
//008de280 T Bootil::String::To::Floats(std::string const&, float*, int)
//008de450 T Bootil::String::To::UInt64(std::string const&)
//008dcff0 T Bootil::String::File::FixSlashes(std::string&, std::string const&, std::string const&)
//008dcd80 T Bootil::String::File::LastDirectory(std::string&)
//008dccd0 T Bootil::String::File::StripFilename(std::string&)
//008dc9f0 T Bootil::String::File::IsAbsolutePath(std::string const&)
//008dcc50 T Bootil::String::File::StripExtension(std::string&)
//008dcb30 T Bootil::String::File::UpOneDirectory(std::string&)
//008dceb0 T Bootil::String::File::ExtractFilename(std::string&)
//008dcf50 T Bootil::String::File::IsFileExtension(std::string const&, std::string const&)
//008dca70 T Bootil::String::File::GetFileExtension(std::string const&)
//008dd000 T Bootil::String::File::ToWindowsSlashes(std::string&)
//008dc7f0 T Bootil::String::File::CleanPath(std::string&)
//008ddbf0 T Bootil::String::Test::StartsWith(std::string const&, std::string const&)
//008ddcd0 T Bootil::String::Test::ContainsAny(std::string const&, std::string const&)
//008ddc80 T Bootil::String::Test::ContainsChar(std::string const&, char)
//008ddd40 T Bootil::String::Test::ContainsOnly(std::string const&, std::string const&)
//008ddef0 T Bootil::String::Test::Contains(std::string const&, std::string const&, bool)
//008ddc20 T Bootil::String::Test::EndsWith(std::string const&, std::string const&)
//008dde20 T Bootil::String::Test::ICompare(std::string const&, std::string const&)
//008dddd0 T Bootil::String::Test::IsNumber(std::string const&)
//008ddeb0 T Bootil::String::Test::Wildcard(std::string const&, std::string const&)
//008de730 T Bootil::String::Util::TrimBefore(std::string&, std::string const&, bool)
//008de8f0 T Bootil::String::Util::SplitLength(std::string const&, int, std::vector<std::string, std::allocator<std::string> >&)
//008de4f0 T Bootil::String::Util::FindAndReplace(std::string&, std::string const&, std::string const&)
//008de5f0 T Bootil::String::Util::Trim(std::string&, std::string const&)
//008de660 T Bootil::String::Util::Count(std::string const&, char)
//008de9e0 T Bootil::String::Util::Split(std::string const&, std::string const&, std::vector<std::string, std::allocator<std::string> >&)
//008de5b0 T Bootil::String::Util::TrimLeft(std::string&, std::string const&)
//008de810 T Bootil::String::Util::TrimAfter(std::string&, std::string const&, bool)
//008de570 T Bootil::String::Util::TrimRight(std::string&, std::string const&)
//008db240 T Bootil::String::Lower(std::string&)
//008db290 T Bootil::String::Upper(std::string&)
//008dd650 T Bootil::String::Format::NiceDouble(double)
//008dd580 T Bootil::String::Format::BinaryToHex(void const*, unsigned int)
//008dda00 T Bootil::String::Format::MemoryPerSecond(int)
//008dd880 T Bootil::String::Format::CommaSeperatedInt(int)
//008dd510 T Bootil::String::Format::Int(int)
//008dd270 T Bootil::String::Format::Time(std::string const&, unsigned int)
//008dd390 T Bootil::String::Format::Print(char const*, ...)
//008dd310 T Bootil::String::Format::Print(wchar_t const*, ...)
//008dd1c0 T Bootil::String::Format::YesNo(bool)
//008dd950 T Bootil::String::Format::Memory(int)
//008dd540 T Bootil::String::Format::UInt64(unsigned long long)
//008ddb20 T Bootil::String::Format::VarArgs(char const*, char*)
//008dd140 T Bootil::String::Format::VarArgs(wchar_t const*, char*)
//008dd760 T Bootil::String::Format::NiceFloat(float)
//008db3d0 T Bootil::String::Random(int, bool, bool, bool, bool)
//008dc6f0 T Bootil::String::Convert::ToWide(std::string const&)
//008dc620 T Bootil::String::Convert::FromWide(std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&)
//008db320 T Bootil::String::SortList(std::vector<std::string, std::allocator<std::string> >&, bool)
//008cf440 T Bootil::Console::BGColorPop()
//008cf4a0 T Bootil::Console::FGColorPop()
//008cf670 T Bootil::Console::WaitForKey()
//008cf690 T Bootil::Console::BGColorPush(Bootil::Console::ConsoleColor)
//008cf760 T Bootil::Console::FGColorPush(Bootil::Console::ConsoleColor)
//008cf3c0 T Bootil::Console::UpdateColor()
//008cf3e0 T Bootil::Console::PosPushRelative(int, int)
//008cf400 T Bootil::Console::SetCursorVisible(bool)
//008cf410 T Bootil::Console::Cls()
//008cf830 T Bootil::Console::Msg(Bootil::Console::ConsoleColor, Bootil::Console::ConsoleColor, char const*, ...)
//008d0a20 T Bootil::Console::Input::PostOutput()
//00e450e4 S Bootil::Console::Input::m_CaretPos
//008d0ba0 T Bootil::Console::Input::OnBackspace()
//008d0570 T Bootil::Console::Input::GetLineInProgress()
//008d0560 T Bootil::Console::Input::Plat_GetConsoleCharNonBlocking()
//008d0a50 T Bootil::Console::Input::Cycle()
//008d05a0 T Bootil::Console::Input::Flush()
//008d0c40 T Bootil::Console::Input::OnLeft()
//008d0a60 T Bootil::Console::Input::GetLine()
//008d0c00 T Bootil::Console::Input::OnRight()
//00e45100 S Bootil::Console::Input::m_Lines
//008d0830 T Bootil::Console::Input::DrawLine()
//008d0740 T Bootil::Console::Input::OnReturn()
//008d0640 T Bootil::Console::Input::ClearLine()
//008d06b0 T Bootil::Console::Input::PreOutput()
//00e450e0 S Bootil::Console::Input::m_strLine
//008cf3f0 T Bootil::Console::PosPop()
//008cf3d0 T Bootil::Console::PosPush(int, int)
//008cf320 T Bootil::Startup()
//008da420 T Bootil::Threads::RunFunction(void*)
//008da440 T Bootil::Threads::RunFunctionThenDestroyThread(void*)
//008da2a8 T Bootil::Threads::Mutex::Lock()
//008da290 T Bootil::Threads::Mutex::Unlock()
//008da270 T Bootil::Threads::Mutex::TryLock()
//008da31c T Bootil::Threads::Mutex::Mutex()
//008da200 T Bootil::Threads::Mutex::Mutex()
//008da2c0 T Bootil::Threads::Mutex::~Mutex()
//008da2ee T Bootil::Threads::Mutex::~Mutex()
//008da542 T Bootil::Threads::Thread::SetClosing(bool)
//008da3b0 T Bootil::Threads::Thread::RunInThread(void*)
//008da600 T Bootil::Threads::Thread::WantsToClose()
//008da68c T Bootil::Threads::Thread::StartInThread()
//008e0b90 T Bootil::Threads::Thread::OnThreadFinished()
//008da490 T Bootil::Threads::Thread::StartInThreadAndDestroy()
//008da4dc T Bootil::Threads::Thread::StartInThreadAndDetatch()
//008da56e T Bootil::Threads::Thread::Join()
//008da528 T Bootil::Threads::Thread::Lock()
//008da658 T Bootil::Threads::Thread::Unlock()
//008da62c T Bootil::Threads::Thread::Running()
//008da672 T Bootil::Threads::Thread::TryLock()
//008da968 T Bootil::Threads::Thread::Thread()
//008da99c T Bootil::Threads::Thread::Thread()
//008da6fa T Bootil::Threads::Thread::~Thread()
//008da7cc T Bootil::Threads::Thread::~Thread()
//008da89a T Bootil::Threads::Thread::~Thread()
//008d9990 T Bootil::Platform::CurrentDir()
//008d9860 T Bootil::Platform::GetKeyChar()
//008d9550 T Bootil::Platform::LibraryLoad(std::string const&)
//008d9530 T Bootil::Platform::OpenWebpage(std::string const&)
//008d9780 T Bootil::Platform::ProgramName()
//008d95a0 T Bootil::Platform::Architecture()
//008d94f0 T Bootil::Platform::DesktopWidth()
//008d9880 T Bootil::Platform::IsKeyPressed()
//008d9570 T Bootil::Platform::LibraryClose(void*)
//008d9660 T Bootil::Platform::PlatformName()
//008d9540 T Bootil::Platform::StartProcess(std::string const&, bool)
//008d96c0 T Bootil::Platform::TemporaryDir()
//008d9500 T Bootil::Platform::DesktopHeight()
//008d9720 T Bootil::Platform::ProgramFolder()
//008d9520 T Bootil::Platform::DebuggerOutput(std::string const&)
//008da060 T Bootil::Platform::CurrentUserName()
//008d97e0 T Bootil::Platform::FullProgramName()
//008d9580 T Bootil::Platform::GetAbsolutePath(std::string const&)
//008d9910 T Bootil::Platform::GetMilliseconds()
//008d94e0 T Bootil::Platform::SetupAssociation(std::string)
//008da0f0 T Bootil::Platform::FormatSystemError(unsigned long)
//008d9600 T Bootil::Platform::PlatformNameShort()
//008d9a20 T Bootil::Platform::TemporaryFilename()
//008d9560 T Bootil::Platform::GetFunctionAddress(void*, std::string const&)
//008d9510 T Bootil::Platform::Popup(std::string const&, std::string const&)
//008d9a00 T Bootil::Platform::Sleep(unsigned int)
//008d9bf0 T Bootil::Platform::FindFiles(std::vector<std::string, std::allocator<std::string> >*, std::vector<std::string, std::allocator<std::string> >*, std::string const&, bool)
//008da150 T Bootil::Platform::LastError()
//008cf330 T Bootil::Shutdown()
//008cebb0 T tthread::this_thread::get_id()
//008ce840 T tthread::thread::wrapper_function(void*)
//008cec46 T tthread::thread::hardware_concurrency()
//008cec98 T tthread::thread::join()
//008cec5e T tthread::thread::detach()
//008cee50 T tthread::thread::thread(void (*)(void*), void*)
//008ced7e T tthread::thread::thread(void (*)(void*), void*)
//008cecda T tthread::thread::~thread()
//008ced2c T tthread::thread::~thread()
//008d4f1e T rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StartArray()
//008d50a8 T rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StartObject()
//008d4c34 T rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::PrettyPrefix(rapidjson::Type)
//008d5232 T rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::EndArray(unsigned int)
//008d535e T rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::EndObject(unsigned int)
//008d3464 T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseArray<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//008d23de T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseFalse<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//008d36e6 T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseValue<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//008d24b0 T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseNumber<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//008d37fa T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseObject<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//008d2efc T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseStringToStream<0u, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream>(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream&)
//008d3b90 T bool rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::Parse<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//008d225a T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseNull<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//008d231c T void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseTrue<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&)
//008d3ccc T rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >& rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseStream<0u, rapidjson::UTF8<char>, rapidjson::GenericStringStream<rapidjson::UTF8<char> > >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&)
//008d330a T rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::String(char const*, unsigned int, bool)
//008d215a T rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc(void*, unsigned long, unsigned long)
//008d2d00 T void rapidjson::UTF8<char>::Encode<rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream>(rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream&, unsigned int)
//008d4a9c T rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StartArray()
//008d4b68 T rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StartObject()
//008d4314 T rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::WriteString(char const*, unsigned int)
//008d49c2 T rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::Prefix(rapidjson::Type)
//008d466a T rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::WriteInt(int)
//008d4774 T rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::WriteBool(bool)
//008d2040 T rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::Stack(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>*, unsigned long)
//008d5f0a T bool Bootil::Data::TreeT<std::string>::StringToVar<bool>(std::string const&) const
//008d5ed0 T double Bootil::Data::TreeT<std::string>::StringToVar<double>(std::string const&) const
//008d5f5a T float Bootil::Data::TreeT<std::string>::StringToVar<float>(std::string const&) const
//008d5f24 T int Bootil::Data::TreeT<std::string>::StringToVar<int>(std::string const&) const
//008d5e4e T std::string Bootil::Data::TreeT<std::string>::VarToString<bool>(bool) const
//008d5ee6 T std::string Bootil::Data::TreeT<std::string>::VarToString<double>(double) const
//008d5f70 T std::string Bootil::Data::TreeT<std::string>::VarToString<float>(float) const
//008d5f3a T std::string Bootil::Data::TreeT<std::string>::VarToString<int>(int) const
//008d5e30 T unsigned char Bootil::Data::TreeT<std::string>::VarID<std::string>() const
//008d5e42 T unsigned char Bootil::Data::TreeT<std::string>::VarID<bool>() const
//008d5e48 T unsigned char Bootil::Data::TreeT<std::string>::VarID<double>() const
//008d5e36 T unsigned char Bootil::Data::TreeT<std::string>::VarID<float>() const
//008d5e3c T unsigned char Bootil::Data::TreeT<std::string>::VarID<int>() const
//008dabbe T Bootil::Buffer::GetWritten() const
//008dab80 T Bootil::Buffer::GetPos() const
//008dab88 T Bootil::Buffer::GetBase(unsigned int) const
//008dab78 T Bootil::Buffer::GetSize() const
//008cec02 T tthread::thread::get_id() const
//008cebd0 T tthread::thread::joinable() const
//008d8fe0 T char* std::string::_S_construct<std::istreambuf_iterator<char, std::char_traits<char> > >(std::istreambuf_iterator<char, std::char_traits<char> >, std::istreambuf_iterator<char, std::char_traits<char> >, std::allocator<char> const&, std::input_iterator_tag)
//008d1fa0 T std::_List_base<Bootil::Data::TreeT<std::string>, std::allocator<Bootil::Data::TreeT<std::string> > >::~_List_base()
//008cff10 T std::_Deque_base<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> >::_M_create_nodes(Bootil::Console::ConsoleColor**, Bootil::Console::ConsoleColor**)
//008cff94 T std::_Deque_base<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> >::_M_initialize_map(unsigned long)
//008d0188 T std::_Deque_base<Bootil::Console::PosInfo, std::allocator<Bootil::Console::PosInfo> >::_M_create_nodes(Bootil::Console::PosInfo**, Bootil::Console::PosInfo**)
//008d0204 T std::_Deque_base<Bootil::Console::PosInfo, std::allocator<Bootil::Console::PosInfo> >::_M_initialize_map(unsigned long)
//008d0faa T std::_Deque_base<std::string, std::allocator<std::string> >::_M_create_nodes(std::string**, std::string**)
//008d1024 T std::_Deque_base<std::string, std::allocator<std::string> >::_M_initialize_map(unsigned long)
//008dfde8 T std::map<int, Bootil::Compression::Zip::File::Entry, std::less<int>, std::allocator<std::pair<int const, Bootil::Compression::Zip::File::Entry> > >::operator[](int const&)
//008d3ed2 T std::list<Bootil::Data::TreeT<std::string>, std::allocator<Bootil::Data::TreeT<std::string> > >::_M_create_node(Bootil::Data::TreeT<std::string> const&)
//008d3f3a T std::list<Bootil::Data::TreeT<std::string>, std::allocator<Bootil::Data::TreeT<std::string> > >::push_back(Bootil::Data::TreeT<std::string> const&)
//008d4146 T std::list<Bootil::Data::TreeT<std::string>, std::allocator<Bootil::Data::TreeT<std::string> > >::list(std::list<Bootil::Data::TreeT<std::string>, std::allocator<Bootil::Data::TreeT<std::string> > > const&)
//008d7790 T std::list<std::string, std::allocator<std::string> >::_M_create_node(std::string const&)
//008d0402 T std::deque<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> >::_M_reallocate_map(unsigned long, bool)
//008d008c T std::deque<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> >::deque(std::deque<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> > const&)
//008d02fc T std::deque<Bootil::Console::PosInfo, std::allocator<Bootil::Console::PosInfo> >::deque(std::deque<Bootil::Console::PosInfo, std::allocator<Bootil::Console::PosInfo> > const&)
//008d14d6 T std::deque<std::string, std::allocator<std::string> >::_M_push_back_aux(std::string const&)
//008d1386 T std::deque<std::string, std::allocator<std::string> >::_M_reallocate_map(unsigned long, bool)
//008d0da0 T std::deque<std::string, std::allocator<std::string> >::_M_destroy_data_aux(std::_Deque_iterator<std::string, std::string&, std::string*>, std::_Deque_iterator<std::string, std::string&, std::string*>)
//008d111c T std::deque<std::string, std::allocator<std::string> >::deque(std::deque<std::string, std::allocator<std::string> > const&)
//008d128e T std::deque<std::string, std::allocator<std::string> >::~deque()
//008debe0 T std::vector<std::string, std::allocator<std::string> >::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, std::string const&)
//008cf292 T std::_Rb_tree<_opaque_pthread_t*, std::pair<_opaque_pthread_t* const, unsigned long>, std::_Select1st<std::pair<_opaque_pthread_t* const, unsigned long> >, std::less<_opaque_pthread_t*>, std::allocator<std::pair<_opaque_pthread_t* const, unsigned long> > >::_M_destroy_node(std::_Rb_tree_node<std::pair<_opaque_pthread_t* const, unsigned long> >*)
//008cee68 T std::_Rb_tree<_opaque_pthread_t*, std::pair<_opaque_pthread_t* const, unsigned long>, std::_Select1st<std::pair<_opaque_pthread_t* const, unsigned long> >, std::less<_opaque_pthread_t*>, std::allocator<std::pair<_opaque_pthread_t* const, unsigned long> > >::_M_insert_unique(std::pair<_opaque_pthread_t* const, unsigned long> const&)
//008cef9e T std::_Rb_tree<_opaque_pthread_t*, std::pair<_opaque_pthread_t* const, unsigned long>, std::_Select1st<std::pair<_opaque_pthread_t* const, unsigned long> >, std::less<_opaque_pthread_t*>, std::allocator<std::pair<_opaque_pthread_t* const, unsigned long> > >::_M_insert_unique(std::_Rb_tree_iterator<std::pair<_opaque_pthread_t* const, unsigned long> >, std::pair<_opaque_pthread_t* const, unsigned long> const&)
//008cee60 T std::_Rb_tree<_opaque_pthread_t*, std::pair<_opaque_pthread_t* const, unsigned long>, std::_Select1st<std::pair<_opaque_pthread_t* const, unsigned long> >, std::less<_opaque_pthread_t*>, std::allocator<std::pair<_opaque_pthread_t* const, unsigned long> > >::_S_left(std::_Rb_tree_node_base*)
//008cf2a8 T std::_Rb_tree<_opaque_pthread_t*, std::pair<_opaque_pthread_t* const, unsigned long>, std::_Select1st<std::pair<_opaque_pthread_t* const, unsigned long> >, std::less<_opaque_pthread_t*>, std::allocator<std::pair<_opaque_pthread_t* const, unsigned long> > >::_M_erase(std::_Rb_tree_node<std::pair<_opaque_pthread_t* const, unsigned long> >*)
//008df9e8 T std::_Rb_tree<int, std::pair<int const, Bootil::Compression::Zip::File::Entry>, std::_Select1st<std::pair<int const, Bootil::Compression::Zip::File::Entry> >, std::less<int>, std::allocator<std::pair<int const, Bootil::Compression::Zip::File::Entry> > >::_M_create_node(std::pair<int const, Bootil::Compression::Zip::File::Entry> const&)
//008dfeb6 T std::_Rb_tree<int, std::pair<int const, Bootil::Compression::Zip::File::Entry>, std::_Select1st<std::pair<int const, Bootil::Compression::Zip::File::Entry> >, std::less<int>, std::allocator<std::pair<int const, Bootil::Compression::Zip::File::Entry> > >::_M_destroy_node(std::_Rb_tree_node<std::pair<int const, Bootil::Compression::Zip::File::Entry> >*)
//008dfa62 T std::_Rb_tree<int, std::pair<int const, Bootil::Compression::Zip::File::Entry>, std::_Select1st<std::pair<int const, Bootil::Compression::Zip::File::Entry> >, std::less<int>, std::allocator<std::pair<int const, Bootil::Compression::Zip::File::Entry> > >::_M_insert_unique(std::pair<int const, Bootil::Compression::Zip::File::Entry> const&)
//008dfb78 T std::_Rb_tree<int, std::pair<int const, Bootil::Compression::Zip::File::Entry>, std::_Select1st<std::pair<int const, Bootil::Compression::Zip::File::Entry> >, std::less<int>, std::allocator<std::pair<int const, Bootil::Compression::Zip::File::Entry> > >::_M_insert_unique(std::_Rb_tree_iterator<std::pair<int const, Bootil::Compression::Zip::File::Entry> >, std::pair<int const, Bootil::Compression::Zip::File::Entry> const&)
//008df9e0 T std::_Rb_tree<int, std::pair<int const, Bootil::Compression::Zip::File::Entry>, std::_Select1st<std::pair<int const, Bootil::Compression::Zip::File::Entry> >, std::less<int>, std::allocator<std::pair<int const, Bootil::Compression::Zip::File::Entry> > >::_S_left(std::_Rb_tree_node_base*)
//008dfee2 T std::_Rb_tree<int, std::pair<int const, Bootil::Compression::Zip::File::Entry>, std::_Select1st<std::pair<int const, Bootil::Compression::Zip::File::Entry> >, std::less<int>, std::allocator<std::pair<int const, Bootil::Compression::Zip::File::Entry> > >::_M_erase(std::_Rb_tree_node<std::pair<int const, Bootil::Compression::Zip::File::Entry> >*)
//008dbeb0 T void std::__adjust_heap<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, int, std::string>(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, int, int, std::string)
//008db540 T void std::__adjust_heap<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, int, std::string>(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, int, int, std::string)
//008dc090 T void std::__heap_select<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//008db760 T void std::__heap_select<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//008dc4a0 T void std::__insertion_sort<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//008dbc50 T void std::__insertion_sort<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//008dc230 T void std::__introsort_loop<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, int>(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, int)
//008db950 T void std::__introsort_loop<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, int>(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, int)
//008d7700 T std::string* std::__uninitialized_copy_aux<std::string*, std::string*>(std::string*, std::string*, std::string*, std::__false_type)
//008d0e80 T std::_Deque_iterator<std::string, std::string&, std::string*> std::__uninitialized_copy_aux<std::_Deque_iterator<std::string, std::string const&, std::string const*>, std::_Deque_iterator<std::string, std::string&, std::string*> >(std::_Deque_iterator<std::string, std::string const&, std::string const*>, std::_Deque_iterator<std::string, std::string const&, std::string const*>, std::_Deque_iterator<std::string, std::string&, std::string*>, std::__false_type)
//008dc3e0 T void std::__unguarded_insertion_sort<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//008dbb90 T void std::__unguarded_insertion_sort<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//008dbdf0 T void std::sort<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//008dc180 T void std::pop_heap<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//008db890 T void std::pop_heap<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//008dbfe0 T void std::make_heap<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//008db6a0 T void std::make_heap<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//00c08220 S typeinfo for CAI_BaseNPC
//00c65350 S typeinfo for CHL2_Player
//00c6c4c0 S typeinfo for CNPC_Antlion
//00c8cbf0 S typeinfo for CNPC_Stalker
//00c100a0 S typeinfo for CAI_PlayerAlly
//00cc54a0 S typeinfo for CEnvSoundscape
//00cb3dd0 S typeinfo for CPhysicsSpring
//00c752c8 S typeinfo for CSquadInsignia
//00c3c1e0 S typeinfo for CThrownGrenade
//00c59bf8 S typeinfo for CAI_ActBusyGoal
//00c5a720 S typeinfo for CAI_OperatorGoal
//00c939d0 S typeinfo for CPropCombineBall
//00c65c28 S typeinfo for CLogicPlayerProxy
//00c6f208 S typeinfo for CGrenadeHelicopter
//00c59c08 S typeinfo for CAI_ActBusyQueueGoal
//00cd3050 S typeinfo for CFourWheelServerVehicle
//00c2d6c0 S typeinfo for CFire
//00c9ba00 S typeinfo for CFlare
//00c19d90 S typeinfo for CBaseDoor
//00cd6bc8 S typeinfo for Bootil::AutoBuffer
//00bef330 D typeinfo for Bootil::Compression::ProgressCallback
//00bef318 D typeinfo for Bootil::Compression::Job
//00bef3a0 D typeinfo for Bootil::Compression::LZMA::ExtractionThread
//00bef2c0 D typeinfo for Bootil::Compression::FastLZ::ExtractionThread
//00cd6ba8 S typeinfo for Bootil::Buffer
//00cd6b88 S typeinfo for Bootil::Threads::Thread
//00a31d60 S typeinfo name for CAI_BaseNPC
//00a386a0 S typeinfo name for CHL2_Player
//00a39420 S typeinfo name for CNPC_Antlion
//00a3aca0 S typeinfo name for CNPC_Stalker
//00a32c90 S typeinfo name for CAI_PlayerAlly
//00a3f390 S typeinfo name for CEnvSoundscape
//00a3db70 S typeinfo name for CPhysicsSpring
//00a39d40 S typeinfo name for CSquadInsignia
//00a36540 S typeinfo name for CThrownGrenade
//00a37710 S typeinfo name for CAI_ActBusyGoal
//00a37840 S typeinfo name for CAI_OperatorGoal
//00a3b2a0 S typeinfo name for CPropCombineBall
//00a386b0 S typeinfo name for CLogicPlayerProxy
//00a398c0 S typeinfo name for CGrenadeHelicopter
//00a37730 S typeinfo name for CAI_ActBusyQueueGoal
//00a40740 S typeinfo name for CFourWheelServerVehicle
//00a356a0 S typeinfo name for CFire
//00a3b9a0 S typeinfo name for CFlare
//00a33fd0 S typeinfo name for CBaseDoor
//00a29d40 S typeinfo name for Bootil::AutoBuffer
//00a4342c S typeinfo name for Bootil::Compression::ProgressCallback
//00a43410 S typeinfo name for Bootil::Compression::Job
//00a43458 S typeinfo name for Bootil::Compression::LZMA::ExtractionThread
//00a433dc S typeinfo name for Bootil::Compression::FastLZ::ExtractionThread
//00a29d20 S typeinfo name for Bootil::Buffer
//00a29ca0 S typeinfo name for Bootil::Threads::Thread
//00cd6bb0 S vtable for Bootil::AutoBuffer
//00bef320 D vtable for Bootil::Compression::ProgressCallback
//00bef300 D vtable for Bootil::Compression::Job
//00bef340 D vtable for Bootil::Compression::LZMA::ExtractionThread
//00bef280 D vtable for Bootil::Compression::FastLZ::ExtractionThread
//00cd6b90 S vtable for Bootil::Buffer
//00cd6b70 S vtable for Bootil::Threads::Thread
//008e0f60 T non-virtual thunk to Bootil::Compression::LZMA::ExtractionThread::GetProgress()
//008e0ba0 T non-virtual thunk to Bootil::Compression::LZMA::ExtractionThread::Destroy()
//008e0f30 T non-virtual thunk to Bootil::Compression::LZMA::ExtractionThread::Success()
//008e0f00 T non-virtual thunk to Bootil::Compression::LZMA::ExtractionThread::Finished()
//008df9c0 T non-virtual thunk to Bootil::Compression::FastLZ::ExtractionThread::GetProgress()
//008df990 T non-virtual thunk to Bootil::Compression::FastLZ::ExtractionThread::Destroy()
//008e0330 T non-virtual thunk to Bootil::Compression::FastLZ::ExtractionThread::Success()
//008e0300 T non-virtual thunk to Bootil::Compression::FastLZ::ExtractionThread::Finished()
//008e0f90 T non-virtual thunk to Bootil::Compression::LZMA::ExtractionThread::OnProgress(float, unsigned int, unsigned int)
//00bb6d54 D CFmtStrN<1024>::CFmtStrN(char const*, ...)::scAsserted
//00bb6a50 D CFmtStrN<128>::CFmtStrN(char const*, ...)::scAsserted
//00bb0a40 D CFmtStrN<256>::CFmtStrN(char const*, ...)::scAsserted
//00bb0990 D CFmtStrN<256>::CFmtStrN(char const**, ...)::scAsserted
//00ba56fc D CFmtStrN<32>::CFmtStrN(char const*, ...)::scAsserted
//00bd86e0 D CFmtStrN<512>::CFmtStrN(char const*, ...)::scAsserted
//00a432a0 S __ZZN9rapidjson12GenericValueINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEEC4ENS_4TypeEE12defaultFlags
//00a431a0 S void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseStringToStream<0u, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::GenericStringStream<rapidjson::UTF8<char> >, rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream>(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream&)::escape
//00a432c0 S rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::WriteString(char const*, unsigned int)::escape
//00a433c0 S rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::WriteString(char const*, unsigned int)::hexDigits
//00a41e40 S rapidjson::internal::Pow10(int)::e
//00a455a0 S __dist_code
//00a45e20 S __length_code
//008f1220 T __tr_align
//008f1360 T __tr_flush_bits
//008f1560 T __tr_flush_block
//008efcd0 T __tr_init
//008f13e0 T __tr_stored_block
//008f04e0 T __tr_tally
//008ebed0 T _adler32
//008ec170 T _adler32_combine
//008ec230 T _adler32_combine64
//008ec3c0 T _compress
//008ec2f0 T _compress2
//008ec3a0 T _compressBound
//008ec480 T _crc32
//008ec980 T _crc32_combine
//008ec9a0 T _crc32_combine64
//00e3e5d8 S _cvar
//008ee380 T _deflate
//008eca80 T _deflateBound
//008ecf50 T _deflateCopy
//008ecb80 T _deflateEnd
//008ef9f0 T _deflateInit2_
//008efc80 T _deflateInit_
//008ef690 T _deflateParams
//008ec9f0 T _deflatePending
//008ef790 T _deflatePrime
//008ef910 T _deflateReset
//008ef830 T _deflateResetKeep
//008ee1c0 T _deflateSetDictionary
//008ec9c0 T _deflateSetHeader
//008eca30 T _deflateTune
//00a29d9c S _deflate_copyright
//008e1190 T _fastlz_compress
//008e1920 T _fastlz_compress_level
//008e1960 T _fastlz_decompress
//008ec470 T _get_crc_table
//00e45128 S _seeder
//0091c1e0 T _sqlite3_aggregate_context
//00905960 T _sqlite3_aggregate_count
//00923b10 T _sqlite3_auto_extension
//0093a350 T _sqlite3_backup_finish
//0093a6b0 T _sqlite3_backup_init
//00905570 T _sqlite3_backup_pagecount
//00905560 T _sqlite3_backup_remaining
//00937810 T _sqlite3_backup_step
//0091c260 T _sqlite3_bind_blob
//0091c2a0 T _sqlite3_bind_double
//0091c340 T _sqlite3_bind_int
//0091c370 T _sqlite3_bind_int64
//0091c440 T _sqlite3_bind_null
//00905be0 T _sqlite3_bind_parameter_count
//0091c480 T _sqlite3_bind_parameter_index
//00905bf0 T _sqlite3_bind_parameter_name
//0091c4d0 T _sqlite3_bind_text
//0091c510 T _sqlite3_bind_text16
//0091c550 T _sqlite3_bind_value
//00920350 T _sqlite3_bind_zeroblob
//00905d10 T _sqlite3_blob_bytes
//00920440 T _sqlite3_blob_close
//009204d0 T _sqlite3_blob_open
//009211d0 T _sqlite3_blob_read
//00921380 T _sqlite3_blob_write
//0090fac0 T _sqlite3_busy_handler
//0090fba0 T _sqlite3_busy_timeout
//0090fa00 T _sqlite3_changes
//00920210 T _sqlite3_clear_bindings
//0091c650 T _sqlite3_close
//0090fe60 T _sqlite3_collation_needed
//0090fec0 T _sqlite3_collation_needed16
//0091cbb0 T _sqlite3_column_blob
//0091cc50 T _sqlite3_column_bytes
//0091cd10 T _sqlite3_column_bytes16
//00905970 T _sqlite3_column_count
//00905ac0 T _sqlite3_column_decltype
//00905b50 T _sqlite3_column_decltype16
//0091cdd0 T _sqlite3_column_double
//0091ce80 T _sqlite3_column_int
//0091cf20 T _sqlite3_column_int64
//009059a0 T _sqlite3_column_name
//00905a30 T _sqlite3_column_name16
//0091cfc0 T _sqlite3_column_text
//0091d060 T _sqlite3_column_text16
//0091d100 T _sqlite3_column_type
//0091d1a0 T _sqlite3_column_value
//0090fd00 T _sqlite3_commit_hook
//008ffe90 T _sqlite3_compileoption_get
//00900d90 T _sqlite3_compileoption_used
//0090f220 T _sqlite3_complete
//0091d250 T _sqlite3_complete16
//00916290 T _sqlite3_config
//00905920 T _sqlite3_context_db_handle
//0091d360 T _sqlite3_create_collation
//0091d410 T _sqlite3_create_collation16
//00921530 T _sqlite3_create_collation_v2
//0091d570 T _sqlite3_create_function
//0091d620 T _sqlite3_create_function16
//0091d780 T _sqlite3_create_module
//00920320 T _sqlite3_create_module_v2
//00905980 T _sqlite3_data_count
//0090ffb0 T _sqlite3_db_config
//00905c80 T _sqlite3_db_handle
//0090f930 T _sqlite3_db_mutex
//008ffee0 T _sqlite3_db_status
//0091d7b0 T _sqlite3_declare_vtab
//0090d2a0 T _sqlite3_enable_load_extension
//00904fb0 T _sqlite3_enable_shared_cache
//00916f00 T _sqlite3_errcode
//0091da40 T _sqlite3_errmsg
//0091db30 T _sqlite3_errmsg16
//0091dc40 T _sqlite3_exec
//009058e0 T _sqlite3_expired
//00916e70 T _sqlite3_extended_errcode
//0090ff50 T _sqlite3_extended_result_codes
//0091b5b0 T _sqlite3_file_control
//0091e2c0 T _sqlite3_finalize
//00900840 T _sqlite3_free
//0090e370 T _sqlite3_free_table
//0090ff30 T _sqlite3_get_autocommit
//00905930 T _sqlite3_get_auxdata
//0091e3c0 T _sqlite3_get_table
//0090ff20 T _sqlite3_global_recover
//0091b940 T _sqlite3_initialize
//0090fc30 T _sqlite3_interrupt
//0090f9f0 T _sqlite3_last_insert_rowid
//0090f740 T _sqlite3_libversion
//0090f760 T _sqlite3_libversion_number
//0090fe20 T _sqlite3_limit
//00938cc0 T _sqlite3_load_extension
//00915e00 T _sqlite3_log
//0091e620 T _sqlite3_malloc
//00900560 T _sqlite3_memory_alarm
//00916e20 T _sqlite3_memory_highwater
//00916e50 T _sqlite3_memory_used
//0091c130 T _sqlite3_mprintf
//009215e0 T _sqlite3_mutex_alloc
//00900220 T _sqlite3_mutex_enter
//00900200 T _sqlite3_mutex_free
//00900260 T _sqlite3_mutex_leave
//00900240 T _sqlite3_mutex_try
//00905c90 T _sqlite3_next_stmt
//0091e690 T _sqlite3_open
//0091e6c0 T _sqlite3_open16
//00921610 T _sqlite3_open_v2
//009041c0 T _sqlite3_os_end
//00923d90 T _sqlite3_os_init
//00920070 T _sqlite3_overload_function
//0091e800 T _sqlite3_prepare
//0091e840 T _sqlite3_prepare16
//009201d0 T _sqlite3_prepare16_v2
//00920190 T _sqlite3_prepare_v2
//0090fca0 T _sqlite3_profile
//0090fb20 T _sqlite3_progress_handler
//00921fe0 T _sqlite3_randomness
//0091e880 T _sqlite3_realloc
//00900540 T _sqlite3_release_memory
//0091e8b0 T _sqlite3_reset
//0091bf50 T _sqlite3_reset_auto_extension
//0091e990 T _sqlite3_result_blob
//0091ea00 T _sqlite3_result_double
//0091ea60 T _sqlite3_result_error
//0091eaa0 T _sqlite3_result_error16
//009219c0 T _sqlite3_result_error_code
//00921640 T _sqlite3_result_error_nomem
//00921670 T _sqlite3_result_error_toobig
//0091eae0 T _sqlite3_result_int
//0091eb70 T _sqlite3_result_int64
//0091ec00 T _sqlite3_result_null
//0091ec10 T _sqlite3_result_text
//0091ec80 T _sqlite3_result_text16
//0091ecf0 T _sqlite3_result_text16be
//0091ed60 T _sqlite3_result_text16le
//0091edd0 T _sqlite3_result_value
//00921930 T _sqlite3_result_zeroblob
//0090fdc0 T _sqlite3_rollback_hook
//00907c70 T _sqlite3_set_authorizer
//0091ee50 T _sqlite3_set_auxdata
//0091bfd0 T _sqlite3_shutdown
//009216b0 T _sqlite3_sleep
//00916f90 T _sqlite3_snprintf
//00921700 T _sqlite3_soft_heap_limit
//0090f750 T _sqlite3_sourceid
//00905610 T _sqlite3_sql
//00916da0 T _sqlite3_status
//0091ef20 T _sqlite3_step
//00905ce0 T _sqlite3_stmt_status
//00900d20 T _sqlite3_strnicmp
//00e45138 S _sqlite3_temp_directory
//00921a30 T _sqlite3_test_control
//0090ff40 T _sqlite3_thread_cleanup
//0090f770 T _sqlite3_threadsafe
//0090fa10 T _sqlite3_total_changes
//0090fc40 T _sqlite3_trace
//0091fde0 T _sqlite3_transfer_bindings
//0090fd60 T _sqlite3_update_hook
//00905910 T _sqlite3_user_data
//0091fe90 T _sqlite3_value_blob
//0091ff30 T _sqlite3_value_bytes
//0091ff70 T _sqlite3_value_bytes16
//0091ffb0 T _sqlite3_value_double
//0091ffd0 T _sqlite3_value_int
//0091ffe0 T _sqlite3_value_int64
//0091fff0 T _sqlite3_value_numeric_type
//00905a20 T _sqlite3_value_text
//00905ab0 T _sqlite3_value_text16
//00920050 T _sqlite3_value_text16be
//00920060 T _sqlite3_value_text16le
//00905900 T _sqlite3_value_type
//00a2a6b0 S _sqlite3_version
//009217c0 T _sqlite3_vfs_find
//00921860 T _sqlite3_vfs_register
//00900280 T _sqlite3_vfs_unregister
//0091c090 T _sqlite3_vmprintf
//008f1c90 T _zError
//00cd6c60 S _z_errmsg
//008f1cd0 T _zcalloc
//008f1cb0 T _zcfree
//008f1c80 T _zlibCompileFlags
//008f1c70 T _zlibVersion

#endif //GMODLUAHAX_GMODSERVERPRTS_H
