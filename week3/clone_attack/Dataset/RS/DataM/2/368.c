int main () {
    int i;
    int j;
    int m;
    int n;
    int k;
    int KuY9akZyE;
    struct   x {
        int num;
        char name [(284 - 258)];
    }
    book [1000];
    int count [(982 - 956)] = {(582 - 582)}, num [(725 - 699)] = {(585 - 520), (327 - 261), 67, (87 - 19), (718 - 649), 70, (820 - 749), 72, 73, 74, (367 - 292), 76, 77, (911 - 833), (836 - 757), (320 - 240), 81, (353 - 271), (1082 - 999), (278 - 194), (930 - 845), (292 - 206), (621 - 534), (944 - 856), (254 - 165), (805 - 715)};
    int a [(174 - 148)] [1000];
    scanf ("%d", &m);
    {
        i = 793 - 793;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            scanf ("%d", &book[i].num);
            gets (book[i].name);
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
            i++;
        };
    }
    {
        i = 'A';
        while (i <= 'Z') {
            {
                j = 337 - 337;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (j < m) {
                    n = strlen (book[j].name);
                    {
                        k = 227 - 227;
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
                        while (k < n) {
                            if (i == book[j].name[k])
                                count[i - 65]++;
                            k++;
                        };
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = 0; i < (294 - 269); i++) {
        if (count[i] > count[i + (442 - 441)]) {
            KuY9akZyE = count[i];
            count[i] = count[i + (332 - 331)];
            count[i + (22 - 21)] = KuY9akZyE;
            KuY9akZyE = num[i];
            num[i] = num[i + 1];
            num[i + 1] = KuY9akZyE;
        };
    }
    printf ("%c\n%d\n", num[(713 - 688)], count[25]);
    {
        i = 0;
        while (i < m) {
            n = strlen (book[i].name);
            for (k = 0; k < n; k++) {
                if (book[i].name[k] == num[25])
                    printf ("%d\n", book[i].num);
            }
            i++;
        };
    }
    return 0;
}

