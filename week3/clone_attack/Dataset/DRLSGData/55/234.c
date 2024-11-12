int rivREhl (int y, int lknq3tgGQ) {
    int ia4FWsDe8v;
    int U0aWyTbzh;
    U0aWyTbzh = (851 - 850);
    for (ia4FWsDe8v = (91 - 91); ia4FWsDe8v < lknq3tgGQ; ia4FWsDe8v = ia4FWsDe8v + (943 - 942))
        U0aWyTbzh = U0aWyTbzh *y;
    return (U0aWyTbzh);
}

void  main () {
    char b [(830 - 630)];
    char beOArB [(1015 - 915)];
    int i;
    long  x;
    int GyzMVlGf1;
    int U0aWyTbzh;
    int IeoziqPQ0n4r;
    int l;
    scanf ("%d %s %d", &GyzMVlGf1, beOArB, &IeoziqPQ0n4r);
    l = strlen (beOArB);
    x = (683 - 683);
    for (i = l - (324 - 323); i >= (382 - 382); i--) {
        if (beOArB[i] >= '0' && beOArB[i] <= '9')
            x = x + (beOArB[i] - '0') * rivREhl (GyzMVlGf1, l - (170 - 169) - i);
        else
            x = x + ((beOArB[i] - 'A') % ('a' - 'A') + (152 - 142)) * rivREhl (GyzMVlGf1, l - (949 - 948) - i);
    }
    {
        i = (297 - 297);
        while ((365 - 364)) {
            if (x % IeoziqPQ0n4r >= (994 - 994) && x % IeoziqPQ0n4r <= (935 - 926))
                b[i] = x % IeoziqPQ0n4r +'0';
            else
                b[i] = x % IeoziqPQ0n4r -(184 - 174) + 'A';
            x = (x - x % IeoziqPQ0n4r) / IeoziqPQ0n4r;
            if (x == (901 - 901))
                break;
            i = i + 1;
        }
    }
    for (U0aWyTbzh = i; U0aWyTbzh >= 0; U0aWyTbzh--)
        printf ("%c", b[U0aWyTbzh]);
}

