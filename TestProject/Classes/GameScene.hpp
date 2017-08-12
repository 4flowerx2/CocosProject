//
//  GameScene.hpp
//  TestProject
//
//  Created by ADIEW on 2017/08/12.
//
//

#ifndef GameScene_hpp
#define GameScene_hpp

#include <stdio.h>

#include "cocos2d.h"

class GameScene : public cocos2d::CCLayer{
    public:
    virtual bool init();
    static cocos2d::CCScene* scene();
    CREATE_FUNC(GameScene);
    
    
};





#endif /* GameScene_hpp */
