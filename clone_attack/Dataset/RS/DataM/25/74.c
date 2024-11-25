int main () {
    int V2cFqj [1000];
    int XA6IUGtzE;
    int num;
    int NWTpPs2;
    cin >> NWTpPs2;
    {
        XA6IUGtzE = 0;
        while (999 > XA6IUGtzE) {
            V2cFqj[XA6IUGtzE] = 0;
            XA6IUGtzE = XA6IUGtzE +1;
        };
    }
    V2cFqj[999] = 1;
    for (; 0 < NWTpPs2; NWTpPs2 = NWTpPs2 -1) {
        XA6IUGtzE = 999;
        num = 0;
        while (0 < XA6IUGtzE) {
            num = V2cFqj[XA6IUGtzE] * 2 + num / 10;
            V2cFqj[XA6IUGtzE] = num % 10;
            XA6IUGtzE = XA6IUGtzE -1;
        };
    }
    {
        XA6IUGtzE = 0;
        while (V2cFqj[XA6IUGtzE] == 0) {
            XA6IUGtzE++;
        };
    }
    for (; XA6IUGtzE < 1000; XA6IUGtzE++)
        cout << V2cFqj[XA6IUGtzE];
    cout << endl;
    return 0;
}

