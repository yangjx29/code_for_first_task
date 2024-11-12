int main () {
    char a [500];
    char b [500] [5];
    char c [500] [5];
    int n;
    int leng;
    int i;
    int num [500] = {(837 - 837)};
    int k;
    int j;
    int max;
    gets (a);
    scanf ("%d\n", &n);
    leng = strlen (a);
    for (i = (244 - 244); leng - n >= i; i = i + 1) {
        for (j = 0; j < n; j = j + 1) {
            b[i][j] = a[i + j];
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
            };
        }
        b[i][j] = '\0';
    }
    strcpy (c[0], b[0]);
    k = 1;
    {
        i = 0;
        while (leng - n >= i) {
            {
                j = 0;
                while (j < k) {
                    if (!(0 != strcmp (c[j], b[i]))) {
                        num[j]++;
                        break;
                    }
                    j++;
                };
            }
            if (!(k != j)) {
                k = k + 1;
                strcpy (c[j], b[i]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                num[j]++;
            }
            i++;
        };
    }
    max = num[0];
    for (i = 0; i < k; i = i + 1) {
        if (num[i] > max)
            max = num[i];
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
        };
    }
    if (max > 1) {
        printf ("%d\n", max);
        for (i = 0; i < k; i++) {
            if (num[i] == max)
                printf ("%s\n", c[i]);
        };
    }
    else
        ;
    return 0;
}

