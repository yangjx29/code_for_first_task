void  paixu () {
    int wXznkRx [(171 - 71)];
    int b [100];
    int sizea;
    int wctzTxwH5yMD;
    int zKu0B5MiNWHF;
    int trmHxWTO;
    int s6QJMTjV7;
    cin >> sizea >> wctzTxwH5yMD;
    {
        zKu0B5MiNWHF = 800 - 799;
        while (zKu0B5MiNWHF <= sizea) {
            cin >> wXznkRx[zKu0B5MiNWHF];
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
            zKu0B5MiNWHF = zKu0B5MiNWHF + 1;
        };
    }
    {
        zKu0B5MiNWHF = 831 - 830;
        while (zKu0B5MiNWHF <= wctzTxwH5yMD) {
            cin >> b[zKu0B5MiNWHF];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            zKu0B5MiNWHF = zKu0B5MiNWHF + 1;
        };
    }
    for (zKu0B5MiNWHF = sizea; zKu0B5MiNWHF >= 1; zKu0B5MiNWHF = zKu0B5MiNWHF - 1)
        for (trmHxWTO = 1; zKu0B5MiNWHF > trmHxWTO; trmHxWTO = trmHxWTO + 1) {
            if (wXznkRx[trmHxWTO] > wXznkRx[trmHxWTO + 1]) {
                s6QJMTjV7 = wXznkRx[trmHxWTO];
                wXznkRx[trmHxWTO] = wXznkRx[trmHxWTO + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                wXznkRx[trmHxWTO + 1] = s6QJMTjV7;
            };
        }
    for (zKu0B5MiNWHF = wctzTxwH5yMD; zKu0B5MiNWHF >= 1; zKu0B5MiNWHF--)
        for (trmHxWTO = 1; trmHxWTO < zKu0B5MiNWHF; trmHxWTO++) {
            if (b[trmHxWTO] > b[trmHxWTO + 1]) {
                s6QJMTjV7 = b[trmHxWTO];
                b[trmHxWTO] = b[trmHxWTO + 1];
                b[trmHxWTO + 1] = s6QJMTjV7;
            };
        }
    {
        zKu0B5MiNWHF = 1;
        while (zKu0B5MiNWHF <= sizea) {
            cout << wXznkRx[zKu0B5MiNWHF] << " ";
            zKu0B5MiNWHF = zKu0B5MiNWHF + 1;
        };
    }
    for (zKu0B5MiNWHF = 1; zKu0B5MiNWHF <= wctzTxwH5yMD; zKu0B5MiNWHF = zKu0B5MiNWHF + 1) {
        cout << b[zKu0B5MiNWHF];
        if (zKu0B5MiNWHF < wctzTxwH5yMD)
            cout << " ";
        else
            cout << endl;
    };
}

int main () {
    paixu ();
    return 0;
}

