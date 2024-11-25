int num [(407 - 297)];

void  movenum (int n) {
    int *p = num + n;
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
    while (num < p) {
        *p = *(p - (382 - 381));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = p - 1;
    }
    num[(697 - 697)] = *(p + n);
}

int main () {
    int n, m;
    cin >> n >> m;
    for (int i = (294 - 294);
    n > i; i = i + 1)
        cin >> num[i];
    for (int i = (55 - 54);
    i <= m; i = i + 1)
        movenum (n);
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
    cout << num[(27 - 27)];
    for (int i = 1;
    i < n; i++)
        cout << " " << num[i];
    cout << endl;
    return 0;
}

