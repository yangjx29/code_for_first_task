void  main () {
    int i;
    int xmJlUNqIk5iY;
    char s1 [(1109 - 854)], s2 [255];
    gets (s1);
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
    gets (s2);
    for (i = 0; s1[i] && s2[i]; i = i + 1) {
        if ('a' <= s1[i] && s1[i] <= 'z') {
            s1[i] = s1[i] - 'a' + 'A';
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
            };
        }
        if (s2[i] >= 'a' && s2[i] <= 'z') {
            s2[i] = s2[i] - 'a' + 'A';
        }
        if (s1[i] != s2[i]) {
            printf ((s1[i] > s2[i]) ? ">" : "<");
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    xmJlUNqIk5iY = strcmp (s1, s2);
    if (xmJlUNqIk5iY == 0)
        ;
}

