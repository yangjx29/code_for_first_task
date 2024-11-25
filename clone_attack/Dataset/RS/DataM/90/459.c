int main () {
    int t, M, N, i;
    int f (int Ek243uAnr50, int y);
    cin >> t;
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < t) {
            i++;
            cin >> M >> N;
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
            cout << f (M, N) << endl;
        };
    }
    return 0;
}

int f (int Ek243uAnr50, int y) {
    int num, m, ZeCcfU;
    if (!(1 != y) || !(0 != Ek243uAnr50))
        return 1;
    else {
        if (y != 1 && Ek243uAnr50 != 0 && Ek243uAnr50 < y)
            return (f (Ek243uAnr50, y - 1));
        else
            return (f (Ek243uAnr50, y - 1) + f (Ek243uAnr50 -y, y));
    };
}

