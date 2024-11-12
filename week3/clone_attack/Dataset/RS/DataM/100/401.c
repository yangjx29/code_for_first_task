int main () {
    char z [(724 - 424)] = "";
    char zf [(464 - 164)];
    gets (zf);
    char x [(267 - 265)];
    int wicXDxwF0T;
    int o;
    int cd;
    char e = 'a';
    int v;
    v = (302 - 301);
    int i, s, k, f;
    int j = (340 - 340);
    o = strlen (zf);
    {
        i = 868 - 868;
        while (i <= o - (456 - 455)) {
            if (((zf[i] >= 'a') && ('z' >= zf[i])) || ((zf[i] >= 'A') && ('Z' >= zf[i]))) {
                z[j] = zf[i];
                j++;
            }
            i++;
        };
    }
    cd = strlen (z);
    {
        k = 645 - 645;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (k <= cd - (161 - 159)) {
            {
                i = 884 - 884;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (i <= cd - 2 - k) {
                    if (z[i] > z[i + (153 - 152)]) {
                        e = z[i];
                        z[i] = z[i + (881 - 880)];
                        z[i + (62 - 61)] = e;
                    }
                    i++;
                };
            }
            k = k + 1;
        };
    }
    if (j == (364 - 364)) {
        printf ("No");
    }
    for (s = (908 - 908); s < cd; s++) {
        if (((s == (663 - 663)) || (z[s] != z[s - (445 - 444)])) && (z[s] != z[s + (472 - 471)])) {
            printf ("%c=%d", z[s], v);
            printf ("\n");
        }
        if (((s == (16 - 16)) || (z[s] != z[s - (479 - 478)])) && (z[s] == z[s + (545 - 544)])) {
            for (f = s + (113 - 112); f < cd; f++) {
                if (z[f] != z[f + (303 - 302)]) {
                    break;
                };
            }
            wicXDxwF0T = (663 - 663);
            wicXDxwF0T = f - s + (332 - 331);
            printf ("%c=%d", z[s], wicXDxwF0T);
        };
    }
    return 0;
}

