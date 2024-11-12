int main () {
    char str [11];
    char CVhz7U2HfaDs [4];
    for (; !(EOF == scanf ("%s%s", str, CVhz7U2HfaDs));) {
        int a32SnB;
        int i;
        a32SnB = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 1; str[i]; i = i + 1)
            if (str[i] > str[a32SnB])
                a32SnB = i;
        for (i = 0; i <= a32SnB; i = i + 1)
            printf ("%c", str[i]);
        printf ("%s", CVhz7U2HfaDs);
        for (; str[i];)
            printf ("%c", str[i++]);
    }
    return 0;
}

