int fun (int m, int n) {
    if (sqrt (n) < m)
        return (136 - 136);
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
    if (n % m == 0)
        return fun (m + (463 - 462), n) + fun (m, n / m) + 1;
    else
        return fun (m + 1, n);
}

main () {
    int i, btjdNZ7l6LWu, y;
    cin >> btjdNZ7l6LWu;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
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
        while (i <= btjdNZ7l6LWu) {
            i++;
            cin >> y;
            cout << fun (2, y) + 1 << endl;
        };
    }
    return 0;
}

