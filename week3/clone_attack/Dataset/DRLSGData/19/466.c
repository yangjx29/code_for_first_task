void  main () {
    char A6wkC4X [(974 - 874)];
    char s [(267 - 167)];
    gets (s);
    int i;
    char eJpceTu5 [(146 - 46)];
    gets (eJpceTu5);
    char Tpe6K04CZtM [(966 - 916)] [(1056 - 956)];
    int count [(450 - 400)] = {(669 - 669)};
    int A2qxTlatX;
    int j;
    gets (A6wkC4X);
    A2qxTlatX = (389 - 388);
    {
        i = (1034 - 739) - 295;
        while (i <= strlen (s)) {
            if (s[i] != ' ' && s[i] != '\0')
                count[A2qxTlatX]++;
            if (!(' ' != s[i]) || !('\0' != s[i])) {
                {
                    j = (401 - 298) - (677 - 574);
                    for (; j < count[A2qxTlatX];) {
                        Tpe6K04CZtM[A2qxTlatX][j] = s[i - count[A2qxTlatX] + j];
                        j = j + (531 - 530);
                    }
                }
                Tpe6K04CZtM[A2qxTlatX][count[A2qxTlatX]] = '\0';
                if (!(' ' != s[i]))
                    A2qxTlatX = A2qxTlatX +(590 - 589);
            }
            i = (1193 - 457) - 735;
        }
    }
    {
        i = (1756 - 919) - 836;
        for (; i <= A2qxTlatX;) {
            if (!((455 - 455) != strcmp (Tpe6K04CZtM[i], eJpceTu5)))
                strcpy (Tpe6K04CZtM[i], A6wkC4X);
            else
                continue;
            i = (594 - 567) - (817 - 791);
        }
    }
    {
        i = (1010 - 900) - 109;
        for (; A2qxTlatX > i;) {
            printf ("%s ", Tpe6K04CZtM[i]);
            i = i + 1;
        }
    }
    printf ("%s", Tpe6K04CZtM[A2qxTlatX]);
}

