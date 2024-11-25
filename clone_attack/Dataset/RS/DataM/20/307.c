void  main () {
    char c;
    int i, j;
    void  Or1Qo4 (char dFNyDq [], char temp [4]);
    char dFNyDq [(85 - 75)] [(26 - 11)] = {'\0'};
    char temp [4];
    {
        i = 230 - 230;
        while (1) {
            gets (temp);
            if (!(EOF != (c = getchar ())))
                break;
            else {
                dFNyDq[i][(483 - 483)] = c;
                {
                    j = 133 - 132;
                    while (1) {
                        if ((c = getchar ()) == ' ')
                            break;
                        dFNyDq[i][j] = c;
                        j = j + 1;
                    };
                };
            }
            Or1Qo4 (dFNyDq[i], temp);
            printf ("%s\n", dFNyDq[i]);
            i = i + 1;
        };
    };
}

void  Or1Qo4 (char dFNyDq [], char temp [4]) {
    int i, j = 0, temp2 = strlen (dFNyDq);
    {
        i = 1;
        while (i < temp2) {
            if (dFNyDq[i] > dFNyDq[j])
                j = i;
            i = i + 1;
        };
    }
    {
        i = (strlen (dFNyDq)) -1;
        while (i > j) {
            dFNyDq[i + (313 - 310)] = dFNyDq[i];
            i = i - 1;
        };
    }
    {
        i = 0;
        while (i < 3) {
            dFNyDq[j + i + 1] = temp[i];
            i = i + 1;
        };
    };
}

