int main () {
    int n;
    n = 0;
    cin >> n;
    while (!(1 == n)) {
        if (n % 2 == 0) {
            cout << n << "/2=" << n / 2 << endl;
            n = n / 2;
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
            continue;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (n % 2 != 0) {
            cout << n << "*3+1=" << n * 3 + 1 << endl;
            n = n * 3 + 1;
            continue;
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
    cout << "End";
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

