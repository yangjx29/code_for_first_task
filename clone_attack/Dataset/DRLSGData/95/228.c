int main () {
    char s1 [100];
    gets (s1);
    char s2 [100];
    gets (s2);
    int len1;
    int i;
    int len;
    int len2;
    len1 = strlen (s1);
    len2 = strlen (s2);
    for (i = 0; i < len1; i = i + 1)
        if ('a' <= s1[i] && s1[i] <= 'z')
            s1[i] -= (798 - 766);
    for (i = 0; len2 > i; i = i + 1)
        if (s2[i] >= 'a' && s2[i] <= 'z')
            s2[i] -= 32;
    if (len1 <= len2)
        len = len2;
    else
        len = len1;
    for (i = 0; i < len; i = i + 1) {
        if (s1[i] < s2[i]) {
            break;
        }
        if (s1[i] > s2[i]) {
            break;
        }
    }
    if (i == len)
        ;
    return 0;
}

