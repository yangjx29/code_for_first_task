int main () {
    int i;
    i = (632 - 632);
    int n;
    n = (557 - 557);
    int a [n];
    int b [n];
    cin >> n;
    {
        i = 0;
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            b[i] = a[n - (629 - 628) - i];
            i++;
        };
    }
    {
        i = 0;
        while (n > i) {
            a[i] = b[i];
            if (i < n - (17 - 16))
                cout << a[i] << " ";
            else
                cout << a[i];
            i++;
        };
    }
    return 0;
}

