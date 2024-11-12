struct   A {
    char num [1000];
    char ZP205OLc [27];
};
void  main () {
    struct   A hqrd2tuilhQB [999] = {0};
    int Dy9GDVOJ, f3EkQhOl, a, sHFG2ODoM1, gLIrzSFyGAbQ;
    int sb [27] = {0};
    int sb2 [27] = {0};
    char wEcVHWJZsLK;
    scanf ("%d", &Dy9GDVOJ);
    for (f3EkQhOl = 0; Dy9GDVOJ > f3EkQhOl; f3EkQhOl = f3EkQhOl + 1) {
        scanf ("%s%s", hqrd2tuilhQB[f3EkQhOl].num, hqrd2tuilhQB[f3EkQhOl].ZP205OLc);
    }
    for (f3EkQhOl = 0; Dy9GDVOJ > f3EkQhOl; f3EkQhOl++) {
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
        for (sHFG2ODoM1 = 0;; sHFG2ODoM1 = sHFG2ODoM1 + 1) {
            a = hqrd2tuilhQB[f3EkQhOl].ZP205OLc[sHFG2ODoM1];
            if (hqrd2tuilhQB[f3EkQhOl].ZP205OLc[sHFG2ODoM1] <= 'Z' && hqrd2tuilhQB[f3EkQhOl].ZP205OLc[sHFG2ODoM1] >= 'A') {
                sb[a - 64]++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else
                break;
        };
    }
    for (f3EkQhOl = 1; f3EkQhOl <= 26; f3EkQhOl++) {
        sb2[f3EkQhOl] = sb[f3EkQhOl];
    }
    {
        f3EkQhOl = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (26 > f3EkQhOl) {
            if (sb[f3EkQhOl + 1] < sb[f3EkQhOl]) {
                a = sb[f3EkQhOl];
                sb[f3EkQhOl] = sb[f3EkQhOl + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                sb[f3EkQhOl + 1] = a;
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
            f3EkQhOl = f3EkQhOl + 1;
        };
    }
    {
        f3EkQhOl = 1;
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
        while (f3EkQhOl <= 26) {
            if (sb2[f3EkQhOl] == sb[26]) {
                gLIrzSFyGAbQ = f3EkQhOl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            f3EkQhOl++;
        };
    }
    wEcVHWJZsLK = 'A' + gLIrzSFyGAbQ - 1;
    printf ("%c\n%d\n", wEcVHWJZsLK, sb[26]);
    {
        f3EkQhOl = 0;
        while (f3EkQhOl < Dy9GDVOJ) {
            for (sHFG2ODoM1 = 0;; sHFG2ODoM1++) {
                if (hqrd2tuilhQB[f3EkQhOl].ZP205OLc[sHFG2ODoM1] == '\0')
                    break;
                else if (hqrd2tuilhQB[f3EkQhOl].ZP205OLc[sHFG2ODoM1] == wEcVHWJZsLK)
                    printf ("%s\n", hqrd2tuilhQB[f3EkQhOl].num);
            }
            f3EkQhOl++;
        };
    };
}

