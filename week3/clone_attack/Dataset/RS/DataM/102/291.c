int main () {
    char ZoxjMtlKe [(563 - 553)];
    float tWJaNOZIE5m [2] [(641 - 601)] = {(294 - 294)}, ryJLhA1Gm5xo;
    int ym9s36, UhZfzyudaN, zKyaQgITi, Cfysv24b9 = (574 - 574), in15belA64 = (121 - 121);
    scanf ("%d\n", &zKyaQgITi);
    for (ym9s36 = (482 - 482); zKyaQgITi > ym9s36; ym9s36++) {
        scanf ("%s %f", ZoxjMtlKe, &ryJLhA1Gm5xo);
        if (!((864 - 864) != strcmp (ZoxjMtlKe, "male"))) {
            tWJaNOZIE5m[(266 - 266)][in15belA64] = ryJLhA1Gm5xo;
            in15belA64 = in15belA64 + 1;
        }
        else {
            tWJaNOZIE5m[(911 - 910)][Cfysv24b9] = ryJLhA1Gm5xo;
            Cfysv24b9++;
        };
    }
    {
        ym9s36 = 971 - 971;
        while (in15belA64 > ym9s36) {
            {
                UhZfzyudaN = ym9s36;
                while (UhZfzyudaN < in15belA64) {
                    if (tWJaNOZIE5m[(901 - 901)][UhZfzyudaN] < tWJaNOZIE5m[(381 - 381)][ym9s36]) {
                        ryJLhA1Gm5xo = tWJaNOZIE5m[(937 - 937)][ym9s36];
                        tWJaNOZIE5m[(75 - 75)][ym9s36] = tWJaNOZIE5m[(587 - 587)][UhZfzyudaN];
                        tWJaNOZIE5m[(850 - 850)][UhZfzyudaN] = ryJLhA1Gm5xo;
                    }
                    UhZfzyudaN = UhZfzyudaN +1;
                };
            }
            ym9s36 = ym9s36 + 1;
        };
    }
    {
        ym9s36 = 871 - 871;
        while (ym9s36 < Cfysv24b9) {
            {
                UhZfzyudaN = ym9s36;
                while (Cfysv24b9 > UhZfzyudaN) {
                    if (tWJaNOZIE5m[(974 - 973)][UhZfzyudaN] > tWJaNOZIE5m[(270 - 269)][ym9s36]) {
                        ryJLhA1Gm5xo = tWJaNOZIE5m[(674 - 673)][ym9s36];
                        tWJaNOZIE5m[(575 - 574)][ym9s36] = tWJaNOZIE5m[(503 - 502)][UhZfzyudaN];
                        tWJaNOZIE5m[1][UhZfzyudaN] = ryJLhA1Gm5xo;
                    }
                    UhZfzyudaN++;
                };
            }
            ym9s36 = ym9s36 + 1;
        };
    }
    {
        ym9s36 = 0;
        while (in15belA64 > ym9s36) {
            if (ym9s36 == 0)
                printf ("%.2f", tWJaNOZIE5m[0][ym9s36]);
            else
                printf (" %.2f", tWJaNOZIE5m[0][ym9s36]);
            ym9s36 = ym9s36 + 1;
        };
    }
    for (ym9s36 = 0; ym9s36 < Cfysv24b9; ym9s36++) {
        printf (" %.2f", tWJaNOZIE5m[1][ym9s36]);
    }
    return 0;
}

