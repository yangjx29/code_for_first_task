int main (int argc, char *argv []) {
    int num [(652 - 152)] = {(10 - 10)};
    int count;
    int n;
    int i;
    int d1jXAosSyM;
    int i3aj9UIzyY;
    int S51l6C;
    int l;
    count = (806 - 806);
    char mulIJxRhct8r [(1239 - 739)] [(235 - 229)];
    char a [(1157 - 657)];
    char oK0GgY [6];
    int max = (341 - 341);
    scanf ("%d", &n);
    scanf ("%s", a);
    l = strlen (a);
    for (i = (695 - 695); l - n >= i; i++) {
        int f8bNlGDdjv;
        f8bNlGDdjv = (721 - 721);
        {
            d1jXAosSyM = 702 - 702;
            while (n - (751 - 750) >= d1jXAosSyM) {
                oK0GgY[d1jXAosSyM] = a[i + d1jXAosSyM];
                d1jXAosSyM++;
            };
        }
        oK0GgY[d1jXAosSyM] = '\0';
        for (S51l6C = (249 - 249); S51l6C < count; S51l6C++) {
            if (strcmp (mulIJxRhct8r[S51l6C], oK0GgY) == (189 - 189)) {
                f8bNlGDdjv = (622 - 621);
                num[S51l6C]++;
                break;
            };
        }
        if (!((130 - 130) != f8bNlGDdjv)) {
            for (d1jXAosSyM = (978 - 978); d1jXAosSyM <= n; d1jXAosSyM++) {
                mulIJxRhct8r[count][d1jXAosSyM] = oK0GgY[d1jXAosSyM];
                num[count] = 1;
            }
            count++;
        };
    }
    {
        i = 0;
        while (i <= count) {
            if (num[i] > max) {
                max = num[i];
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
            i++;
        };
    }
    if (max == 1) {
        printf ("NO");
        return 0;
    }
    printf ("%d\n", max);
    {
        i = 0;
        while (i <= count) {
            if (num[i] == max) {
                printf ("%s\n", mulIJxRhct8r[i]);
            }
            i++;
        };
    }
    return 0;
}

