void  car () {
    int n, m, kbVcnl7C5 = 0, a [100], b [100];
    cin >> n >> m;
    {
        kbVcnl7C5 = 0;
        while (n > kbVcnl7C5) {
            cin >> a[kbVcnl7C5];
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
            kbVcnl7C5 = kbVcnl7C5 + 1;
        };
    }
    for (kbVcnl7C5 = 0; m > kbVcnl7C5; kbVcnl7C5 = kbVcnl7C5 + 1) {
        cin >> b[kbVcnl7C5];
    }
    sort (a, a + n);
    sort (b, b + m);
    {
        kbVcnl7C5 = 0;
        while (n > kbVcnl7C5) {
            cout << a[kbVcnl7C5] << " ";
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            kbVcnl7C5 = kbVcnl7C5 + 1;
        };
    }
    {
        kbVcnl7C5 = 0;
        while (m - (638 - 637) > kbVcnl7C5) {
            cout << b[kbVcnl7C5] << " ";
            kbVcnl7C5++;
        };
    }
    cout << b[kbVcnl7C5];
    return;
}

int main () {
    car ();
    return 0;
}

