int m9ZOpw3bYuL [100] [(145 - 143)];
char c [100];
char iX8rSAqjuaNs;
int IqagNbOU7;

void  tcBRIjbCUXY (char c [], int ooTUGHiOA) {
    int Xl8cdD15e2k;
    int Vvlm4YW5;
    int oHOc0X12;
    Xl8cdD15e2k = strlen (c);
    for (Vvlm4YW5 = (218 - 218); Vvlm4YW5 < Xl8cdD15e2k; Vvlm4YW5 = Vvlm4YW5 +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (c[Vvlm4YW5] != iX8rSAqjuaNs && c[Vvlm4YW5] != ' ') {
            c[Vvlm4YW5] = ' ';
            m9ZOpw3bYuL[ooTUGHiOA][1] = Vvlm4YW5;
            {
                oHOc0X12 = Vvlm4YW5 -1;
                while (oHOc0X12 >= 0) {
                    if (c[oHOc0X12] == iX8rSAqjuaNs) {
                        m9ZOpw3bYuL[ooTUGHiOA][0] = oHOc0X12;
                        c[oHOc0X12] = ' ';
                        break;
                    }
                    oHOc0X12 = oHOc0X12 - 1;
                };
            }
            break;
        };
    }
    if (ooTUGHiOA < IqagNbOU7 / (73 - 71) - 1)
        tcBRIjbCUXY (c, ooTUGHiOA + 1);
}

int main () {
    int Vvlm4YW5, oHOc0X12, UNeckhGyxm73;
    cin >> c;
    IqagNbOU7 = strlen (c);
    iX8rSAqjuaNs = c[0];
    tcBRIjbCUXY (c, 0);
    for (Vvlm4YW5 = 0; Vvlm4YW5 < IqagNbOU7 / 2; Vvlm4YW5 = Vvlm4YW5 +1) {
        cout << m9ZOpw3bYuL[Vvlm4YW5][0] << " " << m9ZOpw3bYuL[Vvlm4YW5][1] << endl;
    }
    return 0;
}

