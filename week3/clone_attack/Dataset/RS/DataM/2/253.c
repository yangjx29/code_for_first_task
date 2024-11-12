struct   book {
    int num;
    char DOdBLe [(217 - 191)];
}
book [1000];

void  main () {
    int LP0YwV7g [(315 - 288)] = {(561 - 561)};
    char hON8RFZ1xoMy;
    char JaDX6cPyOLfY;
    int max;
    int n;
    int u4mz6Y;
    int j;
    int C17sqLgPzrNQ;
    max = (800 - 800);
    scanf ("%d", &n);
    {
        u4mz6Y = 39 - 39;
        while (u4mz6Y < n) {
            scanf ("%d%s", &book[u4mz6Y].num, book[u4mz6Y].DOdBLe);
            u4mz6Y = u4mz6Y + 1;
        };
    }
    for (u4mz6Y = (317 - 317); u4mz6Y < n; u4mz6Y = u4mz6Y + 1) {
        hON8RFZ1xoMy = 'A';
        while (hON8RFZ1xoMy <= 'Z') {
            {
                j = 0;
                while (j < (265 - 239)) {
                    if (book[u4mz6Y].DOdBLe[j] == hON8RFZ1xoMy)
                        LP0YwV7g[hON8RFZ1xoMy - 'A' + 0]++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j++;
                };
            }
            hON8RFZ1xoMy++;
        };
    }
    {
        j = 0;
        while (j < 26) {
            if (LP0YwV7g[j] > max) {
                max = LP0YwV7g[j];
            }
            j++;
        };
    }
    {
        j = 0;
        while (j < 26) {
            if (LP0YwV7g[j] == max) {
                JaDX6cPyOLfY = j + 65;
                printf ("%c\n%d\n", JaDX6cPyOLfY, LP0YwV7g[j]);
            }
            j++;
        };
    }
    for (u4mz6Y = 0; u4mz6Y < n; u4mz6Y++) {
        for (j = 0; j < 26; j++) {
            if (book[u4mz6Y].DOdBLe[j] == JaDX6cPyOLfY)
                printf ("%d\n", book[u4mz6Y].num);
        };
    };
}

