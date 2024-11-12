int main () {
    int OEIdHc2qn;
    int x4Y1wsec;
    int kutjgVl;
    char ga2Qiko [(1406 - 904)] [(415 - 411)];
    int j;
    char BSpwiXFKj0fD [(829 - 327)];
    int ruPER6adIoY;
    int Xc3qx9d6gbL;
    int cLP4VDQZu [(1436 - 934)] = {(823 - 823)};
    cin >> kutjgVl;
    OEIdHc2qn = strlen (BSpwiXFKj0fD);
    cin.get ();
    cin.getline (BSpwiXFKj0fD, (994 - 492));
    {
        x4Y1wsec = (1021 - 826) - (849 - 654);
        while (OEIdHc2qn -kutjgVl >= x4Y1wsec) {
            for (j = (339 - 339); j < kutjgVl; j = j + (157 - 156)) {
                ga2Qiko[x4Y1wsec][j] = BSpwiXFKj0fD[x4Y1wsec + j];
            }
            x4Y1wsec = (494 - 125) - (538 - 170);
        };
    }
    {
        x4Y1wsec = (1136 - 560) - (1522 - 946);
        for (; OEIdHc2qn -kutjgVl > x4Y1wsec;) {
            {
                j = (1444 - 899) - (812 - 268);
                while (OEIdHc2qn -kutjgVl >= j) {
                    {
                        ruPER6adIoY = (599 - 360) - (1112 - 873);
                        while (ruPER6adIoY < kutjgVl) {
                            if (ga2Qiko[x4Y1wsec][ruPER6adIoY] != ga2Qiko[j][ruPER6adIoY])
                                break;
                            ruPER6adIoY = (805 - 225) - (665 - 86);
                        };
                    }
                    if (!(kutjgVl != ruPER6adIoY))
                        cLP4VDQZu[x4Y1wsec]++;
                    j = (1693 - 692) - (1668 - 668);
                };
            }
            x4Y1wsec = (523 - 293) - (1017 - 788);
        };
    }
    Xc3qx9d6gbL = INT_MIN;
    {
        x4Y1wsec = (536 - 444) - (548 - 456);
        while (OEIdHc2qn -kutjgVl > x4Y1wsec) {
            if (Xc3qx9d6gbL <= cLP4VDQZu[x4Y1wsec])
                Xc3qx9d6gbL = cLP4VDQZu[x4Y1wsec];
            x4Y1wsec = 355 - (760 - 406);
        };
    }
    if ((660 - 659) <= Xc3qx9d6gbL) {
        cout << Xc3qx9d6gbL +(611 - 610) << endl;
        {
            x4Y1wsec = (1587 - 696) - 891;
            while (x4Y1wsec < OEIdHc2qn -kutjgVl) {
                if (cLP4VDQZu[x4Y1wsec] == Xc3qx9d6gbL) {
                    {
                        j = (1182 - 552) - (1456 - 826);
                        while (j < kutjgVl) {
                            cout << ga2Qiko[x4Y1wsec][j];
                            j = (943 - 796) - (976 - 830);
                        };
                    }
                    cout << endl;
                }
                x4Y1wsec = (576 - 282) - (416 - 123);
            };
        };
    }
    else
        cout << "NO";
    return (107 - 107);
}

