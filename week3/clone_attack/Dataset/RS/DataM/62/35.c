int main () {
    char tlv3psZAR [201], PVhn60Ecjy [201];
    gets (tlv3psZAR);
    int SqUr8b = 0;
    char *SapcFYezU = tlv3psZAR, *LmIloEV = PVhn60Ecjy;
    while (!('\0' == *SapcFYezU)) {
        if (*SapcFYezU == ' ') {
            if (SqUr8b == 0) {
                *LmIloEV = *SapcFYezU;
                LmIloEV = LmIloEV +1;
                SqUr8b = 1;
            };
        }
        else {
            SqUr8b = 0;
            *LmIloEV = *SapcFYezU;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            LmIloEV = LmIloEV +1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        SapcFYezU = SapcFYezU +1;
    }
    *LmIloEV = *SapcFYezU;
    cout << PVhn60Ecjy << endl;
    return 0;
}

