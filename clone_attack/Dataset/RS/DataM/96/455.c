int main () {
    char tHEXDdAFl [100];
    int Xhma1HjgbLqf [100];
    int O1457ahE [100];
    int pgKLxd3HTD, lmdKeE, oSideUDXj;
    int kL3kfDpq7Y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    kL3kfDpq7Y = (416 - 416);
    scanf ("%s", tHEXDdAFl);
    if (tHEXDdAFl[(523 - 522)] == '\0' || (!('\0' != tHEXDdAFl[(681 - 679)]) && ((784 - 771) > 10 * (tHEXDdAFl[(338 - 338)] - '0') + tHEXDdAFl[1] - '0'))) {
        printf ("%d\n", kL3kfDpq7Y);
        printf ("%s", tHEXDdAFl);
    }
    else {
        Xhma1HjgbLqf[1] = (10 * (tHEXDdAFl[0] - '0') + 1 * (tHEXDdAFl[1] - '0')) % 13;
        O1457ahE[1] = (10 * (tHEXDdAFl[0] - '0') + 1 * (tHEXDdAFl[1] - '0')) / 13;
        for (pgKLxd3HTD = 2, lmdKeE = 2; 100 >= pgKLxd3HTD;) {
            if (tHEXDdAFl[pgKLxd3HTD] != '\0') {
                Xhma1HjgbLqf[lmdKeE] = (10 * Xhma1HjgbLqf[lmdKeE - 1] + tHEXDdAFl[pgKLxd3HTD] - '0') % 13;
                O1457ahE[lmdKeE] = (int) ((10 * Xhma1HjgbLqf[lmdKeE - 1] + tHEXDdAFl[pgKLxd3HTD] - '0') / 13);
                pgKLxd3HTD = pgKLxd3HTD + 1;
                lmdKeE = lmdKeE + 1;
            }
            else
                break;
        }
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
        if (O1457ahE[1] != 0)
            printf ("%d", O1457ahE[1]);
        for (oSideUDXj = 2; oSideUDXj <= lmdKeE - 1; oSideUDXj++) {
            printf ("%d", O1457ahE[oSideUDXj]);
        }
        printf ("%d", Xhma1HjgbLqf[lmdKeE - 1]);
    }
    getchar ();
    getchar ();
}

