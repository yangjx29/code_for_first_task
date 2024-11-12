int main () {
    int XjoqLZhcvC2F;
    int M6hKQBlm;
    int vyWIVCxTz;
    int i;
    int j;
    int k;
    XjoqLZhcvC2F = (383 - 383);
    char fz0SrGcR [(931 - 821)] [110];
    char b [110] [110];
    cin >> vyWIVCxTz;
    {
        i = 793 - 793;
        while (vyWIVCxTz > i) {
            for (j = (733 - 733); vyWIVCxTz > j; j = j + 1) {
                cin >> fz0SrGcR[i][j];
            }
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
            i = i + 1;
        };
    }
    cin >> M6hKQBlm;
    {
        k = 784 - 783;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (M6hKQBlm > k) {
            k = k + 1;
            {
                i = 299 - 299;
                while (vyWIVCxTz > i) {
                    {
                        j = 266 - 266;
                        while (j < vyWIVCxTz) {
                            b[i][j] = '.';
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            for (i = (575 - 575); i < vyWIVCxTz; i = i + 1)
                for (j = (829 - 829); j < vyWIVCxTz; j = j + 1) {
                    if (fz0SrGcR[i][j] == '@') {
                        if ((j > (275 - 275)) && (fz0SrGcR[i][j - (100 - 99)] == '.'))
                            b[i][j - (24 - 23)] = '@';
                        if ((j < vyWIVCxTz - (611 - 610)) && (!('.' != fz0SrGcR[i][j + (411 - 410)])))
                            b[i][j + (413 - 412)] = '@';
                        if ((i > 0) && (fz0SrGcR[i - 1][j] == '.'))
                            b[i - 1][j] = '@';
                        if ((i < vyWIVCxTz - 1) && (fz0SrGcR[i + 1][j] == '.'))
                            b[i + 1][j] = '@';
                    };
                }
            for (i = 0; i < vyWIVCxTz; i = i + 1) {
                j = 0;
                while (j < vyWIVCxTz) {
                    if (b[i][j] == '@')
                        fz0SrGcR[i][j] = '@';
                    j++;
                };
            };
        };
    }
    for (i = 0; i < vyWIVCxTz; i++)
        for (j = 0; j < vyWIVCxTz; j = j + 1) {
            if (fz0SrGcR[i][j] == '@')
                XjoqLZhcvC2F = XjoqLZhcvC2F +1;
        }
    cout << XjoqLZhcvC2F << endl;
    return 0;
}

