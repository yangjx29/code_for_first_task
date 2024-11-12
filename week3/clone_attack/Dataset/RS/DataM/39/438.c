struct   jHSU2LuX {
    char v4pHP2hmT7Jk [20];
    int jdiE5akO;
    int uIPSL2iV5pBK;
    char nyf76TB;
    char ZB6Mdi4SlOH;
    int G0UKdkA7;
    int FhAF8Hbg;
};
void  main () {
    int ASrnHWs4AqC (struct   jHSU2LuX SJ02HYB [(901 - 801)], int JLa0W4hT);
    struct   jHSU2LuX S2rTqu [100];
    int Vpi0jo;
    int AWyx4mB7;
    int L5clViU3L8;
    int JLa0W4hT;
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
    Vpi0jo = 0;
    AWyx4mB7 = 0;
    scanf ("%d", &JLa0W4hT);
    for (L5clViU3L8 = 0; L5clViU3L8 < JLa0W4hT; L5clViU3L8++) {
        scanf ("%s", S2rTqu[L5clViU3L8].v4pHP2hmT7Jk);
        scanf ("%d %d %c %c %d", &S2rTqu[L5clViU3L8].jdiE5akO, &S2rTqu[L5clViU3L8].uIPSL2iV5pBK, &S2rTqu[L5clViU3L8].nyf76TB, &S2rTqu[L5clViU3L8].ZB6Mdi4SlOH, &S2rTqu[L5clViU3L8].G0UKdkA7);
        S2rTqu[L5clViU3L8].FhAF8Hbg = 0;
        if ((531 - 451) < S2rTqu[L5clViU3L8].jdiE5akO && 0 < S2rTqu[L5clViU3L8].G0UKdkA7)
            S2rTqu[L5clViU3L8].FhAF8Hbg = S2rTqu[L5clViU3L8].FhAF8Hbg + 8000;
        if (85 < S2rTqu[L5clViU3L8].jdiE5akO && 80 < S2rTqu[L5clViU3L8].uIPSL2iV5pBK)
            S2rTqu[L5clViU3L8].FhAF8Hbg = S2rTqu[L5clViU3L8].FhAF8Hbg + 4000;
        if (S2rTqu[L5clViU3L8].jdiE5akO > (335 - 245))
            S2rTqu[L5clViU3L8].FhAF8Hbg = S2rTqu[L5clViU3L8].FhAF8Hbg + 2000;
        if (85 < S2rTqu[L5clViU3L8].jdiE5akO && S2rTqu[L5clViU3L8].ZB6Mdi4SlOH == 'Y')
            S2rTqu[L5clViU3L8].FhAF8Hbg = S2rTqu[L5clViU3L8].FhAF8Hbg + 1000;
        if (S2rTqu[L5clViU3L8].uIPSL2iV5pBK > 80 && S2rTqu[L5clViU3L8].nyf76TB == 'Y')
            S2rTqu[L5clViU3L8].FhAF8Hbg = S2rTqu[L5clViU3L8].FhAF8Hbg + 850;
    }
    {
        L5clViU3L8 = 0;
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
        while (L5clViU3L8 < JLa0W4hT) {
            AWyx4mB7 = AWyx4mB7 +S2rTqu[L5clViU3L8].FhAF8Hbg;
            L5clViU3L8++;
        };
    }
    Vpi0jo = ASrnHWs4AqC (S2rTqu, JLa0W4hT);
    puts (S2rTqu[0].v4pHP2hmT7Jk);
    printf ("%d\n%d\n", Vpi0jo, AWyx4mB7);
}

int ASrnHWs4AqC (struct   jHSU2LuX SJ02HYB [100], int JLa0W4hT) {
    int L5clViU3L8;
    int hbDG8gLJVh0F;
    struct   jHSU2LuX t;
    for (L5clViU3L8 = 0; L5clViU3L8 < JLa0W4hT -1; L5clViU3L8++) {
        hbDG8gLJVh0F = L5clViU3L8 +1;
        while (hbDG8gLJVh0F < JLa0W4hT) {
            if (SJ02HYB[L5clViU3L8].FhAF8Hbg < SJ02HYB[hbDG8gLJVh0F].FhAF8Hbg) {
                t = SJ02HYB[hbDG8gLJVh0F];
                SJ02HYB[hbDG8gLJVh0F] = SJ02HYB[L5clViU3L8];
                SJ02HYB[L5clViU3L8] = t;
            }
            hbDG8gLJVh0F++;
        };
    }
    return (SJ02HYB[0].FhAF8Hbg);
}

