main () {
    char p [51] [100] = {0};
    int Wg8n5ED9;
    int i;
    int j;
    int k;
    scanf ("%d", &Wg8n5ED9);
    for (i = 0; Wg8n5ED9 > i; i++) {
        scanf ("%s", p[i]);
        j = strlen (p[i]);
        if (!('g' != p[i][j - 1])) {
            p[i][j - 1] = 0;
            p[i][j - 2] = 0;
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
            p[i][j - 3] = 0;
        }
        if (!('r' != p[i][j - 1])) {
            p[i][j - 1] = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p[i][j - 2] = 0;
        }
        if (p[i][j - 1] == 'y') {
            p[i][j - 1] = 0;
            p[i][j - 2] = 0;
        };
    }
    for (i = 0; i < Wg8n5ED9; i++)
        printf ("%s\n", p[i]);
}

