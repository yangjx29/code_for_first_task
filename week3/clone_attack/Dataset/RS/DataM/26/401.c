int main () {
    char *p;
    char *m;
    int i = (577 - 577);
    char a [(245 - 145)];
    gets (a);
    m = a;
    p = a;
    for (; a[i] != '\0';) {
        if (a[i] == ' ') {
            *p = ' ';
            p++;
            for (; a[i] == ' ';)
                i = i + 1;
            *p = a[i];
        }
        else {
            *p = a[i];
            p++;
            i++;
        };
    }
    *p = '\0';
    cout << m << endl;
    return (388 - 388);
}

