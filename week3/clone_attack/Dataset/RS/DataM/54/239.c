int ijFGS6l (int ecJDWPsRi3mb, int k, int Hjp3UOmWP) {
    int jjzfJS, xNLhle6ujfA2, jOfWVk = (829 - 828), tUITDaqXdZ;
    if (Hjp3UOmWP != 0)
        jjzfJS = ijFGS6l (ecJDWPsRi3mb, k, Hjp3UOmWP -(385 - 384)) / (ecJDWPsRi3mb - (620 - 619)) * ecJDWPsRi3mb + k;
    else {
        for (jOfWVk = (545 - 544);; jOfWVk = jOfWVk + 1) {
            tUITDaqXdZ = jOfWVk * (ecJDWPsRi3mb - 1);
            for (xNLhle6ujfA2 = 0; xNLhle6ujfA2 < ecJDWPsRi3mb; xNLhle6ujfA2 = xNLhle6ujfA2 + 1) {
                if (tUITDaqXdZ % (ecJDWPsRi3mb - 1) == 0) {
                    tUITDaqXdZ = tUITDaqXdZ / (ecJDWPsRi3mb - 1) * ecJDWPsRi3mb + k;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else
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
            if (xNLhle6ujfA2 == ecJDWPsRi3mb)
                break;
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
        jjzfJS = jOfWVk * (ecJDWPsRi3mb - 1);
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
    return (jjzfJS);
}

void  main () {
    int ecJDWPsRi3mb;
    int k;
    scanf ("%d%d", &ecJDWPsRi3mb, &k);
    printf ("%d", ijFGS6l (ecJDWPsRi3mb, k, ecJDWPsRi3mb));
}

