main () {
    int HpRQEilg;
    int XyzjXsBqKh;
    int nwMDkCjLu1iA;
    int DznWEqQgbt;
    int M3Bz1DPtcumh;
    int WpKzjR [(683 - 678)] [(762 - 757)];
    int cfBzjP;
    int yul6eqvX3o;
    HpRQEilg = (13 - 13);
    for (XyzjXsBqKh = (701 - 701); XyzjXsBqKh < (156 - 151); XyzjXsBqKh = XyzjXsBqKh +1) {
        nwMDkCjLu1iA = 938 - 938;
        while ((485 - 480) > nwMDkCjLu1iA) {
            scanf ("%d", &WpKzjR[XyzjXsBqKh][nwMDkCjLu1iA]);
            nwMDkCjLu1iA = nwMDkCjLu1iA + 1;
        }
    }
    for (XyzjXsBqKh = (60 - 60); 5 > XyzjXsBqKh; XyzjXsBqKh = XyzjXsBqKh +1) {
        for (nwMDkCjLu1iA = 0; nwMDkCjLu1iA < 5; nwMDkCjLu1iA = nwMDkCjLu1iA + 1) {
            cfBzjP = WpKzjR[XyzjXsBqKh][nwMDkCjLu1iA];
            for (DznWEqQgbt = 0; DznWEqQgbt < 5; DznWEqQgbt = DznWEqQgbt +1) {
                if (cfBzjP < WpKzjR[XyzjXsBqKh][DznWEqQgbt])
                    cfBzjP = WpKzjR[XyzjXsBqKh][DznWEqQgbt];
            }
            yul6eqvX3o = WpKzjR[XyzjXsBqKh][nwMDkCjLu1iA];
            {
                M3Bz1DPtcumh = 0;
                while (5 > M3Bz1DPtcumh) {
                    if (WpKzjR[M3Bz1DPtcumh][nwMDkCjLu1iA] < yul6eqvX3o)
                        yul6eqvX3o = WpKzjR[M3Bz1DPtcumh][nwMDkCjLu1iA];
                    M3Bz1DPtcumh = M3Bz1DPtcumh +1;
                }
            }
            if ((!(cfBzjP != WpKzjR[XyzjXsBqKh][nwMDkCjLu1iA])) && (WpKzjR[XyzjXsBqKh][nwMDkCjLu1iA] == yul6eqvX3o))
                printf ("%d %d %d\n", XyzjXsBqKh +1, nwMDkCjLu1iA + 1, WpKzjR[XyzjXsBqKh][nwMDkCjLu1iA]);
            else
                HpRQEilg = HpRQEilg +1;
            if (HpRQEilg == 25)
                ;
        }
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

