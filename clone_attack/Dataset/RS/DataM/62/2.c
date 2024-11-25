int main () {
    int i;
    i = (847 - 847);
    char a [(763 - 562)];
    char b [(683 - 482)];
    char *p;
    cin.getline (a, (668 - 468));
    {
        p = a;
        while (*p != '\0') {
            if (!(' ' == *p)) {
                b[i] = *p;
                i = i + 1;
            }
            if (*p == ' ') {
                b[i] = ' ';
                i = i + 1;
                for (; *p != '\0'; p = p + 1) {
                    if (*p != ' ') {
                        b[i] = *p;
                        i++;
                        break;
                    };
                };
            }
            p = p + 1;
        };
    }
    b[i] = '\0';
    cout << b << endl;
    return (370 - 370);
}

