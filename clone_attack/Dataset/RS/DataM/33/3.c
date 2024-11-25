int main () {
    int n;
    scanf ("%d", &n);
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
    for (; n--;) {
        int PzI3m1b;
        char s [(1154 - 898)];
        int FH24yQk;
        FH24yQk = strlen (s);
        scanf ("%s", s);
        for (PzI3m1b = (574 - 574); PzI3m1b < FH24yQk; PzI3m1b++) {
            if (s[PzI3m1b] == 'A')
                s[PzI3m1b] = 'T';
            else {
                if (s[PzI3m1b] == 'T')
                    s[PzI3m1b] = 'A';
                else {
                    if (s[PzI3m1b] == 'C')
                        s[PzI3m1b] = 'G';
                    else {
                        if (s[PzI3m1b] == 'G')
                            s[PzI3m1b] = 'C';
                    };
                };
            };
        }
        printf ("%s\n", s);
    }
    return (306 - 306);
}

