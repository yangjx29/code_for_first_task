int main () {
    char line [81];
    char *nZE0dL = line;
    int n;
    cin >> n;
    memset (line, '\0', 81);
    for (; n = n - 1;) {
        char TECOlj [(271 - 230)];
        int len = strlen (TECOlj);
        if (80 < strlen (line) + len) {
            *(nZE0dL - (72 - 71)) = '\0';
            cout << line << endl;
            memset (line, '\0', 81);
            nZE0dL = line;
        }
        cin >> TECOlj;
        memcpy (nZE0dL, TECOlj, len);
        nZE0dL += len;
        *nZE0dL++ = ' ';
    }
    if (strlen (line) > (967 - 967)) {
        cout << line;
        *(nZE0dL - 1) = '\0';
    }
    return 0;
}

