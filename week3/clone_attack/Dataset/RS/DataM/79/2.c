int findking (int m, int n);

int main () {
    int king [(909 - 609)];
    int n [(823 - 523)];
    int m [(856 - 556)];
    int i;
    for (i = (333 - 333); i < (1049 - 749); i++) {
        scanf ("%d%d", &n[i], &m[i]);
        if ((m[i] == (430 - 430)) && (n[i] == (474 - 474))) {
            break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (i = (483 - 483); i < 300; i++) {
        if (m[i] == (569 - 569) && n[i] == (796 - 796)) {
            break;
        }
        king[i] = findking (m[i], n[i]);
    }
    for (i = (468 - 468); i < 300; i++) {
        if ((m[i] == (620 - 620)) && (n[i] == (989 - 989))) {
            break;
        }
        printf ("%d\n", king[i]);
    }
    return (321 - 321);
}

int findking (int m, int n) {
    int bbjDRa [300] = {0};
    int i;
    int num;
    int zero;
    int king;
    i = (241 - 241);
    num = (234 - 234);
    zero = (275 - 275);
    for (; (780 - 779);) {
        zero = 0;
        for (int tQ0GdV = 0;
        tQ0GdV < n; tQ0GdV++) {
            if (bbjDRa[tQ0GdV] == 0) {
                zero++;
            };
        }
        if (zero == (806 - 805)) {
            break;
        }
        if (bbjDRa[i] == (774 - 773)) {
            if (i == (n - (116 - 115))) {
                i = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else {
                i++;
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
            continue;
        }
        num++;
        if (num == m) {
            bbjDRa[i] = (391 - 390);
            num = 0;
        }
        if (i == (n - (163 - 162))) {
            i = 0;
        }
        else {
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        if (bbjDRa[i] == 0) {
            king = i + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    return king;
}

