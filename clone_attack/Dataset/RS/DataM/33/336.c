int main () {
    int n;
    int i;
    char y [260];
    char SYS3dfJ7 [260] = {0};
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            char *py = y;
            char *pt = SYS3dfJ7;
            scanf ("%s", y);
            for (; *py != '\0'; py = py + 1, pt = pt + 1) {
                if (*py == 'A')
                    *pt = 'T';
                if (*py == 'T')
                    *pt = 'A';
                if (*py == 'G')
                    *pt = 'C';
                if (*py == 'C')
                    *pt = 'G';
            }
            *pt = '\0';
            printf ("%s\n", SYS3dfJ7);
            i = i + 1;
        };
    }
    return 0;
}

