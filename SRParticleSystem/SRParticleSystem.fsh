//
//  Shader.fsh
//  SpaceRace
//
//  Created by Nate Parrott on 12/23/13.
//  Copyright (c) 2013 Nate Parrott. All rights reserved.
//

uniform mediump vec4 particleColor;

varying lowp vec2 faceCoord; // [0..1]
varying lowp float kAlpha;

void main()
{
    lowp float dist = distance(vec2(0.5, 0.5), faceCoord);
    lowp float alpha = max(0.0, 1.0 - dist*2.0) * kAlpha;
    gl_FragColor = particleColor;
    gl_FragColor.a *= alpha;
}
