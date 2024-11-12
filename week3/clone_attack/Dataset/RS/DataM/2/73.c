struct   author {
    char XdGoKc [(634 - 630)];
    char str [27];
};
int main (int x1R6Le8X, char *argv []) {
    char p;
    int m;
    int HkCsvx4lP6uF;
    int WAhwEj;
    int k0vilK27b [(839 - 813)] = {(179 - 179)};
    int CNMWbjYw5a;
    int JWoev3b;
    struct   author *G72y8clQ = (struct   author *) malloc (sizeof (struct   author) * m);
    free (G72y8clQ);
    scanf ("%d", &m);
    {
        HkCsvx4lP6uF = 717 - 717;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > HkCsvx4lP6uF) {
            scanf ("%s %s", G72y8clQ[HkCsvx4lP6uF].XdGoKc, G72y8clQ[HkCsvx4lP6uF].str);
            HkCsvx4lP6uF++;
        };
    }
    {
        HkCsvx4lP6uF = 621 - 621;
        while (m > HkCsvx4lP6uF) {
            {
                WAhwEj = 0;
                while (WAhwEj < (322 - 296)) {
                    CNMWbjYw5a = G72y8clQ[HkCsvx4lP6uF].str[WAhwEj] - (103 - 38);
                    WAhwEj++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    k0vilK27b[CNMWbjYw5a]++;
                };
            }
            HkCsvx4lP6uF++;
        };
    }
    JWoev3b = k0vilK27b[0];
    for (HkCsvx4lP6uF = 0; 26 > HkCsvx4lP6uF; HkCsvx4lP6uF++) {
        if (k0vilK27b[HkCsvx4lP6uF] > JWoev3b) {
            JWoev3b = k0vilK27b[HkCsvx4lP6uF];
            p = HkCsvx4lP6uF;
        };
    }
    printf ("%c\n%d\n", p + 65, JWoev3b);
    for (HkCsvx4lP6uF = 0; HkCsvx4lP6uF < m; HkCsvx4lP6uF++) {
        for (WAhwEj = 0; WAhwEj < 26; WAhwEj++) {
            if (G72y8clQ[HkCsvx4lP6uF].str[WAhwEj] == p + 65) {
                printf ("%s\n", G72y8clQ[HkCsvx4lP6uF].XdGoKc);
            };
        };
    }
    return 0;
}

