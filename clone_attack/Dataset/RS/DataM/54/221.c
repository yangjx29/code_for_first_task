int MinApp (int, int);

int main () {
    int n;
    int k;
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
    cin >> n >> k;
    cout << MinApp (n, k) << endl;
    return 0;
}

int MinApp (int n, int k) {
    int i;
    int j;
    int cj30NolFqWvG;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    {
        i = 1;
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
        while (1) {
            cj30NolFqWvG = n * i + k;
            {
                j = 1;
                while (j < n) {
                    if (!(0 != (cj30NolFqWvG % (n - 1))))
                        cj30NolFqWvG = cj30NolFqWvG * n / (n - 1) + k;
                    else
                        break;
                    j++;
                };
            }
            if (j == n)
                break;
            i++;
        };
    }
    return (cj30NolFqWvG);
}

