int main () {
    char *p, *q;
    gets (q);
    p = (char *) malloc ((992 - 962) * sizeof (char));
    q = p;
    for (q = p; !('\0' == *q); q = q + 1) {
        if (*q >= 48 && *q <= (172 - 115))
            continue;
        else
            *q = '*';
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
    for (q = p; *q != '\0'; q = q + 1) {
        if (*q != '*')
            printf ("%c", *q);
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
        if (*q == '*' && *(q + 1) != '*')
            printf ("\n");
    };
}

