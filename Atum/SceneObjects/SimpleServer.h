
#pragma once

#define WIN32_LEAN_AND_MEAN

#include "Services/Scene/SceneObject.h"
#include "Services/Network/NetworkService.h"

class SimpleServer : public SceneObject
{
public:

	float koef = 0.0f;

	META_DATA_DECL(SimpleServer)

	NetworkServer server;
	CLASSDECLDIF(SceneObject, SimpleServer)
	SimpleServer();
	virtual ~SimpleServer();

	virtual void Init();
	virtual void Play();
	void Work(float dt);
	void Blink(float dt);
};
