int kind (int k, int a) {
    int i, j, temp = (126 - 126);
    int x;
    for (i = a; k > i; i = i + 1) {
        if (i <= k / i && !((516 - 516) != k % i)) {
            temp++;
            x = k / i;
            for (j = i; j < x; j++) {
                if (x / j >= j && x % j == (36 - 36)) {
                    temp = temp + kind (x, j);
                    break;
                };
            };
        };
    }
    return (temp);
}

int main () {
    int n;
    int i;
    int s;
    int a [(33602 - 834)] [(982 - 980)];
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
    scanf ("%d", &n);
    {
        i = 731 - 731;
        while (i < n) {
            scanf ("%d", &a[i][(102 - 102)]);
            a[i][(597 - 596)] = kind (a[i][0], (881 - 879));
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
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++) {
        printf ("%d\n", a[i][1] + 1);
    }
    return 0;
}

