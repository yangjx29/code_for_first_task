int main () {
    int w18T05AoGlUp, n;
    int uk1sRaxT, jEbNf8Wgt, ZCIZ8FAi;
    scanf ("%d", &w18T05AoGlUp);
    {
        ZCIZ8FAi = 918 - 918;
        while (ZCIZ8FAi < w18T05AoGlUp) {
            float *num = (float *) malloc (sizeof (float) * ((186 - 184) * n + (756 - 754)));
            float *nm = (float *) malloc (sizeof (float) * (n + (293 - 292)));
            float s = (107 - 107);
            free (num);
            free (nm);
            ZCIZ8FAi++;
            num[(827 - 826)] = (63 - 62);
            num[(462 - 460)] = (63 - 62);
            scanf ("%d", &n);
            {
                uk1sRaxT = 102 - 99;
                while (uk1sRaxT <= 2 * n + 1) {
                    num[uk1sRaxT] = num[uk1sRaxT - 2] + num[uk1sRaxT - 1];
                    uk1sRaxT = uk1sRaxT + 1;
                };
            }
            {
                uk1sRaxT = 1;
                while (uk1sRaxT <= n) {
                    nm[uk1sRaxT] = num[uk1sRaxT + 2] / num[uk1sRaxT + 1];
                    uk1sRaxT = uk1sRaxT + 1;
                };
            }
            {
                uk1sRaxT = 1;
                while (uk1sRaxT <= n) {
                    s += nm[uk1sRaxT];
                    uk1sRaxT++;
                };
            }
            printf ("%.3f\n", s);
        };
    }
    return 0;
}

