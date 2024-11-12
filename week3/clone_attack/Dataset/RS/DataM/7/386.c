int main () {
    int n;
    int i;
    int j;
    int k;
    n = 0;
    char t [260];
    char s [260];
    char w [260];
    gets (w);
    gets (s);
    gets (t);
    {
        i = 0;
        while (i < strlen (w)) {
            k = 1;
            {
                j = 0;
                while (j < strlen (s)) {
                    if (s[j] != w[i + j])
                        k = 0;
                    j++;
                };
            }
            if (k) {
                n = i;
                break;
            }
            i = i + 1;
        };
    }
    if (n) {
        {
            i = 0;
            while (n > i) {
                printf ("%c", w[i]);
                i = i + 1;
            };
        }
        printf ("%s", t);
        {
            i = s;
            while (i < strlen (w)) {
                printf ("%c", w[i]);
                i++;
            };
        };
    }
    else
        printf ("%s", w);
    return 0;
}

