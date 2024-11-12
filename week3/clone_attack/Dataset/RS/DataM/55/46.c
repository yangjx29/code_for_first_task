int RfC97ghxoakL (char a) {
    int haJVL5Ic7;
    if (('9' >= a) && (a >= '0'))
        haJVL5Ic7 = a - '0';
    else {
        if ((a >= 'a') && (a <= 'z'))
            haJVL5Ic7 = a - 'a' + 10;
        else
            haJVL5Ic7 = a - 'A' + 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return haJVL5Ic7;
}

int main () {
    char jhacWQJGz52X;
    char mo;
    char njtkeEP3 [100];
    long  eJxopGY1;
    eJxopGY1 = 0;
    int kQDEU3;
    int BNiGURtM;
    int y51FrgapS;
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
    int ZVQuGCxmAE;
    int WCnLxDIf;
    kQDEU3 = 0;
    cin >> y51FrgapS;
    cin.get ();
    for (; (jhacWQJGz52X = cin.get ()) != ' ';) {
        eJxopGY1 = eJxopGY1 * y51FrgapS;
        WCnLxDIf = RfC97ghxoakL (jhacWQJGz52X);
        eJxopGY1 = eJxopGY1 + WCnLxDIf;
    }
    cin >> ZVQuGCxmAE;
    while (eJxopGY1 > 0) {
        WCnLxDIf = eJxopGY1 % ZVQuGCxmAE;
        eJxopGY1 = eJxopGY1 / ZVQuGCxmAE;
        if (WCnLxDIf > 9)
            mo = WCnLxDIf -10 + 'A';
        else
            mo = WCnLxDIf +'0';
        njtkeEP3[kQDEU3] = mo;
        kQDEU3 = kQDEU3 + 1;
    }
    if (kQDEU3 == 0)
        cout << "0" << endl;
    else {
        BNiGURtM = kQDEU3 - 1;
        while (BNiGURtM >= 0) {
            cout << njtkeEP3[BNiGURtM];
            BNiGURtM--;
        };
    }
    return 0;
}

