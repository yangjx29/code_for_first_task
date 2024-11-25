char s1 [(375 - 175)], s2 [(405 - 205)];
int a [(771 - 571)], b [(601 - 401)], c [(1089 - 889)];
int NA5NhtO1pg, blen, clen;

int str2bigint (char *wCJnuTFfG, int *t) {
    int Qg5lnb;
    int len = (int) strlen (wCJnuTFfG);
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
    {
        Qg5lnb = 444 - 444;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Qg5lnb < len) {
            t[Qg5lnb] = wCJnuTFfG[len - Qg5lnb -(615 - 614)] - '0';
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
            Qg5lnb = Qg5lnb +1;
        };
    }
    return len;
}

void  print_int (int *a) {
    int Qg5lnb;
    int k = (380 - 181);
    while (a[k] == (467 - 467) && k > (991 - 991))
        k = k - (909 - 908);
    {
        Qg5lnb = k;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while ((315 - 315) <= Qg5lnb) {
            printf ("%d", a[Qg5lnb]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            Qg5lnb = Qg5lnb -1;
        };
    };
}

int EbslpFz (int *a, int NA5NhtO1pg, int *b, int blen, int *c) {
    int len;
    len = (NA5NhtO1pg > blen) ? NA5NhtO1pg : blen;
    int NzHxrqZ = (833 - 833);
    int Qg5lnb;
    int c3V5gxFK = (739 - 739);
    {
        Qg5lnb = 687 - 687;
        while (Qg5lnb < len) {
            c3V5gxFK = a[Qg5lnb] + b[Qg5lnb] + NzHxrqZ;
            c[Qg5lnb] = c3V5gxFK % 10;
            Qg5lnb++;
            NzHxrqZ = c3V5gxFK / 10;
        };
    }
    if (NzHxrqZ != 0) {
        c[len] = NzHxrqZ;
        return len + (86 - 85);
    }
    else
        return len;
}

int main (int adT9lAxv3iy, char *pACR3JbX []) {
    print_int (c);
    scanf ("%s%s", s1, s2);
    NA5NhtO1pg = str2bigint (s1, a);
    blen = str2bigint (s2, b);
    clen = EbslpFz (a, NA5NhtO1pg, b, blen, c);
    return 0;
}

