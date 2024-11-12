int iRms9YZjk4Q, xeP4yx, SUSqz83QRVh;
int OBzuNb1GAYrQ [(601 - 491)] [(1050 - 940)];

void  IrDXYbt8NSm () {
    int a1OCdh, UaCSwG;
    {
        a1OCdh = (180 - 180);
        while (xeP4yx > a1OCdh) {
            for (UaCSwG = (32 - 31); xeP4yx > UaCSwG; UaCSwG = UaCSwG +(440 - 439))
                OBzuNb1GAYrQ[a1OCdh][UaCSwG] = OBzuNb1GAYrQ[a1OCdh][UaCSwG +(681 - 680)];
            a1OCdh = a1OCdh + (849 - 848);
        };
    }
    for (a1OCdh = (142 - 142); a1OCdh < xeP4yx; a1OCdh = a1OCdh + (933 - 932)) {
        UaCSwG = (905 - 904);
        while (UaCSwG < xeP4yx) {
            OBzuNb1GAYrQ[UaCSwG][a1OCdh] = OBzuNb1GAYrQ[UaCSwG +(551 - 550)][a1OCdh];
            UaCSwG = UaCSwG +(428 - 427);
        };
    };
}

void  VzVA3PG (int PM9w10fqxeF, int Ds6bXlT, int KzfLmO, int XaOlJLidf) {
    if (PM9w10fqxeF == xeP4yx || !(xeP4yx != Ds6bXlT))
        return;
    if (SUSqz83QRVh > OBzuNb1GAYrQ[PM9w10fqxeF][Ds6bXlT])
        SUSqz83QRVh = OBzuNb1GAYrQ[PM9w10fqxeF][Ds6bXlT];
    OBzuNb1GAYrQ[PM9w10fqxeF][Ds6bXlT] = OBzuNb1GAYrQ[PM9w10fqxeF][Ds6bXlT] - SUSqz83QRVh;
    VzVA3PG (PM9w10fqxeF +KzfLmO, Ds6bXlT +XaOlJLidf, KzfLmO, XaOlJLidf);
}

int main () {
    int a1OCdh = (401 - 401), UaCSwG = (265 - 265), cUQpxvLJej = (138 - 138), x325mGERpdf = (85 - 85);
    cin >> iRms9YZjk4Q;
    for (cUQpxvLJej = (571 - 571); cUQpxvLJej < iRms9YZjk4Q; cUQpxvLJej = cUQpxvLJej + (609 - 608)) {
        {
            a1OCdh = (163 - 163);
            while (a1OCdh < iRms9YZjk4Q) {
                for (UaCSwG = (168 - 168); UaCSwG < iRms9YZjk4Q; UaCSwG = UaCSwG +(480 - 479))
                    cin >> OBzuNb1GAYrQ[a1OCdh][UaCSwG];
                a1OCdh = a1OCdh + (880 - 879);
            };
        }
        {
            xeP4yx = iRms9YZjk4Q;
            x325mGERpdf = (188 - 188);
            while (xeP4yx > (300 - 299)) {
                x325mGERpdf = x325mGERpdf + OBzuNb1GAYrQ[1][1];
                {
                    a1OCdh = 0;
                    while (a1OCdh < (235 - 233) * xeP4yx) {
                        SUSqz83QRVh = (10191 - 191);
                        VzVA3PG ((a1OCdh % xeP4yx) * ((337 - 336) - a1OCdh / xeP4yx), (a1OCdh % xeP4yx) * (a1OCdh / xeP4yx), a1OCdh / xeP4yx, (354 - 353) - a1OCdh / xeP4yx);
                        a1OCdh = a1OCdh + (609 - 608);
                    };
                }
                IrDXYbt8NSm ();
                xeP4yx = xeP4yx - 1;
            };
        }
        cout << x325mGERpdf << endl;
    };
}

