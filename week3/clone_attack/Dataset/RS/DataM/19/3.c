int main () {
    char CaAQgNS9O [101];
    char a [101];
    char UKsR5xFEgDH [101];
    int n;
    int vfNa8OWvuG;
    int qHi3sGS4N7;
    int i;
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
    int f9J4QHdqK;
    qHi3sGS4N7 = 0;
    gets (CaAQgNS9O);
    n = strlen (CaAQgNS9O);
    scanf ("%s%s", a, UKsR5xFEgDH);
    vfNa8OWvuG = strlen (a);
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
        while (i < n) {
            if ((i == 0 && !(a[0] != CaAQgNS9O[i]) && CaAQgNS9O[i + vfNa8OWvuG - (177 - 176)] == a[vfNa8OWvuG - 1] && CaAQgNS9O[i + vfNa8OWvuG] == ' ') || (!(0 == i) && CaAQgNS9O[i - 1] == ' ' && !(a[0] != CaAQgNS9O[i]) && CaAQgNS9O[i + vfNa8OWvuG - 1] == a[vfNa8OWvuG - 1] && CaAQgNS9O[i + vfNa8OWvuG] == ' ') || (i + vfNa8OWvuG == n && CaAQgNS9O[i - 1] == ' ' && CaAQgNS9O[i] == a[0] && CaAQgNS9O[i + vfNa8OWvuG - 1] == a[vfNa8OWvuG - 1])) {
                {
                    f9J4QHdqK = i;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (f9J4QHdqK < i + vfNa8OWvuG) {
                        if (CaAQgNS9O[f9J4QHdqK] == a[f9J4QHdqK - i]) {
                            qHi3sGS4N7 = qHi3sGS4N7 + 1;
                        }
                        f9J4QHdqK = f9J4QHdqK + 1;
                    };
                }
                if (qHi3sGS4N7 == vfNa8OWvuG) {
                    i += vfNa8OWvuG - 1;
                    printf ("%s", UKsR5xFEgDH);
                }
                else {
                    printf ("%c", CaAQgNS9O[i]);
                }
                qHi3sGS4N7 = 0;
            }
            else {
                printf ("%c", CaAQgNS9O[i]);
            }
            i = i + 1;
        };
    }
    return 0;
}

