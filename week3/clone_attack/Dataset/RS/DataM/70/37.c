int main () {
    int n;
    struct   bAhklWSvUbom {
        double  WDGmvE6, y;
    };
    bAhklWSvUbom *pp;
    int tM7Ij1c0vxqT;
    double  wyiX69;
    wyiX69 = 0;
    free (pp);
    scanf ("%d", &n);
    pp = (struct   bAhklWSvUbom *) malloc (sizeof (bAhklWSvUbom) * n);
    {
        tM7Ij1c0vxqT = 394 - 394;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tM7Ij1c0vxqT < n) {
            double  tmp1;
            double  tmp2;
            scanf ("%lf%lf", &tmp1, &tmp2);
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
            (pp + tM7Ij1c0vxqT)->WDGmvE6 = tmp1;
            (pp + tM7Ij1c0vxqT)->y = tmp2;
            tM7Ij1c0vxqT = tM7Ij1c0vxqT + 1;
        };
    }
    {
        tM7Ij1c0vxqT = 0;
        while (tM7Ij1c0vxqT < n) {
            int S8xRjX7a1F;
            for (S8xRjX7a1F = tM7Ij1c0vxqT + 1; S8xRjX7a1F < n; S8xRjX7a1F = S8xRjX7a1F +1) {
                double  tmpdis;
                double  Fc4ZlUmD97hr;
                double  xOTGY3c;
                Fc4ZlUmD97hr = ((pp + tM7Ij1c0vxqT)->WDGmvE6) - ((pp + S8xRjX7a1F)->WDGmvE6);
                xOTGY3c = ((pp + tM7Ij1c0vxqT)->y) - ((pp + S8xRjX7a1F)->y);
                tmpdis = sqrt (Fc4ZlUmD97hr *Fc4ZlUmD97hr+xOTGY3c * xOTGY3c);
                if (tmpdis > wyiX69)
                    wyiX69 = tmpdis;
            }
            tM7Ij1c0vxqT = tM7Ij1c0vxqT + 1;
        };
    }
    printf ("%.4lf", wyiX69);
    return 0;
}

