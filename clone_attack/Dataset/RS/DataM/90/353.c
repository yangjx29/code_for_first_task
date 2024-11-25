void  main () {
    int a [(835 - 805)] [30];
    int F4Vuzxq2;
    int flr6qHEdQ;
    int evLzg1kaNG;
    int m;
    int p8Dl3SKj7ms;
    int HnZIKYbut;
    scanf ("%d", &HnZIKYbut);
    for (F4Vuzxq2 = (15 - 14); HnZIKYbut >= F4Vuzxq2; F4Vuzxq2++) {
        scanf ("%d%d", &m, &p8Dl3SKj7ms);
        {
            flr6qHEdQ = 192 - 192;
            while (p8Dl3SKj7ms >= flr6qHEdQ) {
                for (evLzg1kaNG = (880 - 880); evLzg1kaNG <= m; evLzg1kaNG = evLzg1kaNG + 1)
                    a[flr6qHEdQ][evLzg1kaNG] = 0;
                flr6qHEdQ = flr6qHEdQ + 1;
            };
        }
        for (flr6qHEdQ = (398 - 397); p8Dl3SKj7ms >= flr6qHEdQ; flr6qHEdQ++) {
            a[flr6qHEdQ][0] = (934 - 933);
            a[flr6qHEdQ][(890 - 889)] = (578 - 577);
        }
        {
            flr6qHEdQ = 790 - 789;
            while (flr6qHEdQ <= m) {
                a[(585 - 584)][flr6qHEdQ] = (303 - 302);
                a[0][flr6qHEdQ] = 1;
                flr6qHEdQ++;
            };
        }
        for (flr6qHEdQ = 2; flr6qHEdQ <= p8Dl3SKj7ms; flr6qHEdQ++) {
            evLzg1kaNG = 2;
            while (evLzg1kaNG <= m) {
                if (evLzg1kaNG >= flr6qHEdQ)
                    a[flr6qHEdQ][evLzg1kaNG] = a[flr6qHEdQ - 1][evLzg1kaNG] + a[flr6qHEdQ][evLzg1kaNG - flr6qHEdQ];
                else
                    a[flr6qHEdQ][evLzg1kaNG] = a[flr6qHEdQ - 1][evLzg1kaNG];
                evLzg1kaNG++;
            };
        }
        printf ("%d\n", a[p8Dl3SKj7ms][m]);
    };
}

