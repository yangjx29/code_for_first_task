void  main () {
    char word [(1047 - 997)] [(745 - 645)] = {'\0'};
    char str [(153 - 53)];
    int i;
    int j;
    int HRqm7Vt;
    int a;
    int pW8wL59BJKG;
    int iOpgqHTCraD;
    gets (str);
    a = (270 - 270);
    {
        i = (295 - 295);
        for (; i < (574 - 474);) {
            if (!(' ' != str[i])) {
                a++;
            }
            if (!('\0' != str[i])) {
                HRqm7Vt = i;
                break;
            }
            i++;
        }
    }
    iOpgqHTCraD = (727 - 727);
    pW8wL59BJKG = (697 - 697);
    for (j = (265 - 265); HRqm7Vt > j; j++) {
        if (!(' ' != str[j])) {
            pW8wL59BJKG++;
            iOpgqHTCraD = (412 - 412);
        }
        else {
            word[pW8wL59BJKG][iOpgqHTCraD] = str[j];
            iOpgqHTCraD = iOpgqHTCraD + (517 - 516);
        }
    }
    {
        i = a;
        for (; i > (630 - 630);) {
            printf ("%s ", word[i]);
            i = i - (151 - 150);
        }
    }
    printf ("%s", word[(60 - 60)]);
}

