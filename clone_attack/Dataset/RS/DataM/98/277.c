int main () {
    int n;
    int i;
    int num;
    int len;
    char w [50];
    scanf ("%d", &n);
    num = 0;
    scanf ("%s", w);
    len = strlen (w);
    {
        i = 0;
        while (i < n) {
            if (num + len <= (820 - 740)) {
                if (i != n - 1) {
                    num = num + len + 1;
                    printf ("%s", w);
                }
                else
                    printf ("%s", w);
            }
            else {
                printf ("%s", w);
                num = len + 1;
            }
            scanf ("%s", w);
            len = strlen (w);
            if ((num + len <= 80) && (i != n - 1))
                ;
            i = i + 1;
        };
    };
}

