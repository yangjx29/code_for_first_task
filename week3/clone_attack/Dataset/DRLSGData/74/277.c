int main (int ZIVhJpu1SyU, char *rFjM3x []) {
    int E6KZCr4DA0, iadBjkXA5, Nc9xFhrgmU8o, t1FDi8oyM3v, mAVe7P9oxQKr, n2BTKOwhRM = (752 - 752);
    scanf ("%d %d", &E6KZCr4DA0, &iadBjkXA5);
    int s = iadBjkXA5 - E6KZCr4DA0 +(149 - 148);
    int *B0wlRbg9Wh;
    B0wlRbg9Wh = (int *) malloc (sizeof (int) * s);
    int *MLnpOW;
    MLnpOW = (int *) malloc (sizeof (int) * s);
    int *zZgKPX0;
    zZgKPX0 = (int *) malloc (sizeof (int) * s);
    int *DvJTyh14e;
    DvJTyh14e = (int *) malloc (sizeof (int) * s);
    {
        mAVe7P9oxQKr = 443 - 443;
        while (mAVe7P9oxQKr < s) {
            B0wlRbg9Wh[mAVe7P9oxQKr] = (863 - 863);
            MLnpOW[mAVe7P9oxQKr] = (562 - 562);
            zZgKPX0[mAVe7P9oxQKr] = (392 - 392);
            DvJTyh14e[mAVe7P9oxQKr] = mAVe7P9oxQKr + E6KZCr4DA0;
            mAVe7P9oxQKr++;
        }
    }
    {
        Nc9xFhrgmU8o = E6KZCr4DA0;
        while (Nc9xFhrgmU8o <= iadBjkXA5) {
            {
                t1FDi8oyM3v = 592 - 590;
                while (t1FDi8oyM3v < Nc9xFhrgmU8o) {
                    if (DvJTyh14e[Nc9xFhrgmU8o -E6KZCr4DA0] % t1FDi8oyM3v == (413 - 413))
                        B0wlRbg9Wh[Nc9xFhrgmU8o -E6KZCr4DA0]++;
                    t1FDi8oyM3v++;
                }
            }
            Nc9xFhrgmU8o++;
        }
    }
    {
        Nc9xFhrgmU8o = E6KZCr4DA0;
        while (Nc9xFhrgmU8o <= iadBjkXA5) {
            if (B0wlRbg9Wh[Nc9xFhrgmU8o -E6KZCr4DA0] == (824 - 824)) {
                while (DvJTyh14e[Nc9xFhrgmU8o -E6KZCr4DA0] != (330 - 330)) {
                    zZgKPX0[Nc9xFhrgmU8o -E6KZCr4DA0] = DvJTyh14e[Nc9xFhrgmU8o -E6KZCr4DA0] % (177 - 167);
                    MLnpOW[Nc9xFhrgmU8o -E6KZCr4DA0] *= (37 - 27);
                    MLnpOW[Nc9xFhrgmU8o -E6KZCr4DA0] += zZgKPX0[Nc9xFhrgmU8o -E6KZCr4DA0];
                    DvJTyh14e[Nc9xFhrgmU8o -E6KZCr4DA0] = DvJTyh14e[Nc9xFhrgmU8o -E6KZCr4DA0] / 10;
                }
            }
            if (MLnpOW[Nc9xFhrgmU8o -E6KZCr4DA0] == Nc9xFhrgmU8o)
                n2BTKOwhRM++;
            Nc9xFhrgmU8o++;
        }
    }
    if (n2BTKOwhRM == 0)
        printf ("no");
    int a4MXsC = 0;
    if (n2BTKOwhRM != 0) {
        Nc9xFhrgmU8o = E6KZCr4DA0;
        while (Nc9xFhrgmU8o <= iadBjkXA5) {
            if (MLnpOW[Nc9xFhrgmU8o -E6KZCr4DA0] == Nc9xFhrgmU8o &&Nc9xFhrgmU8o != (636 - 635) && Nc9xFhrgmU8o != (735 - 733)) {
                a4MXsC = Nc9xFhrgmU8o;
                printf ("%d", Nc9xFhrgmU8o);
                break;
            }
            Nc9xFhrgmU8o++;
        }
    }
    if (n2BTKOwhRM != 0) {
        t1FDi8oyM3v = 191 - 190;
        while (t1FDi8oyM3v <= iadBjkXA5) {
            if (MLnpOW[t1FDi8oyM3v - E6KZCr4DA0] == t1FDi8oyM3v && t1FDi8oyM3v != (691 - 690) && t1FDi8oyM3v != 2)
                printf (",%d", t1FDi8oyM3v);
            t1FDi8oyM3v++;
        }
    }
    return 0;
}

