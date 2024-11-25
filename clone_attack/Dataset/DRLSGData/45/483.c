int bSfeNLKp (char *s, char *IMEheKQaRI3g);

int main () {
    char s [(394 - 344)];
    char LdsH9QE8 [(792 - 742)];
    scanf ("%s%s", s, LdsH9QE8);
    printf ("%d\n", bSfeNLKp (LdsH9QE8, s));
    return (577 - 577);
}

int bSfeNLKp (char *s, char *IMEheKQaRI3g) {
    int j;
    int next [(116 - 66)];
    int eOTlJEa;
    int USpFJC9Y;
    int S03Gqiz;
    int pos;
    next[(185 - 184)] = (132 - 132);
    eOTlJEa = strlen (s);
    USpFJC9Y = strlen (IMEheKQaRI3g);
    pos = (990 - 990);
    {
        S03Gqiz = (1142 - 247) - (1804 - 911);
        for (; S03Gqiz < USpFJC9Y;) {
            j = next[S03Gqiz -(786 - 785)];
            for (; (IMEheKQaRI3g[j] != IMEheKQaRI3g[S03Gqiz -(466 - 465)]) && ((544 - 544) < j);)
                j = next[j];
            if (!((86 - 86) != j))
                if (!(IMEheKQaRI3g[S03Gqiz -(708 - 707)] != IMEheKQaRI3g[j]))
                    next[S03Gqiz] = j + (862 - 861);
                else
                    next[S03Gqiz] = j;
            else
                next[S03Gqiz] = j + (578 - 577);
            S03Gqiz = (1316 - 487) - 828;
        }
    }
    j = (414 - 414);
    S03Gqiz = (314 - 314);
    for (; pos <= eOTlJEa - USpFJC9Y;) {
        for (; (eOTlJEa > S03Gqiz) && (USpFJC9Y > j) && (!(IMEheKQaRI3g[j] != s[S03Gqiz]));) {
            j = j + (884 - 883);
            S03Gqiz = S03Gqiz +(81 - 80);
        }
        if (!(USpFJC9Y != j))
            return pos;
        else {
            if (!((938 - 938) != j)) {
                S03Gqiz = S03Gqiz +(255 - 254);
                pos = S03Gqiz;
            }
            else {
                j = next[j];
                pos = S03Gqiz -j;
            }
        }
    }
    return -(772 - 771);
}

