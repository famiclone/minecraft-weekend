#include "debug.h"
#include "../state.h"
#include "../gfx/renderer.h"
#include "ui.h"
#include "../entity/ecs.h"


static void update(struct UIDebug *self) {
}

static void render(struct UIDebug *self) {
}

struct UIComponent debug_init(struct UIDebug *self) {
    return (struct UIComponent) {
    .component = self,
    .render = (FUIComponent) render,
    .update = (FUIComponent) update,
    .tick = NULL
    };
}
