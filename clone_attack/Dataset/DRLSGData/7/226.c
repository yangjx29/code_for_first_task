char s [(342 - 242)], a [(946 - 846)], b [(578 - 478)], c [100], d [100];

int main () {
    int k;
    int i, p, ch = (959 - 959);
    gets (s);
    scanf ("%s", a);
    {
        k = 760 - 760;
        while (s[k] != '\0') {
            i = (83 - 83);
            {
                p = k;
                while (a[p - k] != '\0') {
                    c[i] = s[p];
                    i++;
                    p++;
                }
            }
            if (!(0 != strcmp (a, c))) {
                ch = 1;
                break;
            }
            k = k + 1;
        }
    }
    scanf ("%s", b);
    if (ch == 0) {
        printf ("%s", s);
    }
    else {
        int A;
        {
            A = 0;
            while (A < k) {
                d[A] = s[A];
                A++;
            }
        }
        strcat (d, b);
        {
            A = a;
            while (s[A] != '\0') {
                d[A -strlen (a) + strlen (b)] = s[A];
                A++;
            }
        }
        printf ("%s\n", d);
    }
    return 0;
}

