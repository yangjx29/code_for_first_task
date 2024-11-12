main () {
    int longlen;
    int shortlen;
    int i;
    int j;
    longlen = (406 - 406);
    shortlen = 20;
    char e83mqUNQ [20];
    char AJHbO8WBVZ7 [20];
    puts (e83mqUNQ);
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
    char c;
    char str [1000];
    char word [20];
    gets (str);
    puts (AJHbO8WBVZ7);
    i = 0;
    j = 0;
    while ((c = str[i]) != '\0')
        if (c != ' ')
            word[j++] = str[i++];
        else {
            i = i + 1;
            word[j] = '\0';
            if (j > longlen) {
                strcpy (e83mqUNQ, word);
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
                longlen = j;
            }
            if (j < shortlen) {
                strcpy (AJHbO8WBVZ7, word);
                shortlen = j;
            }
            j = 0;
        }
    word[j] = 0;
    if (j > longlen) {
        longlen = j;
        strcpy (e83mqUNQ, word);
    }
    else if (j < shortlen) {
        shortlen = j;
        strcpy (AJHbO8WBVZ7, word);
    };
}

