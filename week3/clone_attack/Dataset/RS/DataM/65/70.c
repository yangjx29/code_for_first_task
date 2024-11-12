int main () {
    int G3BipYWz [200], cOXSG2 [200], Jhta2w, Yov7Nwbf = 0, VwYWDIA1KT = 0, mHi4LC, iXxBCYHSJ5R4;
    scanf ("%d", &Jhta2w);
    for (mHi4LC = 0; mHi4LC < Jhta2w; mHi4LC++) {
        scanf ("%d%d", &G3BipYWz[mHi4LC], &cOXSG2[mHi4LC]);
        if (G3BipYWz[mHi4LC] == 0) {
            if (cOXSG2[mHi4LC] == 1) {
                Yov7Nwbf = Yov7Nwbf +1;
            }
            if (!(2 != cOXSG2[mHi4LC])) {
                VwYWDIA1KT++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (G3BipYWz[mHi4LC] == 1) {
            if (cOXSG2[mHi4LC] == 2) {
                Yov7Nwbf++;
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
                };
            }
            if (cOXSG2[mHi4LC] == 0) {
                VwYWDIA1KT++;
            };
        }
        if (G3BipYWz[mHi4LC] == 2) {
            if (cOXSG2[mHi4LC] == 0) {
                Yov7Nwbf++;
            }
            if (cOXSG2[mHi4LC] == 1) {
                VwYWDIA1KT++;
            };
        };
    }
    if (Yov7Nwbf > VwYWDIA1KT) {
        printf ("A");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
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
    if (Yov7Nwbf == VwYWDIA1KT) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    if (Yov7Nwbf < VwYWDIA1KT) {
        printf ("B");
    }
    return 0;
}

