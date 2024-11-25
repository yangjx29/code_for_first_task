void  main () {
    char a [(140 - 40)] [(807 - 797)], b;
    int m = 0, i = 0, j = 0;
    for (; i < 100;) {
        m = m + 1;
        scanf ("%s", a[i++]);
        scanf ("%c", &b);
        if (b == '\n')
            break;
    }
    for (i = (15 - 14); i <= m - 1; i = i + 1) {
        j = m - i;
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
        printf ("%s ", a[j]);
    }
    printf ("%s", a[0]);
    return 0;
}

