// -*- C++ -*-

#ifndef MBOSTOCK_TEXTURE_H
#define MBOSTOCK_TEXTURE_H

#ifdef __APPLE__
  #include <OpenGL/gl.h>
#else
  #include <GL/gl.h>
#endif

namespace mbostock {

  class Texture {
  public:
    virtual ~Texture() {}

    virtual void bind() const = 0;
  };

  class Textures {
  public:
    static const Texture& fromFile(const char* path);
    static void initialize();

  private:
    Textures();
  };

}

#endif
