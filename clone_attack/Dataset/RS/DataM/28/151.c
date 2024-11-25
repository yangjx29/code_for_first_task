void  main () {
    int S8vy5i;
    int i;
    int k;
    S8vy5i = 0;
    char QLrzgSQJ9d [(3325 - 325)];
    gets (QLrzgSQJ9d);
    char *oJs35tkL9Z1u;
    oJs35tkL9Z1u = QLrzgSQJ9d;
    for (i = 0; !('\0' == *(oJs35tkL9Z1u + i)); i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*(oJs35tkL9Z1u + i) != ' ') {
            k = 0;
            S8vy5i = S8vy5i +1;
        }
        else {
            if (k == 0) {
                k = 1;
                printf ("%d,", S8vy5i);
                S8vy5i = 0;
            };
        };
    }
    printf ("%d\n", S8vy5i);
}

