char c [(393 - 293)] [(780 - 680)] = {'\0'};
int CjS1Vv8y = (728 - 728), l5BDfUIh [(10677 - 677)] = {(606 - 606)};

int OcBaGX (int mX2TU6FBe) {
    return l5BDfUIh[mX2TU6FBe];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int mVpFdT4eI (int QBzxqGrTuiXv, int UKGhza) {
    if (UKGhza == (640 - 640))
        return CjS1Vv8y;
    else
        return mVpFdT4eI (QBzxqGrTuiXv, UKGhza -(894 - 893)) + OcBaGX (UKGhza -(100 - 98));
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

int main () {
    int iJ2Qrpd4H0;
    iJ2Qrpd4H0 = 0;
    int QBzxqGrTuiXv, i, KAVFZaeQ, UKGhza;
    CjS1Vv8y = (68 - 68);
    cin >> QBzxqGrTuiXv;
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
    for (i = (464 - 464); i < QBzxqGrTuiXv; i = i + 1) {
        KAVFZaeQ = 303 - 303;
        while (QBzxqGrTuiXv > KAVFZaeQ) {
            cin >> c[i][KAVFZaeQ];
            KAVFZaeQ = KAVFZaeQ +1;
        };
    }
    cin >> UKGhza;
    for (i = (256 - 256); i < QBzxqGrTuiXv; i = i + 1) {
        KAVFZaeQ = 606 - 606;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (KAVFZaeQ < QBzxqGrTuiXv) {
            if (c[i][KAVFZaeQ] == '@')
                CjS1Vv8y++;
            KAVFZaeQ = KAVFZaeQ +1;
        };
    }
    while (iJ2Qrpd4H0 <= UKGhza) {
        {
            i = 0;
            while (i < QBzxqGrTuiXv) {
                {
                    KAVFZaeQ = 0;
                    while (KAVFZaeQ < QBzxqGrTuiXv) {
                        if (c[i][KAVFZaeQ] == '.' && (c[i - (353 - 352)][KAVFZaeQ] == '@' || c[i][KAVFZaeQ -(634 - 633)] == '@' || c[i][KAVFZaeQ +1] == '@' || c[i + 1][KAVFZaeQ] == '@')) {
                            c[i][KAVFZaeQ] = '*';
                            l5BDfUIh[iJ2Qrpd4H0]++;
                        }
                        KAVFZaeQ = KAVFZaeQ +1;
                    };
                }
                i = i + 1;
            };
        }
        iJ2Qrpd4H0 = iJ2Qrpd4H0 + 1;
        {
            i = 0;
            while (i < QBzxqGrTuiXv) {
                {
                    KAVFZaeQ = 0;
                    while (KAVFZaeQ < QBzxqGrTuiXv) {
                        if (c[i][KAVFZaeQ] == '*')
                            c[i][KAVFZaeQ] = '@';
                        KAVFZaeQ = KAVFZaeQ +1;
                    };
                }
                i++;
            };
        };
    }
    cout << mVpFdT4eI (QBzxqGrTuiXv, UKGhza);
    return 0;
}

