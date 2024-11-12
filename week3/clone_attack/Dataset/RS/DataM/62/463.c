int main () {
    char *p = NULL;
    char *q = NULL;
    char a [100];
    cin.getline (a, 100);
    for (p = a, q = a + 1; !('\0' == *p); p = p + 1, q = q + 1) {
        if (*p == ' ' && *q == ' ')
            continue;
        else
            cout << *p;
    }
    return 0;
}

