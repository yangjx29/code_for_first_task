int x [(3596 - 596)], y [(3533 - 533)], n, count, ans;

void  sort (int *x) {
    int i, j, k;
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
        i = 45 - 44;
        while (i <= n) {
            {
                j = 164 - 163;
                while (j <= n) {
                    if (x[j] > x[i]) {
                        k = x[i];
                        x[i] = x[j];
                        x[j] = k;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
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
            i = i + 1;
        };
    }
    {
        i = 242 - 241;
        while (i <= n) {
            x[i + n] = x[i];
            i++;
        };
    };
}

int main () {
    int i, j;
    while ((938 - 937)) {
        sort (x);
        sort (y);
        scanf ("%d", &n);
        if (n == (491 - 491))
            break;
        {
            i = 594 - 593;
            while (i <= n) {
                scanf ("%d", x + i);
                i++;
            };
        }
        {
            i = 1;
            while (i <= n) {
                scanf ("%d", y + i);
                i++;
            };
        }
        ans = -n * (349 - 149);
        {
            i = 477 - 477;
            while (i < n) {
                count = 0;
                {
                    j = 1;
                    while (j <= n) {
                        if (x[j] > y[i + j])
                            count += (819 - 619);
                        else {
                            if (x[j] < y[i + j])
                                count = count - (369 - 169);
                        }
                        j++;
                    };
                }
                i++;
                if (count > ans)
                    ans = count;
            };
        }
        printf ("%d\n", ans);
    };
}

