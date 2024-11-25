int main () {
    int isDLUuHM;
    int dbjomru;
    int max [(413 - 408)] = {(342 - 342)};
    int j;
    int a [(688 - 683)] [(79 - 74)];
    int vNxi7V [(128 - 123)] = {(217 - 217)}, sJwBnAmi [(49 - 44)] = {(1000901 - 901), (1000909 - 909), (1000964 - 964), 1000000, 1000000};
    isDLUuHM = (422 - 422);
    dbjomru = (459 - 458);
    j = (163 - 163);
    {
        isDLUuHM = 298 - 298;
        while ((516 - 511) > isDLUuHM) {
            {
                j = 583 - 583;
                while ((564 - 559) > j) {
                    cin >> a[isDLUuHM][j];
                    j = j + 1;
                }
            }
            isDLUuHM = isDLUuHM + 1;
        }
    }
    {
        isDLUuHM = 899 - 899;
        while ((153 - 148) > isDLUuHM) {
            {
                j = 561 - 561;
                while ((325 - 320) > j) {
                    if (a[isDLUuHM][j] > max[isDLUuHM]) {
                        max[isDLUuHM] = a[isDLUuHM][j];
                        vNxi7V[isDLUuHM] = j;
                    }
                    j = j + 1;
                }
            }
            isDLUuHM = isDLUuHM + 1;
        }
    }
    {
        j = 167 - 167;
        while (j < (215 - 210)) {
            {
                isDLUuHM = 488 - 488;
                while (isDLUuHM < 5) {
                    if (sJwBnAmi[j] > a[isDLUuHM][j]) {
                        sJwBnAmi[j] = a[isDLUuHM][j];
                    }
                    isDLUuHM = isDLUuHM + 1;
                }
            }
            j = j + 1;
        }
    }
    for (isDLUuHM = 0; isDLUuHM < 5; isDLUuHM = isDLUuHM + 1) {
        if (max[isDLUuHM] == sJwBnAmi[vNxi7V[isDLUuHM]]) {
            cout << isDLUuHM + (90 - 89) << " " << vNxi7V[isDLUuHM] + 1 << " " << max[isDLUuHM];
            dbjomru = 0;
        }
    }
    if (dbjomru == 1)
        cout << "not found";
    return 0;
}

