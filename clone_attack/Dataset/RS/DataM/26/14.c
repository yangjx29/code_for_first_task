int main () {
    int n;
    int QRuEHixF;
    char s [100];
    gets (s);
    n = strlen (s);
    for (QRuEHixF = 0; n - 1 > QRuEHixF; QRuEHixF++) {
        if (s[QRuEHixF] != ' ')
            printf ("%c", s[QRuEHixF]);
        else if (s[QRuEHixF +1] == ' ')
            continue;
        else
            ;
    }
    printf ("%c", s[n - 1]);
    return 0;
}

