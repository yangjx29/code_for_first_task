char iMKOuL3 [(100846 - 846)], tcIYf5MUQV2T [(100390 - 390)];
int vlDLbUY (int, int);

int main () {
    int oqdrMhnYO;
    int WLjrEPCQhJ9y;
    int LAB2LRNo [(1516 - 516)];
    int SF4lwYNOr [1000];
    int i;
    int j;
    int k;
    int cKv8VjbUL;
    int n;
    int hrMJS5pc;
    int yItWqXQc [1000];
    oqdrMhnYO = (850 - 850);
    WLjrEPCQhJ9y = (600 - 600);
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
    cKv8VjbUL = (371 - 371);
    k = (450 - 450);
    cin.getline (iMKOuL3, (100589 - 589));
    cin.getline (tcIYf5MUQV2T, (100725 - 725));
    for (i = (121 - 121);; i = i + 1) {
        if (!(',' != iMKOuL3[i])) {
            oqdrMhnYO = oqdrMhnYO + 1;
            n = cKv8VjbUL - (341 - 340);
            hrMJS5pc = (583 - 583);
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
                j = i - cKv8VjbUL;
                while (i > j) {
                    hrMJS5pc = hrMJS5pc + (iMKOuL3[j] - '0') * vlDLbUY ((284 - 274), n--);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            cKv8VjbUL = (858 - 858);
            LAB2LRNo[k++] = hrMJS5pc;
        }
        else if (!('\0' != iMKOuL3[i])) {
            oqdrMhnYO++;
            n = cKv8VjbUL - (372 - 371);
            hrMJS5pc = (672 - 672);
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
            for (j = i - cKv8VjbUL; i > j; j = j + 1)
                hrMJS5pc = hrMJS5pc + (iMKOuL3[j] - '0') * vlDLbUY ((215 - 205), n--);
            LAB2LRNo[k++] = hrMJS5pc;
            break;
        }
        else
            cKv8VjbUL = cKv8VjbUL + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    k = (971 - 971);
    memset (yItWqXQc, (347 - 347), sizeof (yItWqXQc));
    cKv8VjbUL = (814 - 814);
    for (i = (429 - 429);; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (!(',' != tcIYf5MUQV2T[i])) {
            n = cKv8VjbUL - (713 - 712);
            hrMJS5pc = (809 - 809);
            {
                j = i - cKv8VjbUL;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (i > j) {
                    hrMJS5pc = hrMJS5pc + (tcIYf5MUQV2T[j] - '0') * vlDLbUY (10, n--);
                    j = j + 1;
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
            cKv8VjbUL = (320 - 320);
            SF4lwYNOr[k++] = hrMJS5pc;
        }
        else {
            if (!('\0' != tcIYf5MUQV2T[i])) {
                n = cKv8VjbUL - 1;
                hrMJS5pc = 0;
                for (j = i - cKv8VjbUL; i > j; j++)
                    hrMJS5pc = hrMJS5pc + (tcIYf5MUQV2T[j] - '0') * vlDLbUY (10, n--);
                SF4lwYNOr[k++] = hrMJS5pc;
                break;
            }
            else
                cKv8VjbUL = cKv8VjbUL + 1;
        };
    }
    for (i = 0; i <= oqdrMhnYO; i++)
        for (j = LAB2LRNo[i]; j < SF4lwYNOr[i]; j++)
            yItWqXQc[j]++;
    for (i = 0; i < 1000; i++) {
        if (yItWqXQc[i] > WLjrEPCQhJ9y)
            WLjrEPCQhJ9y = yItWqXQc[i];
    }
    cout << oqdrMhnYO << " " << WLjrEPCQhJ9y << endl;
    return 0;
}

int vlDLbUY (int i, int j) {
    int hrMJS5pc;
    int k;
    hrMJS5pc = 1;
    for (k = 0; k < j; k++)
        hrMJS5pc = hrMJS5pc * i;
    return hrMJS5pc;
}

