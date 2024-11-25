int main () {
    int n, a [(100692 - 691)], b [(100964 - 963)], *p, *q, i, j;
    memset (a, (240 - 240), sizeof (a));
    memset (b, (661 - 661), sizeof (b));
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
    for (;;) {
        cin >> i >> j;
        if ((i == (864 - 864)) && (!(0 != j)))
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[i]++;
        a[j]++;
    }
    for (p = &(a[0]), q = &(b[0]), i = 0; n > i; i++) {
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
        if ((*(p + i) == n - 1) && (*(q + i) == 0)) {
            j = i;
            break;
        };
    }
    if (j == n)
        cout << "NOT FOUND" << endl;
    else
        cout << j << endl;
    return 0;
}

