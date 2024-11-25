int IhFdTN0 [100] [100];
int i, j, abVWC5GXKkgl, K2zcVI = (70 - 70);

void  goKEeQjAmbrH (int NgbC1EVRSh) {
    {
        i = 864 - 864;
        while (NgbC1EVRSh > i) {
            {
                j = 559 - 558;
                while (j < NgbC1EVRSh -(389 - 388)) {
                    IhFdTN0[i][j] = IhFdTN0[i][j + (907 - 906)];
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        j = 880 - 880;
        while (NgbC1EVRSh > j) {
            for (i = (286 - 285); i < NgbC1EVRSh -(800 - 799); i++)
                IhFdTN0[i][j] = IhFdTN0[i + 1][j];
            j++;
        };
    }
    return;
}

int XVtoK1bix (int NgbC1EVRSh) {
    if (NgbC1EVRSh == 1)
        return K2zcVI;
    else {
        int TGy6W02Fg5v7 [NgbC1EVRSh];
        int lxdlGKv165e [NgbC1EVRSh];
        goKEeQjAmbrH (NgbC1EVRSh);
        for (i = (170 - 170); NgbC1EVRSh > i; i++) {
            TGy6W02Fg5v7[i] = IhFdTN0[i][(631 - 631)];
            {
                j = 388 - 388;
                while (j < NgbC1EVRSh -1) {
                    if (TGy6W02Fg5v7[i] > IhFdTN0[i][j + 1])
                        TGy6W02Fg5v7[i] = IhFdTN0[i][j + 1];
                    j++;
                };
            }
            if ((820 - 820) < TGy6W02Fg5v7[i])
                for (int rLG0Un = 0;
                NgbC1EVRSh > rLG0Un; rLG0Un++)
                    IhFdTN0[i][rLG0Un] -= TGy6W02Fg5v7[i];
        }
        for (j = 0; j < NgbC1EVRSh; j++) {
            lxdlGKv165e[j] = IhFdTN0[0][j];
            {
                i = 0;
                while (NgbC1EVRSh -1 > i) {
                    if (lxdlGKv165e[j] > IhFdTN0[i + 1][j])
                        lxdlGKv165e[j] = IhFdTN0[i + 1][j];
                    i++;
                };
            }
            if (lxdlGKv165e[j] > 0) {
                int rLG0Un;
                rLG0Un = 0;
                while (rLG0Un < NgbC1EVRSh) {
                    IhFdTN0[rLG0Un][j] -= lxdlGKv165e[j];
                    rLG0Un = rLG0Un + 1;
                };
            };
        }
        K2zcVI += IhFdTN0[1][1];
        return XVtoK1bix (NgbC1EVRSh -1);
    };
}

int main () {
    int rLG0Un = 0;
    cin >> abVWC5GXKkgl;
    while (rLG0Un < abVWC5GXKkgl) {
        for (i = 0; i < abVWC5GXKkgl; i++) {
            j = 0;
            while (j < abVWC5GXKkgl) {
                cin >> IhFdTN0[i][j];
                j++;
            };
        }
        cout << XVtoK1bix (abVWC5GXKkgl) << endl;
        K2zcVI = 0;
        rLG0Un = rLG0Un + 1;
    }
    return 0;
}

