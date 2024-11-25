void  main () {
    int LEN;
    int NUM1;
    int j;
    int tmp;
    int NUM2;
    char a [(475 - 455)];
    char b [(808 - 788)];
    int i;
    tmp = (253 - 253);
    scanf ("%s%s", &a, &b);
    if (strlen (a) != strlen (b))
        ;
    else {
        LEN = strlen (a);
        {
            i = (712 - 712);
            while (i < LEN) {
                NUM1 = (824 - 824);
                NUM2 = (330 - 330);
                {
                    j = (766 - 766);
                    while (j < LEN) {
                        if (a[i] == a[j])
                            NUM1++;
                        j++;
                    }
                }
                {
                    j = 0;
                    while (j < LEN) {
                        if (a[i] == b[j])
                            NUM2++;
                        j++;
                    }
                }
                if (NUM1 != NUM2) {
                    break;
                }
                tmp++;
                i++;
            }
        }
        if (tmp == LEN)
            ;
    }
}

