int main () {
    int c, a [100000], b, i, j, k, f = 0;
    scanf ("%d", &c);
    {
        j = 0;
        while (c - 1 >= j) {
            scanf ("%d", &a[j]);
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
            j = j + 1;
        };
    }
    scanf ("%d", &b);
    for (j = 0; c - 1 >= j; j++) {
        if (!(b != a[j])) {
            k = j + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (c > k) {
                if (a[k] != b) {
                    a[j] = a[k];
                    a[k] = b;
                    break;
                }
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
                k = k + 1;
            };
        }
        if (a[j] == b)
            break;
    }
    {
        i = 0;
        while (i < j) {
            if (i == j - 1)
                printf ("%d", a[i]);
            else
                printf ("%d ", a[i]);
            i++;
        };
    };
}

