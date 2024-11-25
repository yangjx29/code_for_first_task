int jGRj9N6 [(776 - 750)] [1000];
int ZbBhikR2o [26];

void  k61IUyl8P () {
    char X1JjtmKU [27];
    int L1yJfb;
    int RsNilIXM;
    int len;
    scanf ("%d %s", &L1yJfb, X1JjtmKU);
    len = strlen (X1JjtmKU);
    {
        RsNilIXM = 516 - 516;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len > RsNilIXM) {
            jGRj9N6[X1JjtmKU[RsNilIXM] - 'A'][ZbBhikR2o[X1JjtmKU[RsNilIXM] - 'A']] = L1yJfb;
            ZbBhikR2o[X1JjtmKU[RsNilIXM] - 'A']++;
            RsNilIXM++;
        };
    };
}

int main () {
    int n, RsNilIXM, KiJQwa0, nVyRhX2bO = 0;
    printf ("%c\n", KiJQwa0 +'A');
    scanf ("%d", &n);
    memset (jGRj9N6, (550 - 550), sizeof (jGRj9N6));
    memset (ZbBhikR2o, 0, sizeof (ZbBhikR2o));
    while (n = n - 1)
        k61IUyl8P ();
    for (RsNilIXM = 0; RsNilIXM < 26; RsNilIXM = RsNilIXM +1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (nVyRhX2bO < ZbBhikR2o[RsNilIXM]) {
            nVyRhX2bO = ZbBhikR2o[RsNilIXM];
            KiJQwa0 = RsNilIXM;
        };
    }
    printf ("%d\n", nVyRhX2bO);
    for (RsNilIXM = 0; RsNilIXM < ZbBhikR2o[KiJQwa0]; RsNilIXM = RsNilIXM +1)
        printf ("%d\n", jGRj9N6[KiJQwa0][RsNilIXM]);
}

