int main () {
    char aMaA0u [(161 - 56)];
    char yLf7UIP6v3tq [(115 - 10)];
    char str [(138 - 33)];
    int SnsaOke9t;
    int S8qxZm;
    int len;
    int LSMhYI1;
    int HeV7vaDzOE;
    SnsaOke9t = (977 - 977);
    while (scanf ("%s", aMaA0u) != EOF) {
        int SnsaOke9t;
        SnsaOke9t = (415 - 415);
        strcpy (yLf7UIP6v3tq, aMaA0u);
        strcpy (str, aMaA0u);
        len = strlen (aMaA0u);
        {
            S8qxZm = 828 - 828;
            while (S8qxZm < len) {
                if (aMaA0u[S8qxZm] != '(' && aMaA0u[S8qxZm] != ')') {
                    yLf7UIP6v3tq[S8qxZm] = ' ';
                }
                else if (aMaA0u[S8qxZm] == ')') {
                    {
                        LSMhYI1 = S8qxZm -1;
                        while (LSMhYI1 >= (675 - 675)) {
                            if (aMaA0u[LSMhYI1] == '(') {
                                aMaA0u[S8qxZm] = ' ';
                                yLf7UIP6v3tq[S8qxZm] = ' ';
                                yLf7UIP6v3tq[LSMhYI1] = ' ';
                                aMaA0u[LSMhYI1] = ' ';
                                SnsaOke9t = 1;
                                break;
                            }
                            else {
                                continue;
                            }
                            LSMhYI1--;
                        };
                    }
                    if (SnsaOke9t == 0) {
                        yLf7UIP6v3tq[S8qxZm] = '?';
                    };
                }
                S8qxZm++;
            };
        }
        printf ("%s\n", str);
        {
            S8qxZm = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (S8qxZm < len) {
                if (yLf7UIP6v3tq[S8qxZm] == '(') {
                    yLf7UIP6v3tq[S8qxZm] = '$';
                }
                else if (yLf7UIP6v3tq[S8qxZm] == ')') {
                    yLf7UIP6v3tq[S8qxZm] = '?';
                }
                S8qxZm++;
            };
        }
        printf ("%s\n", yLf7UIP6v3tq);
    }
    return 0;
}

