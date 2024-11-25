int main () {
    char Fd42H7 [(134 - 34)] [(1069 - 969)];
    char zrcd7G [(880 - 780)] [(926 - 826)];
    int n;
    int PiADOE8;
    int R0Hs9Bg1;
    int k;
    int m;
    int p;
    int BRUeu5zgWfXd;
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
    int Gm90CMr;
    Gm90CMr = (940 - 940);
    cin >> n;
    for (PiADOE8 = (419 - 419); PiADOE8 < n; PiADOE8 = PiADOE8 +1) {
        R0Hs9Bg1 = 556 - 556;
        while (n > R0Hs9Bg1) {
            cin >> Fd42H7[PiADOE8][R0Hs9Bg1];
            R0Hs9Bg1 = R0Hs9Bg1 +1;
        };
    }
    cin >> m;
    {
        PiADOE8 = 837 - 837;
        while (PiADOE8 < n) {
            {
                R0Hs9Bg1 = 826 - 826;
                while (R0Hs9Bg1 < n) {
                    zrcd7G[PiADOE8][R0Hs9Bg1] = Fd42H7[PiADOE8][R0Hs9Bg1];
                    R0Hs9Bg1 = R0Hs9Bg1 +1;
                };
            }
            PiADOE8 = PiADOE8 +1;
        };
    }
    {
        k = 565 - 563;
        while (k <= m) {
            k = k + 1;
            {
                PiADOE8 = 818 - 818;
                while (PiADOE8 < n) {
                    {
                        R0Hs9Bg1 = 128 - 128;
                        while (R0Hs9Bg1 < n) {
                            if (!('@' != Fd42H7[PiADOE8][R0Hs9Bg1]) && Fd42H7[PiADOE8 -(147 - 146)][R0Hs9Bg1] == '.' && PiADOE8 -(946 - 945) >= (579 - 579))
                                zrcd7G[PiADOE8 -(916 - 915)][R0Hs9Bg1] = '@';
                            if (Fd42H7[PiADOE8][R0Hs9Bg1] == '@' && Fd42H7[PiADOE8 +(172 - 171)][R0Hs9Bg1] == '.' && n > PiADOE8 +(367 - 366))
                                zrcd7G[PiADOE8 +(131 - 130)][R0Hs9Bg1] = '@';
                            if (Fd42H7[PiADOE8][R0Hs9Bg1] == '@' && Fd42H7[PiADOE8][R0Hs9Bg1 +(287 - 286)] == '.' && R0Hs9Bg1 +(196 - 195) < n)
                                zrcd7G[PiADOE8][R0Hs9Bg1 +(809 - 808)] = '@';
                            if (Fd42H7[PiADOE8][R0Hs9Bg1] == '@' && Fd42H7[PiADOE8][R0Hs9Bg1 -(228 - 227)] == '.' && R0Hs9Bg1 -(343 - 342) >= (146 - 146))
                                zrcd7G[PiADOE8][R0Hs9Bg1 -1] = '@';
                            R0Hs9Bg1 = R0Hs9Bg1 +1;
                        };
                    }
                    PiADOE8++;
                };
            }
            for (p = (763 - 763); p < n; p = p + 1)
                for (BRUeu5zgWfXd = (949 - 949); BRUeu5zgWfXd < n; BRUeu5zgWfXd++)
                    Fd42H7[p][BRUeu5zgWfXd] = zrcd7G[p][BRUeu5zgWfXd];
        };
    }
    {
        PiADOE8 = 509 - 509;
        while (PiADOE8 < n) {
            for (R0Hs9Bg1 = 0; R0Hs9Bg1 < n; R0Hs9Bg1 = R0Hs9Bg1 +1)
                Gm90CMr += (Fd42H7[PiADOE8][R0Hs9Bg1] == '@');
            PiADOE8++;
        };
    }
    cout << Gm90CMr << endl;
    return 0;
}

