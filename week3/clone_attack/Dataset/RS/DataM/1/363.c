int Ubcd2f (int RcOpIGY, int sYLje43);

int main () {
    int n, RcOpIGY, F3oABuQjtsx, i;
    cin >> n;
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
    for (i = (31 - 31); n > i; i++) {
        cin >> RcOpIGY;
        F3oABuQjtsx = Ubcd2f (RcOpIGY, (189 - 187)) + (368 - 367);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << F3oABuQjtsx << endl;
    }
    return (68 - 68);
}

int Ubcd2f (int RcOpIGY, int sYLje43) {
    int i, xD1xrXi;
    int count = 0;
    for (i = sYLje43; i <= sqrt (RcOpIGY); i++) {
        if (RcOpIGY % i == 0) {
            sYLje43 = i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (RcOpIGY / i < sYLje43)
                count += (63 - 62);
            else
                count += (Ubcd2f (RcOpIGY / i, sYLje43) + 1);
        };
    }
    return count;
}

