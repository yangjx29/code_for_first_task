int main () {
    int a [7] [7];
    int RTk7KL;
    int fn3DHORT5;
    int xvriVTD;
    int flag;
    int TM2BHa;
    int xuno9b6ViYQ;
    {
        RTk7KL = 997 - 997;
        while (RTk7KL < (991 - 986)) {
            {
                fn3DHORT5 = 928 - 928;
                while (5 > fn3DHORT5) {
                    cin >> a[RTk7KL][fn3DHORT5];
                    fn3DHORT5++;
                };
            }
            RTk7KL++;
        };
    }
    {
        RTk7KL = 0;
        while (RTk7KL < 5) {
            xuno9b6ViYQ = 0;
            TM2BHa = a[RTk7KL][0];
            {
                fn3DHORT5 = 0;
                while (5 > fn3DHORT5) {
                    if (TM2BHa < a[RTk7KL][fn3DHORT5]) {
                        TM2BHa = a[RTk7KL][fn3DHORT5];
                        xuno9b6ViYQ = fn3DHORT5;
                    }
                    fn3DHORT5++;
                };
            }
            flag = 1;
            {
                xvriVTD = 0;
                while (5 > xvriVTD) {
                    if (a[xvriVTD][xuno9b6ViYQ] < TM2BHa) {
                        flag = 0;
                        break;
                    }
                    xvriVTD = xvriVTD + 1;
                };
            }
            if (flag) {
                cout << RTk7KL +1 << " " << xuno9b6ViYQ + 1 << " " << a[RTk7KL][xuno9b6ViYQ] << endl;
                break;
            }
            RTk7KL++;
        };
    }
    if (!flag)
        cout << "not found" << endl;
    return 0;
}

