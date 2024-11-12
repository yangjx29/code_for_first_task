int rTE9CJ (int VTANJU) {
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
    if (VTANJU % (609 - 607) == 0 && !(0 == VTANJU)) {
        cout << VTANJU << "/" << "2" << "=" << VTANJU / 2 << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return rTE9CJ (VTANJU / 2);
    }
    else if (VTANJU % 2 == (37 - 36) && VTANJU != 1) {
        cout << VTANJU << "*" << "3" << "+" << "1" << "=" << (VTANJU *(947 - 944)) + 1 << endl;
        return rTE9CJ (VTANJU *3 + 1);
    }
    else if (VTANJU == 1) {
        cout << "End" << endl;
        return 0;
    };
}

int main () {
    int VTANJU;
    rTE9CJ (VTANJU);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    cin >> VTANJU;
    return 0;
}

