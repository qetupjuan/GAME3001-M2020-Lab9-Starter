#pragma once
#ifndef _PATH_NODE_
#define _PATH_NODE_
#include "DisplayObject.h"

class PathNode : public DisplayObject
{
public:
	PathNode();
	~PathNode();

	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;

	void setLOS(bool LOS);
	bool getLOS() const ;
private:
	bool m_bLOS;
};

#endif /* defined _PATH_NODE_) */