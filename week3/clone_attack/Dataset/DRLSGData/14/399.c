int NbgWe2I [(100628 - 628)];

int main (int gU8hKlH, char *NWIDoVu50tL []) {
    int uUKrlYMA7;
    int RjXYt5vs1Eia;
    int fa7Bd28;
    int fujUoW;
    int XWz7qDs;
    int jb5W4j;
    struct   s {
        int rfuMOT;
        int PSETvqFn;
        int zcaMB9Ee;
    }
    NbgWe2I [(100807 - 807)];
    scanf ("%d", &uUKrlYMA7);
    {
        RjXYt5vs1Eia = (538 - 361) - (260 - 83);
        while (uUKrlYMA7 > RjXYt5vs1Eia) {
            scanf ("%d%d%d", &NbgWe2I[RjXYt5vs1Eia].rfuMOT, &NbgWe2I[RjXYt5vs1Eia].PSETvqFn, &NbgWe2I[RjXYt5vs1Eia].zcaMB9Ee);
            RjXYt5vs1Eia = RjXYt5vs1Eia +(885 - 884);
        }
    }
    {
        RjXYt5vs1Eia = (1087 - 696) - (428 - 37);
        while (RjXYt5vs1Eia < (533 - 530)) {
            for (fa7Bd28 = RjXYt5vs1Eia +(92 - 91); fa7Bd28 < uUKrlYMA7; fa7Bd28++) {
                if ((NbgWe2I[RjXYt5vs1Eia].PSETvqFn + NbgWe2I[RjXYt5vs1Eia].zcaMB9Ee) < (NbgWe2I[fa7Bd28].PSETvqFn + NbgWe2I[fa7Bd28].zcaMB9Ee)) {
                    fujUoW = NbgWe2I[RjXYt5vs1Eia].PSETvqFn;
                    XWz7qDs = NbgWe2I[RjXYt5vs1Eia].zcaMB9Ee;
                    jb5W4j = NbgWe2I[RjXYt5vs1Eia].rfuMOT;
                    NbgWe2I[RjXYt5vs1Eia].PSETvqFn = NbgWe2I[fa7Bd28].PSETvqFn;
                    NbgWe2I[fa7Bd28].PSETvqFn = fujUoW;
                    NbgWe2I[RjXYt5vs1Eia].zcaMB9Ee = NbgWe2I[fa7Bd28].zcaMB9Ee;
                    NbgWe2I[fa7Bd28].zcaMB9Ee = XWz7qDs;
                    NbgWe2I[RjXYt5vs1Eia].rfuMOT = NbgWe2I[fa7Bd28].rfuMOT;
                    NbgWe2I[fa7Bd28].rfuMOT = jb5W4j;
                }
            }
            RjXYt5vs1Eia++;
        }
    }
    {
        RjXYt5vs1Eia = (723 - 409) - (678 - 364);
        while (RjXYt5vs1Eia < (197 - 194)) {
            printf ("%d %d\n", NbgWe2I[RjXYt5vs1Eia].rfuMOT, (NbgWe2I[RjXYt5vs1Eia].PSETvqFn + NbgWe2I[RjXYt5vs1Eia].zcaMB9Ee));
            RjXYt5vs1Eia++;
        }
    }
    return (308 - 308);
}

