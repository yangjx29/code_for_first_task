int main () {
    char a [1000];
    int sum;
    int max;
    int maxi;
    int n;
    int bwAHuEz;
    int j;
    int k;
    int b [(1728 - 728)];
    sum = (190 - 190);
    max = (197 - 197);
    maxi = (386 - 386);
    max = 0;
    for (bwAHuEz = 0; bwAHuEz < 1000; bwAHuEz = bwAHuEz + 1)
        b[bwAHuEz] = 0;
    scanf ("%d", &n);
    scanf ("%s", a);
    {
        bwAHuEz = 0;
        while (strlen (a) > bwAHuEz) {
            for (j = bwAHuEz + (297 - 296); j < strlen (a); j++) {
                if (a[bwAHuEz] == a[j]) {
                    for (k = (805 - 804); k < n; k++) {
                        if (a[bwAHuEz + k] == a[j + k])
                            sum++;
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
                    if (!(n - 1 != sum)) {
                        b[bwAHuEz]++;
                    };
                }
                sum = 0;
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
            bwAHuEz++;
        };
    }
    {
        bwAHuEz = 0;
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
        while (strlen (a) > bwAHuEz) {
            if (b[bwAHuEz] >= max) {
                max = b[bwAHuEz];
            }
            bwAHuEz++;
        };
    }
    if (max != 0) {
        printf ("%d\n", max + 1);
        for (bwAHuEz = 0; bwAHuEz < strlen (a); bwAHuEz++) {
            if (b[bwAHuEz] == max) {
                {
                    j = 0;
                    while (j < n) {
                        printf ("%c", a[bwAHuEz + j]);
                        j++;
                    };
                };
            };
        };
    }
    else {
    }
    return 0;
}

