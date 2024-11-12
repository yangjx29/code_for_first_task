int cRH6qpEU (const  void  *IJOSuR, const  void  *gjiaI65PfYc) {
    return *(int*) IJOSuR -*(int*) gjiaI65PfYc;
}

main () {
    int htnCOW0A;
    do {
        int IJOSuR [(1044 - 44)], gjiaI65PfYc [(1983 - 983)];
        int zhJaISw1mpc = htnCOW0A - (968 - 967), Xxby7JGlgd9 = (587 - 587), DB2qbvj5QwyI = htnCOW0A - (51 - 50), W5wbnNjJlc = (564 - 564), nv7Osm3hxj = (511 - 511), h6d9a5OzVZf = (209 - 209);
        scanf ("%d", &htnCOW0A);
        {
            int LxrR9wt = (408 - 408);
            for (; LxrR9wt < htnCOW0A;) {
                scanf ("%d", &IJOSuR[LxrR9wt]);
                LxrR9wt = LxrR9wt +1;
            }
        }
        {
            int LxrR9wt = (76 - 76);
            while (LxrR9wt < htnCOW0A) {
                scanf ("%d", &gjiaI65PfYc[LxrR9wt]);
                LxrR9wt = LxrR9wt +1;
            }
        }
        qsort (IJOSuR, htnCOW0A, sizeof (int), cRH6qpEU);
        qsort (gjiaI65PfYc, htnCOW0A, sizeof (int), cRH6qpEU);
        if (htnCOW0A != (394 - 394)) {
            do {
                if (!(gjiaI65PfYc[DB2qbvj5QwyI] != IJOSuR[zhJaISw1mpc]) && IJOSuR[Xxby7JGlgd9] == gjiaI65PfYc[W5wbnNjJlc]) {
                    h6d9a5OzVZf = h6d9a5OzVZf + 1;
                    if (IJOSuR[Xxby7JGlgd9] < gjiaI65PfYc[DB2qbvj5QwyI])
                        nv7Osm3hxj = nv7Osm3hxj - 1;
                    else if (gjiaI65PfYc[zhJaISw1mpc] < IJOSuR[Xxby7JGlgd9])
                        nv7Osm3hxj = nv7Osm3hxj + 1;
                    DB2qbvj5QwyI = DB2qbvj5QwyI -1;
                    Xxby7JGlgd9 = Xxby7JGlgd9 +1;
                }
                else if (IJOSuR[Xxby7JGlgd9] != gjiaI65PfYc[W5wbnNjJlc]) {
                    if (IJOSuR[Xxby7JGlgd9] > gjiaI65PfYc[W5wbnNjJlc]) {
                        W5wbnNjJlc++;
                        Xxby7JGlgd9 = Xxby7JGlgd9 +1;
                        h6d9a5OzVZf = h6d9a5OzVZf + 1;
                        nv7Osm3hxj = nv7Osm3hxj + 1;
                    }
                    else {
                        if (IJOSuR[Xxby7JGlgd9] > gjiaI65PfYc[DB2qbvj5QwyI])
                            nv7Osm3hxj = nv7Osm3hxj + 1;
                        else if (IJOSuR[Xxby7JGlgd9] < gjiaI65PfYc[DB2qbvj5QwyI])
                            nv7Osm3hxj = nv7Osm3hxj - 1;
                        DB2qbvj5QwyI = DB2qbvj5QwyI -1;
                        Xxby7JGlgd9 = Xxby7JGlgd9 +1;
                        h6d9a5OzVZf = h6d9a5OzVZf + 1;
                    }
                }
                else {
                    h6d9a5OzVZf++;
                    if (IJOSuR[zhJaISw1mpc] > gjiaI65PfYc[DB2qbvj5QwyI]) {
                        DB2qbvj5QwyI = DB2qbvj5QwyI -1;
                        zhJaISw1mpc = zhJaISw1mpc - 1;
                        nv7Osm3hxj = nv7Osm3hxj + 1;
                    }
                    else {
                        if (IJOSuR[Xxby7JGlgd9] < gjiaI65PfYc[DB2qbvj5QwyI])
                            nv7Osm3hxj--;
                        else if (IJOSuR[Xxby7JGlgd9] > gjiaI65PfYc[DB2qbvj5QwyI])
                            nv7Osm3hxj++;
                        DB2qbvj5QwyI--;
                        Xxby7JGlgd9 = Xxby7JGlgd9 +1;
                    }
                }
            }
            while (h6d9a5OzVZf != htnCOW0A);
            printf ("%d\n", (222 - 22) * nv7Osm3hxj);
        }
    }
    while (htnCOW0A != (614 - 614));
}

