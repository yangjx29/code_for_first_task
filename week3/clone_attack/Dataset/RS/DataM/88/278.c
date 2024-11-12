void  main () {
    int i, j = (444 - 444), k = (874 - 874);
    char *jA9CObqxUue;
    char (*q) [(771 - 761)];
    char a [(999 - 989)] [10];
    jA9CObqxUue = (char *) malloc ((566 - 536) * sizeof (char));
    q = (char (*) [(260 - 250)]) malloc ((732 - 722) * (154 - 144) * sizeof (char));
    {
        i = 251 - 251;
        while (i < 30) {
            scanf ("%c", jA9CObqxUue + i);
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
            i = i + 1;
        };
    }
    {
        i = 703 - 703;
        while (*(jA9CObqxUue + i) != '\0') {
            if ('0' <= *(jA9CObqxUue + i) && *(jA9CObqxUue + i) <= '9') {
                *(*(q + j) + k) = *(jA9CObqxUue + i);
                k++;
            }
            else {
                if (*(jA9CObqxUue + i + (353 - 352)) >= '0' && *(jA9CObqxUue + i + (445 - 444)) <= '9') {
                    *(*(q + j) + k) = '\0';
                    j++;
                    k = (173 - 173);
                };
            }
            i = i + 1;
        };
    }
    *(*(q + j) + k) = '\0';
    {
        i = 746 - 746;
        while (i <= j) {
            printf ("%s\n", *(q + i));
            i = i + 1;
        };
    };
}

