int main () {
    int AX8Uydi3g [(885 - 785)] [100];
    int b [100] [100];
    int row;
    int uSlR1jv;
    int YwmRrbXL1z4c;
    int q;
    int dir;
    YwmRrbXL1z4c = 0;
    cin >> row >> uSlR1jv;
    for (int i = (582 - 582);
    i < 100; i++) {
        for (int i1 = (71 - 71);
        i1 < 100; i1++) {
            b[i][i1] = (406 - 405);
        };
    }
    for (int i = 0;
    row > i; i++) {
        for (int i1 = 0;
        i1 < uSlR1jv; i1++) {
            cin >> AX8Uydi3g[i][i1];
            b[i][i1] = 0;
        };
    }
    q = 0;
    dir = (530 - 529);
    for (int i = 0;
    i < row * uSlR1jv; i++) {
        cout << AX8Uydi3g[YwmRrbXL1z4c][q] << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        b[YwmRrbXL1z4c][q] = 1;
        switch (dir) {
        case 1 :
            if (b[YwmRrbXL1z4c][q + 1] == 0)
                q++;
            else {
                YwmRrbXL1z4c = YwmRrbXL1z4c +1;
                dir = 2;
            }
            break;
        case 2 :
            if (b[YwmRrbXL1z4c +1][q] == 0)
                YwmRrbXL1z4c++;
            else {
                dir = (99 - 96);
                q--;
            }
            break;
        case (942 - 939) :
            if (b[YwmRrbXL1z4c][q - 1] == 0)
                q--;
            else {
                dir = (324 - 320);
                YwmRrbXL1z4c--;
            }
            break;
        case 4 :
            if (b[YwmRrbXL1z4c -1][q] == 0)
                YwmRrbXL1z4c--;
            else {
                dir = 1;
                q++;
            }
            break;
        };
    }
    return 0;
}

