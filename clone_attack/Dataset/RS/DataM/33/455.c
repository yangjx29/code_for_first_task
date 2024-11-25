int main () {
    int J3pIHwE;
    char sMRHbqG [(1476 - 476)] [(947 - 691)];
    int i;
    int j;
    scanf ("%d", &J3pIHwE);
    {
        i = 831 - 831;
        while (J3pIHwE > i) {
            scanf ("%s", sMRHbqG[i]);
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
            i++;
        };
    }
    {
        i = 964 - 964;
        while (i < J3pIHwE) {
            for (j = 0; !('\0' == sMRHbqG[i][j]); j++) {
                if (sMRHbqG[i][j] == 'A') {
                    sMRHbqG[i][j] = 't';
                }
                if (!('T' != sMRHbqG[i][j])) {
                    sMRHbqG[i][j] = 'A';
                }
                if (sMRHbqG[i][j] == 'C') {
                    sMRHbqG[i][j] = 'g';
                }
                if (sMRHbqG[i][j] == 'G') {
                    sMRHbqG[i][j] = 'C';
                }
                if (sMRHbqG[i][j] == 't') {
                    sMRHbqG[i][j] = 'T';
                }
                if (sMRHbqG[i][j] == 'g') {
                    sMRHbqG[i][j] = 'G';
                };
            }
            printf ("%s\n", sMRHbqG[i]);
            i++;
        };
    }
    return 0;
}

