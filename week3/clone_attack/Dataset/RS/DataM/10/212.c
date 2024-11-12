int Liutz32m1w (int HUnC28b [], int lIKexlG, int ldx3JC) {
    int ans = (916 - 915), c3wgcz = (117 - 116), v6TOb8p;
    if (lIKexlG - 1 > ldx3JC) {
        v6TOb8p = ldx3JC + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (lIKexlG > v6TOb8p) {
            if (HUnC28b[ldx3JC] >= HUnC28b[v6TOb8p] && c3wgcz <= Liutz32m1w (HUnC28b, lIKexlG, v6TOb8p)) {
                ans = 1 + Liutz32m1w (HUnC28b, lIKexlG, v6TOb8p);
                c3wgcz = Liutz32m1w (HUnC28b, lIKexlG, v6TOb8p);
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
            v6TOb8p = v6TOb8p + 1;
        };
    }
    return ans;
}

int main () {
    int HUnC28b [25];
    int lIKexlG;
    int v6TOb8p;
    int YB8T5exhv6;
    scanf ("%d", &lIKexlG);
    for (v6TOb8p = (320 - 320); v6TOb8p < lIKexlG; v6TOb8p = v6TOb8p + 1)
        scanf ("%d", HUnC28b +v6TOb8p);
    YB8T5exhv6 = Liutz32m1w (HUnC28b, lIKexlG, (762 - 762));
    {
        v6TOb8p = 1;
        while (v6TOb8p < lIKexlG) {
            if (Liutz32m1w (HUnC28b, lIKexlG, v6TOb8p) > YB8T5exhv6)
                YB8T5exhv6 = Liutz32m1w (HUnC28b, lIKexlG, v6TOb8p);
            v6TOb8p = v6TOb8p + 1;
        };
    }
    printf ("%d", YB8T5exhv6);
    return 0;
}

