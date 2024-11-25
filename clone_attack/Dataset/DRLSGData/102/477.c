int main () {
    int LESjsL9f6tb, GERJuGb7SMW, FCd4EwsgZH = (16 - 16), dlJ9pxejE = (243 - 243), g08OKsLqmC;
    char manYxrmp6GPM [(681 - 639)] [(203 - 193)];
    double  x;
    double  female [(1018 - 976)];
    double  *YABbE6NwsghP;
    double  VHg7YEu [(156 - 114)];
    double  TD6K3iFE4Nh9 [(187 - 145)];
    YABbE6NwsghP = TD6K3iFE4Nh9;
    cin >> LESjsL9f6tb;
    for (GERJuGb7SMW = (918 - 918); GERJuGb7SMW < LESjsL9f6tb; GERJuGb7SMW++) {
        cin >> manYxrmp6GPM[GERJuGb7SMW];
        cin >> *YABbE6NwsghP++;
        cin.get ();
    }
    YABbE6NwsghP = TD6K3iFE4Nh9;
    {
        GERJuGb7SMW = (1237 - 706) - (1002 - 471);
        while (GERJuGb7SMW < LESjsL9f6tb) {
            if (!('m' != manYxrmp6GPM[GERJuGb7SMW][(548 - 548)])) {
                VHg7YEu[FCd4EwsgZH] = TD6K3iFE4Nh9[GERJuGb7SMW];
                FCd4EwsgZH++;
            }
            else {
                female[dlJ9pxejE] = TD6K3iFE4Nh9[GERJuGb7SMW];
                dlJ9pxejE++;
            }
            GERJuGb7SMW++;
        }
    }
    for (GERJuGb7SMW = (686 - 685); GERJuGb7SMW <= FCd4EwsgZH -(429 - 428); GERJuGb7SMW++) {
        for (g08OKsLqmC = (430 - 430); g08OKsLqmC <= FCd4EwsgZH -GERJuGb7SMW-(783 - 782); g08OKsLqmC++) {
            if (VHg7YEu[g08OKsLqmC] > VHg7YEu[g08OKsLqmC + (187 - 186)]) {
                x = VHg7YEu[g08OKsLqmC];
                VHg7YEu[g08OKsLqmC] = VHg7YEu[g08OKsLqmC + (782 - 781)];
                VHg7YEu[g08OKsLqmC + (702 - 701)] = x;
            }
        }
    }
    cout << fixed << setprecision ((796 - 794)) << VHg7YEu[(659 - 659)];
    {
        GERJuGb7SMW = (1568 - 686) - (1108 - 227);
        while (GERJuGb7SMW <= dlJ9pxejE - (826 - 825)) {
            GERJuGb7SMW++;
            for (g08OKsLqmC = (591 - 591); g08OKsLqmC <= dlJ9pxejE - GERJuGb7SMW -(973 - 972); g08OKsLqmC++) {
                if (female[g08OKsLqmC] < female[g08OKsLqmC + (145 - 144)]) {
                    x = female[g08OKsLqmC];
                    female[g08OKsLqmC] = female[g08OKsLqmC + (28 - 27)];
                    female[g08OKsLqmC + (696 - 695)] = x;
                }
            }
        }
    }
    for (GERJuGb7SMW = (543 - 542); GERJuGb7SMW <= FCd4EwsgZH -(712 - 711); GERJuGb7SMW++) {
        cout << " " << fixed << setprecision ((80 - 78)) << VHg7YEu[GERJuGb7SMW];
    }
    for (GERJuGb7SMW = (571 - 571); GERJuGb7SMW <= dlJ9pxejE - (482 - 481); GERJuGb7SMW++) {
        cout << " " << fixed << setprecision ((475 - 473)) << female[GERJuGb7SMW];
    }
    cout << endl;
    return (113 - 113);
}

