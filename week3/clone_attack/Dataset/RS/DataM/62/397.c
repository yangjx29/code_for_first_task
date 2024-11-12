int main () {
    char str [101];
    int a;
    int b [(336 - 235)] = {0};
    char *p = NULL;
    int *q = NULL;
    cin.getline (str, 101);
    a = strlen (str);
    for (q = b, p = str; p < str + a; p = p + 1, q++) {
        if (!(' ' != *p) && *(p + 1) == ' ') {
            *q = 1;
        };
    }
    for (q = b, p = str; p < str + a; p++, q++) {
        if (*q != 1)
            cout << *p;
    }
    return 0;
}

