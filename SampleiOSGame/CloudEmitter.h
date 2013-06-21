//
//  CloudEmitter.h
//  SampleiOSGame
//
//  Created by Vishal on 19/06/13.
//
//

#ifndef __SampleiOSGame__CloudEmitter__
#define __SampleiOSGame__CloudEmitter__

#include <iostream>
#include "cocos2d.h"
#include "Box2D.h"

using namespace cocos2d;

class CloudEmitter {
    
public:
    CloudEmitter();
    ~CloudEmitter();
    void startCouldAtLocation(CCLayer *currentLayer, CCPoint location);
};


#endif /* defined(__SampleiOSGame__CloudEmitter__) */
