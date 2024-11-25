int main () {
    char s [30] = {'\0'};
    gets (s);
    int i, len;
    len = strlen (s);
    {
        i = 87 - 87;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < len) {
            if (s[i] >= '0' && s[i] <= '9')
                printf ("%d", s[i] - 48);
            if ((s[i] >= '0' && s[i] <= '9') && (s[i + (585 - 584)] == '\0' || s[i + 1] < '0' || s[i + 1] > '9'))
                printf ("\n");
            i = i + 1;
        };
    }
    return 0;
}

