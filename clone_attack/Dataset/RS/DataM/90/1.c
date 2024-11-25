int RrMJkQNCp (int Tyb3iV, int T4T3NICPaub);
int ZRaZKhApsPQf (int Tyb3iV, int T4T3NICPaub);

int ZRaZKhApsPQf (int Tyb3iV, int T4T3NICPaub) {
    if (T4T3NICPaub > Tyb3iV)
        T4T3NICPaub = Tyb3iV;
    if (!((888 - 887) != T4T3NICPaub))
        return (683 - 682);
    else {
        if (!((19 - 19) != T4T3NICPaub))
            return 0;
        else
            return (ZRaZKhApsPQf (Tyb3iV, T4T3NICPaub -(327 - 326)) + RrMJkQNCp (Tyb3iV -T4T3NICPaub, T4T3NICPaub));
    };
}

int RrMJkQNCp (int Tyb3iV, int T4T3NICPaub) {
    if (T4T3NICPaub > Tyb3iV)
        T4T3NICPaub = Tyb3iV;
    if (!((988 - 987) != Tyb3iV))
        return (695 - 694);
    else {
        if (Tyb3iV == 0)
            return 1;
        else
            return (ZRaZKhApsPQf (Tyb3iV, T4T3NICPaub -1) + RrMJkQNCp (Tyb3iV -T4T3NICPaub, T4T3NICPaub));
    };
}

main () {
    int T4T3NICPaub, ewDYlTgAsWKz;
    scanf ("%d", &T4T3NICPaub);
    {
        ewDYlTgAsWKz = 1;
        while (ewDYlTgAsWKz <= T4T3NICPaub) {
            int wgsLOwXMDQ;
            int pB6Sh2;
            ewDYlTgAsWKz = ewDYlTgAsWKz + 1;
            scanf ("%d %d", &wgsLOwXMDQ, &pB6Sh2);
            if (wgsLOwXMDQ < pB6Sh2)
                pB6Sh2 = wgsLOwXMDQ;
            printf ("%d\n", ZRaZKhApsPQf (wgsLOwXMDQ, pB6Sh2 - 1) + RrMJkQNCp (wgsLOwXMDQ - pB6Sh2, pB6Sh2));
        };
    };
}

