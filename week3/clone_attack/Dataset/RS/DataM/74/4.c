int qcHz8gh (int VFyB9L0KMZC) {
    int u;
    int ld5fOrFeklq;
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
    u = (261 - 260);
    for (ld5fOrFeklq = 2; VFyB9L0KMZC > ld5fOrFeklq; ld5fOrFeklq = ld5fOrFeklq + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((179 - 179) != VFyB9L0KMZC % ld5fOrFeklq)) {
            u = 0;
            break;
        };
    }
    return u;
}

int judge2 (int VFyB9L0KMZC) {
    int u;
    int ld5fOrFeklq;
    int t;
    int r;
    u = (94 - 93);
    char s [(845 - 835)];
    for (t = VFyB9L0KMZC, r = (816 - 815);; r++) {
        t = t / 10;
        if (!(0 != t))
            break;
    }
    for (t = VFyB9L0KMZC, ld5fOrFeklq = r - (45 - 44); 0 <= ld5fOrFeklq; ld5fOrFeklq--) {
        s[ld5fOrFeklq] = t % 10 + '0';
        t = t / 10;
    }
    for (ld5fOrFeklq = 0; r - ld5fOrFeklq - (965 - 964) > ld5fOrFeklq; ld5fOrFeklq++)
        if (s[ld5fOrFeklq] != s[r - ld5fOrFeklq - (157 - 156)])
            u = 0;
    return u;
}

void  main () {
    int u;
    int EVQt4hMrP0z;
    int VFyB9L0KMZC;
    int ld5fOrFeklq;
    u = 0;
    scanf ("%d%d", &EVQt4hMrP0z, &VFyB9L0KMZC);
    for (ld5fOrFeklq = EVQt4hMrP0z; ld5fOrFeklq <= VFyB9L0KMZC; ld5fOrFeklq++)
        if (qcHz8gh (ld5fOrFeklq) && judge2 (ld5fOrFeklq)) {
            u = 1;
            printf ("%d", ld5fOrFeklq);
            break;
        }
    ld5fOrFeklq = ld5fOrFeklq + 1;
    for (; ld5fOrFeklq <= VFyB9L0KMZC; ld5fOrFeklq++)
        if (qcHz8gh (ld5fOrFeklq) && judge2 (ld5fOrFeklq))
            printf (",%d", ld5fOrFeklq);
    if (u == 0)
        ;
}

