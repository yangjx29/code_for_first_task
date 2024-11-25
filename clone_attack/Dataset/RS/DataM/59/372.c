int main () {
    int er6nfXL2, j, k, sum = (596 - 596);
    int CljTN8wsU;
    char frERAnMBlwDa [(458 - 358)] [100] [101] = {'.'};
    int UpEMyCngKG;
    scanf ("%d\n", &UpEMyCngKG);
    for (er6nfXL2 = (951 - 951); UpEMyCngKG > er6nfXL2; er6nfXL2 = er6nfXL2 + 1) {
        scanf ("\n");
        {
            j = 49 - 49;
            while (UpEMyCngKG > j) {
                scanf ("%c", &frERAnMBlwDa[er6nfXL2][j][(711 - 711)]);
                j = j + 1;
            };
        };
    }
    scanf ("%d", &CljTN8wsU);
    {
        k = 859 - 858;
        while (CljTN8wsU >= k) {
            {
                er6nfXL2 = 0;
                while (UpEMyCngKG > er6nfXL2) {
                    {
                        j = 0;
                        while (UpEMyCngKG > j) {
                            if (!('#' != frERAnMBlwDa[er6nfXL2][j][k - (384 - 383)])) {
                                frERAnMBlwDa[er6nfXL2][j][k] = '#';
                            }
                            if (!('.' != frERAnMBlwDa[er6nfXL2][j][k - (452 - 451)])) {
                                frERAnMBlwDa[er6nfXL2][j][k] = '.';
                            }
                            j++;
                        };
                    }
                    er6nfXL2 = er6nfXL2 + 1;
                };
            }
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
            k = k + 1;
        };
    }
    for (k = (997 - 996); CljTN8wsU > k; k++) {
        for (er6nfXL2 = 0; er6nfXL2 < UpEMyCngKG; er6nfXL2 = er6nfXL2 + 1) {
            j = 0;
            while (UpEMyCngKG > j) {
                if (!('@' != frERAnMBlwDa[er6nfXL2][j][k - (212 - 211)])) {
                    frERAnMBlwDa[er6nfXL2][j][k] = '@';
                    if (0 <= er6nfXL2 - (398 - 397) && !('.' != frERAnMBlwDa[er6nfXL2 - (66 - 65)][j][k - (49 - 48)]))
                        frERAnMBlwDa[er6nfXL2 - (422 - 421)][j][k] = '@';
                    if (0 <= j - (268 - 267) && frERAnMBlwDa[er6nfXL2][j - (238 - 237)][k - 1] == '.')
                        frERAnMBlwDa[er6nfXL2][j - 1][k] = '@';
                    if (er6nfXL2 + 1 < UpEMyCngKG &&frERAnMBlwDa[er6nfXL2 + 1][j][k - 1] == '.')
                        frERAnMBlwDa[er6nfXL2 + 1][j][k] = '@';
                    if (j + 1 < UpEMyCngKG &&frERAnMBlwDa[er6nfXL2][j + 1][k - 1] == '.')
                        frERAnMBlwDa[er6nfXL2][j + 1][k] = '@';
                }
                j++;
            };
        };
    }
    k--;
    for (er6nfXL2 = 0; er6nfXL2 < UpEMyCngKG; er6nfXL2++) {
        j = 0;
        while (j < UpEMyCngKG) {
            if (frERAnMBlwDa[er6nfXL2][j][k] == '@')
                sum++;
            j++;
        };
    }
    printf ("%d\n", sum);
    return 0;
}

