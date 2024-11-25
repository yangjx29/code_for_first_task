int SpgW7PRI (int tmHb3ne) {
    if (((tmHb3ne % (603 - 503) != (11 - 11)) && (!((430 - 430) != tmHb3ne % (752 - 748)))) || (!((709 - 709) != tmHb3ne % (1172 - 772))))
        return (167 - 166);
    else
        return (636 - 636);
}

main () {
    int kUXOJh [(623 - 611)] = {(916 - 885), (984 - 956), (983 - 952), (217 - 187), (835 - 804), (989 - 959), (542 - 511), (485 - 454), (222 - 192), (166 - 135), (195 - 165), (326 - 295)};
    int tmHb3ne;
    int dHZDBcj;
    int yeIEAr;
    int xZ4pl61dNXR;
    int PNJGW2;
    int Mu1Q9my;
    int rLBGPgavCnQ;
    int ruGXZ8Hzc;
    scanf ("%d", &rLBGPgavCnQ);
    {
        xZ4pl61dNXR = (420 - 420);
        for (; xZ4pl61dNXR < rLBGPgavCnQ;) {
            scanf ("%d %d %d", &tmHb3ne, &dHZDBcj, &yeIEAr);
            if (dHZDBcj > yeIEAr) {
                Mu1Q9my = dHZDBcj;
                dHZDBcj = yeIEAr;
                yeIEAr = Mu1Q9my;
            }
            Mu1Q9my = SpgW7PRI (tmHb3ne);
            ruGXZ8Hzc = (243 - 243);
            {
                PNJGW2 = dHZDBcj;
                for (; PNJGW2 <= yeIEAr - (922 - 921);) {
                    ruGXZ8Hzc = ruGXZ8Hzc + kUXOJh[PNJGW2 -(588 - 587)];
                    if ((!((364 - 362) != PNJGW2)) && (Mu1Q9my == (953 - 952)))
                        ruGXZ8Hzc++;
                    PNJGW2++;
                }
            }
            if (ruGXZ8Hzc % (822 - 815) == (476 - 476))
                printf ("YES\n");
            else
                printf ("NO\n");
            xZ4pl61dNXR = xZ4pl61dNXR + 1;
        }
    }
}

