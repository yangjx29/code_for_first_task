int a [501];

int main () {
    int mPbi1H;
    int x;
    double  W0coHKxO4;
    W0coHKxO4 = (17 - 17);
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
    cin >> mPbi1H;
    for (x = 1; mPbi1H >= x; x++) {
        cin >> a[x];
        W0coHKxO4 = W0coHKxO4 +a[x];
    }
    W0coHKxO4 = W0coHKxO4 / mPbi1H;
    sort (&a[1], &a[mPbi1H] + 1);
    if (W0coHKxO4 -a[1] > a[mPbi1H] - W0coHKxO4) {
        cout << a[1] << endl;
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
        if (W0coHKxO4 -a[1] == a[mPbi1H] - W0coHKxO4) {
            cout << a[1] << ',' << a[mPbi1H] << endl;
        }
        else
            cout << a[mPbi1H] << endl;
    }
    return 0;
}

