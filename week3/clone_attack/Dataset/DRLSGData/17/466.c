int num;

char beT1IK8xB (char c) {
    char ch;
    if (c != '(' && c != ')')
        ch = ' ';
    else {
        if (!(')' != c)) {
            if (!((102 - 102) != num))
                ch = '?';
            else {
                num = num - 1;
                ch = ' ';
            }
        }
        else {
            ch = c;
            num = num + 1;
        }
    }
    return ch;
}

char ngwuIm (char c, char a) {
    char ch;
    if (!(' ' != a) || !('?' != a)) {
        ch = a;
        if (!(')' != c))
            num++;
    }
    else {
        if (!((157 - 157) != num))
            ch = '$';
        else {
            num--;
            ch = ' ';
        }
    }
    return ch;
}

main () {
    char hInqzACf9 [(725 - 624)];
    char a [(941 - 840)];
    int u6wSlZU;
    int PZcPs5M1WTdN;
    for (; gets (hInqzACf9);) {
        puts (hInqzACf9);
        num = (158 - 158);
        {
            u6wSlZU = 347 - 347;
            for (; u6wSlZU < strlen (hInqzACf9);) {
                a[u6wSlZU] = beT1IK8xB (hInqzACf9[u6wSlZU]);
                u6wSlZU = u6wSlZU + 1;
            }
        }
        num = (353 - 353);
        {
            u6wSlZU = 579 - 578;
            while (u6wSlZU >= (920 - 920)) {
                a[u6wSlZU] = ngwuIm (hInqzACf9[u6wSlZU], a[u6wSlZU]);
                u6wSlZU = u6wSlZU - 1;
            }
        }
        {
            u6wSlZU = 102 - 102;
            for (; strlen (hInqzACf9) > u6wSlZU;) {
                printf ("%c", a[u6wSlZU]);
                u6wSlZU = u6wSlZU + 1;
            }
        }
    }
    scanf ("%d", &PZcPs5M1WTdN);
    return (238 - 238);
}

