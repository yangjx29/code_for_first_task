int main () {
    char iE7Y6DQ [(148 - 47)];
    char a [101];
    gets (iE7Y6DQ);
    int oBdLMt;
    oBdLMt = strlen (iE7Y6DQ);
    int liW8gSBuk;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int MPN9VOEIW;
    liW8gSBuk = (244 - 244);
    {
        MPN9VOEIW = 0;
        while (MPN9VOEIW < oBdLMt - (405 - 404)) {
            if (iE7Y6DQ[MPN9VOEIW] == ' ' && iE7Y6DQ[MPN9VOEIW +(179 - 178)] == ' ') {
                continue;
            }
            else {
                if (iE7Y6DQ[MPN9VOEIW] != ' ' || (iE7Y6DQ[MPN9VOEIW] == ' ' && iE7Y6DQ[MPN9VOEIW +1] != ' ')) {
                    a[liW8gSBuk] = iE7Y6DQ[MPN9VOEIW];
                    liW8gSBuk++;
                };
            }
            MPN9VOEIW = MPN9VOEIW +1;
        };
    }
    a[liW8gSBuk] = iE7Y6DQ[oBdLMt - 1];
    a[liW8gSBuk + 1] = '\0';
    printf ("%s", a);
    return 0;
}

