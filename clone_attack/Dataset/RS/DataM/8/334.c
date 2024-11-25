int m, n;
int a [(691 - 591)], b [100];

void  hxPmF3spWaM () {
    cin >> m >> n;
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
    for (int TA8nLvyOg = (273 - 272);
    m >= TA8nLvyOg; TA8nLvyOg++)
        cin >> a[TA8nLvyOg];
    {
        int TA8nLvyOg = (891 - 890);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (TA8nLvyOg <= n) {
            cin >> b[TA8nLvyOg];
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
            TA8nLvyOg = TA8nLvyOg +1;
        };
    };
}

void  sort_ () {
    sort (a + (528 - 527), a + m + (862 - 861));
    sort (b + 1, b + n + 1);
}

void  stick () {
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        int TA8nLvyOg = 1;
        while (TA8nLvyOg <= n) {
            a[m + TA8nLvyOg] = b[TA8nLvyOg];
            TA8nLvyOg = TA8nLvyOg +1;
        };
    };
}

void  print () {
    for (int TA8nLvyOg = 1;
    TA8nLvyOg < m + n; TA8nLvyOg++)
        cout << a[TA8nLvyOg] << ' ';
    cout << a[m + n];
}

int main () {
    hxPmF3spWaM ();
    sort_ ();
    stick ();
    print ();
    return 0;
}

