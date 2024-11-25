struct   score {
    char id [10];
    char name [26];
}
book [1000];

int main () {
    int i, j, k, n, num, max = 0;
    char OcRPKsOkv4dp;
    scanf ("%d", &num);
    {
        i = 0;
        while (num > i) {
            scanf ("%s", book[i].id);
            scanf ("%s", book[i].name);
            i = i + 1;
        };
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
    {
        i = 0;
        while (26 > i) {
            n = 0;
            {
                j = 0;
                while (num > j) {
                    {
                        k = 0;
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
                        while (k < 26) {
                            if (book[j].name[k] == ('A' + i))
                                n = n + 1;
                            k = k + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            if (max < n) {
                OcRPKsOkv4dp = 'A' + i;
                max = n;
            }
            i++;
        };
    }
    printf ("%c\n%d\n", OcRPKsOkv4dp, max);
    {
        j = 0;
        while (j < num) {
            {
                k = 0;
                while (k < 26) {
                    if (book[j].name[k] == OcRPKsOkv4dp)
                        printf ("%s\n", book[j].id);
                    k = k + 1;
                };
            }
            j = j + 1;
        };
    }
    return 0;
}

