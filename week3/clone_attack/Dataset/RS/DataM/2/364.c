struct   onWNT4Z {
    char mUjkF6C [(91 - 87)];
    char qPz05wh2OySm [(441 - 415)];
}
onWNT4Z [(1496 - 497)];

int main () {
    int w6MoLb;
    int jD3UaT;
    int LNKouvc9de0G;
    int ophsCwaEuR;
    char dzLNHOE;
    int mIPJ95aO;
    mIPJ95aO = (55 - 55);
    int OszVhNS5 [26];
    scanf ("%d", &w6MoLb);
    for (jD3UaT = (448 - 448); w6MoLb - (106 - 105) >= jD3UaT; jD3UaT = jD3UaT + 1) {
        scanf ("%s %s", &onWNT4Z[jD3UaT].mUjkF6C, onWNT4Z[jD3UaT].qPz05wh2OySm);
    }
    for (jD3UaT = (873 - 873); jD3UaT <= (45 - 20); jD3UaT++) {
        OszVhNS5[jD3UaT] = (804 - 804);
    }
    {
        jD3UaT = 560 - 560;
        while (jD3UaT <= w6MoLb - (803 - 802)) {
            for (LNKouvc9de0G = (566 - 566); (984 - 959) >= LNKouvc9de0G; LNKouvc9de0G = LNKouvc9de0G +1) {
                if ((799 - 799) <= (onWNT4Z[jD3UaT].qPz05wh2OySm[LNKouvc9de0G] - 'A') && (60 - 35) >= (onWNT4Z[jD3UaT].qPz05wh2OySm[LNKouvc9de0G] - 'A')) {
                    ophsCwaEuR = onWNT4Z[jD3UaT].qPz05wh2OySm[LNKouvc9de0G] - 'A';
                    OszVhNS5[ophsCwaEuR] = OszVhNS5[ophsCwaEuR] + (25 - 24);
                };
            }
            jD3UaT = jD3UaT + 1;
        };
    }
    {
        jD3UaT = 0;
        while (jD3UaT <= (695 - 670)) {
            if (mIPJ95aO < OszVhNS5[jD3UaT]) {
                mIPJ95aO = OszVhNS5[jD3UaT];
            }
            jD3UaT = jD3UaT + 1;
        };
    }
    {
        jD3UaT = 0;
        while (jD3UaT <= 25) {
            if (mIPJ95aO == OszVhNS5[jD3UaT]) {
                dzLNHOE = 'A' + jD3UaT;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            jD3UaT++;
        };
    }
    printf ("%c\n", dzLNHOE);
    printf ("%d\n", mIPJ95aO);
    {
        jD3UaT = 0;
        while (jD3UaT <= w6MoLb - 1) {
            for (LNKouvc9de0G = 0; LNKouvc9de0G <= 25; LNKouvc9de0G++) {
                if (onWNT4Z[jD3UaT].qPz05wh2OySm[LNKouvc9de0G] == dzLNHOE) {
                    printf ("%s\n", onWNT4Z[jD3UaT].mUjkF6C);
                };
            }
            jD3UaT++;
        };
    }
    return 0;
}

