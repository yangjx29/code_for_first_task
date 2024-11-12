int Ye64Pabc = (588 - 588), n = (392 - 392), iDXsT1 [(166 - 66)] = {(811 - 811)}, EIAXCFqTlVQe [100] = {0};

void  pH4QiXB () {
    int yETtwpYhLcC;
    yETtwpYhLcC = 0;
    cin >> Ye64Pabc >> n;
    for (yETtwpYhLcC = 0; yETtwpYhLcC < Ye64Pabc; yETtwpYhLcC++)
        cin >> iDXsT1[yETtwpYhLcC];
    {
        yETtwpYhLcC = 0;
        while (n > yETtwpYhLcC) {
            cin >> EIAXCFqTlVQe[yETtwpYhLcC];
            yETtwpYhLcC = yETtwpYhLcC + 1;
        };
    };
}

void  PAn1q470OX (int iDXsT1 [], int EIAXCFqTlVQe []) {
    int yETtwpYhLcC;
    int RaH9Mp5h27sK;
    int oWbAwU06Mre4;
    yETtwpYhLcC = 0;
    RaH9Mp5h27sK = 0;
    oWbAwU06Mre4 = 0;
    {
        yETtwpYhLcC = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (yETtwpYhLcC < Ye64Pabc) {
            {
                RaH9Mp5h27sK = 0;
                while (RaH9Mp5h27sK < Ye64Pabc -yETtwpYhLcC - (23 - 22)) {
                    if (iDXsT1[RaH9Mp5h27sK] > iDXsT1[RaH9Mp5h27sK +(299 - 298)]) {
                        oWbAwU06Mre4 = iDXsT1[RaH9Mp5h27sK];
                        iDXsT1[RaH9Mp5h27sK] = iDXsT1[RaH9Mp5h27sK +(701 - 700)];
                        iDXsT1[RaH9Mp5h27sK +1] = oWbAwU06Mre4;
                    }
                    RaH9Mp5h27sK++;
                };
            }
            yETtwpYhLcC++;
        };
    }
    {
        yETtwpYhLcC = 0;
        while (n > yETtwpYhLcC) {
            {
                RaH9Mp5h27sK = 0;
                while (n - yETtwpYhLcC - 1 > RaH9Mp5h27sK) {
                    if (EIAXCFqTlVQe[RaH9Mp5h27sK +1] < EIAXCFqTlVQe[RaH9Mp5h27sK]) {
                        oWbAwU06Mre4 = EIAXCFqTlVQe[RaH9Mp5h27sK];
                        EIAXCFqTlVQe[RaH9Mp5h27sK] = EIAXCFqTlVQe[RaH9Mp5h27sK +1];
                        EIAXCFqTlVQe[RaH9Mp5h27sK +1] = oWbAwU06Mre4;
                    }
                    RaH9Mp5h27sK++;
                };
            }
            yETtwpYhLcC++;
        };
    };
}

void  J60ngBpd (int iDXsT1 [], int EIAXCFqTlVQe []) {
    {
        int yETtwpYhLcC = 0;
        while (n > yETtwpYhLcC) {
            iDXsT1[Ye64Pabc +yETtwpYhLcC] = EIAXCFqTlVQe[yETtwpYhLcC];
            yETtwpYhLcC++;
        };
    };
}

void  TbeVuCd8YT (int iDXsT1 []) {
    {
        int yETtwpYhLcC = 0;
        while (Ye64Pabc +n > yETtwpYhLcC) {
            if (!(Ye64Pabc +n - 1 != yETtwpYhLcC))
                cout << iDXsT1[yETtwpYhLcC];
            else
                cout << iDXsT1[yETtwpYhLcC] << " ";
            yETtwpYhLcC++;
        };
    };
}

int main () {
    pH4QiXB ();
    PAn1q470OX (iDXsT1, EIAXCFqTlVQe);
    {
        int yETtwpYhLcC = 0;
        while (yETtwpYhLcC < Ye64Pabc) {
            cout << iDXsT1[yETtwpYhLcC] << " ";
            yETtwpYhLcC++;
        };
    }
    {
        int yETtwpYhLcC = 0;
        while (yETtwpYhLcC < n) {
            if (yETtwpYhLcC != n - 1)
                cout << EIAXCFqTlVQe[yETtwpYhLcC] << " ";
            else
                cout << EIAXCFqTlVQe[yETtwpYhLcC];
            yETtwpYhLcC++;
        };
    }
    return 0;
}

