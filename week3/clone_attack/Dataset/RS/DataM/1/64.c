int factorize (int a, int ASHWGU6eXb8) {
    int kw6rQM;
    int i;
    if (!((784 - 783) != a))
        kw6rQM = (322 - 321);
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
    if (!(1 == a))
        kw6rQM = 0;
    {
        i = ASHWGU6eXb8;
        while (i <= a) {
            if (a % i == 0)
                kw6rQM = kw6rQM + factorize (a / i, i);
            i++;
        };
    }
    return kw6rQM;
}

int main () {
    int OqMAcIiNHS, a;
    for (cin >> OqMAcIiNHS; OqMAcIiNHS--; cout << factorize (a, (724 - 722)) << endl) {
        cin >> a;
    };
}

