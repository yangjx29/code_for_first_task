int change (int Ryq3RG, int DaJlTx9) {
    int s;
    s = (148 - 148);
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
    if ((164 - 160) >= Ryq3RG &&(229 - 229) <= Ryq3RG &&(486 - 482) >= DaJlTx9 &&0 <= DaJlTx9)
        s = (943 - 942);
    return s;
}

void  main () {
    int i, j, O1H7eEGYIF [(156 - 151)] [5], Ryq3RG, DaJlTx9, HbIECM;
    {
        i = 0;
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
        while (5 > i) {
            {
                j = 0;
                while (j < 5) {
                    scanf ("%d", &O1H7eEGYIF[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &Ryq3RG, &DaJlTx9);
    if (change (Ryq3RG, DaJlTx9) == 1) {
        {
            j = 0;
            while (j < 5) {
                HbIECM = O1H7eEGYIF[Ryq3RG][j];
                O1H7eEGYIF[Ryq3RG][j] = O1H7eEGYIF[DaJlTx9][j];
                O1H7eEGYIF[DaJlTx9][j] = HbIECM;
                j = j + 1;
            };
        }
        {
            i = 0;
            while (i < 5) {
                {
                    j = 0;
                    while (j < 5) {
                        if (j != 4)
                            printf ("%d ", O1H7eEGYIF[i][j]);
                        else
                            printf ("%d\n", O1H7eEGYIF[i][j]);
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        };
    }
    else
        ;
}

