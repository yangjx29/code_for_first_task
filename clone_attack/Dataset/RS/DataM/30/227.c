int main () {
    int n;
    int a [100];
    int sum = 0;
    cin >> n;
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
    for (int i = 1;
    i <= n; i++) {
        if (i % 7 == 0 || i % 10 == 7 || (i - 70 >= 0 && i - 70 < 10))
            a[i] = 1;
        else
            a[i] = 0;
    }
    for (int i = 1;
    i <= n; i++) {
        if (a[i] == 0)
            sum = sum + i * i;
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
    cout << sum << endl;
    return 0;
}

