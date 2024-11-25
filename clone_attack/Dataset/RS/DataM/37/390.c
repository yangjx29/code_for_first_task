int main () {
    int n;
    int i;
    int j;
    int k;
    int state;
    int status;
    char str [(100279 - 279)];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s", str);
        status = 1;
        {
            j = 0;
            while (strlen (str) > j) {
                state = 0;
                if (!(1 == str[j])) {
                    k = j + 1;
                    while (strlen (str) > k) {
                        if (!(str[k] != str[j])) {
                            state = 1;
                            str[k] = 1;
                        }
                        k = k + 1;
                    };
                }
                if (state) {
                    str[j] = 1;
                }
                j = j + 1;
            };
        }
        for (j = 0; j < strlen (str); j = j + 1) {
            if (str[j] != 1) {
                status = 0;
                printf ("%c\n", str[j]);
                break;
            };
        }
        if (status) {
            printf ("no\n");
        };
    }
    return 0;
}

