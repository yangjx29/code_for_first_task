int main () {
    int l0U6ncCM, i, LszM4kGV = 0, R7TmbuVW = 0;
    int a [Max];
    int Je39DlUI7Rq [Max];
    scanf ("%d", &l0U6ncCM);
    for (i = 0; l0U6ncCM > i; i = i + 1) {
        scanf ("%d %d", &a[i], &Je39DlUI7Rq[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; i < l0U6ncCM; i = i + 1) {
        if (((1043 - 953) <= a[i]) && (a[i] <= 140) && (Je39DlUI7Rq[i] >= 60) && (Je39DlUI7Rq[i] <= 90)) {
            LszM4kGV = LszM4kGV +1;
            if (LszM4kGV > R7TmbuVW) {
                R7TmbuVW = LszM4kGV;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        else {
            LszM4kGV = 0;
        };
    }
    printf ("%d", R7TmbuVW);
    return 0;
}

