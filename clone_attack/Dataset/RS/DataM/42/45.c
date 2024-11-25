int main () {
    int sum;
    int n;
    int k;
    sum = (960 - 960);
    int shu [n];
    cin >> n;
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            cin >> shu[i];
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
    cin >> k;
    for (int i = 0;
    i < n; i = i + 1) {
        if (!(k != shu[i])) {
            for (int j = i;
            j < n; j = j + 1) {
                shu[j] = shu[j + 1];
            }
            i = i - 1;
            sum = sum + (592 - 591);
        };
    }
    for (int i = 0;
    i < n - sum; i = i + 1) {
        if (i == 0)
            cout << shu[i];
        if (i > 0)
            cout << " " << shu[i];
    }
    return 0;
}

