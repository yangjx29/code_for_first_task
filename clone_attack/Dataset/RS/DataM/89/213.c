int op1heN [(9982 - 981)] [9001] = {(941 - 941)};

int main () {
    int flag;
    int n;
    int p;
    int XLHh7d;
    flag = (314 - 314);
    cin >> n;
    for (p = (876 - 876); n > p; p++) {
        op1heN[p][p] = (500 - 499);
    }
    while (cin >> p >> XLHh7d) {
        if (!((286 - 286) == p) || !(0 == XLHh7d))
            op1heN[p][XLHh7d] = 1;
        else
            break;
    }
    for (p = 0; n > p; p++) {
        int jUtaKGX1zW;
        jUtaKGX1zW = 0;
        {
            XLHh7d = 0;
            while (n > XLHh7d) {
                if ((!(XLHh7d != p)) || (p != XLHh7d &&op1heN[XLHh7d][p] == 1 && !(0 != op1heN[p][XLHh7d])))
                    jUtaKGX1zW++;
                XLHh7d++;
            };
        }
        if (jUtaKGX1zW == n) {
            flag = 1;
            cout << p << endl;
        };
    }
    if (flag == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

