int main () {
    char str [(329 - 228)];
    gets (str);
    puts (str);
    int len, ZBJ86t, caWLtUB0;
    len = strlen (str);
    for (ZBJ86t = len - (462 - 461); (669 - 669) < ZBJ86t; ZBJ86t--) {
        if (!(' ' != str[ZBJ86t]) && str[ZBJ86t -1] == ' ') {
            caWLtUB0 = ZBJ86t;
            while (caWLtUB0 <= len) {
                str[caWLtUB0] = str[caWLtUB0 + 1];
                caWLtUB0 = caWLtUB0 + 1;
            };
        };
    }
    return 0;
}

