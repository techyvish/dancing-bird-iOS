//
//  CloudEmitter.cpp
//  SampleiOSGame
//
//  Created by Vishal on 19/06/13.
//
//

#include "CloudEmitter.h"

CloudEmitter::CloudEmitter() {
    
}

CloudEmitter::~CloudEmitter() {
    
}

void CloudEmitter::startCouldAtLocation(CCLayer *currentLayer, CCPoint location) {
    
    CCParticleSmoke * m_emitter = CCParticleSmoke::create();
    
    currentLayer->addChild(m_emitter,3);
    
    // Total Particles
    m_emitter->setTotalParticles(50);
    
    // life of particles
    m_emitter->setLife(10.034);
    m_emitter->setLifeVar(0.f);
    
    // size, in pixels
    m_emitter->setStartSize(300.);
    m_emitter->setStartSizeVar(.0f);
    
    //end size
    m_emitter->setEndSize(225.f);
    m_emitter->setEndSizeVar(8.0f);
    
    // angle
    m_emitter->setAngle(86);
    m_emitter->setAngleVar(360);
    
    //rotation start
    
    //rotation end
    
    // duration
    m_emitter->setDuration(-1);
    
    // speed of particles
    m_emitter->setSpeed(92);
    m_emitter->setSpeedVar(0);
    
    // gravity
    m_emitter->setGravity(ccp(0,0));
    
    // radial Accelaration
    m_emitter->setRadialAccel(0);
    m_emitter->setRadialAccelVar(0);
    
    // tagential Accelaration
    m_emitter->setTangentialAccel(0);
    m_emitter->setTangentialAccelVar(0);
    
    // emitter position
    m_emitter->setPosition( location );
    m_emitter->setPosVar(CCPointZero);
    
    // emits per frame
    m_emitter->setEmissionRate(m_emitter->getTotalParticles()/m_emitter->getLife());
    
    // color of particles
    // Start color
    ccColor4F startColor = {0.92f, 0.93f, 0.97f, 1.0f};
    m_emitter->setStartColor(startColor);
    
    // Start color variance
    ccColor4F startColorVar = {0.f, 0.f, 0.f, .0f};
    m_emitter->setStartColorVar(startColorVar);
    
    // Finish Color
    ccColor4F endColor = {1.f,1.f,1.f, 0.f};
    m_emitter->setEndColor(endColor);
    
    // Finish color variance
    ccColor4F endColorVar = {0.f, 0.f, 0.f, 0.f};
    m_emitter->setEndColorVar(endColorVar);
    
    // texture
    m_emitter->setTexture( CCTextureCache::sharedTextureCache()->addImage("cloud/fire.png") );
    
    // set blend functions
    // additive
    m_emitter->setBlendAdditive(false);
    
}
