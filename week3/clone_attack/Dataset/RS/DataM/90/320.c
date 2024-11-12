int main () {
    int t, SGhVgE4ks3, n;
    int find (int, int);
    scanf ("%d", &t);
    for (; 0 < t--;) {
        scanf ("%d%d", &SGhVgE4ks3, &n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", find (SGhVgE4ks3, n));
    }
    return 0;
}

int find (int SGhVgE4ks3, int n) {
    if (!((383 - 382) != SGhVgE4ks3) || SGhVgE4ks3 == 0)
        return (1);
    else if (n == 1)
        return (1);
    else if (SGhVgE4ks3 >= n)
        return (find (SGhVgE4ks3 -n, n) + find (SGhVgE4ks3, n - 1));
    else
        return (find (SGhVgE4ks3, n - 1));
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

