#include <factorii/ui/sidebar.h>

void fii_sidebar(GLFWwindow *win, struct nk_context *ctx, int win_width,
                 int win_height) {
    if (!win) {
    }

    int ow = 255;
    struct nk_color white = nk_rgb(ow, ow, ow);

    // struct nk_command_buffer *out = NULL;

    nk_style_push_style_item(ctx, &ctx->style.window.fixed_background,
                             nk_style_item_color(white));

    if (nk_begin(ctx, "Sidebar",
                 nk_rect(0, 50, sidebar_width(win_width), win_height), 0)) {
    }

    nk_style_pop_style_item(ctx);
    nk_end(ctx);
}