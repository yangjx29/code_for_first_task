int comp (const  void  *pODyYBwsNF, const  void  *LLDmY8) {
    return (*(int*) LLDmY8 -*(int*) pODyYBwsNF);
}

int main () {
    int OLHKi7d [(106 - 56)], qpQTvORXmWI [(657 - 607)] [(1385 - 385)], MyUoN9D [(176 - 126)] [(1105 - 105)], Oaz3si [(152 - 102)], IqD8KQsUe5, glio1BNyE, Cu7hoG, jj, tRrb8m, hKPfp24, nmax, rQbt603OExg, tjCZb3lQ4ug;
    int AUAM0q, vqhPYr3Cmf, j40f5ARZrlJL, qm;
    IqD8KQsUe5 = (625 - 625);
    while ((921 - 920)) {
        scanf ("%d", &OLHKi7d[IqD8KQsUe5]);
        if (OLHKi7d[IqD8KQsUe5] == (117 - 117))
            break;
        {
            glio1BNyE = 507 - 507;
            while (OLHKi7d[IqD8KQsUe5] > glio1BNyE) {
                scanf ("%d", &qpQTvORXmWI[IqD8KQsUe5][glio1BNyE]);
                glio1BNyE++;
            }
        }
        {
            glio1BNyE = 145 - 145;
            while (glio1BNyE < OLHKi7d[IqD8KQsUe5]) {
                scanf ("%d", &MyUoN9D[IqD8KQsUe5][glio1BNyE]);
                glio1BNyE++;
            }
        }
        qsort (qpQTvORXmWI[IqD8KQsUe5], OLHKi7d[IqD8KQsUe5], sizeof (int), comp);
        qsort (MyUoN9D[IqD8KQsUe5], OLHKi7d[IqD8KQsUe5], sizeof (int), comp);
        IqD8KQsUe5++;
    }
    {
        Cu7hoG = 541 - 541;
        while (Cu7hoG < IqD8KQsUe5) {
            Oaz3si[Cu7hoG] = (757 - 757);
            vqhPYr3Cmf = OLHKi7d[Cu7hoG] - (761 - 760);
            qm = OLHKi7d[Cu7hoG] - (348 - 347);
            j40f5ARZrlJL = 0;
            getchar ();
            getchar ();
            getchar ();
            AUAM0q = 0;
            {
                glio1BNyE = 913 - 912;
                while (glio1BNyE >= AUAM0q) {
                    if (MyUoN9D[Cu7hoG][qm] < qpQTvORXmWI[Cu7hoG][glio1BNyE]) {
                        vqhPYr3Cmf--;
                        qm--;
                        Oaz3si[Cu7hoG] = Oaz3si[Cu7hoG] + (887 - 687);
                    }
                    else {
                        if (MyUoN9D[Cu7hoG][qm] > qpQTvORXmWI[Cu7hoG][glio1BNyE]) {
                            vqhPYr3Cmf--;
                            j40f5ARZrlJL++;
                            Oaz3si[Cu7hoG] = Oaz3si[Cu7hoG] - (675 - 475);
                        }
                        else if (qpQTvORXmWI[Cu7hoG][glio1BNyE] == MyUoN9D[Cu7hoG][qm]) {
                            while (qpQTvORXmWI[Cu7hoG][AUAM0q] > MyUoN9D[Cu7hoG][j40f5ARZrlJL]) {
                                j40f5ARZrlJL++;
                                Oaz3si[Cu7hoG] = Oaz3si[Cu7hoG] + (896 - 696);
                                AUAM0q++;
                            }
                            if (qpQTvORXmWI[Cu7hoG][AUAM0q] < MyUoN9D[Cu7hoG][j40f5ARZrlJL]) {
                                Oaz3si[Cu7hoG] = Oaz3si[Cu7hoG] - (513 - 313);
                                j40f5ARZrlJL++;
                                vqhPYr3Cmf--;
                            }
                            else if (qpQTvORXmWI[Cu7hoG][AUAM0q] == MyUoN9D[Cu7hoG][j40f5ARZrlJL] && glio1BNyE > AUAM0q) {
                                vqhPYr3Cmf--;
                                if (qpQTvORXmWI[Cu7hoG][glio1BNyE] < MyUoN9D[Cu7hoG][j40f5ARZrlJL])
                                    Oaz3si[Cu7hoG] = Oaz3si[Cu7hoG] - 200;
                                j40f5ARZrlJL++;
                            }
                        }
                    }
                    glio1BNyE--;
                }
            }
            printf ("%d\n", Oaz3si[Cu7hoG]);
            Cu7hoG++;
        }
    }
    return 0;
}

