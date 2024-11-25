int main (int argc, char *argv []) {
    char a [300];
    scanf ("%s", a);
    int len;
    len = strlen (a);
    int i, s [26] = {0};
    for (i = 0; len > i; i++) {
        if (!('a' != a[i]))
            s[0]++;
        if (!('b' != a[i]))
            s[1]++;
        if (!('c' != a[i]))
            s[2]++;
        if (!('d' != a[i]))
            s[3]++;
        if (!('e' != a[i]))
            s[4]++;
        if (!('f' != a[i]))
            s[5]++;
        if (!('g' != a[i]))
            s[6]++;
        if (!('h' != a[i]))
            s[7]++;
        if (!('i' != a[i]))
            s[8]++;
        if (!('j' != a[i]))
            s[9]++;
        if (!('k' != a[i]))
            s[10]++;
        if (!('l' != a[i]))
            s[11]++;
        if (!('m' != a[i]))
            s[12]++;
        if (!('n' != a[i]))
            s[13]++;
        if (!('o' != a[i]))
            s[14]++;
        if (!('p' != a[i]))
            s[15]++;
        if (!('q' != a[i]))
            s[16]++;
        if (!('r' != a[i]))
            s[17]++;
        if (!('s' != a[i]))
            s[18]++;
        if (!('t' != a[i]))
            s[19]++;
        if (!('u' != a[i]))
            s[20]++;
        if (!('v' != a[i]))
            s[21]++;
        if (!('w' != a[i]))
            s[22]++;
        if (!('x' != a[i]))
            s[23]++;
        if (!('y' != a[i]))
            s[24]++;
        if (!('z' != a[i]))
            s[25]++;
    }
    if (s[0] != 0)
        printf ("a=%d\n", s[0]);
    if (s[1] != 0)
        printf ("b=%d\n", s[1]);
    if (s[2] != 0)
        printf ("c=%d\n", s[2]);
    if (s[3] != 0)
        printf ("d=%d\n", s[3]);
    if (s[4] != 0)
        printf ("e=%d\n", s[4]);
    if (s[5] != 0)
        printf ("f=%d\n", s[5]);
    if (s[6] != 0)
        printf ("g=%d\n", s[6]);
    if (s[7] != 0)
        printf ("h=%d\n", s[7]);
    if (s[8] != 0)
        printf ("i=%d\n", s[8]);
    if (s[9] != 0)
        printf ("j=%d\n", s[9]);
    if (s[10] != 0)
        printf ("k=%d\n", s[10]);
    if (s[11] != 0)
        printf ("l=%d\n", s[11]);
    if (s[12] != 0)
        printf ("m=%d\n", s[12]);
    if (s[13] != 0)
        printf ("n=%d\n", s[13]);
    if (s[14] != 0)
        printf ("o=%d\n", s[14]);
    if (s[15] != 0)
        printf ("p=%d\n", s[15]);
    if (s[16] != 0)
        printf ("q=%d\n", s[16]);
    if (s[17] != 0)
        printf ("r=%d\n", s[17]);
    if (s[18] != 0)
        printf ("s=%d\n", s[18]);
    if (s[19] != 0)
        printf ("t=%d\n", s[19]);
    if (s[20] != 0)
        printf ("u=%d\n", s[20]);
    if (s[21] != 0)
        printf ("v=%d\n", s[21]);
    if (s[22] != 0)
        printf ("w=%d\n", s[22]);
    if (s[23] != 0)
        printf ("x=%d\n", s[23]);
    if (s[24] != 0)
        printf ("y=%d\n", s[24]);
    if (s[25] != 0)
        printf ("z=%d\n", s[25]);
    if (!(0 != s[0]) && !(0 != s[1]) && !(0 != s[2]) && !(0 != s[3]) && !(0 != s[4]) && !(0 != s[5]) && !(0 != s[6]) && !(0 != s[7]) && !(0 != s[8]) && !(0 != s[9]) && !(0 != s[10]) && !(0 != s[11]) && !(0 != s[12]) && s[13] == 0 && s[14] == 0 && s[15] == 0 && s[16] == 0 && s[17] == 0 && s[18] == 0 && s[19] == 0 && s[20] == 0 && s[21] == 0 && s[22] == 0 && s[23] == 0 && s[24] == 0 && s[25] == 0)
        ;
    {
        if (0) {
            return 0;
        }
    }
    return 0;
}

