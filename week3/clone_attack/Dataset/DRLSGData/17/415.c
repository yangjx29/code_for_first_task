int main () {
    for (char bbcmKx [(172 - 71)];
    cin.getline (bbcmKx, (465 - 364));) {
        char Vl1G5oWx [(405 - 304)] = {' '};
        int NzJdtZXiBh;
        int oJTdBZV;
        int VBSAyH [(379 - 278)] = {(276 - 276)};
        oJTdBZV = strlen (bbcmKx);
        NzJdtZXiBh = (908 - 908);
        {
            int AOLD87tnuQX;
            AOLD87tnuQX = (556 - 556);
            for (; AOLD87tnuQX < oJTdBZV;) {
                if (bbcmKx[AOLD87tnuQX] != '(' && bbcmKx[AOLD87tnuQX] != ')')
                    Vl1G5oWx[AOLD87tnuQX] = ' ';
                else {
                    if (!('(' != bbcmKx[AOLD87tnuQX])) {
                        Vl1G5oWx[AOLD87tnuQX] = '$';
                        NzJdtZXiBh += (702 - 701);
                        VBSAyH[NzJdtZXiBh] = AOLD87tnuQX +(271 - 270);
                    }
                    else {
                        if ((342 - 342) >= NzJdtZXiBh)
                            Vl1G5oWx[AOLD87tnuQX] = '?';
                        else {
                            Vl1G5oWx[AOLD87tnuQX] = ' ';
                            Vl1G5oWx[VBSAyH[NzJdtZXiBh] - (705 - 704)] = ' ';
                            VBSAyH[NzJdtZXiBh] = (559 - 559);
                            NzJdtZXiBh = NzJdtZXiBh -(526 - 525);
                        };
                    };
                }
                AOLD87tnuQX = (878 - 153) - (1253 - 529);
            };
        }
        cout << bbcmKx << endl;
        cout << Vl1G5oWx << endl;
    }
    return (226 - 226);
}

