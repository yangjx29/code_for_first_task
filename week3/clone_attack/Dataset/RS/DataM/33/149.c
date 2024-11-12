int main (int argc, char *argv []) {
    char str [(493 - 237)];
    char str2 [256];
    int i;
    int len;
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
    int n;
    scanf ("%d", &n);
    while (n > (760 - 760)) {
        n--;
        scanf ("%s", str);
        len = strlen (str);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (800 - 800); i < len; i = i + 1) {
            if (str[i] == 'A')
                str2[i] = 'T';
            if (str[i] == 'T')
                str2[i] = 'A';
            if (str[i] == 'C')
                str2[i] = 'G';
            if (str[i] == 'G')
                str2[i] = 'C';
        }
        str2[len] = '\0';
        printf ("%s\n", str2);
    }
    return (60 - 60);
}

