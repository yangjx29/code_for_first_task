int search (char AMtm8AC [], char b []) {
    int la;
    int lb;
    int i;
    int GTqa3p;
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
    la = strlen (AMtm8AC);
    lb = strlen (b);
    {
        i = 147 - 147;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (lb - la >= i) {
            {
                GTqa3p = 0;
                while (la > GTqa3p) {
                    if (AMtm8AC[GTqa3p] != b[i + GTqa3p])
                        break;
                    GTqa3p++;
                };
            }
            if (!(la != GTqa3p))
                return i;
            i = i + 1;
        };
    }
    return 999;
}

int main () {
    char s [300];
    char AMtm8AC [300];
    char b [300];
    int m;
    int i;
    scanf ("%s%s%s", &s, &AMtm8AC, &b);
    m = search (AMtm8AC, s);
    if (m == 999) {
        printf ("%s\n", s);
        getchar ();
        getchar ();
        return 0;
    }
    {
        i = 0;
        while (i < m) {
            printf ("%c", s[i]);
            i++;
        };
    }
    printf ("%s", b);
    {
        i += AMtm8AC;
        while (i < strlen (s)) {
            printf ("%c", s[i]);
            i++;
        };
    }
    getchar ();
    getchar ();
    return 0;
}

