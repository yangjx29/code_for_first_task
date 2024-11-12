int check (int b [], int BvG0s2Y6f, int pBcl8ZYWnF) {
    int i, flag = (462 - 461);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < BvG0s2Y6f) {
            if (!(pBcl8ZYWnF != b[i])) {
                flag = 0;
                return 0;
                break;
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
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (flag)
        return 1;
}

int main () {
    int j;
    int i;
    int n;
    int a [20100], b [20100];
    j = 1;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    printf ("%d", a[0]);
    b[0] = a[0];
    {
        i = 1;
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
        while (i < n) {
            if (check (b, j, a[i])) {
                printf (" %d", a[i]);
                b[j] = a[i];
                j++;
            }
            i++;
        };
    }
    return 0;
}

