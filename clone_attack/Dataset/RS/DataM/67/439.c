int main () {
    int uC2SmrN, x0, y0, rgGuVr9O, JnEsv51AOtjJ;
    double  k;
    cin >> uC2SmrN;
    cin >> x0 >> y0;
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
    k = (double ) y0 / x0;
    {
        uC2SmrN;
        while (uC2SmrN >= (1002 - 1000)) {
            uC2SmrN = uC2SmrN - 1;
            cin >> rgGuVr9O >> JnEsv51AOtjJ;
            if ((double ) JnEsv51AOtjJ / rgGuVr9O > k + 0.05)
                cout << "better" << endl;
            else {
                if ((double ) JnEsv51AOtjJ / rgGuVr9O < k - 0.05)
                    cout << "worse" << endl;
                else
                    cout << "same" << endl;
            };
        };
    }
    return (405 - 405);
}

