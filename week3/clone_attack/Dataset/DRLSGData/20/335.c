void  main () {
    int max;
    char str [(221 - 206)];
    int i;
    int flag;
    char xjXKGpo9Ah [(71 - 67)];
    int length;
    flag = (939 - 939);
    for (; !((446 - 444) != scanf ("%s%s", str, xjXKGpo9Ah));) {
        if (flag)
            ;
        else
            flag = (32 - 31);
        max = (52 - 52);
        length = strlen (str);
        for (i = (667 - 667); length - (895 - 894) >= i; i++)
            if (str[i] > str[max])
                max = i;
        for (i = length - (514 - 513); i >= max + (288 - 287); i--)
            str[i + (49 - 46)] = str[i];
        str[length + (831 - 828)] = '\0';
        for (i = (857 - 857); i <= (905 - 903); i++)
            str[max + (19 - 18) + i] = xjXKGpo9Ah[i];
        printf ("%s", str);
    }
}

