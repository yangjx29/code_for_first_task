int main () {
    int c;
    int d;
    int COV5onKaNh;
    int VjuVWFo;
    int SjQfceNoLC2I;
    c = 0;
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
    d = 0;
    scanf ("%d", &COV5onKaNh);
    while (COV5onKaNh--) {
        scanf ("%d %d", &VjuVWFo, &SjQfceNoLC2I);
        if ((VjuVWFo == 0 && SjQfceNoLC2I == 1) || (VjuVWFo == 1 && SjQfceNoLC2I == 2) || (VjuVWFo == 2 && SjQfceNoLC2I == 0)) {
            c = c + 1;
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
        if (VjuVWFo == SjQfceNoLC2I) {
            c++;
            d++;
        }
        if ((SjQfceNoLC2I == 0 && VjuVWFo == 1) || (SjQfceNoLC2I == 1 && VjuVWFo == 2) || (SjQfceNoLC2I == 2 && VjuVWFo == 0)) {
            d++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    if (c > d)
        printf ("A");
    if (c < d)
        printf ("B");
    if (c == d)
        ;
    return 0;
}

