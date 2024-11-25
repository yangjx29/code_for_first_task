void  main () {
    char a [15];
    char Lnxslo74u [5];
    while (!(EOF == scanf ("%s%s", a, Lnxslo74u))) {
        char *ptr = a;
        char *insert = a;
        char temp;
        temp = *ptr;
        char *rriLEHh3Rml = ptr + 3;
        printf ("%s\n", a);
        for (; !('\0' == *(ptr));) {
            if (*(ptr) > temp) {
                temp = *(ptr);
                insert = ptr;
            }
            ptr = ptr + 1;
        }
        for (; ptr != insert;) {
            *rriLEHh3Rml = *ptr;
            ptr = ptr - 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            rriLEHh3Rml = rriLEHh3Rml - 1;
        }
        ptr++;
        rriLEHh3Rml = Lnxslo74u;
        for (; *(rriLEHh3Rml) != '\0';) {
            *ptr = *rriLEHh3Rml;
            ptr++;
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
            rriLEHh3Rml++;
        };
    };
}

