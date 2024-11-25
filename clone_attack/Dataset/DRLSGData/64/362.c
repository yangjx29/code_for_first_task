int main () {
    int OIBAcJ;
    int v6PuwJS;
    int o34UrKAyG1;
    int lQGpRqwFH4O;
    OIBAcJ = 0;
    struct   zuobiao {
        int J6U2Gfzgx;
        int ha9xQH7XPB;
        int ZwlRGfLC6VAM;
    }
    RBe6rAbkISi [10];
    struct   juli {
        double  d;
        struct   zuobiao a1;
        struct   zuobiao b1;
    }
    b [100], dF8jcduToyh;
    scanf ("%d", &o34UrKAyG1);
    for (v6PuwJS = 0; v6PuwJS < o34UrKAyG1; v6PuwJS = v6PuwJS + 1) {
        scanf ("%d%d%d", &RBe6rAbkISi[v6PuwJS].J6U2Gfzgx, &RBe6rAbkISi[v6PuwJS].ha9xQH7XPB, &RBe6rAbkISi[v6PuwJS].ZwlRGfLC6VAM);
    }
    for (v6PuwJS = 0; v6PuwJS < o34UrKAyG1; v6PuwJS = v6PuwJS + 1) {
        for (lQGpRqwFH4O = v6PuwJS + 1; lQGpRqwFH4O < o34UrKAyG1; lQGpRqwFH4O = lQGpRqwFH4O + 1) {
            b[OIBAcJ].d = sqrt ((RBe6rAbkISi[v6PuwJS].J6U2Gfzgx - RBe6rAbkISi[lQGpRqwFH4O].J6U2Gfzgx) * (RBe6rAbkISi[v6PuwJS].J6U2Gfzgx - RBe6rAbkISi[lQGpRqwFH4O].J6U2Gfzgx) + (RBe6rAbkISi[v6PuwJS].ha9xQH7XPB - RBe6rAbkISi[lQGpRqwFH4O].ha9xQH7XPB) * (RBe6rAbkISi[v6PuwJS].ha9xQH7XPB - RBe6rAbkISi[lQGpRqwFH4O].ha9xQH7XPB) + (RBe6rAbkISi[v6PuwJS].ZwlRGfLC6VAM - RBe6rAbkISi[lQGpRqwFH4O].ZwlRGfLC6VAM) * (RBe6rAbkISi[v6PuwJS].ZwlRGfLC6VAM - RBe6rAbkISi[lQGpRqwFH4O].ZwlRGfLC6VAM));
            b[OIBAcJ].a1 = RBe6rAbkISi[v6PuwJS];
            b[OIBAcJ].b1 = RBe6rAbkISi[lQGpRqwFH4O];
            OIBAcJ++;
        }
    }
    o34UrKAyG1 = o34UrKAyG1 * (o34UrKAyG1 - 1) / 2;
    for (v6PuwJS = 1; v6PuwJS < o34UrKAyG1; v6PuwJS = v6PuwJS + 1) {
        for (lQGpRqwFH4O = v6PuwJS; lQGpRqwFH4O > 0; lQGpRqwFH4O = lQGpRqwFH4O - 1) {
            if (b[lQGpRqwFH4O].d > b[lQGpRqwFH4O - 1].d) {
                dF8jcduToyh = b[lQGpRqwFH4O];
                b[lQGpRqwFH4O] = b[lQGpRqwFH4O - 1];
                b[lQGpRqwFH4O - 1] = dF8jcduToyh;
            }
        }
    }
    for (v6PuwJS = 0; v6PuwJS < o34UrKAyG1; v6PuwJS = v6PuwJS + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", b[v6PuwJS].a1.J6U2Gfzgx, b[v6PuwJS].a1.ha9xQH7XPB, b[v6PuwJS].a1.ZwlRGfLC6VAM, b[v6PuwJS].b1.J6U2Gfzgx, b[v6PuwJS].b1.ha9xQH7XPB, b[v6PuwJS].b1.ZwlRGfLC6VAM, b[v6PuwJS].d);
    }
    return 0;
}

