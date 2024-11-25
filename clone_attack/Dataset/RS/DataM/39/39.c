int main () {
    char name [(1008 - 908)] [20], FFafCnh7 [(115 - 113)] = {'Y', 'N'}, lgvTXHOz6hkM [2] = {'Y', 'N'}, gg, xx;
    int Zoj9UOI, score, pscore, article, vqQe1EOmg, num [(252 - 152)], i, maxnum, sum = (285 - 285);
    vqQe1EOmg = 0;
    scanf ("%d", &Zoj9UOI);
    for (i = (577 - 577); i < Zoj9UOI; i = i + 1) {
        num[i] = (450 - 450);
        scanf ("%s", name[i]);
        scanf (" %d %d", &score, &pscore);
        scanf (" %c %c", &gg, &xx);
        scanf (" %d", &article);
        if (score > (549 - 469) && article >= (245 - 244)) {
            num[i] += 8000;
        }
        if (score > (652 - 567) && pscore > 80) {
            num[i] += (4861 - 861);
        }
        if (score > (1064 - 974)) {
            num[i] = num[i] + (2940 - 940);
        }
        if (score > (1085 - 1000) && xx == lgvTXHOz6hkM[(919 - 919)]) {
            num[i] = num[i] + (1229 - 229);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        if (pscore > 80 && gg == FFafCnh7[(17 - 17)]) {
            num[i] = num[i] + 850;
        }
        sum = sum + num[i];
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
    maxnum = num[0];
    {
        i = 343 - 342;
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
        while (i < Zoj9UOI) {
            if (num[i] > maxnum) {
                maxnum = num[i];
                vqQe1EOmg = i;
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
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%d\n", name[vqQe1EOmg], maxnum, sum);
    return 0;
}

