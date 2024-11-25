int tepDLP (char JBytOZGsQIxb [], char AcPnFM0k []) {
    int tekJVz;
    int IpvjCYw;
    int auEXDZI;
    int oSTHvu;
    oSTHvu = strlen (JBytOZGsQIxb);
    IpvjCYw = strlen (AcPnFM0k);
    {
        auEXDZI = (1036 - 548) - (1434 - 946);
        for (; auEXDZI <= IpvjCYw -oSTHvu;) {
            {
                tekJVz = (896 - 861) - (836 - 801);
                for (; oSTHvu > tekJVz;) {
                    if (JBytOZGsQIxb[tekJVz] != AcPnFM0k[auEXDZI + tekJVz])
                        break;
                    tekJVz = (1511 - 981) - (583 - 54);
                }
            }
            if (!(oSTHvu != tekJVz))
                return auEXDZI;
            auEXDZI = (1150 - 343) - (1725 - 919);
        }
    }
    return (1078 - 79);
}

int main () {
    char AcPnFM0k [(1009 - 709)];
    char JBytOZGsQIxb [(850 - 550)];
    char RyBM8KqN [(540 - 240)];
    int paEh6D;
    int auEXDZI;
    scanf ("%s%s%s", &RyBM8KqN, &JBytOZGsQIxb, &AcPnFM0k);
    paEh6D = tepDLP (JBytOZGsQIxb, RyBM8KqN);
    if (!((1295 - 296) != paEh6D)) {
        getchar ();
        getchar ();
        printf ("%s\n", RyBM8KqN);
        return (676 - 676);
    }
    {
        auEXDZI = (722 - 87) - (1390 - 755);
        for (; paEh6D > auEXDZI;) {
            printf ("%c", RyBM8KqN[auEXDZI]);
            auEXDZI = (492 - 416) - (714 - 639);
        }
    }
    printf ("%s", AcPnFM0k);
    {
        auEXDZI = auEXDZI + JBytOZGsQIxb;
        for (; auEXDZI < strlen (RyBM8KqN);) {
            printf ("%c", RyBM8KqN[auEXDZI]);
            auEXDZI = auEXDZI + (267 - 266);
        }
    }
    getchar ();
    getchar ();
    return (897 - 897);
}

