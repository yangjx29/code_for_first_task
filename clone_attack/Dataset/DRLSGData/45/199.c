void  main () {
    char *Toi8CtKH5XUY, *TSsJj3vb2BNI;
    char ZtR3VC [(901 - 851)], k2hbPXVaW3uc [(674 - 624)];
    scanf ("%s%s", ZtR3VC, k2hbPXVaW3uc);
    for (TSsJj3vb2BNI = k2hbPXVaW3uc, Toi8CtKH5XUY = ZtR3VC; TSsJj3vb2BNI < k2hbPXVaW3uc + strlen (k2hbPXVaW3uc);) {
        if (!(*Toi8CtKH5XUY != *TSsJj3vb2BNI)) {
            for (Toi8CtKH5XUY = ZtR3VC; Toi8CtKH5XUY < strlen (ZtR3VC) + ZtR3VC; Toi8CtKH5XUY = Toi8CtKH5XUY +1) {
                if (*Toi8CtKH5XUY == *TSsJj3vb2BNI)
                    TSsJj3vb2BNI++;
                else
                    break;
            }
            if (Toi8CtKH5XUY = ZtR3VC +strlen (ZtR3VC))
                printf ("%d", TSsJj3vb2BNI -k2hbPXVaW3uc - strlen (ZtR3VC));
            else
                Toi8CtKH5XUY = ZtR3VC;
        }
        else
            TSsJj3vb2BNI++;
    }
}

