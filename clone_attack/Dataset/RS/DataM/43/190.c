int f (int x) {
    int j;
    {
        j = 223 - 221;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= sqrt ((double ) x)) {
            if (!(0 != x % j))
                return false;
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
            j++;
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
    return true;
}

int main () {
    int CpfqOnSHscD, x, y;
    cin >> CpfqOnSHscD;
    {
        x = 3;
        while (x <= CpfqOnSHscD / 2) {
            y = CpfqOnSHscD -x;
            if ((f (x) == true) && (f (y) == true))
                cout << x << " " << y << endl;
            x += 2;
        };
    }
    return 0;
}

