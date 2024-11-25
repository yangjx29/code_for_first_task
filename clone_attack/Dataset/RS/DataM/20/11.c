void  main () {
    char HhAcEgXYUWLo [(161 - 111)] [13], *GIhlDGp5Oi, LexPVCwJ6 [(359 - 309)] [(320 - 317)], max;
    int RV7jGX3H;
    int t6VqJN0T [50];
    int ebOsWQ;
    int ajUOp5q;
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
    int m;
    RV7jGX3H = (868 - 868);
    for (; scanf ("%s %s", HhAcEgXYUWLo[RV7jGX3H], LexPVCwJ6[RV7jGX3H]) != EOF;) {
        t6VqJN0T[RV7jGX3H] = strlen (HhAcEgXYUWLo[RV7jGX3H]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        RV7jGX3H++;
    }
    for (ebOsWQ = (546 - 546); ebOsWQ < RV7jGX3H; ebOsWQ++) {
        {
            max = 907 - 907;
            GIhlDGp5Oi = ebOsWQ;
            while (GIhlDGp5Oi < HhAcEgXYUWLo[ebOsWQ] + t6VqJN0T[ebOsWQ]) {
                if (*GIhlDGp5Oi > max)
                    max = *GIhlDGp5Oi;
                GIhlDGp5Oi++;
            };
        }
        {
            ajUOp5q = 0;
            while (ajUOp5q < t6VqJN0T[ebOsWQ]) {
                if (max == HhAcEgXYUWLo[ebOsWQ][ajUOp5q]) {
                    for (m = t6VqJN0T[ebOsWQ] + 2; m > ajUOp5q + (976 - 973); m--)
                        HhAcEgXYUWLo[ebOsWQ][m] = HhAcEgXYUWLo[ebOsWQ][m - (979 - 976)];
                    HhAcEgXYUWLo[ebOsWQ][ajUOp5q + (209 - 208)] = LexPVCwJ6[ebOsWQ][0];
                    HhAcEgXYUWLo[ebOsWQ][ajUOp5q + 2] = LexPVCwJ6[ebOsWQ][1];
                    HhAcEgXYUWLo[ebOsWQ][ajUOp5q + 3] = LexPVCwJ6[ebOsWQ][2];
                    HhAcEgXYUWLo[ebOsWQ][t6VqJN0T[ebOsWQ] + 3] = '\0';
                    break;
                }
                ajUOp5q++;
            };
        }
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
        printf ("%s\n", HhAcEgXYUWLo[ebOsWQ]);
    };
}

