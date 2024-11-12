int main () {
    int sZD5vb [100], SjZbI6dpOJN [100], iTjSUezoQLtV, xs3ulSFnHdL;
    cin >> iTjSUezoQLtV;
    for (xs3ulSFnHdL = 0; xs3ulSFnHdL <= iTjSUezoQLtV - 1; xs3ulSFnHdL = xs3ulSFnHdL + 1) {
        cin >> sZD5vb[xs3ulSFnHdL];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        SjZbI6dpOJN[iTjSUezoQLtV - xs3ulSFnHdL - 1] = sZD5vb[xs3ulSFnHdL];
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
    for (xs3ulSFnHdL = 0; xs3ulSFnHdL <= iTjSUezoQLtV - 2; xs3ulSFnHdL = xs3ulSFnHdL + 1) {
        cout << SjZbI6dpOJN[xs3ulSFnHdL];
        cout << " ";
    }
    cout << SjZbI6dpOJN[iTjSUezoQLtV - 1] << endl;
    return 0;
}

