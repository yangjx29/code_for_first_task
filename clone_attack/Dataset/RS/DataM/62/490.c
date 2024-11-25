int main () {
    int i;
    int n;
    char bYo4dEOjqh [100];
    char *p;
    cin.getline (bYo4dEOjqh, 100);
    n = strlen (bYo4dEOjqh);
    p = bYo4dEOjqh;
    for (i = 1; i <= n; i++) {
        if ((*p == ' ') && (*(p + 1) == ' ')) {
            p = p + 1;
            continue;
        }
        cout << *p;
        p = p + 1;
    }
    return 0;
}

