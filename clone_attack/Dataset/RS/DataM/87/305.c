int main () {
    int OIucsOG2vR [(10081 - 81)], Q94Ga7RHA [10000], c [10000], yGo135aC9 [10000], SVKr2qW [10000], BDUIfl [10000];
    int tEl2HNuTB0PI, s, z4PgOfEyZ9, yIuKZ1TmhS;
    {
        yIuKZ1TmhS = 0;
        while (10000 > yIuKZ1TmhS) {
            scanf ("%d%d%d%d%d%d", &OIucsOG2vR[yIuKZ1TmhS], &Q94Ga7RHA[yIuKZ1TmhS], &c[yIuKZ1TmhS], &yGo135aC9[yIuKZ1TmhS], &SVKr2qW[yIuKZ1TmhS], &BDUIfl[yIuKZ1TmhS]);
            if (!(0 != OIucsOG2vR[yIuKZ1TmhS]) && !(0 != Q94Ga7RHA[yIuKZ1TmhS]) && !(0 != c[yIuKZ1TmhS]) && yGo135aC9[yIuKZ1TmhS] == 0 && SVKr2qW[yIuKZ1TmhS] == 0 && BDUIfl[yIuKZ1TmhS] == 0) {
                tEl2HNuTB0PI = yIuKZ1TmhS;
                break;
            }
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
            yIuKZ1TmhS++;
        };
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
    for (yIuKZ1TmhS = 0; yIuKZ1TmhS < tEl2HNuTB0PI; yIuKZ1TmhS++) {
        s = OIucsOG2vR[yIuKZ1TmhS] * 60 * 60 + Q94Ga7RHA[yIuKZ1TmhS] * 60 + c[yIuKZ1TmhS];
        z4PgOfEyZ9 = (yGo135aC9[yIuKZ1TmhS] + 12) * 60 * 60 + SVKr2qW[yIuKZ1TmhS] * 60 + BDUIfl[yIuKZ1TmhS];
        printf ("%d\n", z4PgOfEyZ9 - s);
    }
    return 0;
}

