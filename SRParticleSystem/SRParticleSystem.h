//
//  SRParticleSystem.h
//  SpaceRace
//
//  Created by Nate Parrott on 12/26/13.
//  Copyright (c) 2013 Nate Parrott. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GLProgram.h"
#import <GLKit/GLKit.h>

@interface SRParticleSystem : NSObject {
    GLProgram* _program;
    NSTimeInterval _startTime;
    
    GLuint _vao;
    GLuint _vertexBuffer;
    GLuint _indexBuffer;
    
    // uniforms:
    GLuint _matrixU, _radiusU, _startPosU, _endPosU, _startPosVarianceU, _endPosVarianceU, _secondsPerCycleU, _timeU, _colorU;
    
    // attributes:
    GLuint _particleIDAttr, _partAttr;
}

-(id)initWithParticleCount:(int)particleCount options:(NSDictionary*)options;
-(void)restart;
-(void)draw;

@property float secondsPerCycle;
@property GLKMatrix4 modelviewProjectionMatrix;
@property float particleRadius;
@property GLKVector4 particleColor;
@property GLKVector3 startPos, endPos, startPosVariance, endPosVariance;

@property(readonly)int particleCount;


@end
