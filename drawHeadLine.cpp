#include "tools.h"
#include "../model.h"
#include "../geometry.h"

int main() {
    bool tgaload = false;
    Model model("./african_head.obj", tgaload);
    TGAColor white(255,255,255);
    int width = 1024; int height = 1024;
    TGAImage image(width, height, TGAImage::RGB);
    printf("%d\n", model.nfaces());
    for (int i=0; i<model.nfaces(); i++) {
        for (int j=0; j<3; j++) {
            vec3 v0 = model.vert(i, j);
            vec3 v1 = model.vert(i, (j+1)%3);
            int x0 = (v0.x+1.)*width/2.;
            int y0 = (v0.y+1.)*height/2.;
            int x1 = (v1.x+1.)*width/2.;
            int y1 = (v1.y+1.)*height/2.;
            line(x0, y0, x1, y1, image, white);
        }
    }
    image.write_tga_file("test.tga");
}
