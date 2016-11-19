//
// Created by Jfm Meyers on 11/18/16.
//

#ifndef GMODLUAHAX_GMODPOINTERS_H
#define GMODLUAHAX_GMODPOINTERS_H
extern "C" {
void GMOD_LoadBinaryModule();
void CreateInterface(const char * version, int * returnCode);
}

//0005bd80 T
//00011450 T md5_finish(md5_context*, unsigned char*)
//00010a80 T md5_starts(md5_context*)
//00011390 T md5_update(md5_context*, unsigned char*, int)
//00010930 T crc32_start(unsigned long)
//000115e0 T md5(unsigned char*, int, unsigned char*)
//00010830 T crc32(void const*, int, unsigned long, unsigned long*)
//00011660 T md5_32(void const*, int, unsigned int, void*)
//000107a0 T globber(char const*, char const*)
//000116f0 T md5hash(void const*, int, unsigned int)
//00016200 T wildcmp(char const*, char const*)
//00010940 T crc32_add(unsigned long&, void const*, int)
//00010a70 T crc32_end(unsigned long&)
//0001748a T Bootil::AutoBuffer::EnsureCapacity(unsigned int)
//000175f2 T Bootil::AutoBuffer::Clear()
//00017528 T Bootil::AutoBuffer::AutoBuffer(int)
//0001762e T Bootil::AutoBuffer::AutoBuffer(int)
//000175ba T Bootil::AutoBuffer::~AutoBuffer()
//00017586 T Bootil::AutoBuffer::~AutoBuffer()
//0001768c T Bootil::AutoBuffer::~AutoBuffer()
//000117a0 T Bootil::IsShuttingDown()
//00014960 T Bootil::File::GetTempDir()
//00014d20 T Bootil::File::RemoveFile(std::string const&)
//00014da0 T Bootil::File::CreateFolder(std::string const&, bool)
//00015360 T Bootil::File::RemoveFolder(std::string const&, bool)
//00014b50 T Bootil::File::GetTempFilename()
//00015860 T Bootil::File::GetFilesInFolder(std::string const&, std::vector<std::string, std::allocator<std::string> >&, bool)
//000145d0 T Bootil::File::RelativeToAbsolute(std::string const&)
//000152c0 T Bootil::File::CRC(std::string const&)
//00014610 T Bootil::File::Copy(std::string const&, std::string const&)
//00015350 T Bootil::File::Find(std::vector<std::string, std::allocator<std::string> >*, std::vector<std::string, std::allocator<std::string> >*, std::string const&, bool)
//00015180 T Bootil::File::Read(std::string const&, Bootil::Buffer&)
//00014830 T Bootil::File::Read(std::string const&, std::string&)
//000150a0 T Bootil::File::Size(std::string const&)
//000150d0 T Bootil::File::Write(std::string const&, Bootil::Buffer const&)
//00014790 T Bootil::File::Write(std::string const&, std::string const&)
//000146f0 T Bootil::File::Append(std::string const&, std::string const&)
//00015070 T Bootil::File::Exists(std::string const&)
//00014d50 T Bootil::File::IsFolder(std::string const&)
//00017760 T Bootil::Math::Random::Int(int, int)
//00017730 T Bootil::Math::Random::Bool()
//00017780 T Bootil::Math::Random::Seed(unsigned int)
//00013f50 T Bootil::Debug::PopupMessage(char const*, ...)
//00013aa0 T Bootil::Debug::SuppressPopups(bool)
//00013b00 T Bootil::Debug::Crash::SetupCallback()
//00013ac0 T Bootil::Debug::Crash::SetMinidumpFunction(void (*)(unsigned int, void*))
//00013ae0 T Bootil::Debug::Crash::FunctionCalledOnCrash(unsigned int, void*)
//00013bc0 T Bootil::Debug::Crash::DoCrash()
//000142e0 T Bootil::Debug::Internal::DoAssert(char const*, unsigned int, char const*, char const*, char const*, ...)
//00014498 T Bootil::Debug::IListener::Add(Bootil::Debug::IListener*)
//000143f0 T Bootil::Debug::IListener::Remove(Bootil::Debug::IListener*)
//00013b10 T Bootil::Debug::LastError()
//00013a20 T Bootil::Debug::Listeners()
//00019830 T std::string Bootil::ToStr<float>(float const&)
//000198b0 T std::string Bootil::ToStr<int>(int const&)
//00019870 T std::string Bootil::ToStr<unsigned int>(unsigned int const&)
//000197f0 T std::string Bootil::ToStr<unsigned long long>(unsigned long long const&)
//00017144 T Bootil::Buffer::GetCurrent()
//00017290 T Bootil::Buffer::ReadString()
//00017162 T Bootil::Buffer::SetWritten(unsigned int)
//00017418 T Bootil::Buffer::WriteBuffer(Bootil::Buffer const&)
//00017352 T Bootil::Buffer::WriteString(std::string const&, bool)
//0001707c T Bootil::Buffer::EnsureCapacity(unsigned int)
//000170be T Bootil::Buffer::SetExternalBuffer(void*, int)
//0001724a T Bootil::Buffer::Read(void*, int)
//00017068 T Bootil::Buffer::Clear()
//000172fa T Bootil::Buffer::Write(void const*, unsigned int)
//00017150 T Bootil::Buffer::SetPos(unsigned int)
//000171a0 T Bootil::Buffer::MoveMem(unsigned int, unsigned int, unsigned int)
//000171e8 T Bootil::Buffer::TrimLeft(unsigned int)
//000170ec T Bootil::Buffer::Buffer(void*, int)
//0001708e T Bootil::Buffer::Buffer()
//00016fd0 T Bootil::Buffer::Buffer(void*, int)
//0001700c T Bootil::Buffer::Buffer()
//00017050 T Bootil::Buffer::~Buffer()
//0001703c T Bootil::Buffer::~Buffer()
//00017476 T Bootil::Buffer::~Buffer()
//0001ae90 T Bootil::Hasher::MD5::Easy(void const*, unsigned int)
//0001aed0 T Bootil::Hasher::MD5::String(std::string const&)
//0001af30 T Bootil::Hasher::CRC32::Add(unsigned long&, void const*, unsigned int)
//0001af20 T Bootil::Hasher::CRC32::End(unsigned long&)
//0001ae30 T Bootil::Hasher::CRC32::Easy(void const*, unsigned int, unsigned long)
//0001af40 T Bootil::Hasher::CRC32::Start(unsigned long)
//0001af50 T Bootil::Hasher::CRC32::String(std::string const&, unsigned long)
//00013be0 T Bootil::Output::Msg(char const*, ...)
//00014080 T Bootil::Output::Error(char const*, ...)
//00013da0 T Bootil::Output::Warning(char const*, ...)
//0001a650 T Bootil::String::ToCharBuffer(std::string const&, char*, int)
//000193d0 T Bootil::String::File::FixSlashes(std::string&, std::string const&, std::string const&)
//00019160 T Bootil::String::File::LastDirectory(std::string&)
//000190b0 T Bootil::String::File::StripFilename(std::string&)
//00018dd0 T Bootil::String::File::IsAbsolutePath(std::string const&)
//00019030 T Bootil::String::File::StripExtension(std::string&)
//00018f10 T Bootil::String::File::UpOneDirectory(std::string&)
//00019290 T Bootil::String::File::ExtractFilename(std::string&)
//00019330 T Bootil::String::File::IsFileExtension(std::string const&, std::string const&)
//00018e50 T Bootil::String::File::GetFileExtension(std::string const&)
//000193e0 T Bootil::String::File::ToWindowsSlashes(std::string&)
//00018bd0 T Bootil::String::File::CleanPath(std::string&)
//00019fd0 T Bootil::String::Test::StartsWith(std::string const&, std::string const&)
//0001a0b0 T Bootil::String::Test::ContainsAny(std::string const&, std::string const&)
//0001a060 T Bootil::String::Test::ContainsChar(std::string const&, char)
//0001a120 T Bootil::String::Test::ContainsOnly(std::string const&, std::string const&)
//0001a2d0 T Bootil::String::Test::Contains(std::string const&, std::string const&, bool)
//0001a000 T Bootil::String::Test::EndsWith(std::string const&, std::string const&)
//0001a200 T Bootil::String::Test::ICompare(std::string const&, std::string const&)
//0001a1b0 T Bootil::String::Test::IsNumber(std::string const&)
//0001a290 T Bootil::String::Test::Wildcard(std::string const&, std::string const&)
//0001a6b0 T Bootil::String::Util::TrimBefore(std::string&, std::string const&, bool)
//0001a870 T Bootil::String::Util::SplitLength(std::string const&, int, std::vector<std::string, std::allocator<std::string> >&)
//0001a470 T Bootil::String::Util::FindAndReplace(std::string&, std::string const&, std::string const&)
//0001a570 T Bootil::String::Util::Trim(std::string&, std::string const&)
//0001a5e0 T Bootil::String::Util::Count(std::string const&, char)
//0001a960 T Bootil::String::Util::Split(std::string const&, std::string const&, std::vector<std::string, std::allocator<std::string> >&)
//0001a530 T Bootil::String::Util::TrimLeft(std::string&, std::string const&)
//0001a790 T Bootil::String::Util::TrimAfter(std::string&, std::string const&, bool)
//0001a4f0 T Bootil::String::Util::TrimRight(std::string&, std::string const&)
//000177f0 T Bootil::String::Lower(std::string&)
//00017840 T Bootil::String::Upper(std::string&)
//00019a30 T Bootil::String::Format::NiceDouble(double)
//00019960 T Bootil::String::Format::BinaryToHex(void const*, unsigned int)
//00019de0 T Bootil::String::Format::MemoryPerSecond(int)
//00019c60 T Bootil::String::Format::CommaSeperatedInt(int)
//000198f0 T Bootil::String::Format::Int(int)
//00019650 T Bootil::String::Format::Time(std::string const&, unsigned int)
//00019770 T Bootil::String::Format::Print(char const*, ...)
//000196f0 T Bootil::String::Format::Print(wchar_t const*, ...)
//000195a0 T Bootil::String::Format::YesNo(bool)
//00019d30 T Bootil::String::Format::Memory(int)
//00019920 T Bootil::String::Format::UInt64(unsigned long long)
//00019f00 T Bootil::String::Format::VarArgs(char const*, char*)
//00019520 T Bootil::String::Format::VarArgs(wchar_t const*, char*)
//00019b40 T Bootil::String::Format::NiceFloat(float)
//00017980 T Bootil::String::Random(int, bool, bool, bool, bool)
//000178d0 T Bootil::String::SortList(std::vector<std::string, std::allocator<std::string> >&, bool)
//000118a0 T Bootil::Console::BGColorPop()
//00011900 T Bootil::Console::FGColorPop()
//00011ad0 T Bootil::Console::WaitForKey()
//00011af0 T Bootil::Console::BGColorPush(Bootil::Console::ConsoleColor)
//00011bc0 T Bootil::Console::FGColorPush(Bootil::Console::ConsoleColor)
//00011820 T Bootil::Console::UpdateColor()
//00011840 T Bootil::Console::PosPushRelative(int, int)
//00011860 T Bootil::Console::SetCursorVisible(bool)
//00011870 T Bootil::Console::Cls()
//00011c90 T Bootil::Console::Msg(Bootil::Console::ConsoleColor, Bootil::Console::ConsoleColor, char const*, ...)
//00012e80 T Bootil::Console::Input::PostOutput()
//0007d3a4 S Bootil::Console::Input::m_CaretPos
//00013000 T Bootil::Console::Input::OnBackspace()
//000129d0 T Bootil::Console::Input::GetLineInProgress()
//000129c0 T Bootil::Console::Input::Plat_GetConsoleCharNonBlocking()
//00012eb0 T Bootil::Console::Input::Cycle()
//00012a00 T Bootil::Console::Input::Flush()
//000130a0 T Bootil::Console::Input::OnLeft()
//00012ec0 T Bootil::Console::Input::GetLine()
//00013060 T Bootil::Console::Input::OnRight()
//0007d3c0 S Bootil::Console::Input::m_Lines
//00012c90 T Bootil::Console::Input::DrawLine()
//00012ba0 T Bootil::Console::Input::OnReturn()
//00012aa0 T Bootil::Console::Input::ClearLine()
//00012b10 T Bootil::Console::Input::PreOutput()
//0007d3a0 S Bootil::Console::Input::m_strLine
//00011850 T Bootil::Console::PosPop()
//00011830 T Bootil::Console::PosPush(int, int)
//00011780 T Bootil::Startup()
//00016760 T Bootil::Platform::CurrentDir()
//00016630 T Bootil::Platform::GetKeyChar()
//00016320 T Bootil::Platform::LibraryLoad(std::string const&)
//00016300 T Bootil::Platform::OpenWebpage(std::string const&)
//00016550 T Bootil::Platform::ProgramName()
//00016370 T Bootil::Platform::Architecture()
//000162c0 T Bootil::Platform::DesktopWidth()
//00016650 T Bootil::Platform::IsKeyPressed()
//00016340 T Bootil::Platform::LibraryClose(void*)
//00016430 T Bootil::Platform::PlatformName()
//00016310 T Bootil::Platform::StartProcess(std::string const&, bool)
//00016490 T Bootil::Platform::TemporaryDir()
//000162d0 T Bootil::Platform::DesktopHeight()
//000164f0 T Bootil::Platform::ProgramFolder()
//000162f0 T Bootil::Platform::DebuggerOutput(std::string const&)
//00016e30 T Bootil::Platform::CurrentUserName()
//000165b0 T Bootil::Platform::FullProgramName()
//00016350 T Bootil::Platform::GetAbsolutePath(std::string const&)
//000166e0 T Bootil::Platform::GetMilliseconds()
//000162b0 T Bootil::Platform::SetupAssociation(std::string)
//00016ec0 T Bootil::Platform::FormatSystemError(unsigned long)
//000163d0 T Bootil::Platform::PlatformNameShort()
//000167f0 T Bootil::Platform::TemporaryFilename()
//00016330 T Bootil::Platform::GetFunctionAddress(void*, std::string const&)
//000162e0 T Bootil::Platform::Popup(std::string const&, std::string const&)
//000167d0 T Bootil::Platform::Sleep(unsigned int)
//000169c0 T Bootil::Platform::FindFiles(std::vector<std::string, std::allocator<std::string> >*, std::vector<std::string, std::allocator<std::string> >*, std::string const&, bool)
//00016f20 T Bootil::Platform::LastError()
//00011790 T Bootil::Shutdown()
//0001716e T Bootil::Buffer::GetWritten() const
//00017130 T Bootil::Buffer::GetPos() const
//00017138 T Bootil::Buffer::GetBase(unsigned int) const
//00017128 T Bootil::Buffer::GetSize() const
//00015db0 T char* std::string::_S_construct<std::istreambuf_iterator<char, std::char_traits<char> > >(std::istreambuf_iterator<char, std::char_traits<char> >, std::istreambuf_iterator<char, std::char_traits<char> >, std::allocator<char> const&, std::input_iterator_tag)
//00012370 T std::_Deque_base<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> >::_M_create_nodes(Bootil::Console::ConsoleColor**, Bootil::Console::ConsoleColor**)
//000123f4 T std::_Deque_base<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> >::_M_initialize_map(unsigned long)
//000125e8 T std::_Deque_base<Bootil::Console::PosInfo, std::allocator<Bootil::Console::PosInfo> >::_M_create_nodes(Bootil::Console::PosInfo**, Bootil::Console::PosInfo**)
//00012664 T std::_Deque_base<Bootil::Console::PosInfo, std::allocator<Bootil::Console::PosInfo> >::_M_initialize_map(unsigned long)
//0001340a T std::_Deque_base<std::string, std::allocator<std::string> >::_M_create_nodes(std::string**, std::string**)
//00013484 T std::_Deque_base<std::string, std::allocator<std::string> >::_M_initialize_map(unsigned long)
//00012862 T std::deque<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> >::_M_reallocate_map(unsigned long, bool)
//000124ec T std::deque<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> >::deque(std::deque<Bootil::Console::ConsoleColor, std::allocator<Bootil::Console::ConsoleColor> > const&)
//0001275c T std::deque<Bootil::Console::PosInfo, std::allocator<Bootil::Console::PosInfo> >::deque(std::deque<Bootil::Console::PosInfo, std::allocator<Bootil::Console::PosInfo> > const&)
//00013936 T std::deque<std::string, std::allocator<std::string> >::_M_push_back_aux(std::string const&)
//000137e6 T std::deque<std::string, std::allocator<std::string> >::_M_reallocate_map(unsigned long, bool)
//00013200 T std::deque<std::string, std::allocator<std::string> >::_M_destroy_data_aux(std::_Deque_iterator<std::string, std::string&, std::string*>, std::_Deque_iterator<std::string, std::string&, std::string*>)
//0001357c T std::deque<std::string, std::allocator<std::string> >::deque(std::deque<std::string, std::allocator<std::string> > const&)
//000136ee T std::deque<std::string, std::allocator<std::string> >::~deque()
//0001abf0 T std::vector<std::string, std::allocator<std::string> >::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, std::string const&)
//00018460 T void std::__adjust_heap<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, int, std::string>(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, int, int, std::string)
//00017af0 T void std::__adjust_heap<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, int, std::string>(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, int, int, std::string)
//00018640 T void std::__heap_select<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//00017d10 T void std::__heap_select<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//00018a50 T void std::__insertion_sort<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//00018200 T void std::__insertion_sort<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//000187e0 T void std::__introsort_loop<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, int>(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, int)
//00017f00 T void std::__introsort_loop<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, int>(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, int)
//0001ab60 T std::string* std::__uninitialized_copy_aux<std::string*, std::string*>(std::string*, std::string*, std::string*, std::__false_type)
//000132e0 T std::_Deque_iterator<std::string, std::string&, std::string*> std::__uninitialized_copy_aux<std::_Deque_iterator<std::string, std::string const&, std::string const*>, std::_Deque_iterator<std::string, std::string&, std::string*> >(std::_Deque_iterator<std::string, std::string const&, std::string const*>, std::_Deque_iterator<std::string, std::string const&, std::string const*>, std::_Deque_iterator<std::string, std::string&, std::string*>, std::__false_type)
//00018990 T void std::__unguarded_insertion_sort<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//00018140 T void std::__unguarded_insertion_sort<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//000183a0 T void std::sort<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//00018730 T void std::pop_heap<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//00017e40 T void std::pop_heap<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//00018590 T void std::make_heap<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >, __gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > >)
//00017c50 T void std::make_heap<std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > > >(std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string, std::allocator<std::string> > > >)
//00070138 S typeinfo for Bootil::AutoBuffer
//00070118 S typeinfo for Bootil::Buffer
//00068160 S typeinfo name for Bootil::AutoBuffer
//00068140 S typeinfo name for Bootil::Buffer
//00070120 S vtable for Bootil::AutoBuffer
//00070100 S vtable for Bootil::Buffer
//0007c060 S _cvar
//0007d3ec S _g_iTypeNum
//000262c0 T _luaJIT_setmode
//00025a20 T _luaJIT_version_2_0_3
//000564b0 T _luaL_addlstring
//00056580 T _luaL_addstring
//000563c0 T _luaL_addvalue
//0001fe50 T _luaL_argerror
//000560a0 T _luaL_buffinit
//00029430 T _luaL_callmeta
//0002b0e0 T _luaL_checkany
//0002a6a0 T _luaL_checkinteger
//0002a330 T _luaL_checklstring
//0002a960 T _luaL_checknumber
//0002a500 T _luaL_checkoption
//0002b2f0 T _luaL_checkstack
//0002a4c0 T _luaL_checktype
//00029520 T _luaL_checkudata
//0001fd70 T _luaL_error
//00056b90 T _luaL_execresult
//00055ff0 T _luaL_fileresult
//00056870 T _luaL_findtable
//000293b0 T _luaL_getmetafield
//000565f0 T _luaL_gsub
//00036090 T _luaL_loadbuffer
//00035fd0 T _luaL_loadbufferx
//00036430 T _luaL_loadfile
//00036210 T _luaL_loadfilex
//00036150 T _luaL_loadstring
//00029c70 T _luaL_newmetatable
//00029dd0 T _luaL_newmetatable_type
//000560c0 T _luaL_newstate
//000569a0 T _luaL_openlib
//0005ed60 T _luaL_openlibs
//0002a5a0 T _luaL_optinteger
//0002a170 T _luaL_optlstring
//0002a870 T _luaL_optnumber
//00056470 T _luaL_prepbuffer
//00056520 T _luaL_pushresult
//00056240 T _luaL_ref
//00056b60 T _luaL_register
//00024c50 T _luaL_traceback
//0001ff30 T _luaL_typerror
//000561c0 T _luaL_unref
//0001f7e0 T _luaL_where
//0001f7c0 T _lua_atpanic
//000284d0 T _lua_call
//0002b2a0 T _lua_checkstack
//000254d0 T _lua_close
//00029ad0 T _lua_concat
//00028500 T _lua_cpcall
//00029e10 T _lua_createtable
//00035e60 T _lua_dump
//0002ad80 T _lua_equal
//0001fcf0 T _lua_error
//00027ea0 T _lua_gc
//00027e60 T _lua_getallocf
//00028010 T _lua_getfenv
//000298b0 T _lua_getfield
//00025a30 T _lua_gethook
//00025a60 T _lua_gethookcount
//00025a40 T _lua_gethookmask
//00024c20 T _lua_getinfo
//000242b0 T _lua_getlocal
//00028100 T _lua_getmetatable
//00023f40 T _lua_getstack
//000299e0 T _lua_gettable
//00027660 T _lua_gettop
//00028670 T _lua_getupvalue
//000276d0 T _lua_insert
//00027810 T _lua_iscfunction
//0002ab10 T _lua_isnumber
//000278c0 T _lua_isstring
//00027970 T _lua_isuserdata
//0002abe0 T _lua_lessthan
//00036460 T _lua_load
//00035d90 T _lua_loadx
//000255d0 T _lua_newstate
//00029c20 T _lua_newthread
//00029b90 T _lua_newuserdata
//00029630 T _lua_next
//00029f00 T _lua_objlen
//000285e0 T _lua_pcall
//00028270 T _lua_pushboolean
//00028fd0 T _lua_pushcclosure
//00029ec0 T _lua_pushfstring
//000282b0 T _lua_pushinteger
//00028240 T _lua_pushlightuserdata
//00029120 T _lua_pushlstring
//000282e0 T _lua_pushnil
//00029070 T _lua_pushnumber
//000290b0 T _lua_pushstring
//00028200 T _lua_pushthread
//00028310 T _lua_pushvalue
//00029ea0 T _lua_pushvfstring
//0002af50 T _lua_rawequal
//000297f0 T _lua_rawget
//00029710 T _lua_rawgeti
//00028ef0 T _lua_rawset
//00028df0 T _lua_rawseti
//00027670 T _lua_remove
//00028ae0 T _lua_replace
//00027f90 T _lua_resume_real
//00027e80 T _lua_setallocf
//00028870 T _lua_setfenv
//00029180 T _lua_setfield
//00026240 T _lua_sethook
//00024260 T _lua_setlocal
//00028c60 T _lua_setmetatable
//000292b0 T _lua_settable
//0002b1a0 T _lua_settop
//00028760 T _lua_setupvalue
//00027650 T _lua_status
//00027a20 T _lua_toboolean
//00027ac0 T _lua_tocfunction
//0002a790 T _lua_tointeger
//00029fe0 T _lua_tolstring
//0002aa40 T _lua_tonumber
//00027ce0 T _lua_topointer
//00027c30 T _lua_tothread
//00027b80 T _lua_touserdata
//00027740 T _lua_type
//0002b0a0 T _lua_typename
//00027db0 T _lua_upvalueid
//00028970 T _lua_upvaluejoin
//0002b220 T _lua_xmove
//000283d0 T _lua_yield
//00057c60 T _luaopen_base
//00058390 T _luaopen_bit
//0005c780 T _luaopen_debug
//0005d6e0 T _luaopen_jit
//00057e90 T _luaopen_math
//0005b5a0 T _luaopen_os
//0005c4d0 T _luaopen_package
//00058550 T _luaopen_string
//0005a950 T _luaopen_table
//0007d3e8 S _seeder

#endif //GMODLUAHAX_GMODPOINTERS_H
