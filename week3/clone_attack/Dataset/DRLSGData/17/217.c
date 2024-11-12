int main () {
    char a [N] = {'\0'};
    void  match (char *ps, char *pf, int len);
    for (; !(1 != scanf ("%s", a));) {
        char b [N] = {'\0'};
        match (a, b, strlen (a));
    }
    return 0;
}

void  match (char *ps, char *pf, int len) {
    char str [N] = {'\0'};
    int i, flag, last, isleft, isright;
    char strf [N] = {'\0'};
    strcpy (strf, pf);
    strcpy (str, ps);
    printf ("%s\n", ps);
    for (i = 0; len > i; i++) {
        if (!('(' != *(str + i)))
            *(strf + i) = -1;
        else {
            if (!(')' != *(str + i)))
                *(strf + i) = +1;
        }
    }
    do {
        isright = 0;
        last = 0;
        flag = 0;
        isleft = 0;
        for (i = 0; len > i; i++) {
            if (!(1 != *(strf + i)) && !(1 != flag)) {
                isleft = 1;
                flag = 0;
                *(strf + i) = 0;
                *(strf + last) = 0;
            }
            else {
                if (*(strf + i) == -1) {
                    isright = 1;
                    flag = 1;
                    last = i;
                }
            }
        }
    }
    while (isleft && isright);
    for (i = 0; len > i; i++) {
        if (*(strf + i) == -1)
            printf ("$");
        else {
            if (*(strf + i) == +1)
                ;
            else
                printf (" ");
        }
    }
}

