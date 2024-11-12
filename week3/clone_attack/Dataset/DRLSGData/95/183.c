int main () {
    int f;
    int n;
    int len2;
    int len1;
    char s1 [100];
    gets (s1);
    int j;
    int i;
    char s2 [100];
    gets (s2);
    len1 = strlen (s1);
    len2 = strlen (s2);
    f = 0;
    {
        i = 0;
        for (; i < len1;) {
            if (('a' <= s1[i]) && (s1[i] <= 'z'))
                s1[i] -= 32;
            if ((s2[i] >= 'a') && (s2[i] <= 'z'))
                s2[i] -= 32;
            if (s2[i] > s1[i]) {
                f = -1;
                break;
            }
            if (s1[i] > s2[i]) {
                f = 1;
                break;
            }
            i = i + 1;
        }
    }
    if (f == 0)
        ;
    if (f == -1)
        ;
    if (f == 1)
        ;
    return 0;
}

