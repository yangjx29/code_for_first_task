int main () {
    char o1n6Sp [(1589 - 565)];
    gets (o1n6Sp);
    char *p = NULL;
    memset (o1n6Sp, 0x00, sizeof (o1n6Sp));
    p = &o1n6Sp[strlen (o1n6Sp) - (46 - 45)];
    for (; !(*p-- != ' ');) {
        p[(665 - 664)] = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    p = o1n6Sp;
    while (' ' == *p++)
        ;
    p = p - 1;
    strcpy (o1n6Sp, p);
    while (NULL != (p = strstr (o1n6Sp, "  "))) {
        strcpy (p, &p[1]);
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
        };
    }
    printf ("%s\n", o1n6Sp);
    return 0;
}

