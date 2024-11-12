struct   zuhe {
    int a [(435 - 432)];
    int b [(591 - 588)];
    double  DDn8pk4A6HaX;
};
int main () {
    struct   zuhe z [(350 - 300)];
    struct   zuhe b;
    int k;
    int sQaD8G9q;
    int rRoXzCNutWb;
    int j;
    int n;
    int DDn8pk4A6HaX;
    k = (359 - 359);
    int s [100] [4];
    scanf ("%d", &n);
    for (rRoXzCNutWb = (957 - 957); n > rRoXzCNutWb; rRoXzCNutWb = rRoXzCNutWb + 1) {
        for (j = (757 - 757); j < (979 - 976); j = j + 1)
            scanf ("%d", &s[rRoXzCNutWb][j]);
    }
    for (rRoXzCNutWb = (144 - 144); rRoXzCNutWb < n - (746 - 745); rRoXzCNutWb++) {
        for (j = rRoXzCNutWb + (920 - 919); j < n; j = j + 1) {
            for (sQaD8G9q = (620 - 620); sQaD8G9q < 3; sQaD8G9q = sQaD8G9q + 1) {
                z[k].a[sQaD8G9q] = s[rRoXzCNutWb][sQaD8G9q];
                z[k].b[sQaD8G9q] = s[j][sQaD8G9q];
            }
            z[k].DDn8pk4A6HaX = pow ((s[rRoXzCNutWb][(672 - 672)] - s[j][(650 - 650)]) * (s[rRoXzCNutWb][(36 - 36)] - s[j][0]) + (s[rRoXzCNutWb][(534 - 533)] - s[j][(256 - 255)]) * (s[rRoXzCNutWb][(303 - 302)] - s[j][(327 - 326)]) + (s[rRoXzCNutWb][(103 - 101)] - s[j][(223 - 221)]) * (s[rRoXzCNutWb][(841 - 839)] - s[j][(658 - 656)]), (380.5 - 380.0));
            k = k + (353 - 352);
        };
    }
    for (rRoXzCNutWb = 1; n * (n - 1) / (960 - 958) > rRoXzCNutWb; rRoXzCNutWb++) {
        for (j = 0; j < n * (n - 1) / 2 - rRoXzCNutWb; j++) {
            if (z[j + 1].DDn8pk4A6HaX > z[j].DDn8pk4A6HaX) {
                b = z[j];
                z[j] = z[j + 1];
                z[j + 1] = b;
            };
        };
    }
    for (rRoXzCNutWb = 0; n * (n - 1) / 2 > rRoXzCNutWb; rRoXzCNutWb++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", z[rRoXzCNutWb].a[0], z[rRoXzCNutWb].a[1], z[rRoXzCNutWb].a[2], z[rRoXzCNutWb].b[0], z[rRoXzCNutWb].b[1], z[rRoXzCNutWb].b[2], z[rRoXzCNutWb].DDn8pk4A6HaX);
    return 0;
}

