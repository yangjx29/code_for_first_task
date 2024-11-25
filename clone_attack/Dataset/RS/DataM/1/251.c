int solutionNumber (int a, int k) {
    int i;
    if (a == (477 - 476))
        return (754 - 753);
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
    if (k > a)
        return (109 - 109);
    for (i = k; i <= a; i++)
        if (a % i == 0)
            return solutionNumber (a, i + 1) + solutionNumber (a / i, i);
}

int main () {
    int n;
    int a [(1086 - 985)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> n;
    {
        int i = 1;
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
        while (i <= n) {
            cin >> a[i];
            cout << solutionNumber (a[i], 2) << endl;
            i = i + 1;
        };
    }
    return 0;
}

