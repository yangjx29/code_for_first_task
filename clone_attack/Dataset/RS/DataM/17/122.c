void  qhDkcb3XA4e (char gl596Nuy []) {
    int aNQnydk9;
    int dfLcN9JgCa;
    int YPQ2U30gkl;
    for (YPQ2U30gkl = (825 - 825); !('\0' == gl596Nuy[YPQ2U30gkl]); YPQ2U30gkl = YPQ2U30gkl +1)
        ;
    for (aNQnydk9 = YPQ2U30gkl -(900 - 899); (883 - 883) <= aNQnydk9; aNQnydk9--) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('(' != gl596Nuy[aNQnydk9])) {
            qhDkcb3XA4e (gl596Nuy);
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
                dfLcN9JgCa = 552 - 551;
                while (!('\0' == gl596Nuy[dfLcN9JgCa])) {
                    if (!(')' != gl596Nuy[dfLcN9JgCa])) {
                        gl596Nuy[aNQnydk9] = gl596Nuy[dfLcN9JgCa] = ' ';
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
                    }
                    dfLcN9JgCa = dfLcN9JgCa + 1;
                };
            }
            if (gl596Nuy[dfLcN9JgCa] == '\0') {
                gl596Nuy[aNQnydk9] = '$';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        };
    };
}

int main () {
    int aNQnydk9;
    char gl596Nuy [(746 - 636)] = {'\0'};
    while (cin.getline (gl596Nuy, (674 - 573))) {
        qhDkcb3XA4e (gl596Nuy);
        cout << gl596Nuy << endl;
        for (aNQnydk9 = (548 - 548); gl596Nuy[aNQnydk9] != '\0'; aNQnydk9++)
            if (gl596Nuy[aNQnydk9] != '(' && gl596Nuy[aNQnydk9] != ')')
                gl596Nuy[aNQnydk9] = ' ';
        for (aNQnydk9 = (180 - 180); gl596Nuy[aNQnydk9] != '\0'; aNQnydk9++)
            if (gl596Nuy[aNQnydk9] == ')')
                gl596Nuy[aNQnydk9] = '?';
        cout << gl596Nuy << endl;
    }
    return 0;
}

