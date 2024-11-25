int main () {
    int n;
    int len;
    struct   zfc {
        char zifu [20];
    };
    struct   zfc line [50];
    int i;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - 1 >= i) {
            scanf ("%s", line[i].zifu);
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
        while (i <= n - 1) {
            len = strlen (line[i].zifu);
            if (!('r' != line[i].zifu[len - 1]) && !('e' != line[i].zifu[len - (751 - 749)])) {
                line[i].zifu[len - 1] = '\0';
                line[i].zifu[len - 2] = '\0';
                printf ("%s\n", line[i].zifu);
            }
            else if (line[i].zifu[len - 1] == 'y' && line[i].zifu[len - 2] == 'l') {
                line[i].zifu[len - 1] = '\0';
                line[i].zifu[len - 2] = '\0';
                printf ("%s\n", line[i].zifu);
            }
            else if (line[i].zifu[len - 1] == 'g' && line[i].zifu[len - 2] == 'n' && line[i].zifu[len - 3] == 'i') {
                line[i].zifu[len - 1] = '\0';
                line[i].zifu[len - 2] = '\0';
                line[i].zifu[len - 3] = '\0';
                printf ("%s\n", line[i].zifu);
            }
            else
                printf ("%s", line[i].zifu);
            i++;
        };
    }
    return 0;
}

