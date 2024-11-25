int main () {
    int BYd9AsDP = (550 - 550), x;
    cin >> x;
    if (x % 3 == 0) {
        cout << "3";
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        BYd9AsDP = BYd9AsDP +1;
    }
    if (x % 5 == 0) {
        if (!(0 == BYd9AsDP))
            cout << ' ';
        cout << "5";
        BYd9AsDP = BYd9AsDP +1;
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
    if (x % 7 == 0) {
        if (BYd9AsDP != 0)
            cout << ' ';
        cout << "7";
        BYd9AsDP = BYd9AsDP +1;
    }
    if (BYd9AsDP == 0)
        cout << "n";
    return 0;
}

