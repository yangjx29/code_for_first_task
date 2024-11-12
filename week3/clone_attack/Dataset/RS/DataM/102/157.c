int main () {
    int QF70xwTlMfB, i;
    struct   student {
        char VHI9Svnz [(405 - 398)];
        float uObrRpx;
    };
    struct   student ty43xQ [QF70xwTlMfB];
    scanf ("%d", &QF70xwTlMfB);
    for (i = (833 - 833); QF70xwTlMfB > i; i++) {
        scanf ("%s %f", ty43xQ[i].VHI9Svnz, &ty43xQ[i].uObrRpx);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = 0; QF70xwTlMfB > i; i++) {
        for (int hy4N9tx2iIL = (385 - 384);
        hy4N9tx2iIL < QF70xwTlMfB -i; hy4N9tx2iIL++) {
            if (strlen (ty43xQ[i].VHI9Svnz) > strlen (ty43xQ[i + hy4N9tx2iIL].VHI9Svnz)) {
                struct   student k;
                k = ty43xQ[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                ty43xQ[i] = ty43xQ[i + hy4N9tx2iIL];
                ty43xQ[i + hy4N9tx2iIL] = k;
            }
            else {
                if (strlen (ty43xQ[i].VHI9Svnz) == strlen (ty43xQ[i + hy4N9tx2iIL].VHI9Svnz)) {
                    if (strlen (ty43xQ[i].VHI9Svnz) == 4) {
                        if (ty43xQ[i].uObrRpx > ty43xQ[i + hy4N9tx2iIL].uObrRpx) {
                            struct   student k;
                            k = ty43xQ[i];
                            ty43xQ[i] = ty43xQ[i + hy4N9tx2iIL];
                            ty43xQ[i + hy4N9tx2iIL] = k;
                        };
                    }
                    else if (ty43xQ[i].uObrRpx < ty43xQ[i + hy4N9tx2iIL].uObrRpx) {
                        struct   student k;
                        k = ty43xQ[i];
                        ty43xQ[i] = ty43xQ[i + hy4N9tx2iIL];
                        ty43xQ[i + hy4N9tx2iIL] = k;
                    }
                    else
                        ;
                };
            };
        };
    }
    for (i = 0; i < QF70xwTlMfB -1; i++) {
        printf ("%.2f ", ty43xQ[i].uObrRpx);
    }
    printf ("%.2f", ty43xQ[QF70xwTlMfB -1].uObrRpx);
}

