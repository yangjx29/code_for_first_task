int Ug3wo6vL (int x) {
    int j;
    int WGts2DmoFg3T;
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
    j = (724 - 723);
    for (WGts2DmoFg3T = 2; WGts2DmoFg3T < x && j == (125 - 124); WGts2DmoFg3T = WGts2DmoFg3T +1) {
        if (x % WGts2DmoFg3T == (705 - 705))
            j = (678 - 678);
    }
    return (j);
}

int hui (int x) {
    int WGts2DmoFg3T, jgx6Uu4OIBEn [100], dicVn1, Y6kqXhu;
    Y6kqXhu = 1;
    {
        WGts2DmoFg3T = 1;
        while (x != 0) {
            jgx6Uu4OIBEn[WGts2DmoFg3T] = x % (873 - 863);
            x = x / 10;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            WGts2DmoFg3T = WGts2DmoFg3T +1;
        };
    }
    dicVn1 = WGts2DmoFg3T -1;
    if (dicVn1 % 2 == 0) {
        for (WGts2DmoFg3T = 1; WGts2DmoFg3T <= dicVn1 / 2; WGts2DmoFg3T++)
            if (jgx6Uu4OIBEn[WGts2DmoFg3T] != jgx6Uu4OIBEn[dicVn1 - WGts2DmoFg3T +1]) {
                Y6kqXhu = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            }
        return Y6kqXhu;
    }
    else {
        for (WGts2DmoFg3T = 1; WGts2DmoFg3T <= (dicVn1 - 1) / 2; WGts2DmoFg3T++)
            if (jgx6Uu4OIBEn[WGts2DmoFg3T] != jgx6Uu4OIBEn[dicVn1 - WGts2DmoFg3T +1]) {
                Y6kqXhu = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                break;
            }
        return Y6kqXhu;
    };
}

main () {
    int axl4TwzdI;
    int pVBglZJL;
    int dicVn1;
    int WGts2DmoFg3T;
    int j;
    axl4TwzdI = 0;
    scanf ("%d %d", &pVBglZJL, &dicVn1);
    for (WGts2DmoFg3T = pVBglZJL; WGts2DmoFg3T <= dicVn1; WGts2DmoFg3T++) {
        if (Ug3wo6vL (WGts2DmoFg3T) == 1) {
            if (hui (WGts2DmoFg3T) == 1) {
                if (axl4TwzdI == 0) {
                    printf ("%d", WGts2DmoFg3T);
                    axl4TwzdI = axl4TwzdI + 1;
                }
                else
                    printf (",%d", WGts2DmoFg3T);
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
            };
        };
    }
    if (axl4TwzdI == 0)
        printf ("no\n");
    getchar ();
    getchar ();
}

