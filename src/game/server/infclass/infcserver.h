#ifndef GAME_SERVER_INFCLASS_SERVER_H
#define GAME_SERVER_INFCLASS_SERVER_H

#include <engine/server/server.h>

class CInfClassServer : public CServer
{
public:
	CInfClassServer();

	const char *ClientClan(int ClientID) override;
};

#endif // GAME_SERVER_INFCLASS_MAP_H
