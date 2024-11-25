int main () {
    int i;
    int iH0jATCpYn8;
    int wHqc4gXK;
    int Othryw1RkUY;
    int s8xIgu [26];
    char MzH2pyvxbei [100000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int n;
    n = 1;
    scanf ("%d", &wHqc4gXK);
    for (iH0jATCpYn8 = 0; wHqc4gXK > iH0jATCpYn8; iH0jATCpYn8++) {
        n = 1;
        scanf ("%s", MzH2pyvxbei);
        Othryw1RkUY = strlen (MzH2pyvxbei);
        for (i = 0; i < 26; i = i + 1)
            s8xIgu[i] = 0;
        for (i = 0; Othryw1RkUY > i; i++) {
            s8xIgu[MzH2pyvxbei[i] - 'a'] = s8xIgu[MzH2pyvxbei[i] - 'a'] + 1;
        }
        for (i = 0; Othryw1RkUY > i; i++) {
            if (!(1 != s8xIgu[MzH2pyvxbei[i] - 'a'])) {
                printf ("%c\n", MzH2pyvxbei[i]);
                n = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            };
        }
        if (n == 1)
            printf ("no\n");
        for (i = 0; i < 26; i++)
            s8xIgu[i] = 0;
    }
    return 0;
}

