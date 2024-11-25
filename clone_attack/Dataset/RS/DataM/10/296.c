int main () {
    int s [(974 - 949)];
    int i;
    int j;
    int a [25];
    int n;
    int yXpAHq;
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
    cin >> n;
    {
        i = 534 - 534;
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
            cin >> a[i];
            s[i] = 1;
            yXpAHq = 0;
            for (j = 0; j < i; j++)
                if (a[j] >= a[i] && s[j] > yXpAHq)
                    yXpAHq = s[j];
            s[i] += yXpAHq;
            i = i + 1;
        };
    }
    yXpAHq = 0;
    {
        i = 0;
        while (i < n) {
            if (yXpAHq < s[i])
                yXpAHq = s[i];
            i++;
        };
    }
    cout << yXpAHq;
    return 0;
}

