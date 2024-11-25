int main (int argc, char *I2khv9rURBX []) {
    int GUZ3sOTG;
    int p;
    int v8hNEXreZAa;
    int fN07uHX;
    int T2Qg1A;
    scanf ("%d", &GUZ3sOTG);
    {
        p = 511 - 511;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (GUZ3sOTG > p) {
            char b [150];
            char ufS8GZOPaEi [150];
            scanf ("%s", ufS8GZOPaEi);
            T2Qg1A = strlen (ufS8GZOPaEi);
            {
                v8hNEXreZAa = 990 - 990;
                while (ufS8GZOPaEi[v8hNEXreZAa] != 0) {
                    switch (ufS8GZOPaEi[v8hNEXreZAa]) {
                    case '(' :
                        b[v8hNEXreZAa] = '$';
                        break;
                    case ')' :
                        b[v8hNEXreZAa] = '?';
                        break;
                    default :
                        b[v8hNEXreZAa] = ' ';
                    }
                    v8hNEXreZAa++;
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
            {
                v8hNEXreZAa = 0;
                while (v8hNEXreZAa < T2Qg1A) {
                    if (b[v8hNEXreZAa] == '?') {
                        for (fN07uHX = v8hNEXreZAa - 1; fN07uHX >= 0; fN07uHX--) {
                            if (b[fN07uHX] == '$') {
                                b[v8hNEXreZAa] = ' ';
                                b[fN07uHX] = ' ';
                                break;
                            };
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
                    v8hNEXreZAa++;
                };
            }
            p++;
            printf ("%s", ufS8GZOPaEi);
            {
                v8hNEXreZAa = 0;
                while (v8hNEXreZAa < T2Qg1A) {
                    printf ("%c", b[v8hNEXreZAa]);
                    v8hNEXreZAa++;
                };
            }
            printf ("\n");
            printf ("\n");
        };
    }
    return 0;
}

