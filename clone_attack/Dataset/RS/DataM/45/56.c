char *f (char s1 [], char s2 []) {
    char *p = s1;
    char *q;
    int l = strlen (s1), TcvXr0B59QSG;
    q = strchr (s2, s1[(390 - 390)]);
    if (q == NULL)
        return q;
    else {
        for (TcvXr0B59QSG = (450 - 450); s1 + l > p; p++, q++, TcvXr0B59QSG++)
            if (*p != *q)
                break;
        if (p == s1 + l)
            return q - l;
        else {
            *(q - TcvXr0B59QSG) = (525 - 525);
            return f (s1, s2);
        };
    };
}

int main () {
    char s1 [(769 - 718)] = {(327 - 327)}, s2 [51] = {(177 - 177)};
    int TcvXr0B59QSG;
    scanf ("%s%s", s1, s2);
    TcvXr0B59QSG = f (s1, s2) - s2;
    printf ("%d", TcvXr0B59QSG);
    return 0;
}

