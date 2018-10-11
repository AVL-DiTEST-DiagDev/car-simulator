#ifndef DOIP_LUA_SCRIPT_H
#define DOIP_LUA_SCRIPT_H

#include "selene.h"
#include "utilities.h"
#include <string>
#include <stdio.h>

constexpr char VIN[] = "VIN";
constexpr char LA[] = "LOGICAL_ADDRESS";
constexpr char EID[] = "EID";
constexpr char GID[] = "GID";
constexpr char FA[] = "FURTHER_ACTION";

constexpr char ANNOUNCE_NUM[] = "ANNOUNCE_NUM";
constexpr char ANNOUNCE_INTERVAL[] = "ANNOUNCE_INT";

class DoipLuaScript 
{
public:
    DoipLuaScript(const std::string& luaScript);
    
    std::string getVin() const;
    std::string getEid() const;
    std::string getGid() const;
    std::uint16_t getLogicalAddress() const;
    std::uint8_t getFurtherAction() const;
    int getAnnounceNumber() const;
    int getAnnounceInterval() const;
    
private:
    sel::State lua_state;
    
    std::string vin_;
    std::string eid_;
    std::string gid_;
    std::uint16_t logicalAddress_;
    std::uint8_t furtherAction_;
    
    int A_DoIP_Announce_Num;
    int A_DoIP_Announce_Interval;
};

#endif /* DOIP_LUA_SCRIPT_H */

