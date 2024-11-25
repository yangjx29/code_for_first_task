void  main () {
    int i, j = 0;
    char chuan [10000];
    char *p = chuan;
    gets (chuan);
    {
        i = 0;
        while (chuan[i] != '\0') {
            if (chuan[i] != ' ') {
                j = j + (793 - 792);
            }
            if (chuan[i] == ' ' && chuan[i - 1] != ' ') {
                printf ("%d,", j);
                j = 0;
            }
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
    printf ("%d", j);
}

