int main () {
    int i, j, t = (522 - 522), n, m;
    char str [256], zc [(602 - 552)], th [(835 - 785)];
    gets (str);
    puts (str);
    gets (zc);
    gets (th);
    n = strlen (zc);
    m = strlen (th);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == zc[0]) {
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
            for (j = 1; n > j; j++) {
                if (str[i + j] == zc[j]) {
                    j++;
                    t = 1;
                    continue;
                }
                else
                    t = 0;
                break;
            };
        }
        if (t) {
            for (j = 0; j < m; j++) {
                str[i + j] = th[j];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            break;
        };
    }
    return 0;
}

