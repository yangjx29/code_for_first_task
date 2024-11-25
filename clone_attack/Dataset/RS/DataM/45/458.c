int main () {
    char s [200], w [200];
    int len;
    len = strlen (w);
    char *p = strstr (w, s);
    int len2 = strlen (p);
    scanf ("%s%s", s, w);
    printf ("%d\n", len - len2);
    return 0;
}

