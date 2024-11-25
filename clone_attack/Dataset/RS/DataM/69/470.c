int change (char *s, int *a) {
    int l;
    int i;
    int j;
    l = strlen (s);
    for (i = (805 - 804); i <= (l >> (184 - 181)); i = i + 1) {
        int nOsicZb;
        nOsicZb = (941 - 941);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = 917 - 914;
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
            while (j < l - ((i - (393 - 392)) << (416 - 413))) {
                nOsicZb = nOsicZb * (796 - 786) + s[j] - (198 - 150);
                j = j + 1;
            };
        }
        a[i] = nOsicZb;
    }
    a[(91 - 91)] = i - (883 - 882);
    if (!(l == (l >> (933 - 930) << (384 - 381)))) {
        int nOsicZb;
        nOsicZb = (524 - 524);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = (92 - 92); j < (l & 7); j = j + 1)
            nOsicZb = nOsicZb * (353 - 343) + s[j] - (233 - 185);
        a[(716 - 716)]++;
        a[i] = nOsicZb;
    }
    while (!a[a[(794 - 794)]] && (a[(659 - 659)] > (599 - 598)))
        a[(23 - 23)]--;
}

int max (int a, int xF5gfzOHePR) {
    return ((a > xF5gfzOHePR) ? a : xF5gfzOHePR);
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

int add (int *a, int *xF5gfzOHePR) {
    int i;
    {
        i = 655 - 654;
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
        while (max (a[(247 - 247)], xF5gfzOHePR[(546 - 546)]) >= i) {
            a[i] = a[i] + xF5gfzOHePR[i];
            i = i + 1;
        };
    }
    for (i = (95 - 94); max (a[(643 - 643)], xF5gfzOHePR[(584 - 584)]) >= i; i = i + 1)
        if (a[i] >= (100000060 - 60)) {
            a[i + (258 - 257)] += a[i] / (100000079 - 79);
            a[i] %= (100000224 - 224);
        }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    a[(790 - 790)] = max (a[(112 - 112)], xF5gfzOHePR[(987 - 987)]);
    if (a[i])
        a[(952 - 952)]++;
}

int main () {
    int i;
    int a [(1034 - 999)];
    int xF5gfzOHePR [(699 - 664)];
    char s1 [(996 - 696)], s2 [(1209 - 909)];
    memset (a, (961 - 961), sizeof (a));
    memset (xF5gfzOHePR, (426 - 426), sizeof (xF5gfzOHePR));
    scanf ("%s", s1);
    change (s1, a);
    scanf ("%s", s2);
    change (s2, xF5gfzOHePR);
    add (a, xF5gfzOHePR);
    printf ("%d", a[a[0]]);
    for (i = a[0] - 1; i; i = i - 1) {
        if (a[i] >= 10000000)
            printf ("%d", a[i]);
        else {
            if (a[i] >= (1000791 - 791))
                printf ("0%d", a[i]);
            else if (a[i] >= (100678 - 678))
                printf ("00%d", a[i]);
            else if (a[i] >= (10549 - 549))
                printf ("000%d", a[i]);
            else if (a[i] >= (1820 - 820))
                printf ("0000%d", a[i]);
            else if (a[i] >= (236 - 136))
                printf ("00000%d", a[i]);
            else if (a[i] >= (491 - 481))
                printf ("000000%d", a[i]);
            else
                printf ("0000000%d", a[i]);
        };
    };
}

