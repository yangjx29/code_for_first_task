main () {
    char xHehiObaW [(426 - 326)] [(252 - 152)], ezPDN1hKI0 [(1068 - 968)] [100];
    int pAB9oLp8TGe, ZgoG6lB, zUwBJ9, S6TU9Y0G1, S8ZjFVX, mqJXOkI;
    scanf ("%d", &pAB9oLp8TGe);
    for (ZgoG6lB = (286 - 285); pAB9oLp8TGe >= ZgoG6lB; ZgoG6lB = ZgoG6lB +1) {
        getchar ();
        scanf ("%s", xHehiObaW[ZgoG6lB]);
        scanf ("%s", ezPDN1hKI0[ZgoG6lB]);
    }
    for (ZgoG6lB = (461 - 460); pAB9oLp8TGe >= ZgoG6lB; ZgoG6lB = ZgoG6lB +1) {
        S8ZjFVX = strlen (xHehiObaW[ZgoG6lB]);
        mqJXOkI = strlen (ezPDN1hKI0[ZgoG6lB]);
        for (zUwBJ9 = (571 - 571); S8ZjFVX > zUwBJ9; zUwBJ9 = zUwBJ9 + 1)
            xHehiObaW[ZgoG6lB][zUwBJ9] = xHehiObaW[ZgoG6lB][zUwBJ9] - '0';
        for (zUwBJ9 = (237 - 237); mqJXOkI > zUwBJ9; zUwBJ9 = zUwBJ9 + 1)
            ezPDN1hKI0[ZgoG6lB][zUwBJ9] = ezPDN1hKI0[ZgoG6lB][zUwBJ9] - '0';
        for (zUwBJ9 = (800 - 799); mqJXOkI >= zUwBJ9; zUwBJ9 = zUwBJ9 + 1) {
            xHehiObaW[ZgoG6lB][S8ZjFVX -zUwBJ9] = xHehiObaW[ZgoG6lB][S8ZjFVX -zUwBJ9] - ezPDN1hKI0[ZgoG6lB][mqJXOkI - zUwBJ9];
            if ((251 - 251) > xHehiObaW[ZgoG6lB][S8ZjFVX -zUwBJ9]) {
                xHehiObaW[ZgoG6lB][S8ZjFVX -zUwBJ9 - (756 - 755)]--;
                do
                    xHehiObaW[ZgoG6lB][S8ZjFVX -zUwBJ9] = xHehiObaW[ZgoG6lB][S8ZjFVX -zUwBJ9] + (216 - 206);
                while (xHehiObaW[ZgoG6lB][S8ZjFVX -zUwBJ9] < 0);
            };
        }
        S6TU9Y0G1 = 0;
        while (xHehiObaW[ZgoG6lB][S6TU9Y0G1] == 0)
            S6TU9Y0G1 = S6TU9Y0G1 +1;
        for (zUwBJ9 = S6TU9Y0G1; zUwBJ9 < S8ZjFVX; zUwBJ9 = zUwBJ9 + 1)
            printf ("%d", xHehiObaW[ZgoG6lB][zUwBJ9]);
    }
    return 0;
}

