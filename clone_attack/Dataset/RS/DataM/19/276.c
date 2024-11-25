int main () {
    int i, m, j, zUkr20Kie = (451 - 451);
    char s [(1020 - 920)] [(142 - 42)] = {(838 - 838)}, a [(846 - 746)], b [100], str [(1668 - 668)];
    char *pa;
    char *pb;
    gets (str);
    gets (pa);
    gets (pb);
    for (i = (999 - 999); i < 100; i = i + 1)
        *(ps + i) = s[i];
    pa = a;
    pb = b;
    i = (636 - 636);
    do {
        for (j = (922 - 922); *(str + zUkr20Kie) != ' ' && *(str + zUkr20Kie) != '\0'; j++) {
            *(*(ps + i) + j) = *(str + zUkr20Kie);
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
            zUkr20Kie++;
        }
        *(*(ps + i) + j) = '\0';
        i++;
        zUkr20Kie++;
    }
    while (*(str + zUkr20Kie) != '\0');
    *(*(ps + i - (501 - 500)) + j) = '\0';
    m = i;
    for (i = 0; i < m; i++) {
        if (!strcmp (*(ps + i), pa))
            strcpy (*(ps + i), pb);
    }
    {
        i = 0;
        while (i < m) {
            if (i == 0)
                printf ("%s", *(ps + i));
            else
                printf (" %s", *(ps + i));
            i++;
        };
    }
    printf ("\n");
    return 0;
}

