int main () {
    char TALpzCk [(2890 - 890)] [500];
    int Af4UtWHaCD3i;
    int bAzMOkKGe;
    int Tlx9en3TrKgm;
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
    scanf ("%d", &Tlx9en3TrKgm);
    for (Af4UtWHaCD3i = (979 - 979); Tlx9en3TrKgm > Af4UtWHaCD3i; Af4UtWHaCD3i = Af4UtWHaCD3i +1)
        scanf ("%s", &TALpzCk[Af4UtWHaCD3i]);
    {
        Af4UtWHaCD3i = 120 - 120;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Af4UtWHaCD3i < Tlx9en3TrKgm) {
            for (bAzMOkKGe = (88 - 88); (strlen (TALpzCk[Af4UtWHaCD3i])) > bAzMOkKGe; bAzMOkKGe = bAzMOkKGe + 1) {
                if (!('A' != TALpzCk[Af4UtWHaCD3i][bAzMOkKGe]))
                    TALpzCk[Af4UtWHaCD3i][bAzMOkKGe] = 'T';
                else {
                    if (!('T' != TALpzCk[Af4UtWHaCD3i][bAzMOkKGe]))
                        TALpzCk[Af4UtWHaCD3i][bAzMOkKGe] = 'A';
                    else {
                        if (TALpzCk[Af4UtWHaCD3i][bAzMOkKGe] == 'C')
                            TALpzCk[Af4UtWHaCD3i][bAzMOkKGe] = 'G';
                        else {
                            if (TALpzCk[Af4UtWHaCD3i][bAzMOkKGe] == 'G')
                                TALpzCk[Af4UtWHaCD3i][bAzMOkKGe] = 'C';
                        };
                    };
                };
            }
            Af4UtWHaCD3i = Af4UtWHaCD3i +1;
        };
    }
    {
        Af4UtWHaCD3i = 0;
        while (Af4UtWHaCD3i < Tlx9en3TrKgm) {
            printf ("%s\n", TALpzCk[Af4UtWHaCD3i]);
            Af4UtWHaCD3i++;
        };
    }
    return 0;
}

