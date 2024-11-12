struct   student {
    int foTEPNY;
    char cdsolNtrOyHT [20];
    int qimo;
    int bqQnLXMo1xtF;
    char ganbu;
    char uRrYFGnDK;
    int paper;
};
struct   jiangxuejin {
    int foTEPNY;
    int total;
};
int main () {
    struct   student HNE6Lcaohd [(930 - 830)];
    struct   student most;
    int all;
    int n;
    int i;
    all = (459 - 459);
    struct   jiangxuejin aUZ20P8O [100], check;
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
    scanf ("%d", &n);
    {
        i = 770 - 770;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            HNE6Lcaohd[i].foTEPNY = i;
            scanf ("%s %d %d %c %c %d", HNE6Lcaohd[i].cdsolNtrOyHT, &HNE6Lcaohd[i].qimo, &HNE6Lcaohd[i].bqQnLXMo1xtF, &HNE6Lcaohd[i].ganbu, &HNE6Lcaohd[i].uRrYFGnDK, &HNE6Lcaohd[i].paper);
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
            i = i + 1;
        };
    }
    for (i = (176 - 176); i < n; i = i + 1) {
        aUZ20P8O[i].foTEPNY = i;
        aUZ20P8O[i].total = 0;
        if (HNE6Lcaohd[i].qimo > 80 && HNE6Lcaohd[i].paper >= (206 - 205)) {
            aUZ20P8O[i].total += (8933 - 933);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (HNE6Lcaohd[i].qimo > (433 - 348) && 80 < HNE6Lcaohd[i].bqQnLXMo1xtF) {
            aUZ20P8O[i].total += 4000;
        }
        if (90 < HNE6Lcaohd[i].qimo) {
            aUZ20P8O[i].total += 2000;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        if (85 < HNE6Lcaohd[i].qimo && HNE6Lcaohd[i].uRrYFGnDK == 'Y') {
            aUZ20P8O[i].total += (1866 - 866);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        if (HNE6Lcaohd[i].bqQnLXMo1xtF > 80 && HNE6Lcaohd[i].ganbu == 'Y') {
            aUZ20P8O[i].total += 850;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    check = aUZ20P8O[0];
    most = HNE6Lcaohd[0];
    for (i = 1; i < n; i = i + 1) {
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
        if (aUZ20P8O[i].total > check.total) {
            most = HNE6Lcaohd[i];
            check = aUZ20P8O[i];
        };
    }
    for (i = 0; i < n; i = i + 1) {
        all += aUZ20P8O[i].total;
    }
    printf ("%s\n%d\n%d", most.cdsolNtrOyHT, check.total, all);
    return 0;
}

