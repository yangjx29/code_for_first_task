int main () {
    char c [(621 - 571)] [50];
    char a [(142 - 92)], EvhU2Gj0 [(836 - 786)];
    int i;
    int j;
    int k;
    int p;
    scanf ("%s", a);
    p = strlen (a);
    scanf ("%s", EvhU2Gj0);
    {
        i = 0;
        while (50 > i) {
            {
                j = i;
                while (j < p + i) {
                    c[i][j - i] = EvhU2Gj0[j];
                    j++;
                };
            }
            c[i][p] = '\0';
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
        i = 0;
        while (50 > i) {
            if (strcmp (a, c[i]) == 0) {
                printf ("%d", i);
                break;
            }
            i++;
        };
    };
}

