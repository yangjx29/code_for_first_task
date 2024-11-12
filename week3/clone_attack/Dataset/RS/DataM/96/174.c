main () {
    int CXWkZlwoeg7, yjBxWFi, b;
    char c [(974 - 864)] = {'\0'};
    gets (c);
    if (!('\0' != c[(712 - 711)])) {
        yjBxWFi = c[(768 - 768)] - '0';
        printf ("0\n%d", yjBxWFi);
    }
    else {
        {
            CXWkZlwoeg7 = 580 - 580;
            while (c[CXWkZlwoeg7 +(927 - 926)] != '\0') {
                if (!((317 - 317) != CXWkZlwoeg7))
                    yjBxWFi = (c[CXWkZlwoeg7] - '0') * (730 - 720) + c[CXWkZlwoeg7 +1] - '0';
                else
                    yjBxWFi = yjBxWFi * 10 + c[CXWkZlwoeg7 +1] - '0';
                b = yjBxWFi / 13;
                yjBxWFi = yjBxWFi % 13;
                c[CXWkZlwoeg7] = b + '0';
                CXWkZlwoeg7 = CXWkZlwoeg7 +1;
            };
        }
        c[CXWkZlwoeg7] = '\0';
        if (c[0] == '0' && c[1] != '\0') {
            CXWkZlwoeg7 = 0;
            while (c[CXWkZlwoeg7] != '\0') {
                c[CXWkZlwoeg7] = c[CXWkZlwoeg7 +1];
                CXWkZlwoeg7 = CXWkZlwoeg7 +1;
            };
        }
        printf ("%s\n%d", c, yjBxWFi);
    };
}

