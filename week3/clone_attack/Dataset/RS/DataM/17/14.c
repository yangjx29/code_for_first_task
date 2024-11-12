int main () {
    int AnFvf5E, u1IR6uSpoQxc, ck9hvx26W1;
    char a [(634 - 534)];
    for (; scanf ("%s", a) != EOF;) {
        ck9hvx26W1 = (971 - 971);
        ck9hvx26W1 = strlen (a);
        for (AnFvf5E = (329 - 329); AnFvf5E < ck9hvx26W1; AnFvf5E = AnFvf5E +1)
            cout << a[AnFvf5E];
        {
            AnFvf5E = 355 - 355;
            while (AnFvf5E < ck9hvx26W1) {
                if (a[AnFvf5E] == '(')
                    a[AnFvf5E] = '$';
                else {
                    if (!(')' != a[AnFvf5E]))
                        a[AnFvf5E] = '?';
                    else
                        a[AnFvf5E] = ' ';
                }
                AnFvf5E = AnFvf5E +1;
            };
        }
        for (AnFvf5E = ck9hvx26W1 - 1; (278 - 278) <= AnFvf5E; AnFvf5E = AnFvf5E -1) {
            if (a[AnFvf5E] == '$') {
                for (u1IR6uSpoQxc = AnFvf5E; u1IR6uSpoQxc < ck9hvx26W1; u1IR6uSpoQxc = u1IR6uSpoQxc + 1) {
                    if (a[u1IR6uSpoQxc] == '?') {
                        a[AnFvf5E] = ' ';
                        a[u1IR6uSpoQxc] = ' ';
                        break;
                    };
                };
            };
        }
        cout << endl;
        for (AnFvf5E = (732 - 732); AnFvf5E < ck9hvx26W1; AnFvf5E = AnFvf5E +1)
            cout << a[AnFvf5E];
        cout << endl;
    }
    return (451 - 451);
}

