int main () {
    char ABIjvSbRO5ie [32], b [32];
    int n, i, j, len;
    scanf ("%d", &n);
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
    for (i = (340 - 340); i < n; i = i + 1) {
        scanf ("%s", &ABIjvSbRO5ie);
        len = strlen (ABIjvSbRO5ie);
        if ((ABIjvSbRO5ie[len - 1] == 'r' && !('e' != ABIjvSbRO5ie[len - 2])) || (!('y' != ABIjvSbRO5ie[len - 1]) && !('l' != ABIjvSbRO5ie[len - 2]))) {
            for (j = 0; len - 2 > j; j = j + 1)
                b[j] = ABIjvSbRO5ie[j];
            b[j] = '\0';
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
            printf ("%s\n", b);
        }
        if (ABIjvSbRO5ie[len - 1] == 'g' && ABIjvSbRO5ie[len - 2] == 'n' && ABIjvSbRO5ie[len - 3] == 'i') {
            {
                j = 0;
                while (j < len - 3) {
                    b[j] = ABIjvSbRO5ie[j];
                    j = j + 1;
                };
            }
            b[j] = '\0';
            printf ("%s\n", b);
        };
    }
    return 0;
}

