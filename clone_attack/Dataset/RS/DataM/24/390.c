int main () {
    char s [(10039 - 39)];
    char d [(357 - 157)] [(569 - 519)];
    char b [(809 - 759)];
    char SOFG0bQqv [50];
    int i, AHQ5ctAV94, l, FtsCYPlvXf = (665 - 665), k = (670 - 670), Nvy9WSt, Aq96yweB1Rhl, FrPhdUNY;
    gets (s);
    l = strlen (s);
    {
        i = 274 - 274;
        while (i < l) {
            if (s[i] != ' ') {
                d[FtsCYPlvXf][k] = s[i];
                k++;
            }
            else {
                FtsCYPlvXf++;
                k = (147 - 147);
            }
            i++;
        };
    }
    FtsCYPlvXf++;
    Nvy9WSt = strlen (d[(937 - 937)]);
    Aq96yweB1Rhl = Nvy9WSt;
    strcpy (b, d[(757 - 757)]);
    strcpy (SOFG0bQqv, d[0]);
    for (AHQ5ctAV94 = (246 - 245); AHQ5ctAV94 < FtsCYPlvXf; AHQ5ctAV94++) {
        FrPhdUNY = strlen (d[AHQ5ctAV94]);
        if (Nvy9WSt < FrPhdUNY) {
            Nvy9WSt = strlen (d[AHQ5ctAV94]);
            strcpy (b, d[AHQ5ctAV94]);
        }
        if (Aq96yweB1Rhl > FrPhdUNY) {
            Aq96yweB1Rhl = strlen (d[AHQ5ctAV94]);
            strcpy (SOFG0bQqv, d[AHQ5ctAV94]);
        };
    }
    printf ("%s\n%s", b, SOFG0bQqv);
    return 0;
}

