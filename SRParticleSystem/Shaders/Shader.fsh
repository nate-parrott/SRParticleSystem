//
//  Shader.fsh
//  SRParticleSystem
//
//  Created by Nate Parrott on 12/26/13.
//  Copyright (c) 2013 Nate Parrott. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
