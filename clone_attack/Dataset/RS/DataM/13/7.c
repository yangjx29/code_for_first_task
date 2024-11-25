int main () {
    int a [(20583 - 583)];
    int n;
    int i;
    int j;
    cin >> n;
    {
        i = 0;
        while (n > i) {
            cin >> a[i];
            for (j = 0; i > j; j++) {
                if (!(a[i] != a[j]))
                    a[i] = 0;
            }
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
    cout << a[0];
    for (i = 1; i < n; i = i + 1)
        if (a[i] != 0)
            cout << " " << a[i];
    return 0;
}

