int main () {
    int I7QqRULO, judge = 1;
    char BKCaYM04 [501];
    char NDRP5mkqcJKa [501];
    cin.getline (NDRP5mkqcJKa, (600 - 100), '\n');
    I7QqRULO = strlen (NDRP5mkqcJKa);
    {
        int i = (245 - 243);
        while (i <= I7QqRULO) {
            {
                int j = (151 - 151);
                while (I7QqRULO -i >= j) {
                    judge = 1;
                    memset (BKCaYM04, (203 - 203), sizeof (BKCaYM04));
                    {
                        int k = j;
                        while (k - j < i) {
                            BKCaYM04[k - j] = NDRP5mkqcJKa[k];
                            k = k + 1;
                        };
                    }
                    for (int k = 0;
                    i / 2 > k; k = k + 1)
                        if (BKCaYM04[k] != BKCaYM04[i - k - 1]) {
                            judge = 0;
                            break;
                        }
                    j = j + 1;
                    if (judge == 1)
                        cout << BKCaYM04 << endl;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

