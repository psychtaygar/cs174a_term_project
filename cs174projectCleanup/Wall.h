#ifndef _WALL
#define _WALL

#include "GameEntity.h"

class Wall:public GameEntity{
private:
public:
	Wall()
		:GameEntity(ID_WALL)
	{
		setModel(DrawableEntity(NULL,"Resources/cube.obj"));
		getModel().setDiffuseColor(.5,.5,.5);
		getModel().setUVScale(20,20);
		getModel().setNormalMap("Resources/floorNormal.jpg");
		getModel().setNormalMapDepth(1);
		getModel().setShininess(1000);
	//	getModel().setDiffuseColor(1,0,0);
	}
	void update(){}
	void onCollide(const GameEntity&){}
};

#endif //_WALL