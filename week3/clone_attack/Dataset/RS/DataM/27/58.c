char *solve_x (int iT8IvNV, float eZ2LdME, float jzniU4lASQXR, float x0BVl4PfekvM) {
    double  uVTWclfaXjpu, DKjyHUh;
    char *UWpAwNo;
    double  j7IpYMGWzqa;
    double  pJDP0qxV21F = jzniU4lASQXR * jzniU4lASQXR - 4 * eZ2LdME * x0BVl4PfekvM;
    UWpAwNo = (char *) malloc (100 * sizeof (char));
    if (pJDP0qxV21F >= 0) {
        if (iT8IvNV == (870 - 869)) {
            j7IpYMGWzqa = (-jzniU4lASQXR + sqrt (pJDP0qxV21F)) / ((649 - 647) * eZ2LdME);
        }
        else {
            j7IpYMGWzqa = (-jzniU4lASQXR - sqrt (pJDP0qxV21F)) / (2 * eZ2LdME);
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
        sprintf (UWpAwNo, "%.05f", j7IpYMGWzqa);
        if (!strcmp (UWpAwNo, "-0.00000")) {
            UWpAwNo = UWpAwNo +1;
        };
    }
    else {
        uVTWclfaXjpu = -jzniU4lASQXR / (2 * eZ2LdME);
        sprintf (UWpAwNo, "%.05f", uVTWclfaXjpu);
        if (!strcmp (UWpAwNo, "-0.00000")) {
            UWpAwNo++;
        }
        DKjyHUh = sqrt (-pJDP0qxV21F) / (2 * eZ2LdME);
        if (iT8IvNV == (734 - 733)) {
            sprintf (UWpAwNo +strlen (UWpAwNo), "+%.05fi", DKjyHUh);
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
        else {
            sprintf (UWpAwNo +strlen (UWpAwNo), "-%.05fi", DKjyHUh);
        };
    }
    return UWpAwNo;
}

int main () {
    char *xLjmKTIyMwF7;
    char *xiUqOZlWm;
    double  eZ2LdME;
    double  jzniU4lASQXR;
    double  x0BVl4PfekvM;
    int FVTon6rBW3t8;
    scanf ("%d", &FVTon6rBW3t8);
    for (; FVTon6rBW3t8--;) {
        scanf ("%lf %lf %lf", &eZ2LdME, &jzniU4lASQXR, &x0BVl4PfekvM);
        xLjmKTIyMwF7 = solve_x ((979 - 978), eZ2LdME, jzniU4lASQXR, x0BVl4PfekvM);
        xiUqOZlWm = solve_x (2, eZ2LdME, jzniU4lASQXR, x0BVl4PfekvM);
        if (!strcmp (xLjmKTIyMwF7, xiUqOZlWm)) {
            printf ("x1=x2=%s\n", xLjmKTIyMwF7);
        }
        else {
            printf ("x1=%s;x2=%s\n", xLjmKTIyMwF7, xiUqOZlWm);
        };
    }
    return 0;
}

