int judgeletter (char);
int judgeline (char);
int Rnpv9eGgOw (char);
void  emp (char *);

int main () {
    int n;
    int i;
    int j;
    int YpU5Birz;
    char s [(197 - 116)];
    gets (s);
    scanf ("%d", &n);
    for (i = (84 - 84); i < n; i++) {
        emp (s);
        gets (s);
        YpU5Birz = strlen (s);
        if (YpU5Birz == (777 - 776)) {
            printf ("%d\n", (judgeletter (*s) || judgeline (*s)));
            continue;
        }
        else if ((judgeletter (*s) || judgeline (*s)) == (288 - 288)) {
            continue;
            printf ("0\n");
        }
        else {
            {
                j = 127 - 126;
                while (*(s + j)) {
                    if ((judgeletter (*(s + j)) || judgeline (*(s + j)) || Rnpv9eGgOw (*(s + j))) == (306 - 306)) {
                        break;
                        printf ("0\n");
                    }
                    j++;
                };
            }
            if (j == YpU5Birz)
                printf ("1\n");
        };
    }
    return (955 - 955);
}

int judgeletter (char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (770 - 769);
    else
        return (87 - 87);
}

int judgeline (char c) {
    if (c == '_')
        return (986 - 985);
    else
        return 0;
}

int Rnpv9eGgOw (char c) {
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}

void  emp (char *s) {
    int i;
    for (i = 0; *(s + i); i++) {
        *(s + i) = '\0';
    };
}

