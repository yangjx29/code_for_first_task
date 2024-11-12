void  main () {
    char ch [100];
    gets (ch);
    int i;
    int xxWsLl3NuJ;
    int k;
    {
        i = 0;
        while (1) {
            if (!('\0' != ch[i]))
                break;
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
        xxWsLl3NuJ = 0;
        i = i - 1;
        while (i >= 0) {
            if (ch[i] == ' ') {
                {
                    k = i + 1;
                    while (k <= i + xxWsLl3NuJ) {
                        printf ("%c", ch[k]);
                        k++;
                    };
                }
                xxWsLl3NuJ = 0;
                printf ("%c", ch[i]);
            }
            else {
                if (i == 0) {
                    for (k = i; k <= i + xxWsLl3NuJ; k++)
                        printf ("%c", ch[k]);
                    break;
                }
                else
                    xxWsLl3NuJ++;
            }
            i--;
        };
    };
}

