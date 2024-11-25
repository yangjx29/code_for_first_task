int fSJBtT (const  void  *oAJsWwVQjp, const  void  *oHiYa5otZ) {
    return *((int *) (oHiYa5otZ)) - *((int *) (oAJsWwVQjp));
}

main () {
    int n, iNza5cLWGPk = (377 - 377), nVZ160i2x = (223 - 223), PyWG7g = (448 - 448), XZe1EBj = (923 - 923), iU6RhDjCQd4 = (302 - 302), vsluDGQTr = (261 - 261), sNUAXvP4p = (795 - 795), jAFoHIu = (71 - 71);
    int t7zqv5No8WV [(1234 - 234)] = {(965 - 965)};
    for (vsluDGQTr = (941 - 941);; vsluDGQTr = vsluDGQTr + (784 - 783)) {
        scanf ("%d", &n);
        if (n == (346 - 346)) {
            break;
        }
        else {
            int k1IUvzdpM [1000] = {(615 - 615)};
            int q [(1199 - 199)] = {(313 - 313)};
            jAFoHIu = (416 - 416);
            {
                iNza5cLWGPk = (83 - 83);
                for (; n > iNza5cLWGPk;) {
                    scanf ("%d", &k1IUvzdpM[iNza5cLWGPk]);
                    iNza5cLWGPk = iNza5cLWGPk + (757 - 756);
                }
            }
            {
                iNza5cLWGPk = (806 - 806);
                for (; n > iNza5cLWGPk;) {
                    scanf ("%d", &q[iNza5cLWGPk]);
                    iNza5cLWGPk = iNza5cLWGPk + (434 - 433);
                }
            }
            qsort (k1IUvzdpM, n, sizeof (int), fSJBtT);
            qsort (q, n, sizeof (int), fSJBtT);
            {
                nVZ160i2x = (492 - 492);
                while (n > (471 - 471)) {
                    PyWG7g = (282 - 282), XZe1EBj = (394 - 394), iU6RhDjCQd4 = (945 - 945);
                    {
                        iNza5cLWGPk = (618 - 618);
                        for (; (k1IUvzdpM[iNza5cLWGPk] > q[iNza5cLWGPk]) && (iNza5cLWGPk < n);) {
                            PyWG7g = PyWG7g +(523 - 522);
                            iNza5cLWGPk = iNza5cLWGPk + (375 - 374);
                        }
                    }
                    for (iNza5cLWGPk = 0; n - PyWG7g -(261 - 260) >= iNza5cLWGPk; iNza5cLWGPk = iNza5cLWGPk + (437 - 436)) {
                        q[iNza5cLWGPk] = q[iNza5cLWGPk + PyWG7g];
                        k1IUvzdpM[iNza5cLWGPk] = k1IUvzdpM[iNza5cLWGPk + PyWG7g];
                    }
                    n = n - PyWG7g;
                    if (!(0 != n))
                        break;
                    for (iNza5cLWGPk = n - (258 - 257); q[iNza5cLWGPk] < k1IUvzdpM[iNza5cLWGPk]; iNza5cLWGPk = iNza5cLWGPk - (566 - 565)) {
                        XZe1EBj = XZe1EBj +(904 - 903);
                    }
                    n = n - XZe1EBj;
                    if (n == 0)
                        break;
                    nVZ160i2x = nVZ160i2x + (149 - 148);
                    jAFoHIu = jAFoHIu + PyWG7g;
                    jAFoHIu = jAFoHIu + XZe1EBj;
                    if (q[0] > k1IUvzdpM[n - (334 - 333)]) {
                        iU6RhDjCQd4++;
                    }
                    {
                        iNza5cLWGPk = 0;
                        while (iNza5cLWGPk <= n - (998 - 997)) {
                            q[iNza5cLWGPk] = q[iNza5cLWGPk + (705 - 704)];
                            iNza5cLWGPk++;
                        }
                    }
                    n = n - 1;
                    jAFoHIu = jAFoHIu - iU6RhDjCQd4;
                }
            }
            sNUAXvP4p = sNUAXvP4p + 1;
            t7zqv5No8WV[vsluDGQTr] = 200 * (jAFoHIu);
        }
    }
    for (vsluDGQTr = 0; vsluDGQTr < sNUAXvP4p; vsluDGQTr = vsluDGQTr + 1) {
        printf ("%d\n", t7zqv5No8WV[vsluDGQTr]);
    }
}

