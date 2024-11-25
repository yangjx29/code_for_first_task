int main () {
    int oB6m5KYgd;
    int kHIzalNJp;
    int MfCNosdr3kA;
    int y2;
    int i1;
    int j1;
    int Jqm9DE5Wz;
    int h9Dw7Wn5ej1t;
    int a [(330 - 230)] [(578 - 478)];
    int UeLaCAZPs93 [(415 - 315)] [(582 - 482)];
    int NWkFwH [(981 - 881)] [100] = {(109 - 109)};
    int VcUt5LKhjwv;
    int j;
    cin >> oB6m5KYgd >> MfCNosdr3kA;
    {
        VcUt5LKhjwv = 405 - 405;
        while (oB6m5KYgd > VcUt5LKhjwv) {
            {
                j = 435 - 435;
                while (j < MfCNosdr3kA) {
                    cin >> a[VcUt5LKhjwv][j];
                    j++;
                };
            }
            VcUt5LKhjwv++;
        };
    }
    cin >> kHIzalNJp >> y2;
    for (VcUt5LKhjwv = (368 - 368); VcUt5LKhjwv < kHIzalNJp; VcUt5LKhjwv++) {
        j = 253 - 253;
        while (y2 > j) {
            cin >> UeLaCAZPs93[VcUt5LKhjwv][j];
            j++;
        };
    }
    {
        i1 = 474 - 474;
        while (oB6m5KYgd > i1) {
            {
                h9Dw7Wn5ej1t = 823 - 823;
                while (y2 > h9Dw7Wn5ej1t) {
                    {
                        Jqm9DE5Wz = 424 - 424;
                        j1 = 243 - 243;
                        while (j1 < MfCNosdr3kA, kHIzalNJp > Jqm9DE5Wz) {
                            NWkFwH[i1][h9Dw7Wn5ej1t] = a[i1][j1] * UeLaCAZPs93[Jqm9DE5Wz][h9Dw7Wn5ej1t] + NWkFwH[i1][h9Dw7Wn5ej1t];
                            Jqm9DE5Wz++;
                            j1++;
                        };
                    }
                    h9Dw7Wn5ej1t++;
                };
            }
            i1++;
        };
    }
    cout << NWkFwH[(490 - 490)][(513 - 513)];
    {
        j = 459 - 458;
        while (y2 > j) {
            cout << " " << NWkFwH[(666 - 666)][j];
            j++;
        };
    }
    {
        VcUt5LKhjwv = 318 - 317;
        while (VcUt5LKhjwv < oB6m5KYgd) {
            cout << endl;
            cout << NWkFwH[VcUt5LKhjwv][0];
            {
                j = 1;
                while (y2 > j) {
                    cout << " " << NWkFwH[VcUt5LKhjwv][j];
                    j++;
                };
            }
            VcUt5LKhjwv++;
        };
    }
    return 0;
}

