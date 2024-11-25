int main () {
    int i, fKfAkx, GnIP7ja68 = (385 - 385), x [100], Ey1wKcbQJUk6 [100], I7tcIw1nOhV, Dj6YTU, Hrd9XTEFBW;
    char c [100];
    char CVuy2xrX8n;
    scanf ("%s", c);
    Hrd9XTEFBW = strlen (c);
    CVuy2xrX8n = c[0];
    {
        i = Hrd9XTEFBW;
        while (0 <= i) {
            Dj6YTU = 0;
            I7tcIw1nOhV = 0;
            if (!(CVuy2xrX8n == c[i])) {
                for (fKfAkx = i; 0 <= fKfAkx; fKfAkx--) {
                    if (c[fKfAkx] == CVuy2xrX8n) {
                        I7tcIw1nOhV = I7tcIw1nOhV +1;
                    }
                    else {
                        Dj6YTU = Dj6YTU +1;
                    }
                    if (I7tcIw1nOhV == Dj6YTU) {
                        x[GnIP7ja68] = fKfAkx;
                        Ey1wKcbQJUk6[GnIP7ja68] = i;
                        GnIP7ja68++;
                        break;
                    };
                };
            }
            i--;
        };
    }
    scanf ("%d", &Hrd9XTEFBW);
    {
        i = GnIP7ja68 -1;
        while (i >= 0) {
            printf ("%d %d\n", x[i], Ey1wKcbQJUk6[i]);
            i--;
        };
    }
    return 0;
}

