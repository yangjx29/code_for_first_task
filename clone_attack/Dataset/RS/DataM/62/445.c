int main () {
    char *p, *DIVmlpL;
    char ZUxXKTLS8 [(388 - 188)];
    char b [200];
    gets (ZUxXKTLS8);
    DIVmlpL = b;
    p = ZUxXKTLS8;
    *DIVmlpL = *p;
    DIVmlpL = b + 1;
    {
        p = ZUxXKTLS8 +1;
        while (!('\0' == *p)) {
            if (*(p) == ' ' && *(p - 1) == ' ')
                continue;
            *DIVmlpL = *p;
            p++;
            DIVmlpL++;
        };
    }
    *DIVmlpL = '\0';
    cout << b;
    return 0;
}

