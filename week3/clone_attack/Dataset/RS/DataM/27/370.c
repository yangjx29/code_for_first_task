int main () {
    double  a [100], b [100], c [100], APyBopg3qWn0, gHUhuK, xubu;
    int n;
    int zMoWbje9;
    zMoWbje9 = 0;
    cin >> n;
    for (; n > zMoWbje9;) {
        cin >> a[zMoWbje9] >> b[zMoWbje9] >> c[zMoWbje9];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        zMoWbje9 = zMoWbje9 + 1;
    }
    zMoWbje9 = 0;
    for (; zMoWbje9 < n;) {
        if (b[zMoWbje9] * b[zMoWbje9] - 4 * a[zMoWbje9] * c[zMoWbje9] > 0) {
            APyBopg3qWn0 = (-b[zMoWbje9] + sqrt (b[zMoWbje9] * b[zMoWbje9] - 4 * a[zMoWbje9] * c[zMoWbje9])) / (2 * a[zMoWbje9]);
            if (APyBopg3qWn0 == -0)
                APyBopg3qWn0 = 0;
            gHUhuK = (-b[zMoWbje9] - sqrt (b[zMoWbje9] * b[zMoWbje9] - 4 * a[zMoWbje9] * c[zMoWbje9])) / (2 * a[zMoWbje9]);
            if (gHUhuK == -0)
                gHUhuK = 0;
            printf ("x1=%.5f;x2=%.5f\n", APyBopg3qWn0, gHUhuK);
            zMoWbje9 = zMoWbje9 + 1;
        }
        else {
            if (b[zMoWbje9] * b[zMoWbje9] - 4 * a[zMoWbje9] * c[zMoWbje9] == 0) {
                APyBopg3qWn0 = gHUhuK = (-b[zMoWbje9]) / (2 * a[zMoWbje9]);
                if (APyBopg3qWn0 == -0)
                    APyBopg3qWn0 = gHUhuK = 0;
                printf ("x1=x2=%.5f\n", APyBopg3qWn0, gHUhuK);
                zMoWbje9 = zMoWbje9 + 1;
            }
            else {
                xubu = sqrt (4 * a[zMoWbje9] * c[zMoWbje9] - b[zMoWbje9] * b[zMoWbje9]) / (2 * a[zMoWbje9]);
                APyBopg3qWn0 = gHUhuK = (-b[zMoWbje9]) / (2 * a[zMoWbje9]);
                zMoWbje9 = zMoWbje9 + 1;
                if (APyBopg3qWn0 == -0)
                    APyBopg3qWn0 = gHUhuK = 0;
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", APyBopg3qWn0, xubu, gHUhuK, xubu);
            };
        };
    }
    return 0;
}

