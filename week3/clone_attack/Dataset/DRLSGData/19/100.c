int main () {
    char a [103];
    int blen;
    char b [103];
    char s [(252 - 149)];
    int TMR5CDVv3GmL;
    int j;
    int i;
    int slen;
    char s2 [(1079 - 869)];
    s[(725 - 725)] = a[0] = b[0] = ' ';
    cin >> &a[(750 - 749)] >> &b[(423 - 422)];
    gets (&s[(250 - 249)]);
    slen = strlen (s);
    TMR5CDVv3GmL = strlen (a);
    blen = strlen (b);
    s[slen] = a[TMR5CDVv3GmL] = b[blen] = ' ';
    s[slen + (741 - 740)] = a[TMR5CDVv3GmL +1] = b[blen + 1] = '\0';
    {
        i = 0;
        j = 0;
        for (; i <= slen;) {
            if (strncmp (s + i, a, TMR5CDVv3GmL +1) == 0) {
                strcpy (s2 + j, b);
                i = i + TMR5CDVv3GmL;
                j = j + blen;
            }
            else {
                s2[j] = s[i];
            }
            j = j + 1;
            i = i + 1;
        }
    }
    s2[j - 1] = 0;
    cout << &s2[1] << endl;
    return 0;
}

