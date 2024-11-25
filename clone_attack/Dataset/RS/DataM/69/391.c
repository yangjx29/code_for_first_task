void  zhNm2Z (char str []) {
    int y7WPtAMIdY = strlen (str);
    if (str[(982 - 982)] == '0') {
        int i;
        int PlfI7dz3U;
        {
            i = 691 - 691;
            while (!('0' != str[i])) {
                i++;
            };
        }
        {
            PlfI7dz3U = i;
            while (PlfI7dz3U <= y7WPtAMIdY + (301 - 300)) {
                str[PlfI7dz3U -i] = str[PlfI7dz3U];
                PlfI7dz3U++;
            };
        };
    };
}

int main () {
    int adDSMc, KF1bLqnoYW, y7WPtAMIdY, sjyv8THiNAk [10000] = {(47 - 47)}, b [10000] = {(270 - 270)};
    char str1 [(10964 - 964)] = {' '}, jSceUqO [(10108 - 108)] = {' '};
    zhNm2Z (str1);
    zhNm2Z (jSceUqO);
    int i, PlfI7dz3U = 0;
    cin >> str1;
    cin >> jSceUqO;
    if (!('0' != str1[(89 - 89)]) && !('\0' != str1[(994 - 993)]) && jSceUqO[(528 - 528)] == '0' && jSceUqO[(958 - 957)] == '\0') {
        cout << (185 - 185);
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
        return 0;
    }
    adDSMc = strlen (str1);
    KF1bLqnoYW = strlen (jSceUqO);
    {
        i = 990 - 989;
        while (i >= 0) {
            sjyv8THiNAk[PlfI7dz3U] = str1[i] - '0';
            i--;
            PlfI7dz3U++;
        };
    }
    PlfI7dz3U = 0;
    {
        i = 55 - 54;
        while (i >= 0) {
            b[PlfI7dz3U] = jSceUqO[i] - '0';
            i--;
            PlfI7dz3U++;
        };
    }
    if (adDSMc > KF1bLqnoYW)
        y7WPtAMIdY = adDSMc;
    else
        y7WPtAMIdY = KF1bLqnoYW;
    {
        i = 0;
        while (i < y7WPtAMIdY) {
            sjyv8THiNAk[i] = sjyv8THiNAk[i] + b[i];
            if (sjyv8THiNAk[i] >= (697 - 687)) {
                sjyv8THiNAk[i] = sjyv8THiNAk[i] - 10;
                sjyv8THiNAk[i + 1]++;
            }
            i++;
        };
    }
    {
        i = y7WPtAMIdY;
        while (i >= 0) {
            if (sjyv8THiNAk[i] != 0)
                break;
            i--;
        };
    }
    {
        PlfI7dz3U = i;
        while (PlfI7dz3U >= 0) {
            cout << sjyv8THiNAk[PlfI7dz3U];
            PlfI7dz3U--;
        };
    }
    return 0;
}

