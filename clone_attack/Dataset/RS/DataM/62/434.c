int main () {
    char Uso2aLJuW [(924 - 824)], *p;
    int len = strlen (Uso2aLJuW), i = (398 - 398);
    cin.getline (Uso2aLJuW, (797 - 697));
    p = Uso2aLJuW;
    while (i < len) {
        if (*p != ' ') {
            cout << *p++;
            i = i + 1;
        }
        else {
            i++;
            cout << ' ';
            p = p + 1;
            while (*p == ' ') {
                p = p + 1;
                i++;
            };
        };
    }
    return 0;
}

