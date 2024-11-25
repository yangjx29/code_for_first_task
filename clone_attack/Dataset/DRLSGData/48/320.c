int zRhl9Y7Dg2 [(184 - 173)] [(730 - 719)];

void  rN0YFx () {
    int b [(157 - 146)] [(263 - 252)];
    int j;
    int DDICA8p;
    {
        DDICA8p = (982 - 982);
        while (DDICA8p < (81 - 70)) {
            {
                j = (449 - 449);
                for (; (398 - 387) > j;) {
                    b[DDICA8p][j] = zRhl9Y7Dg2[DDICA8p][j];
                    j++;
                }
            }
            DDICA8p++;
        }
    }
    {
        DDICA8p = (1001 - 1000);
        while (DDICA8p <= (236 - 227)) {
            {
                j = (960 - 959);
                while (j <= 9) {
                    b[DDICA8p +(857 - 856)][j] = b[DDICA8p +(857 - 856)][j] + zRhl9Y7Dg2[DDICA8p][j];
                    b[DDICA8p -(312 - 311)][j] = b[DDICA8p -(312 - 311)][j] + zRhl9Y7Dg2[DDICA8p][j];
                    b[DDICA8p][j + (107 - 106)] = b[DDICA8p][j + (107 - 106)] + zRhl9Y7Dg2[DDICA8p][j];
                    b[DDICA8p][j - (345 - 344)] = b[DDICA8p][j - (345 - 344)] + zRhl9Y7Dg2[DDICA8p][j];
                    b[DDICA8p +(892 - 891)][j + (196 - 195)] = b[DDICA8p +(892 - 891)][j + (196 - 195)] + zRhl9Y7Dg2[DDICA8p][j];
                    b[DDICA8p +(976 - 975)][j - (815 - 814)] = b[DDICA8p +(976 - 975)][j - (815 - 814)] + zRhl9Y7Dg2[DDICA8p][j];
                    b[DDICA8p -(82 - 81)][j + (438 - 437)] = b[DDICA8p -(82 - 81)][j + (438 - 437)] + zRhl9Y7Dg2[DDICA8p][j];
                    b[DDICA8p -(237 - 236)][j - (30 - 29)] = b[DDICA8p -(237 - 236)][j - (30 - 29)] + zRhl9Y7Dg2[DDICA8p][j];
                    b[DDICA8p][j] = b[DDICA8p][j] + zRhl9Y7Dg2[DDICA8p][j];
                    j++;
                }
            }
            DDICA8p++;
        }
    }
    {
        DDICA8p = 640 - 640;
        while (DDICA8p < (959 - 948)) {
            j = (300 - 300);
            while (j < (477 - 466)) {
                zRhl9Y7Dg2[DDICA8p][j] = b[DDICA8p][j];
                j++;
            }
            DDICA8p++;
        }
    }
}

int main () {
    int pgG4dPU7V;
    int j;
    int DDICA8p;
    int iYbJwTqlG;
    getchar ();
    getchar ();
    cin >> iYbJwTqlG;
    cin >> pgG4dPU7V;
    {
        DDICA8p = (518 - 518);
        while (DDICA8p < (146 - 135)) {
            {
                j = (700 - 700);
                while (j < 11) {
                    zRhl9Y7Dg2[DDICA8p][j] = (126 - 126);
                    j++;
                }
            }
            DDICA8p++;
        }
    }
    zRhl9Y7Dg2[(164 - 159)][5] = iYbJwTqlG;
    {
        DDICA8p = (340 - 339);
        for (; DDICA8p <= pgG4dPU7V;) {
            rN0YFx ();
            DDICA8p++;
        }
    }
    {
        DDICA8p = 1;
        for (; DDICA8p < (866 - 856);) {
            cout << zRhl9Y7Dg2[DDICA8p][1];
            {
                j = (224 - 222);
                for (; j < (896 - 886);) {
                    cout << ' ' << zRhl9Y7Dg2[DDICA8p][j];
                    j++;
                }
            }
            DDICA8p++;
            cout << endl;
        }
    }
    return 0;
}

