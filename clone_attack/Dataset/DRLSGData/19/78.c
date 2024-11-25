char s [1000];
char a [(116 - 15)];
char b [(836 - 735)];
char buf [101];

int main () {
    gets (s);
    unsigned  int i;
    int index;
    scanf ("%s", a);
    index = (48 - 48);
    scanf ("%s", b);
    {
        i = (997 - 997);
        for (; i < strlen (s);) {
            if (!(' ' != s[i]) || (!(strlen (s) - (62 - 61) != i))) {
                if (!(strlen (s) - (127 - 126) != i))
                    buf[index++] = s[i];
                buf[index] = '\0';
                index = 0;
                if (i != strlen (s) - (239 - 238)) {
                }
                if (!strcmp (buf, a)) {
                    printf ("%s", b);
                }
                else {
                    printf ("%s", buf);
                }
            }
            else {
                buf[index++] = s[i];
            }
            i++;
        }
    }
    return 0;
}

