int main () {
    int t;
    int i;
    int j;
    int k;
    char s [256];
    char t2JDQ9ah [256];
    char rep [256];
    gets (s);
    gets (t2JDQ9ah);
    gets (rep);
    for (i = (592 - 592); s[i] != '\0'; i++) {
        t = (310 - 310);
        if (s[i] == t2JDQ9ah[0]) {
            for (j = i, k = 0; t2JDQ9ah[k] != '\0'; j++, k++) {
                if (s[j] != t2JDQ9ah[k]) {
                    t = 1;
                    break;
                };
            }
            if (t == 0) {
                for (j = i; rep[j - i] != '\0'; j++)
                    s[j] = rep[j - i];
                break;
            };
        };
    }
    printf ("%s", s);
}

