int main () {
    struct   student {
        int num;
        int scorechinese;
        int scoremath;
        int sum;
    }
    oNjQRi [100000];
    int n;
    int CcnjpE6;
    int j;
    int coIwg6uYEWKc;
    scanf ("%d", &n);
    for (CcnjpE6 = 0; CcnjpE6 < n; CcnjpE6 = CcnjpE6 +1) {
        scanf ("%d %d %d", &oNjQRi[CcnjpE6].num, &oNjQRi[CcnjpE6].scorechinese, &oNjQRi[CcnjpE6].scoremath);
        oNjQRi[CcnjpE6].sum = oNjQRi[CcnjpE6].scorechinese + oNjQRi[CcnjpE6].scoremath;
    }
    for (CcnjpE6 = 0; CcnjpE6 < 3; CcnjpE6++) {
        for (j = CcnjpE6 +1; n > j; j = j + 1) {
            if (oNjQRi[CcnjpE6].sum < oNjQRi[j].sum) {
                coIwg6uYEWKc = oNjQRi[CcnjpE6].sum, oNjQRi[CcnjpE6].sum = oNjQRi[j].sum, oNjQRi[j].sum = coIwg6uYEWKc;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                coIwg6uYEWKc = oNjQRi[CcnjpE6].num, oNjQRi[CcnjpE6].num = oNjQRi[j].num, oNjQRi[j].num = coIwg6uYEWKc;
            };
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
        printf ("%d %d\n", oNjQRi[CcnjpE6].num, oNjQRi[CcnjpE6].sum);
    }
    return 0;
}

