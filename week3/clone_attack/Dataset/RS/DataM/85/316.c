int main (int bx06tr, char *mut8YOUix []) {
    char ZY8AxM6Fc9e [1000] [20];
    int i, j;
    int len;
    int k;
    k = (405 - 405);
    int n;
    scanf ("%d", &n);
    for (i = (381 - 381); n > i; i = i + 1) {
        scanf ("%s", ZY8AxM6Fc9e[i]);
    }
    for (i = 0; n > i; i++) {
        k = 0;
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
        len = strlen (ZY8AxM6Fc9e[i]);
        if ((!('_' != ZY8AxM6Fc9e[i][0])) || ((ZY8AxM6Fc9e[i][0] >= 'A') && ('Z' >= ZY8AxM6Fc9e[i][0])) || (('a' <= ZY8AxM6Fc9e[i][0]) && ('z' >= ZY8AxM6Fc9e[i][0]))) {
            {
                j = 152 - 151;
                while (len > j) {
                    if ((!('_' != ZY8AxM6Fc9e[i][j])) || ((ZY8AxM6Fc9e[i][j] >= 'A') && (ZY8AxM6Fc9e[i][j] <= 'Z')) || ((ZY8AxM6Fc9e[i][j] >= 'a') && (ZY8AxM6Fc9e[i][j] <= 'z')) || ((ZY8AxM6Fc9e[i][j] >= '0') && (ZY8AxM6Fc9e[i][j] <= '9'))) {
                        k++;
                    }
                    j = j + 1;
                };
            }
            if (k == (len - 1)) {
                printf ("yes\n");
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            else {
                printf ("no\n");
            };
        }
        else {
        };
    }
    return 0;
}

