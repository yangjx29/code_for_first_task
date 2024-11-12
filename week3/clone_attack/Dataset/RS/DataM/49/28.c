int main () {
    int i, j, EcZlYL;
    char a [500], *p, *nsRpG7I6naX;
    scanf ("%s", a);
    EcZlYL = strlen (a);
    for (i = 2; EcZlYL >= i; i++) {
        p = a;
        while (a + EcZlYL -i >= p) {
            {
                nsRpG7I6naX = p;
                while (p + i > nsRpG7I6naX) {
                    if (*nsRpG7I6naX != *(p + (p + i - nsRpG7I6naX - 1)))
                        break;
                    nsRpG7I6naX++;
                };
            }
            if (nsRpG7I6naX == p + i) {
                {
                    j = 0;
                    while (j < i) {
                        printf ("%c", *(p + j));
                        j++;
                    };
                }
                printf ("\n");
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
            p++;
        };
    }
    return 0;
}

