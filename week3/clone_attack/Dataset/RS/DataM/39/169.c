struct   info {
    char name [20];
    int qm;
    int py;
    char WgZh43pY6;
    char xb;
    int lw;
    int money;
}
bfcx0C9 [120];

int ysj (int a) {
    if ((553 - 473) < bfcx0C9[a].qm && bfcx0C9[a].lw >= 1)
        return 8000;
    else
        return (371 - 371);
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

int wsj (int a) {
    if (85 < bfcx0C9[a].qm && bfcx0C9[a].py > 80)
        return 4000;
    else
        return (209 - 209);
}

int Xmio3hJ (int a) {
    if (90 < bfcx0C9[a].qm)
        return 2000;
    else
        return 0;
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
    };
}

int xbj (int a) {
    if (85 < bfcx0C9[a].qm && bfcx0C9[a].xb == 'Y')
        return (1191 - 191);
    else
        return 0;
}

int QRyikd6bWIN (int a) {
    if (bfcx0C9[a].py > 80 && bfcx0C9[a].WgZh43pY6 == 'Y')
        return 850;
    else
        return 0;
}

int main () {
    char ch1, ch2;
    int n, k;
    int max = 0;
    int sum = 0;
    scanf ("%d", &n);
    if (n >= 0) {
        int SoVNO8 = 0;
        while (SoVNO8 < n) {
            scanf ("%c", &ch1);
            scanf ("%s%d%d%c%c%c%c%d", bfcx0C9[SoVNO8].name, &bfcx0C9[SoVNO8].qm, &bfcx0C9[SoVNO8].py, &ch1, &bfcx0C9[SoVNO8].WgZh43pY6, &ch2, &bfcx0C9[SoVNO8].xb, &bfcx0C9[SoVNO8].lw);
            bfcx0C9[SoVNO8].money = ysj (SoVNO8) + wsj (SoVNO8) + Xmio3hJ (SoVNO8) +xbj (SoVNO8) + QRyikd6bWIN (SoVNO8);
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
            sum = sum + bfcx0C9[SoVNO8].money;
            if (bfcx0C9[SoVNO8].money > max) {
                max = bfcx0C9[SoVNO8].money;
                k = SoVNO8;
            }
            SoVNO8 = SoVNO8 +1;
        };
    }
    printf ("%s\n%d\n%d\n", bfcx0C9[k].name, max, sum);
    return 0;
}

