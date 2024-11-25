int main () {
    int hY02Sb, Dy784VIcqG, Vx3brHtc62 [1000], eqiutBdQ [1000];
    char Tx5INg8 [1000];
    char *abNcGYAC4BQ = Tx5INg8;
    gets (Tx5INg8);
    int mUZnzymi = strlen (Tx5INg8);
    for (Dy784VIcqG = 0, hY02Sb = (185 - 184); !('\0' == *abNcGYAC4BQ); abNcGYAC4BQ++, Dy784VIcqG++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*abNcGYAC4BQ == ' ') {
            Vx3brHtc62[hY02Sb] = Dy784VIcqG;
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
            hY02Sb++;
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
    Vx3brHtc62[0] = -1;
    Vx3brHtc62[hY02Sb] = mUZnzymi;
    {
        Dy784VIcqG = 0;
        while (Dy784VIcqG < hY02Sb - 1) {
            eqiutBdQ[Dy784VIcqG] = Vx3brHtc62[Dy784VIcqG +1] - Vx3brHtc62[Dy784VIcqG] - 1;
            if (eqiutBdQ[Dy784VIcqG] == 0) {
                continue;
            }
            printf ("%d,", eqiutBdQ[Dy784VIcqG]);
            Dy784VIcqG++;
        };
    }
    eqiutBdQ[Dy784VIcqG] = Vx3brHtc62[Dy784VIcqG +1] - Vx3brHtc62[Dy784VIcqG] - 1;
    printf ("%d", eqiutBdQ[Dy784VIcqG]);
    return 0;
}

