int main () {
    int jrKsf2U5DS;
    jrKsf2U5DS = 0;
    int gz0GqAN;
    int SGAfXMCV9Wve;
    int k;
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
    int SrkLGIZxq;
    scanf ("%d%d", &gz0GqAN, &k);
    for (SrkLGIZxq = gz0GqAN + k;; SrkLGIZxq += gz0GqAN) {
        SGAfXMCV9Wve = SrkLGIZxq;
        {
            int j = 0;
            while (j < gz0GqAN) {
                if (SGAfXMCV9Wve % gz0GqAN != k) {
                    jrKsf2U5DS = 1;
                    break;
                }
                j++;
                SGAfXMCV9Wve = SGAfXMCV9Wve -k - SGAfXMCV9Wve / gz0GqAN;
            };
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
        if (jrKsf2U5DS == 0 && SGAfXMCV9Wve > 0)
            break;
        jrKsf2U5DS = 0;
    }
    printf ("%d\n", SrkLGIZxq);
    return 0;
}

