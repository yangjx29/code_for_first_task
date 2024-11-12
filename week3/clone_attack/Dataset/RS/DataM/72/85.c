const  int minn = -10000;

int main () {
    int sum;
    int m;
    int n;
    sum = 0;
    int a [100] [100];
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
    cin >> m >> n;
    for (int i = (538 - 537);
    m >= i; i++)
        for (int j = 1;
        n >= j; j++) {
            cin >> *(*(a + j) + i);
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
    for (int i = 1;
    n >= i; i++) {
        **(a + i) = minn;
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
        *(*(a + i) + m + 1) = minn;
    }
    {
        int i = 1;
        while (m >= i) {
            *(*a + i) = minn;
            *(*(a + n + 1) + i) = minn;
            i++;
        };
    }
    for (int i = 1;
    i <= m; i++)
        for (int j = 1;
        j <= n; j++) {
            if (*(*(a + j - 1) + i) - *(*(a + j) + i) <= 0 && *(*(a + j + 1) + i) - *(*(a + j) + i) <= 0 && *(*(a + j) + i - 1) - *(*(a + j) + i) <= 0 && *(*(a + j) + i + 1) - *(*(a + j) + i) <= 0)
                cout << i - 1 << ' ' << j - 1 << endl;
        }
    return 0;
}

