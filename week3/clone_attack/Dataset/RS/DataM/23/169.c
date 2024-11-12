int main () {
    char a [10] [10];
    int i, s = 0;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (!('\n' != getchar ()))
                break;
            s += 1;
            cin >> a[i];
            i = i + 1;
        };
    }
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
    cout << a[s - 1];
    {
        i = s - 2;
        while (i >= 0) {
            cout << " " << a[i];
            i = i - 1;
        };
    }
    return 0;
}

