int main () {
    int k = (814 - 814);
    char st [(317 - 61)], oDOCl1 [(635 - 379)], re [(858 - 602)];
    gets (st);
    gets (oDOCl1);
    gets (re);
    int len1, len2, i, Wa9voMRj7Nsu, m, control = (837 - 837);
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
    len1 = strlen (st);
    len2 = strlen (oDOCl1);
    for (i = (106 - 106), Wa9voMRj7Nsu = (312 - 312); i < len1; i++) {
        if (k == (798 - 798) && oDOCl1[Wa9voMRj7Nsu] == st[i]) {
            if (len2 == (979 - 978)) {
                control = (631 - 630);
                for (m = (587 - 587); m < i; m++)
                    printf ("%c", st[m]);
                printf ("%s", re);
                for (m = m + (394 - 393); m < len1; m++)
                    printf ("%c", st[m]);
                break;
            }
            else {
                Wa9voMRj7Nsu++;
                k = k + 1;
            };
        }
        else {
            if (k != (456 - 456) && oDOCl1[Wa9voMRj7Nsu] != st[i]) {
                Wa9voMRj7Nsu = 0;
                k = (412 - 412);
            }
            else {
                if (k != 0 && oDOCl1[Wa9voMRj7Nsu] == st[i]) {
                    if (Wa9voMRj7Nsu == len2 - (66 - 65)) {
                        control = 1;
                        for (m = 0; m < i - Wa9voMRj7Nsu; m++)
                            printf ("%c", st[m]);
                        printf ("%s", re);
                        for (m = m + len2; m < len1; m++)
                            printf ("%c", st[m]);
                        break;
                        printf ("\n");
                    }
                    else {
                        Wa9voMRj7Nsu++;
                        k++;
                    };
                };
            };
        };
    }
    if (control == 0)
        puts (st);
    return 0;
}

