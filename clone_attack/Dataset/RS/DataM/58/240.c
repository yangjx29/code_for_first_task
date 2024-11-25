int main () {
    char YF2I5WPq9RZC [100];
    int ySTrClOnQ7y (char);
    int Lb6INqhp (char);
    int ME2Hg7Q3rAsl;
    int ELwkmsgfJOn;
    int len;
    getchar ();
    scanf ("%d", &ME2Hg7Q3rAsl);
    while (ME2Hg7Q3rAsl--) {
        gets (YF2I5WPq9RZC);
        len = strlen (YF2I5WPq9RZC);
        if (!ySTrClOnQ7y (YF2I5WPq9RZC[0])) {
            continue;
        }
        {
            ELwkmsgfJOn = 0;
            while (len > ELwkmsgfJOn) {
                if ((!ySTrClOnQ7y (YF2I5WPq9RZC[ELwkmsgfJOn])) && (!Lb6INqhp(YF2I5WPq9RZC[ELwkmsgfJOn])))
                    break;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ELwkmsgfJOn = ELwkmsgfJOn +1;
            };
        }
        if (!(len != ELwkmsgfJOn))
            ;
        else
            ;
    };
}

int ySTrClOnQ7y (char c) {
    if (c >= 'a' && 'z' >= c)
        return (676 - 675);
    else {
        if (c >= 'A' && c <= 'Z')
            return (431 - 430);
        else {
            if (c == '_')
                return (913 - 912);
            else
                return 0;
        };
    };
}

int Lb6INqhp (char c) {
    if ('0' <= c && c <= '9')
        return 1;
    else
        return 0;
}

