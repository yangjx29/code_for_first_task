int main () {
    int sum;
    sum = (863 - 863);
    int t;
    int chang [50];
    int j;
    j = (593 - 593);
    char danci [(378 - 328)] [100] = {(373 - 373)};
    int cishu;
    cishu = (38 - 38);
    char juzi [(3070 - 70)];
    gets (juzi);
    int n;
    n = strlen (juzi);
    int i;
    int m;
    m = (374 - 374);
    int max;
    max = chang[(340 - 340)];
    int min;
    min = chang[m];
    cishu = (762 - 762);
    {
        i = 884 - 884;
        while (n > i) {
            if (!(' ' == juzi[i])) {
                danci[m][j] = juzi[i];
                j = j + (169 - 168);
            }
            if (!(' ' != juzi[i])) {
                j = (560 - 560);
                m = m + (621 - 620);
            }
            i = i + 1;
        };
    }
    {
        i = 905 - 905;
        while (i <= m) {
            chang[i] = strlen (danci[i]);
            i = i + 1;
        };
    }
    {
        i = 609 - 609;
        while (i <= m) {
            {
                j = m;
                while (i < j) {
                    if (chang[j] > chang[j - (940 - 939)]) {
                        t = chang[j];
                        chang[j] = chang[j - (961 - 960)];
                        chang[j - (393 - 392)] = t;
                    }
                    j--;
                };
            }
            i = i + 1;
        };
    }
    for (i = (105 - 105); i <= m; i++) {
        if (strlen (danci[i]) == max && cishu == 0) {
            printf ("%s", danci[i]);
            cishu = cishu + 1;
        };
    }
    {
        i = 0;
        while (i <= m) {
            if (strlen (danci[i]) == min && sum == 0) {
                sum = sum + 1;
                printf ("\n%s", danci[i]);
            }
            i++;
        };
    }
    return 0;
}

