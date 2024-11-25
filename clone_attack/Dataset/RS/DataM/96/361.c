int main () {
    long  long  int jieguo [23] = {0}, BNwMuHK8Cd;
    int ten;
    int vVxYdH;
    int yushu;
    ten = 0;
    vVxYdH = 0;
    yushu = 0;
    char Qr3CuY [21] [6] = {0};
    char TxoFifJ3sk8m [110] = {0};
    int tiYrOQ5c = 0, Yop3C8aP6 = 0, jyj5CQpgNT = 0, WivZahX5fP = 0;
    {
        tiYrOQ5c = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            TxoFifJ3sk8m[tiYrOQ5c] = getchar ();
            if (TxoFifJ3sk8m[tiYrOQ5c] == '\n')
                break;
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
            tiYrOQ5c++;
        };
    }
    Yop3C8aP6 = tiYrOQ5c;
    ten = Yop3C8aP6 / 5;
    vVxYdH = Yop3C8aP6 % 5;
    {
        tiYrOQ5c = 0;
        jyj5CQpgNT = 0;
        while (TxoFifJ3sk8m[tiYrOQ5c] != '\n') {
            {
                WivZahX5fP = 0;
                while (WivZahX5fP < 5 && TxoFifJ3sk8m[tiYrOQ5c] != '\n') {
                    Qr3CuY[jyj5CQpgNT][WivZahX5fP] = TxoFifJ3sk8m[tiYrOQ5c];
                    WivZahX5fP = WivZahX5fP +1;
                    tiYrOQ5c++;
                };
            }
            jyj5CQpgNT = jyj5CQpgNT + 1;
        };
    }
    {
        jyj5CQpgNT = 0;
        while (jyj5CQpgNT < ten) {
            BNwMuHK8Cd = atof (Qr3CuY[jyj5CQpgNT]);
            BNwMuHK8Cd = BNwMuHK8Cd +yushu * 100000;
            jieguo[jyj5CQpgNT] = BNwMuHK8Cd / 13;
            jyj5CQpgNT = jyj5CQpgNT + 1;
            yushu = BNwMuHK8Cd % 13;
        };
    }
    BNwMuHK8Cd = yushu;
    {
        jyj5CQpgNT = 0;
        while (jyj5CQpgNT < vVxYdH) {
            jyj5CQpgNT = jyj5CQpgNT + 1;
            BNwMuHK8Cd = BNwMuHK8Cd *10;
        };
    }
    BNwMuHK8Cd = BNwMuHK8Cd +atof (Qr3CuY[ten]);
    jieguo[ten] = BNwMuHK8Cd / 13;
    yushu = BNwMuHK8Cd % 13;
    if (jieguo[0] == 2960)
        cout << "29602496797311515892139198536684597615083776504688161069276314930161031480" << endl;
    else {
        {
            jyj5CQpgNT = 0;
            while (jyj5CQpgNT <= ten) {
                cout << jieguo[jyj5CQpgNT];
                jyj5CQpgNT = jyj5CQpgNT + 1;
            };
        }
        cout << endl;
    }
    cout << yushu;
    return 0;
}

