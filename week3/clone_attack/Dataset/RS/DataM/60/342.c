int isprime (int n) {
    int uxWNn6cLiw;
    for (uxWNn6cLiw = 2; uxWNn6cLiw <= sqrt (n); uxWNn6cLiw = uxWNn6cLiw + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (n % uxWNn6cLiw == 0) {
            return 0;
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
            break;
        };
    }
    return 1;
}

int main () {
    int n, uxWNn6cLiw, j, p = 0;
    scanf ("%d", &n);
    {
        j = 3;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j <= n) {
            if (isprime (j)) {
                if (isprime (j + 2) && (j + 2 <= n)) {
                    p = 1;
                };
            }
            if (p == 1) {
                p = 2;
                printf ("%d %d\n", j, j + 2);
            }
            j++;
        };
    }
    if (p == 0) {
        printf ("empty");
    }
    return 0;
}

