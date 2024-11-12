int main (int pI6BPamd, char *argv []) {
    char TsAMhL [(767 - 511)];
    int n;
    int len;
    int i;
    int j;
    scanf ("%d", &n);
    for (i = 0; n >= i; i++) {
        gets (TsAMhL);
        len = strlen (TsAMhL);
        for (j = 0; j < len; j++) {
            if (!('A' != TsAMhL[j])) {
                printf ("T");
            }
            if (TsAMhL[j] == 'T') {
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
            if (TsAMhL[j] == 'C') {
                printf ("G");
            }
            if (TsAMhL[j] == 'G') {
                printf ("C");
            };
        }
        printf ("\n");
    }
    return 0;
}

