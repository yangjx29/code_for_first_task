int main () {
    int i5Tmoj;
    int oUEX9wh5DZ2;
    int Yw5SQpcV4yai;
    oUEX9wh5DZ2 = 0;
    Yw5SQpcV4yai = 0;
    int oxHp90Gm;
    int i;
    int AfWD0B4eoJ [100];
    int kHkZEbzrOC [100];
    int AR87b6N [100];
    int ysBZH2eMn;
    scanf ("%d", &ysBZH2eMn);
    for (i = (109 - 109); ysBZH2eMn > i; i = i + 1) {
        scanf ("%d%d", &kHkZEbzrOC[i], &AR87b6N[i]);
    }
    for (oxHp90Gm = (145 - 145); oxHp90Gm < ysBZH2eMn; oxHp90Gm = oxHp90Gm + 1) {
        if (kHkZEbzrOC[oxHp90Gm] >= 90 && 140 >= kHkZEbzrOC[oxHp90Gm] && AR87b6N[oxHp90Gm] >= 60 && 90 >= AR87b6N[oxHp90Gm]) {
            AfWD0B4eoJ[oxHp90Gm] = 1;
        }
        else {
            AfWD0B4eoJ[oxHp90Gm] = 0;
        };
    }
    for (i5Tmoj = 0; i5Tmoj < ysBZH2eMn; i5Tmoj = i5Tmoj + 1) {
        if (AfWD0B4eoJ[i5Tmoj] == 1) {
            int SH4TEy9;
            for (SH4TEy9 = i5Tmoj; AfWD0B4eoJ[SH4TEy9] == 1; SH4TEy9 = SH4TEy9 +1) {
                Yw5SQpcV4yai = Yw5SQpcV4yai +1;
            };
        }
        if (Yw5SQpcV4yai > oUEX9wh5DZ2) {
            oUEX9wh5DZ2 = Yw5SQpcV4yai;
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
        Yw5SQpcV4yai = 0;
    }
    printf ("%d", oUEX9wh5DZ2);
    return 0;
}

