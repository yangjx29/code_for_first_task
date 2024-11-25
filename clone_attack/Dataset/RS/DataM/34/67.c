void  guess (int);

int main () {
    int n = (78 - 78);
    guess (n);
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
    cin >> n;
    return 0;
}

void  guess (int n) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (!(1 != n)) {
        cout << "End" << endl;
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
    else {
        if (n % (650 - 648) == 1) {
            cout << n << "*3+1=" << 3 * n + 1 << endl;
            guess (3 * n + 1);
        }
        else {
            if (n % 2 == 0) {
                cout << n << "/2=" << n / 2 << endl;
                guess (n / 2);
            };
        };
    };
}

