int main () {
    int n, m = 0, i, j, k = 0;
    int s [305], a [305] = {-1};
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &s[i]);
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
    {
        i = 0;
        while (i < n) {
            k = 0;
            {
                j = 0;
                while (j < m) {
                    if (s[i] == a[j]) {
                        break;
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
                    else {
                        k = k + 1;
                        continue;
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
            if (k == m) {
                a[m] = s[i];
                m++;
                k = 0;
            }
            i++;
        };
    }
    for (i = 0; i < m; i++) {
        if (i == 0)
            printf ("%d", a[i]);
        else
            printf (",%d", a[i]);
    }
    return 0;
}

