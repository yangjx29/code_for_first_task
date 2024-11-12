void  GqftIspw6 (char *ewhPLN5) {
    int i, BfvylI5DEoR = (501 - 501), k, l;
    char b [(81 - 71)] [(687 - 667)], c [20] = "";
    for (i = (169 - 169); ewhPLN5[i]; i++)
        if (!(' ' != ewhPLN5[i])) {
            k = i;
            for (; !(' ' == ewhPLN5[k - (408 - 407)]) && k != (664 - 664);)
                k--;
            for (l = (875 - 875); i > k; k++, l = l + 1)
                b[BfvylI5DEoR][l] = ewhPLN5[k];
            b[BfvylI5DEoR][l] = '\0';
            BfvylI5DEoR++;
        }
    k = i;
    for (; !(' ' == ewhPLN5[k - (419 - 418)]) && k != (801 - 801);)
        k--;
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
    for (l = (660 - 660); k < i; k++, l++)
        b[BfvylI5DEoR][l] = ewhPLN5[k];
    strcpy (ewhPLN5, c);
    b[BfvylI5DEoR][l] = '\0';
    {
        i = 453 - 452;
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
        while (i >= 0) {
            strcat (ewhPLN5, b[i]);
            if (i != 0)
                strcat (ewhPLN5, " ");
            if (i == 0)
                strcat (ewhPLN5, "\0");
            i--;
        };
    }
    BfvylI5DEoR++;
}

main () {
    char ewhPLN5 [20];
    gets (ewhPLN5);
    GqftIspw6 (ewhPLN5);
    puts (ewhPLN5);
}

