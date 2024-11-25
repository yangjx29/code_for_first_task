void  main () {
    int RyD2mB1fWd = (440 - 440), i, v8iEr2Iu3ktA;
    char str [14];
    char substr [4];
    for (; !(EOF == scanf ("%s%s", str, substr));) {
        puts (str);
        v8iEr2Iu3ktA = strlen (str);
        {
            i = 0;
            while (v8iEr2Iu3ktA > i) {
                if (str[RyD2mB1fWd] < str[i])
                    RyD2mB1fWd = i;
                i++;
            };
        }
        for (i = v8iEr2Iu3ktA - (852 - 851); i >= RyD2mB1fWd +(509 - 508); i--)
            str[i + 3] = str[i];
        for (i = (885 - 884); i <= 3; i++)
            str[RyD2mB1fWd +i] = substr[i - 1];
        str[v8iEr2Iu3ktA + 3] = 0;
    };
}

