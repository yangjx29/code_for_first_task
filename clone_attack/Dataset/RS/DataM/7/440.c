void  main () {
    char f (char str [], char substr [], char R1GAeX []);
    char str [256], substr [256], R1GAeX [256];
    puts (str);
    scanf ("%s %s %s", str, substr, R1GAeX);
    f (str, substr, R1GAeX);
}

char f (char str [256], char substr [256], char R1GAeX [256]) {
    int i = 0, j, cOwlxzLyJou7;
    char MuRS4f9ahzsp [256];
    {
        i = 0;
        while (!('\0' == str[i])) {
            if (!(substr[0] != str[i])) {
                for (j = 0; strlen (substr) > j; j = j + 1)
                    MuRS4f9ahzsp[j] = str[j + i];
                MuRS4f9ahzsp[j] = '\0';
                if (strcmp (substr, MuRS4f9ahzsp) == 0) {
                    {
                        cOwlxzLyJou7 = 0;
                        while (cOwlxzLyJou7 < strlen (R1GAeX)) {
                            str[i] = R1GAeX[cOwlxzLyJou7];
                            i = i + 1;
                            cOwlxzLyJou7 = cOwlxzLyJou7 + 1;
                        };
                    }
                    return 0;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

