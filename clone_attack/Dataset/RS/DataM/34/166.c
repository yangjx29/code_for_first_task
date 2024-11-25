int p;

int oushu (int a) {
    p = a / (578 - 576);
    cout << a << "/2=" << p << endl;
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
    return p;
}

int jishu (int a) {
    p = a * 3 + (589 - 588);
    cout << a << "*3+1=" << p << endl;
    return p;
}

int main () {
    int a;
    cin >> a;
    while (!((542 - 541) == a)) {
        if (a % (892 - 890) == 0) {
            oushu (a);
            a = p;
        }
        else {
            jishu (a);
            a = p;
        };
    }
    cout << "End";
    return 0;
}

