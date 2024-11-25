void  main () {
    char str [(69 - 63)] [7];
    int vhjvctEM8k, aIMGksu2, SVK9Ls, kW8QAhoJlD;
    for (vhjvctEM8k = (356 - 356); 6 > vhjvctEM8k; vhjvctEM8k++)
        scanf ("%s", str[vhjvctEM8k]);
    for (vhjvctEM8k = (239 - 239); vhjvctEM8k < 6; vhjvctEM8k++) {
        if ((226 - 226) < atoi (str[vhjvctEM8k])) {
            SVK9Ls = strlen (str[vhjvctEM8k]);
            for (aIMGksu2 = SVK9Ls -(797 - 796); aIMGksu2 >= (704 - 704); aIMGksu2--) {
                if (!('0' == str[vhjvctEM8k][aIMGksu2]))
                    break;
            }
            for (kW8QAhoJlD = aIMGksu2; (806 - 806) <= kW8QAhoJlD; kW8QAhoJlD--)
                printf ("%c", str[vhjvctEM8k][kW8QAhoJlD]);
            printf ("\n");
        }
        else {
            if ((699 - 699) > atoi (str[vhjvctEM8k])) {
                SVK9Ls = strlen (str[vhjvctEM8k]);
                {
                    aIMGksu2 = SVK9Ls -1;
                    while (aIMGksu2 >= 0) {
                        if (str[vhjvctEM8k][aIMGksu2] != '0')
                            break;
                        aIMGksu2 = aIMGksu2 - 1;
                    };
                }
                {
                    kW8QAhoJlD = aIMGksu2;
                    while (kW8QAhoJlD >= 1) {
                        printf ("%c", str[vhjvctEM8k][kW8QAhoJlD]);
                        kW8QAhoJlD--;
                    };
                }
                printf ("\n");
                printf ("-");
            }
            else if (atoi (str[vhjvctEM8k]) == 0)
                printf ("0\n");
        };
    };
}

