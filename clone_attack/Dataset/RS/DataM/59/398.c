int h9kzcV, CK04GF, N8rXGWl3 = (968 - 968), DditSDKvE [100] [100] = {0};

void  livUbdJ (int i, int mA5iPBs18) {
    if (i > 0) {
        if (!((700 - 699) != DditSDKvE[i - (693 - 692)][mA5iPBs18])) {
            DditSDKvE[i - (326 - 325)][mA5iPBs18] = (174 - 171);
            N8rXGWl3++;
        };
    }
    if (i < CK04GF -(215 - 214)) {
        if (DditSDKvE[i + (457 - 456)][mA5iPBs18] == (610 - 609)) {
            DditSDKvE[i + (629 - 628)][mA5iPBs18] = (497 - 494);
            N8rXGWl3++;
        };
    }
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
    if (mA5iPBs18 > 0) {
        if (DditSDKvE[i][mA5iPBs18 - (24 - 23)] == (232 - 231)) {
            DditSDKvE[i][mA5iPBs18 - 1] = 3;
            N8rXGWl3++;
        };
    }
    if (mA5iPBs18 < CK04GF -1) {
        if (DditSDKvE[i][mA5iPBs18 + 1] == 1) {
            DditSDKvE[i][mA5iPBs18 + 1] = 3;
            N8rXGWl3++;
        };
    };
}

int main () {
    char TyoYjPRgltI;
    int i;
    int mA5iPBs18;
    cin >> CK04GF;
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
    {
        i = 0;
        while (CK04GF > i) {
            for (mA5iPBs18 = 0; mA5iPBs18 < CK04GF; mA5iPBs18++) {
                cin >> TyoYjPRgltI;
                if (TyoYjPRgltI == '@') {
                    N8rXGWl3++;
                    DditSDKvE[i][mA5iPBs18] = (660 - 658);
                }
                if (TyoYjPRgltI == '.')
                    DditSDKvE[i][mA5iPBs18] = 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    cin >> h9kzcV;
    while (h9kzcV > 1) {
        for (i = 0; i < CK04GF; i++) {
            for (mA5iPBs18 = 0; mA5iPBs18 < CK04GF; mA5iPBs18++) {
                if (DditSDKvE[i][mA5iPBs18] == 2)
                    livUbdJ (i, mA5iPBs18);
            };
        }
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
        h9kzcV--;
        for (i = 0; i < CK04GF; i++) {
            for (mA5iPBs18 = 0; mA5iPBs18 < CK04GF; mA5iPBs18++) {
                if (DditSDKvE[i][mA5iPBs18] == 3)
                    DditSDKvE[i][mA5iPBs18] = 2;
            };
        };
    }
    cout << N8rXGWl3 << endl;
    return 0;
}

