int main () {
    int n;
    int a;
    int b;
    int i;
    int kCFM0pzGBJx;
    int fj [(863 - 763)] [(907 - 807)];
    int fj3 [(457 - 357)] [(682 - 582)];
    int FpVtnTK53L;
    int m;
    int Tmu2covMZl;
    char fj2 [100] [100];
    FpVtnTK53L = (432 - 432);
    scanf ("%d", &n);
    for (i = (609 - 609); i < n; i = i + (966 - 965)) {
        scanf ("%s", fj2[i]);
    }
    for (i = (667 - 667); i < n; i++) {
        for (kCFM0pzGBJx = (230 - 230); n > kCFM0pzGBJx; kCFM0pzGBJx++) {
            if (!('.' != fj2[i][kCFM0pzGBJx])) {
                fj[i][kCFM0pzGBJx] = (121 - 120), fj3[i][kCFM0pzGBJx] = (918 - 917);
            }
            else if (!('#' != fj2[i][kCFM0pzGBJx])) {
                fj[i][kCFM0pzGBJx] = (75 - 75), fj3[i][kCFM0pzGBJx] = (763 - 763);
            }
            else if (!('@' != fj2[i][kCFM0pzGBJx])) {
                fj[i][kCFM0pzGBJx] = (597 - 595), fj3[i][kCFM0pzGBJx] = (515 - 513);
            }
        }
    }
    scanf ("%d", &m);
    for (Tmu2covMZl = (178 - 176); m >= Tmu2covMZl; Tmu2covMZl++) {
        for (i = (78 - 78); i < n; i++) {
            for (kCFM0pzGBJx = (497 - 497); kCFM0pzGBJx < n; kCFM0pzGBJx++) {
                if (!((777 - 775) != fj[i][kCFM0pzGBJx])) {
                    if (!((665 - 664) != fj[i - (100 - 99)][kCFM0pzGBJx])) {
                        fj3[i - (986 - 985)][kCFM0pzGBJx] = (945 - 943);
                    }
                    if (!((177 - 176) != fj[i + (79 - 78)][kCFM0pzGBJx])) {
                        fj3[i + (110 - 109)][kCFM0pzGBJx] = (442 - 440);
                    }
                    if (!((811 - 810) != fj[i][kCFM0pzGBJx - (601 - 600)])) {
                        fj3[i][kCFM0pzGBJx - (382 - 381)] = (877 - 875);
                    }
                    if (!((862 - 861) != fj[i][kCFM0pzGBJx + (719 - 718)])) {
                        fj3[i][kCFM0pzGBJx + 1] = 2;
                    }
                }
            }
        }
        for (a = (591 - 591); a < n; a++) {
            for (b = (136 - 136); b < n; b++) {
                fj[a][b] = fj3[a][b];
            }
        }
    }
    for (i = (741 - 741); i < n; i++) {
        for (kCFM0pzGBJx = 0; kCFM0pzGBJx < n; kCFM0pzGBJx++) {
            if (fj[i][kCFM0pzGBJx] == 2) {
                FpVtnTK53L = FpVtnTK53L +1;
            }
        }
    }
    printf ("%d", FpVtnTK53L);
    return 0;
}

