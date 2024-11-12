int main () {
    char d2yVJrUF3 [1100] = {'\0'};
    char kGMg6PbvTcU [1100] = {'\0'};
    int l6e1BRj;
    int bOAYTmts;
    int eazbsvjLGqc;
    int oSni0GQxvE;
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
    l6e1BRj = (747 - 747);
    bOAYTmts = 0;
    cin >> kGMg6PbvTcU >> d2yVJrUF3;
    eazbsvjLGqc = strlen (kGMg6PbvTcU);
    oSni0GQxvE = strlen (d2yVJrUF3);
    if (!(oSni0GQxvE == eazbsvjLGqc))
        l6e1BRj = 0;
    else {
        int iQWPqU3;
        int XUVuzHOI4D;
        {
            iQWPqU3 = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (eazbsvjLGqc > iQWPqU3) {
                {
                    XUVuzHOI4D = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (eazbsvjLGqc > XUVuzHOI4D) {
                        if (d2yVJrUF3[XUVuzHOI4D] == kGMg6PbvTcU[iQWPqU3]) {
                            bOAYTmts++;
                            d2yVJrUF3[XUVuzHOI4D] = '\0';
                            break;
                        }
                        XUVuzHOI4D++;
                    };
                }
                iQWPqU3++;
            };
        }
        if (bOAYTmts == eazbsvjLGqc)
            l6e1BRj = 1;
    }
    if (l6e1BRj == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

