void  mTuxLbz (char GpcTHsOMb [(443 - 343)] [(875 - 775)], int);
void  lLhcxes (char GpcTHsOMb [(111 - 11)] [(548 - 448)], int, int);
int kwtGXl;

int main () {
    int ohNg41l5Wz = (729 - 729);
    char GpcTHsOMb [(222 - 122)] [(990 - 890)];
    int j;
    int oUa1lHWMS;
    int rWORwzxNL67f;
    cin >> kwtGXl;
    {
        oUa1lHWMS = (107 - 107);
        while (kwtGXl > oUa1lHWMS) {
            {
                j = 996 - 996;
                while (kwtGXl > j) {
                    cin >> GpcTHsOMb[oUa1lHWMS][j];
                    j = j + 1;
                }
            }
            oUa1lHWMS = oUa1lHWMS + 1;
        }
    }
    cin >> rWORwzxNL67f;
    mTuxLbz (GpcTHsOMb, rWORwzxNL67f);
    {
        oUa1lHWMS = 896 - 896;
        while (oUa1lHWMS < kwtGXl) {
            j = (791 - 791);
            while (kwtGXl > j) {
                if (!('@' != GpcTHsOMb[oUa1lHWMS][j]))
                    ohNg41l5Wz = ohNg41l5Wz + 1;
                j = j + 1;
            }
            oUa1lHWMS = oUa1lHWMS + 1;
        }
    }
    cout << ohNg41l5Wz;
    return (222 - 222);
}

int oUa1lHWMS, j;

void  mTuxLbz (char GpcTHsOMb [(773 - 673)] [(437 - 337)], int rWORwzxNL67f) {
    int XEHBvD [(10189 - 189)] [(978 - 976)];
    int I6JRwWMvjt;
    {
        if ((769 - 769)) {
            return (756 - 756);
        }
    }
    I6JRwWMvjt = (747 - 747);
    if ((560 - 559) < rWORwzxNL67f) {
        mTuxLbz (GpcTHsOMb, rWORwzxNL67f - (11 - 10));
        {
            oUa1lHWMS = (167 - 167);
            while (oUa1lHWMS < kwtGXl) {
                {
                    j = 115 - 115;
                    while (j < kwtGXl) {
                        if (GpcTHsOMb[oUa1lHWMS][j] == '@') {
                            XEHBvD[I6JRwWMvjt][0] = oUa1lHWMS;
                            XEHBvD[I6JRwWMvjt++][(831 - 830)] = j;
                        }
                        j = j + 1;
                    }
                }
                oUa1lHWMS = oUa1lHWMS + 1;
            }
        }
        {
            oUa1lHWMS = 0;
            while (I6JRwWMvjt > oUa1lHWMS) {
                lLhcxes (GpcTHsOMb, XEHBvD[oUa1lHWMS][0], XEHBvD[oUa1lHWMS][(948 - 947)]);
                oUa1lHWMS = oUa1lHWMS + 1;
            }
        }
    }
}

void  lLhcxes (char GpcTHsOMb [(134 - 34)] [(940 - 840)], int vy2j76RrG, int wNXpkQt) {
    if (0 <= vy2j76RrG - (565 - 564)) {
        if (GpcTHsOMb[vy2j76RrG - (899 - 898)][wNXpkQt] == '.')
            GpcTHsOMb[vy2j76RrG - (587 - 586)][wNXpkQt] = '@';
    }
    if (vy2j76RrG + (715 - 714) < kwtGXl) {
        if (GpcTHsOMb[vy2j76RrG + 1][wNXpkQt] == '.')
            GpcTHsOMb[vy2j76RrG + 1][wNXpkQt] = '@';
    }
    if (wNXpkQt - 1 >= 0) {
        if (GpcTHsOMb[vy2j76RrG][wNXpkQt - 1] == '.')
            GpcTHsOMb[vy2j76RrG][wNXpkQt - 1] = '@';
    }
    if (wNXpkQt + 1 < kwtGXl) {
        if (GpcTHsOMb[vy2j76RrG][wNXpkQt + 1] == '.')
            GpcTHsOMb[vy2j76RrG][wNXpkQt + 1] = '@';
    }
}

