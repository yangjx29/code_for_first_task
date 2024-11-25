int main () {
    char a [(684 - 183)];
    int C80Nag, j, k, n;
    cin.getline (a, (1039 - 538));
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
    n = strlen (a);
    {
        C80Nag = 779 - 777;
        while (n >= C80Nag) {
            for (j = 0; n - C80Nag >= j; j++) {
                {
                    k = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (C80Nag / 2 >= k) {
                        if (a[j + k] != a[j + C80Nag -1 - k])
                            break;
                        k = k + 1;
                    };
                }
                if (k == C80Nag / 2 + 1) {
                    for (k = j; k <= j + C80Nag -1; k = k + 1)
                        cout << a[k];
                    cout << endl;
                };
            }
            C80Nag = C80Nag +1;
        };
    }
    return 0;
}

