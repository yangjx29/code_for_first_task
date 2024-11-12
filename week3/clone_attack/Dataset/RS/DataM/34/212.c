void  s (int SuNgDK9t) {
    int a;
    int b;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    if (!(1 != SuNgDK9t % 2)) {
        a = 3 * SuNgDK9t +1;
        cout << SuNgDK9t << "*3+1=" << a << endl;
    }
    if (!(0 != SuNgDK9t % 2)) {
        b = SuNgDK9t / 2;
        cout << SuNgDK9t << "/2=" << b << endl;
    };
}

int t (int SuNgDK9t) {
    if (SuNgDK9t % 2 == 0)
        return SuNgDK9t / 2;
    if (SuNgDK9t % 2 == 1)
        return 3 * SuNgDK9t +1;
}

int main () {
    int i;
    int SuNgDK9t;
    cin >> SuNgDK9t;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (; SuNgDK9t != 1;) {
        s (SuNgDK9t);
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
        SuNgDK9t = t (SuNgDK9t);
    }
    cout << "End" << endl;
    return 0;
}

