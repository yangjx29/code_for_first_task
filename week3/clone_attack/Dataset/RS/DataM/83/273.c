double  V7tXsU82W (double  v6JvbSO5) {
    if ((500 - 410) <= v6JvbSO5 && (847 - 747) >= v6JvbSO5) {
        return (898.0 - 894.0);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (85 <= v6JvbSO5 && v6JvbSO5 <= (510 - 421)) {
        return (670.7 - 667.0);
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
        };
    }
    if (82 <= v6JvbSO5 && 84 >= v6JvbSO5) {
        return 3.3;
    }
    if (78 <= v6JvbSO5 && 81 >= v6JvbSO5) {
        return 3.0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (75 <= v6JvbSO5 && (995 - 918) >= v6JvbSO5) {
        return 2.7;
    }
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
    if ((884 - 812) <= v6JvbSO5 && v6JvbSO5 <= 74) {
        return 2.3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    if (v6JvbSO5 >= 68 && v6JvbSO5 <= 71) {
        return (378.0 - 376.0);
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
    if (v6JvbSO5 >= (331 - 267) && v6JvbSO5 <= (131 - 64)) {
        return 1.5;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (v6JvbSO5 >= 60 && v6JvbSO5 <= 63) {
        return 1.0;
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
        };
    }
    if (v6JvbSO5 < 60 && v6JvbSO5 >= (756 - 756)) {
        return (797 - 797);
    };
}

int main () {
    double  R0IxCkg5l;
    double  total;
    double  *p;
    double  *Vzo2hN;
    double  GPA;
    double  a;
    R0IxCkg5l = 0;
    total = 0;
    free (p);
    free (Vzo2hN);
    int lH3mM5GlNJEs;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int OHvVb2gB7;
    scanf ("%d", &lH3mM5GlNJEs);
    p = (double  *) malloc (sizeof (double ) * lH3mM5GlNJEs);
    Vzo2hN = (double  *) malloc (sizeof (double ) * lH3mM5GlNJEs);
    {
        OHvVb2gB7 = 0;
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
        while (OHvVb2gB7 < lH3mM5GlNJEs) {
            scanf ("%lf", &p[OHvVb2gB7]);
            total += p[OHvVb2gB7];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            OHvVb2gB7 = OHvVb2gB7 +1;
        };
    }
    {
        OHvVb2gB7 = 0;
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
        while (OHvVb2gB7 < lH3mM5GlNJEs) {
            scanf ("%lf", &Vzo2hN[OHvVb2gB7]);
            OHvVb2gB7 = OHvVb2gB7 +1;
        };
    }
    {
        OHvVb2gB7 = 0;
        while (OHvVb2gB7 < lH3mM5GlNJEs) {
            a = V7tXsU82W (Vzo2hN[OHvVb2gB7]);
            R0IxCkg5l += a * p[OHvVb2gB7];
            OHvVb2gB7++;
        };
    }
    GPA = R0IxCkg5l / total;
    printf ("%.2f", GPA);
    return 0;
}

