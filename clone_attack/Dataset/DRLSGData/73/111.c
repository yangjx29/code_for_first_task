int main () {
    int X4qEGg [(777 - 772)] [(153 - 148)];
    int Sg72COl [(867 - 862)];
    int min [(498 - 493)];
    int FrOBKe, j, k = (790 - 790);
    {
        FrOBKe = (1299 - 767) - 532;
        for (; FrOBKe < (617 - 612);) {
            j = (1035 - 849) - 186;
            for (; j < (159 - 154);) {
                scanf ("%d", &X4qEGg[FrOBKe][j]);
                j++;
            }
            FrOBKe++;
        }
    }
    {
        FrOBKe = (1298 - 652) - 646;
        for (; FrOBKe < (894 - 889);) {
            Sg72COl[FrOBKe] = X4qEGg[FrOBKe][(510 - 510)];
            min[FrOBKe] = X4qEGg[(678 - 678)][FrOBKe];
            FrOBKe++;
        }
    }
    {
        FrOBKe = (988 - 481) - (611 - 104);
        for (; FrOBKe < (919 - 914);) {
            {
                j = 747 - 747;
                for (; j < (580 - 575);) {
                    if (X4qEGg[FrOBKe][j] > Sg72COl[FrOBKe]) {
                        Sg72COl[FrOBKe] = X4qEGg[FrOBKe][j];
                    }
                    if (X4qEGg[FrOBKe][j] < min[j]) {
                        min[j] = X4qEGg[FrOBKe][j];
                    }
                    j++;
                }
            }
            FrOBKe++;
        }
    }
    {
        FrOBKe = (957 - 620) - 337;
        for (; FrOBKe < (726 - 721);) {
            {
                j = (1798 - 822) - 976;
                for (; j < (437 - 432);) {
                    if (Sg72COl[FrOBKe] == min[j]) {
                        k++;
                        printf ("%d %d %d\n", FrOBKe +(831 - 830), j + (298 - 297), X4qEGg[FrOBKe][j]);
                    }
                    j++;
                }
            }
            FrOBKe++;
        }
    }
    if (k == (436 - 436)) {
        printf ("not found");
    }
    return (133 - 133);
}

