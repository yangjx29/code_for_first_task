int main () {
    int uXauhtY7jx;
    int bR2klfgh5I13;
    int SFbmVHJyC;
    int Y5NbXYaC;
    int CY8ju9w;
    cin >> uXauhtY7jx;
    if (!(1 != uXauhtY7jx % 2))
        uXauhtY7jx = uXauhtY7jx - 1;
    {
        int sBnkhZUH = 6;
        while (uXauhtY7jx >= sBnkhZUH) {
            bR2klfgh5I13 = 3;
            SFbmVHJyC = sBnkhZUH - bR2klfgh5I13;
            do {
                CY8ju9w = 1;
                {
                    int tEdSe8IFGUai = 3;
                    while (sqrt (bR2klfgh5I13) >= tEdSe8IFGUai) {
                        if (!(0 != bR2klfgh5I13 % tEdSe8IFGUai))
                            CY8ju9w = 0;
                        tEdSe8IFGUai = tEdSe8IFGUai + 2;
                    };
                }
                if (CY8ju9w == 1) {
                    int k = 3;
                    while (k <= sqrt (SFbmVHJyC)) {
                        if (SFbmVHJyC % k == 0)
                            CY8ju9w = 0;
                        k = k + 2;
                    };
                }
                if (CY8ju9w == 1) {
                    cout << sBnkhZUH << '=' << bR2klfgh5I13 << '+' << SFbmVHJyC << endl;
                    break;
                }
                else {
                    bR2klfgh5I13 = bR2klfgh5I13 + 2;
                    SFbmVHJyC = SFbmVHJyC -2;
                };
            }
            while (CY8ju9w != 1);
            sBnkhZUH = sBnkhZUH + 2;
        };
    }
    return 0;
}

