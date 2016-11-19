#include <iostream>
#include <dlfcn.h>
#include <zconf.h>
#include "Bootil/Base.h"
#include "Bootil/Bootil.h"
#include "GmodluaSharedPtrs.h"
#include "luajit-2.0/lua.h"
#include "luajit-2.0/lua.hpp"
#include "GarrysMod/Lua/LuaBase.h"

int main() {
    auto test = "cool";
    //Bootil::Startup();
    //Bootil::Debug::PopupMessage("PenisTime");
    lua_State *Luastate = luaL_newstate();
    printf((const char *) Luastate);
    Bootil::Network::Start();
  while(1)
  {

  }
}