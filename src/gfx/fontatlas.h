#ifndef FONTATLAS_H
#define FONTATLAS_H

#include "../util/util.h"
#include "gfx.h"
#include "texture.h"

//#define BLOCK_ATLAS_FPS 6
//#define BLOCK_ATLAS_FRAMES 16

struct FontAtlas {
    ivec2s size, size_sprites, sprite_size;

    struct Texture frames[BLOCK_ATLAS_FRAMES];
    struct Atlas atlas;
    size_t ticks;
};

struct FontAtlas fontatlas_create(char *path, ivec2s sprite_size);
void fontatlas_destroy(struct FontAtlas *self);
void fontatlas_update(struct FontAtlas *self);

#endif
