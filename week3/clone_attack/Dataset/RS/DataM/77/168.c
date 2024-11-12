void  main () {
    int KnjtW406LZO, j, JSFD9w, gazYl8;
    char x [100];
    char a;
    char KZAgBz4ej5;
    scanf ("%s", x);
    gazYl8 = strlen (x);
    a = x[0];
    KZAgBz4ej5 = x[gazYl8 - 1];
    {
        KnjtW406LZO = 0;
        while (KnjtW406LZO < gazYl8 / 2) {
            for (j = 0; j < gazYl8; j++)
                if (x[j] == KZAgBz4ej5) {
                    {
                        JSFD9w = j - 1;
                        while (x[JSFD9w] != a) {
                            JSFD9w--;
                        };
                    }
                    printf ("%d %d\n", JSFD9w, j);
                    x[j] = '.';
                    x[JSFD9w] = '.';
                    break;
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
            KnjtW406LZO++;
        };
    };
}

