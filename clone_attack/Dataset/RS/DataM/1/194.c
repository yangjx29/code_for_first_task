int main () {
    int number (int n, int low);
    int n, i, data, ans;
    scanf ("%d", &n);
    for (i = 1; i <= n; i = i + 1) {
        scanf ("%d", &data);
        ans = number (data, 2);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", ans);
    };
}

int number (int n, int low) {
    int j;
    int ans;
    ans = 0;
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
    for (j = low; j * j <= n; j++) {
        if (n % j == 0)
            ans = ans + number (n / j, j);
    }
    ans = ans + 1;
    return ans;
}

