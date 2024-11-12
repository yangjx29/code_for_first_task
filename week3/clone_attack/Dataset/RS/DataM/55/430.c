void  pK76HTyJs2N0 (int yjwlKfC, int WnBYPaD8ELqm) {
    int czifWIYXqdl;
    char dAK18hVM;
    if (!(0 == yjwlKfC)) {
        czifWIYXqdl = yjwlKfC % WnBYPaD8ELqm;
        yjwlKfC = yjwlKfC / WnBYPaD8ELqm;
        if (czifWIYXqdl >= 10)
            dAK18hVM = 'A' + czifWIYXqdl - 10;
        else
            dAK18hVM = czifWIYXqdl + '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << dAK18hVM;
        pK76HTyJs2N0 (yjwlKfC, WnBYPaD8ELqm);
    };
}

void  x6vJVougCFx (char czifWIYXqdl [], int WOSEtf8qU, int WnBYPaD8ELqm) {
    int w6q8nYHMEgO = 0, jg8nM1i, yjwlKfC = 0;
    while (!(' ' == czifWIYXqdl[w6q8nYHMEgO])) {
        if (czifWIYXqdl[w6q8nYHMEgO] >= 'a' && czifWIYXqdl[w6q8nYHMEgO] <= 'z')
            jg8nM1i = czifWIYXqdl[w6q8nYHMEgO] - 'a' + 10;
        else if (czifWIYXqdl[w6q8nYHMEgO] >= 'A' && czifWIYXqdl[w6q8nYHMEgO] <= 'Z')
            jg8nM1i = czifWIYXqdl[w6q8nYHMEgO] - 'A' + 10;
        else
            jg8nM1i = czifWIYXqdl[w6q8nYHMEgO] - '0';
        w6q8nYHMEgO++;
        yjwlKfC = yjwlKfC * WOSEtf8qU +jg8nM1i;
    }
    if (yjwlKfC == 0)
        cout << 0;
    else
        pK76HTyJs2N0 (yjwlKfC, WnBYPaD8ELqm);
}

int main () {
    int w6q8nYHMEgO;
    int XZfFWKIgwd1;
    int XYdXoq;
    w6q8nYHMEgO = -1;
    char WOSEtf8qU [20];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    cin >> XZfFWKIgwd1;
    cin.get ();
    do {
        w6q8nYHMEgO++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        WOSEtf8qU[w6q8nYHMEgO] = cin.get ();
    }
    while (WOSEtf8qU[w6q8nYHMEgO] != ' ');
    cin >> XYdXoq;
    x6vJVougCFx (WOSEtf8qU, XZfFWKIgwd1, XYdXoq);
    return 0;
}

