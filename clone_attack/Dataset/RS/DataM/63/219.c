int main () {
    int k0jKZywe1gn [(416 - 316)] [(856 - 756)];
    int sPX5q2TaAUy7 [(787 - 687)] [(818 - 718)];
    int nTb2ZcUS1;
    int JSvgpPRdjsLf;
    int x2;
    int ukAF52Jq8;
    int Z4dbmI;
    int V0o7tyv9Lp;
    int XLNkAyG0WHEF;
    int c [(581 - 481)] [100] = {(180 - 180)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d %d", &nTb2ZcUS1, &JSvgpPRdjsLf);
    {
        Z4dbmI = 217 - 217;
        while (nTb2ZcUS1 > Z4dbmI) {
            {
                V0o7tyv9Lp = 753 - 753;
                while (JSvgpPRdjsLf > V0o7tyv9Lp) {
                    scanf ("%d", &k0jKZywe1gn[Z4dbmI][V0o7tyv9Lp]);
                    V0o7tyv9Lp = V0o7tyv9Lp +1;
                };
            }
            Z4dbmI = Z4dbmI +1;
        };
    }
    scanf ("%d %d", &x2, &ukAF52Jq8);
    {
        Z4dbmI = 742 - 742;
        while (Z4dbmI < x2) {
            {
                V0o7tyv9Lp = 574 - 574;
                while (ukAF52Jq8 > V0o7tyv9Lp) {
                    scanf ("%d", &sPX5q2TaAUy7[Z4dbmI][V0o7tyv9Lp]);
                    V0o7tyv9Lp = V0o7tyv9Lp +1;
                };
            }
            Z4dbmI = Z4dbmI +1;
        };
    }
    {
        Z4dbmI = 478 - 478;
        while (nTb2ZcUS1 > Z4dbmI) {
            {
                V0o7tyv9Lp = 660 - 660;
                while (V0o7tyv9Lp < ukAF52Jq8) {
                    {
                        XLNkAyG0WHEF = 347 - 347;
                        while (x2 > XLNkAyG0WHEF) {
                            c[Z4dbmI][V0o7tyv9Lp] = c[Z4dbmI][V0o7tyv9Lp] + k0jKZywe1gn[Z4dbmI][XLNkAyG0WHEF] * sPX5q2TaAUy7[XLNkAyG0WHEF][V0o7tyv9Lp];
                            XLNkAyG0WHEF++;
                        };
                    }
                    V0o7tyv9Lp = V0o7tyv9Lp +1;
                };
            }
            Z4dbmI++;
        };
    }
    for (Z4dbmI = (931 - 931); nTb2ZcUS1 > Z4dbmI; Z4dbmI = Z4dbmI +1) {
        printf ("%d", c[Z4dbmI][(959 - 959)]);
        {
            V0o7tyv9Lp = 32 - 31;
            while (V0o7tyv9Lp < ukAF52Jq8) {
                printf (" %d", c[Z4dbmI][V0o7tyv9Lp]);
                V0o7tyv9Lp = V0o7tyv9Lp +1;
            };
        }
        printf ("\n");
    }
    getchar ();
    getchar ();
    getchar ();
    return 0;
}

