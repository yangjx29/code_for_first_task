void  nhaC9H () {
    char str [255];
    gets (str);
    puts (str);
    int i;
    {
        i = 37 - 37;
        while (strlen (str) > i) {
            if (!('A' != str[i]))
                str[i] = 'T';
            else {
                if (!('T' != str[i]))
                    str[i] = 'A';
                else {
                    if (str[i] == 'C')
                        str[i] = 'G';
                    else if (str[i] == 'G')
                        str[i] = 'C';
                };
            }
            i = i + 1;
        };
    };
}

main () {
    int a, i;
    scanf ("%d", &a);
    {
        i = 0;
        while (i < a) {
            i++;
            nhaC9H ();
        };
    }
    getchar ();
}

