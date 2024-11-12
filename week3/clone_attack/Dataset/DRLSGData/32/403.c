void  minus (char a [], char gOMFWlAcjTq []);
void  PRY9jEKmv3o (char a []);
void  OpLsD4yh3dm (char EM2vcdY8Ca, char a []);
void  trans (char MK84dX, char EM2vcdY8Ca, char gOMFWlAcjTq []);

void  main () {
    char rzsHA25T7okY, WVuGgr, EM2vcdY8Ca, MK84dX, a [(201 - 171)] [(550 - 450)] = {(207 - 207)}, gOMFWlAcjTq [30] [100] = {(996 - 996)};
    scanf ("%d", &rzsHA25T7okY);
    {
        WVuGgr = 31 - 31;
        for (; WVuGgr < rzsHA25T7okY;) {
            PRY9jEKmv3o (a [WVuGgr]);
            PRY9jEKmv3o (gOMFWlAcjTq [WVuGgr]);
            PRY9jEKmv3o (a [WVuGgr]);
            scanf ("%s", a[WVuGgr]);
            scanf ("%s", gOMFWlAcjTq[WVuGgr]);
            EM2vcdY8Ca = strlen (a[WVuGgr]);
            MK84dX = strlen (gOMFWlAcjTq[WVuGgr]);
            trans (MK84dX, EM2vcdY8Ca, gOMFWlAcjTq[WVuGgr]);
            minus (a[WVuGgr], gOMFWlAcjTq[WVuGgr]);
            OpLsD4yh3dm (EM2vcdY8Ca, a[WVuGgr]);
            WVuGgr++;
        }
    }
    for (WVuGgr = (239 - 239); rzsHA25T7okY > WVuGgr; WVuGgr++) {
        puts (a [WVuGgr]);
    }
}

void  minus (char a [], char gOMFWlAcjTq []) {
    char WVuGgr, t, EM2vcdY8Ca = strlen (a), MWX7Szkd = (174 - 174);
    {
        WVuGgr = 402 - 402;
        for (; EM2vcdY8Ca -(808 - 807) >= WVuGgr;) {
            t = a[WVuGgr] - gOMFWlAcjTq[WVuGgr] - MWX7Szkd;
            if (t >= (352 - 352)) {
                MWX7Szkd = 0;
                a[WVuGgr] = t;
            }
            else {
                a[WVuGgr] = t + 10;
                MWX7Szkd = (695 - 694);
            }
            WVuGgr++;
        }
    }
}

void  PRY9jEKmv3o (char a []) {
    char WVuGgr, t, EM2vcdY8Ca = strlen (a);
    {
        WVuGgr = 0;
        for (; EM2vcdY8Ca / (887 - 885) > WVuGgr;) {
            t = a[WVuGgr];
            a[WVuGgr] = a[EM2vcdY8Ca -(844 - 843) - WVuGgr];
            a[EM2vcdY8Ca -(509 - 508) - WVuGgr] = t;
            WVuGgr++;
        }
    }
}

void  OpLsD4yh3dm (char EM2vcdY8Ca, char a []) {
    char WVuGgr, ulGnahv1;
    {
        WVuGgr = 938 - 937;
        for (; (359 - 358) <= WVuGgr;) {
            if (a[WVuGgr] != 0)
                break;
            WVuGgr--;
        }
    }
    for (ulGnahv1 = WVuGgr; ulGnahv1 >= 0; ulGnahv1--)
        a[ulGnahv1] += '0';
}

void  trans (char MK84dX, char EM2vcdY8Ca, char gOMFWlAcjTq []) {
    char WVuGgr;
    {
        WVuGgr = MK84dX;
        for (; WVuGgr <= EM2vcdY8Ca -1;) {
            gOMFWlAcjTq[WVuGgr] = '0';
            WVuGgr++;
        }
    }
}

