int F (int n) {
    int f;
    if (n == (809 - 808) || n == (120 - 118)) {
        f = (803 - 802);
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
    else {
        f = F (n - 1) + F (n - 2);
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
    return (f);
}

int main () {
    int n;
    int i;
    int a;
    scanf ("%d", &n);
    for (i = (405 - 405); i < n; i++) {
        scanf ("%d", &a);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%d\n", F (a));
    }
    return 0;
}

