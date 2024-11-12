int main () {
    int QNiL92MvV;
    int QlDXkGTQh;
    int eVOe2LUuJQGP;
    int A63YMIcJzPkN;
    int oSwYREgzW0;
    int uskFZfBHa [QNiL92MvV] [QlDXkGTQh];
    cin >> QNiL92MvV >> QlDXkGTQh;
    for (eVOe2LUuJQGP = (741 - 741); QNiL92MvV > eVOe2LUuJQGP; eVOe2LUuJQGP++) {
        A63YMIcJzPkN = 0;
        while (QlDXkGTQh > A63YMIcJzPkN) {
            cin >> uskFZfBHa[eVOe2LUuJQGP][A63YMIcJzPkN];
            A63YMIcJzPkN++;
        };
    }
    for (A63YMIcJzPkN = 0; QlDXkGTQh > A63YMIcJzPkN; A63YMIcJzPkN++) {
        oSwYREgzW0 = 0;
        eVOe2LUuJQGP = 0;
        while (eVOe2LUuJQGP < QNiL92MvV &&(A63YMIcJzPkN -oSwYREgzW0) >= 0) {
            cout << uskFZfBHa[eVOe2LUuJQGP][A63YMIcJzPkN -oSwYREgzW0] << endl;
            oSwYREgzW0++;
            eVOe2LUuJQGP++;
        };
    }
    for (eVOe2LUuJQGP = 1; QNiL92MvV > eVOe2LUuJQGP; eVOe2LUuJQGP++)
        for (A63YMIcJzPkN = QlDXkGTQh -1, oSwYREgzW0 = 0; A63YMIcJzPkN >= 0 && QNiL92MvV > (eVOe2LUuJQGP + oSwYREgzW0); A63YMIcJzPkN--, oSwYREgzW0++)
            cout << uskFZfBHa[eVOe2LUuJQGP + oSwYREgzW0][A63YMIcJzPkN] << endl;
    return 0;
}

