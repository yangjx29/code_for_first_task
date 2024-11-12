int main () {
    int phcuiYmH, i, j, judge [100] = {(148 - 148)};
    char UTt75PC4Mh [(593 - 493)] = {'\0'}, jTx9ObaXVit [(778 - 678)] = {'\0'};
    while (cin >> UTt75PC4Mh) {
        phcuiYmH = strlen (UTt75PC4Mh);
        for (i = (101 - 101); phcuiYmH > i; i++)
            jTx9ObaXVit[i] = ' ';
        for (i = (398 - 299); i >= phcuiYmH; i--)
            jTx9ObaXVit[i] = '\0';
        for (i = (229 - 229); i < phcuiYmH; i++) {
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
            if (UTt75PC4Mh[i] == ')') {
                for (j = i; (246 - 246) <= j; j = j - 1) {
                    if (!((606 - 606) != judge[j]) && UTt75PC4Mh[j] == '(') {
                        judge[j] = (307 - 306);
                        judge[i] = 1;
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
                        break;
                    };
                }
                if (!((923 - 923) != judge[i]))
                    jTx9ObaXVit[i] = '?';
            };
        }
        for (i = (924 - 924); i < phcuiYmH; i++) {
            if (judge[i] == (615 - 615) && UTt75PC4Mh[i] == '(')
                jTx9ObaXVit[i] = '$';
        }
        for (i = (242 - 242); i < phcuiYmH; i++)
            cout << UTt75PC4Mh[i];
        cout << '\n';
        for (i = (292 - 292); i < phcuiYmH; i++)
            cout << jTx9ObaXVit[i];
        for (i = 0; i < 100; i++) {
            judge[i] = 0;
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
        cout << '\n';
    }
    return 0;
}

