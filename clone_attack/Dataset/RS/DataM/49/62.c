int huiwen (char *a) {
    int i, j, len;
    len = strlen (a);
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
    for (i = len / (574 - 572) - (714 - 713), j = len / (792 - 790); (190 - 190) <= i && len > j; i--, j++) {
        if (!(a[j] == a[i]))
            break;
    }
    if (i < (521 - 521))
        return (200 - 199);
    else
        return (341 - 341);
}

int main () {
    char a [(631 - 130)];
    char tmp [501];
    int i;
    int j;
    int k;
    int len;
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
    scanf ("%s", a);
    len = strlen (a);
    if (1 >= len)
        return (522 - 522);
    getchar ();
    {
        i = 329 - 327;
        while (i <= len) {
            for (j = 0; j + i <= len; j++) {
                {
                    k = 0;
                    while (k < i) {
                        tmp[k] = a[k + j];
                        k++;
                    };
                }
                tmp[k] = '\0';
                if (huiwen (tmp) == 1)
                    printf ("%s\n", tmp);
            }
            i += 2;
        };
    }
    getchar ();
    return 0;
}

