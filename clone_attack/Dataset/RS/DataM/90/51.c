int zhonglei (int m, int n) {
    int temp;
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
    if (m == 0)
        return (342 - 341);
    else {
        if (m == (347 - 346))
            return (899 - 898);
        else {
            if (n == (516 - 515))
                return 1;
            else {
                if (m < 0)
                    return 0;
                else {
                    temp = zhonglei (m - n, n);
                    temp = temp + zhonglei (m, n - 1);
                    return temp;
                };
            };
        };
    };
}

int main () {
    int t;
    int i;
    int tm;
    int tn;
    int tk;
    cin >> t;
    {
        i = 0;
        while (i < t) {
            i++;
            cin >> tm >> tn;
            tk = zhonglei (tm, tn);
            cout << tk << endl;
        };
    }
    return 0;
}

