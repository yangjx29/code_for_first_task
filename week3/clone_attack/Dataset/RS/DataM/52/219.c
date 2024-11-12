int main () {
    int a [(442 - 242)], n, m;
    int *p = a, *q = &a[n - m];
    cin >> n >> m;
    memset (a, -1, sizeof (a));
    {
        int i = 0;
        while (n > i) {
            cin >> a[i];
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
            i++;
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
    while (!(q == p)) {
        a[n++] = *p++;
    }
    cout << *q++;
    while (*q != -1) {
        cout << " " << *q++;
    }
    return 0;
}

