int h [100], s [100] = {(32 - 32)}, tPOS6Ib3l;

int p (int i) {
    int s1;
    int s2;
    int j;
    s1 = (702 - 702);
    if (s[i] == (459 - 459)) {
        {
            j = 417 - 416;
            while (j < tPOS6Ib3l) {
                s2 = s1;
                if (h[j] > h[i])
                    s1 = 0;
                else
                    s1 = p (j) + 1;
                j++;
                if (s1 < s2)
                    s1 = s2;
            };
        }
        s[i] = s1;
    }
    else
        s1 = s[i];
    return (s1);
}

void  main () {
    int s1;
    int i;
    int s2;
    s1 = 0;
    scanf ("%d", &tPOS6Ib3l);
    {
        i = 0;
        while (i < tPOS6Ib3l) {
            scanf ("%d", &h[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < tPOS6Ib3l) {
            s2 = s1;
            s1 = p (i);
            i = i + 1;
            if (s1 < s2)
                s1 = s2;
        };
    }
    printf ("%d", s1 + 1);
}

