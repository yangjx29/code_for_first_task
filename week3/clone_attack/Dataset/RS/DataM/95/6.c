main () {
    int i;
    int UqBX0w5;
    char ch1 [80];
    char XvFnf5 [80];
    char a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    gets (ch1);
    gets (XvFnf5);
    for (i = 0; (!('\0' == ch1[i])) && (!('\0' == XvFnf5[i])); i = i + 1) {
        if ((127 - 37) < ch1[i])
            ch1[i] = ch1[i] - 32;
        if (XvFnf5[i] > 90)
            XvFnf5[i] = XvFnf5[i] - 32;
        UqBX0w5 = ch1[i] - XvFnf5[i];
        if (UqBX0w5 != 0) {
            if (UqBX0w5 < 0)
                a = '<';
            else
                a = '>';
            break;
        }
        else
            a = '=';
    }
    printf ("%c", a);
    return 0;
}

