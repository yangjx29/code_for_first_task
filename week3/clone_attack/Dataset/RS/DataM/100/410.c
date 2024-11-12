int l;
char s [301];
int t [300] = {0};

int main () {
    int b;
    int i;
    b = 0;
    l = strlen (gets (s));
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l > i) {
            t[s[i]]++;
            i++;
        };
    }
    for (i = 'A'; i <= 'Z'; i++) {
        if (t[i]) {
            b = 1;
            printf ("%c=%d\n", i, t[i]);
        };
    }
    for (i = 'a'; i <= 'z'; i++) {
        if (t[i]) {
            printf ("%c=%d\n", i, t[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            b = 1;
        };
    }
    if (!b) {
        printf ("No\n");
    }
    return 0;
}

