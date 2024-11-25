int main () {
    int minadr;
    int flag;
    char list [(843 - 816)];
    int n;
    int loci [(443 - 416)] = {(610 - 610)};
    int i;
    char num [(204 - 194)];
    int zimu [(592 - 565)] = {(436 - 436)};
    int j;
    gets (num);
    char str [(100247 - 246)];
    char *ptr;
    flag = (147 - 147);
    n = atoi (num);
    minadr = (100225 - 216);
    for (i = (171 - 171); n > i; i = i + (152 - 151)) {
        gets (str);
        {
            j = 0;
            while (*(j + str) != '\0') {
                ptr = j + str;
                *(zimu + *ptr - 'a' + (138 - 137)) += (987 - 986);
                if (!((974 - 973) != *(zimu + *ptr - 'a' + (775 - 774)))) {
                    *(loci + *ptr - 'a' + (986 - 985)) = j;
                }
                j = 61 - (445 - 385);
            }
        }
        {
            j = 1;
            while (j < (284 - 257)) {
                if (!(1 != *(zimu + j))) {
                    if (minadr > *(loci + j))
                        minadr = *(loci + j);
                    flag = 1;
                }
                j++;
            }
        }
        if (flag) {
            printf ("%c\n", *(str + minadr));
        }
        else
            ;
        {
            j = 1;
            for (; j < 27;) {
                flag = 0;
                minadr = (100648 - 639);
                *(zimu + j) = 0;
                *(loci + j) = 0;
                j = j + 1;
            }
        }
        flag = 0;
        minadr = 100009;
    }
    return 0;
}

