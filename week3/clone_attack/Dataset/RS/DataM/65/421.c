int main () {
    int x38ADNLR0pQ [200];
    int b [200];
    int yMxP3GjRE;
    int HYmeaSTbp;
    int XHFK2M;
    int zfiYNRS3hlBZ;
    yMxP3GjRE = 0;
    HYmeaSTbp = 0;
    scanf ("%d", &zfiYNRS3hlBZ);
    {
        XHFK2M = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (XHFK2M < zfiYNRS3hlBZ) {
            scanf ("%d %d", &x38ADNLR0pQ[XHFK2M], &b[XHFK2M]);
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
            XHFK2M = XHFK2M +1;
        };
    }
    for (XHFK2M = 0; XHFK2M < zfiYNRS3hlBZ; XHFK2M++) {
        if ((!(0 != x38ADNLR0pQ[XHFK2M]) && !(1 != b[XHFK2M])) || (!(1 != x38ADNLR0pQ[XHFK2M]) && !(2 != b[XHFK2M])) || (x38ADNLR0pQ[XHFK2M] == 2 && !(0 != b[XHFK2M]))) {
            yMxP3GjRE = yMxP3GjRE + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if ((x38ADNLR0pQ[XHFK2M] == 0 && b[XHFK2M] == 2) || (x38ADNLR0pQ[XHFK2M] == 1 && b[XHFK2M] == 0) || (x38ADNLR0pQ[XHFK2M] == 2 && b[XHFK2M] == 1)) {
            HYmeaSTbp = HYmeaSTbp +1;
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
    }
    if (yMxP3GjRE > HYmeaSTbp) {
        printf ("A");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    if (yMxP3GjRE == HYmeaSTbp) {
        printf ("Tie");
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
    }
    if (yMxP3GjRE < HYmeaSTbp) {
        printf ("B");
    }
    return 0;
}

