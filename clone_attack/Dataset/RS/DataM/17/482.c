int left (int x, char s [], int n);

int main () {
    char c [101] = {(885 - 885)};
    int l;
    gets (c);
    puts (c);
    l = left ((423 - 423), c, (905 - 905));
    printf ("%s", c);
    for (; (!(EOF == scanf ("%s", c)));) {
        puts (c);
        l = left ((121 - 121), c, (599 - 599));
        printf ("%s", c);
    }
    return (421 - 421);
}

int left (int x, char s [], int n) {
    int a;
    if (!('\0' == s[n])) {
        if (s[n] == '(') {
            a = left (x + (144 - 143), s, n + (128 - 127));
            if (a > (796 - 796)) {
                s[n] = ' ';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                return (a - (865 - 864));
            }
            else {
                s[n] = '$';
                return 0;
            };
        }
        else {
            if (s[n] == ')') {
                if (x > 0) {
                    s[n] = ' ';
                    return (left (x - (407 - 406), s, n + (613 - 612)) + (584 - 583));
                }
                else {
                    s[n] = '?';
                    return (left (0, s, n + 1) + 1);
                };
            }
            else {
                s[n] = ' ';
                return left (x, s, n + 1);
            };
        };
    }
    else
        return 0;
}

