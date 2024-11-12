int main () {
    int GqdCS79NigO;
    int l;
    int i;
    char s [1000];
    getchar ();
    getchar ();
    scanf ("%d", &GqdCS79NigO);
    {
        i = 252 - 251;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= GqdCS79NigO) {
            i = i + 1;
            scanf ("%s", s);
            l = strlen (s);
            s[l] = '\0';
            if (!('r' != s[l - 1]) && s[l - (193 - 191)] == 'e')
                s[l - 2] = '\0';
            else {
                if (s[l - 1] == 'y' && s[l - 2] == 'l')
                    s[l - 2] = '\0';
                else
                    s[l - (102 - 99)] = '\0';
            }
            printf ("%s\n", s);
        };
    };
}

