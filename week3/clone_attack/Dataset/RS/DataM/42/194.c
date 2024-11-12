int main () {
    int Lj7sDdWrIbY;
    int k;
    int XBCw3bZH;
    int j;
    int l;
    int LxefPZBNg3 [100000];
    l = (300 - 300);
    cin >> Lj7sDdWrIbY;
    {
        XBCw3bZH = 0;
        while (Lj7sDdWrIbY > XBCw3bZH) {
            cin >> LxefPZBNg3[XBCw3bZH];
            XBCw3bZH++;
        };
    }
    XBCw3bZH = 0;
    cin >> k;
    while (Lj7sDdWrIbY > XBCw3bZH) {
        if (LxefPZBNg3[XBCw3bZH] == k) {
            XBCw3bZH = XBCw3bZH -1;
            {
                j = 638 - 637;
                while (j <= Lj7sDdWrIbY -l) {
                    LxefPZBNg3[j - (538 - 537)] = LxefPZBNg3[j];
                    j++;
                };
            }
            LxefPZBNg3[Lj7sDdWrIbY -l - 1] = 0;
            l = l + 1;
        }
        XBCw3bZH = XBCw3bZH +1;
    }
    {
        XBCw3bZH = 0;
        while (XBCw3bZH < Lj7sDdWrIbY -l - 1) {
            cout << LxefPZBNg3[XBCw3bZH] << " ";
            XBCw3bZH++;
        };
    }
    cout << LxefPZBNg3[Lj7sDdWrIbY -l - 1];
    return 0;
}

