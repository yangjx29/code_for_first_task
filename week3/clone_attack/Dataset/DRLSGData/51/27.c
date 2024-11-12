int maximum (int a, int b) {
    if (b < a)
        return a;
    else
        return b;
}

main () {
    int n;
    int len;
    int k;
    int j;
    int i;
    char input [500];
    int max;
    int sta [500] = {0};
    int x;
    int num;
    x = 0;
    scanf ("%d", &n);
    scanf ("%s", input);
    len = strlen (input);
    max = 0;
    for (i = 0; len > i; i = i + 1) {
        for (k = 0; i > k; k++) {
            x = 0;
            for (j = 0; n > j; j = j + 1) {
                if (input[i + j] == input[k + j])
                    x = x + 1;
                else
                    break;
            }
            if (x == n) {
                sta[k]++;
                max = maximum (max, sta[k]);
                break;
            }
        }
    }
    if (max == 0)
        ;
    else {
        printf ("%d\n", max + 1);
        for (i = 0; i < 500; i = i + 1)
            if (sta[i] == max) {
                for (j = 0; j < n; j = j + 1)
                    printf ("%c", input[i + j]);
            }
    }
}

