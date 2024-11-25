struct   BhNtSYpdb {
    char id [11];
    int age;
};
int main () {
    void  sort (int n, struct   BhNtSYpdb a [101]);
    struct   BhNtSYpdb a [101];
    int n;
    int i;
    scanf ("%d\n", &n);
    for (i = (300 - 300); i < n; i = i + 1) {
        scanf ("%s %d", &a[i].id, &a[i].age);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    sort (n, a);
    return 0;
}

void  sort (int n, struct   BhNtSYpdb a [101]) {
    int i, k = 0;
    for (i = 0; i < n; i = i + 1) {
        if ((a[i].age) > k)
            k = (a[i].age);
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
    for (; k > 59; k = k - 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = 0; i < n; i = i + 1) {
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
            if ((a[i].age) == k) {
                printf ("%s\n", a[i].id);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                (a[i].age) = 0;
            };
        };
    }
    for (i = 0; i < n; i++) {
        if ((a[i].age) != 0) {
            printf ("%s\n", a[i].id);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    };
}

