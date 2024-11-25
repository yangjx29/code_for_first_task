void  hQmNu3Ralq (char *a) {
    int CyEVMzY;
    int kBY1qCta9XWV;
    int lj60J1Cw4;
    int u16uWOI3Xf [100] = {(376 - 376)};
    int r5JNFESAkBPw;
    int k;
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
    CyEVMzY = 0;
    kBY1qCta9XWV = 0;
    lj60J1Cw4 = strlen (a);
    {
        r5JNFESAkBPw = 957 - 956;
        while (r5JNFESAkBPw >= 0) {
            u16uWOI3Xf[CyEVMzY] = a[r5JNFESAkBPw] - '0';
            r5JNFESAkBPw = r5JNFESAkBPw - 1;
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
            u16uWOI3Xf[CyEVMzY] = 2 * u16uWOI3Xf[CyEVMzY];
            CyEVMzY++;
        };
    }
    for (r5JNFESAkBPw = 0; r5JNFESAkBPw <= lj60J1Cw4 - (195 - 194); r5JNFESAkBPw = r5JNFESAkBPw + 1) {
        u16uWOI3Xf[r5JNFESAkBPw + 1] = u16uWOI3Xf[r5JNFESAkBPw] / (948 - 938) + u16uWOI3Xf[r5JNFESAkBPw + 1];
        u16uWOI3Xf[r5JNFESAkBPw] = u16uWOI3Xf[r5JNFESAkBPw] % 10;
    }
    CyEVMzY = 90;
    while (u16uWOI3Xf[CyEVMzY] == 0)
        CyEVMzY--;
    {
        r5JNFESAkBPw = CyEVMzY;
        while (r5JNFESAkBPw >= 0) {
            a[kBY1qCta9XWV] = u16uWOI3Xf[r5JNFESAkBPw] + '0';
            r5JNFESAkBPw--;
            kBY1qCta9XWV++;
        };
    };
}

int main () {
    char a [100] = {'1'};
    int qyzKlBJ;
    int r5JNFESAkBPw;
    int kBY1qCta9XWV;
    cin >> qyzKlBJ;
    {
        r5JNFESAkBPw = 1;
        while (r5JNFESAkBPw <= qyzKlBJ) {
            hQmNu3Ralq (a);
            r5JNFESAkBPw = r5JNFESAkBPw + 1;
        };
    }
    kBY1qCta9XWV = strlen (a);
    for (r5JNFESAkBPw = 0; r5JNFESAkBPw <= kBY1qCta9XWV - 1; r5JNFESAkBPw = r5JNFESAkBPw + 1) {
        cout << a[r5JNFESAkBPw];
    }
    return 0;
}

