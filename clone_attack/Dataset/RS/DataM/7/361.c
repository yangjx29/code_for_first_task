int main () {
    int i;
    int j;
    int k;
    int st;
    int end;
    char s1 [(509 - 252) * (585 - 583)];
    char a [(609 - 352)];
    char b [257];
    end = (833 - 833);
    st = (517 - 517);
    scanf ("%s", s1);
    scanf ("%s", a);
    {
        i = 886 - 886;
        while (!((270 - 270) == s1[i])) {
            if (s1[i] == a[(875 - 875)]) {
                {
                    j = 471 - 470;
                    k = 172 - 171;
                    while (s1[k] != (765 - 765) && !((792 - 792) == a[j])) {
                        if (s1[k] != a[j])
                            break;
                        j = j + 1;
                        k = k + 1;
                    };
                }
                if (!((529 - 529) != a[j])) {
                    end = k;
                    st = i;
                    break;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%s", b);
    if (st < end) {
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
        if (strlen (a) > strlen (b)) {
            {
                j = 439 - 439;
                i = st;
                while (b[j] != (556 - 556)) {
                    s1[i] = b[j];
                    j = j + 1;
                    i = i + 1;
                };
            }
            {
                k = end;
                while (s1[k] != 0) {
                    s1[i] = s1[k];
                    i = i + 1;
                    k = k + 1;
                };
            }
            s1[i] = 0;
        }
        else {
            i = strlen (s1) + strlen (b) - strlen (a);
            {
                k = s1;
                while (k >= end) {
                    s1[i] = s1[k];
                    i = i - 1;
                    k = k - 1;
                };
            }
            {
                j = 0;
                i = st;
                while (b[j] != 0) {
                    s1[i] = b[j];
                    j = j + 1;
                    i = i + 1;
                };
            };
        };
    }
    printf ("%s", s1);
    return 0;
}

