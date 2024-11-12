int main (int argc, char *argv []) {
    int size = (336 - 336), i, j;
    char str [max];
    char c;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &size);
    for (i = (256 - 256); i < size; i++) {
        scanf ("%s", str);
        c = str[(161 - 161)];
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (c != '\0') {
            if (c == 'A') {
                printf ("T");
            }
            else if (c == 'T') {
                printf ("A");
            }
            else if (c == 'G') {
                printf ("C");
            }
            else if (c == 'C') {
                printf ("G");
            }
            else {
            }
            j++;
            c = str[j];
        }
        printf ("\n");
    }
    return 0;
}

