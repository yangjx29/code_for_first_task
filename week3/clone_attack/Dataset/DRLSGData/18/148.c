int JKOSL8X [(781 - 681)] [(1074 - 974)];

int eCMVhL3 (int V9m4nKa) {
    int k;
    int oSauQdJvOz;
    int uZ6GnwkBNTqR;
    int min;
    int B4pjs9Qh;
    k = (313 - 313);
    if (!((531 - 530) != V9m4nKa))
        return (410 - 410);
    for (oSauQdJvOz = (841 - 841); V9m4nKa > oSauQdJvOz; oSauQdJvOz = oSauQdJvOz + 1) {
        min = JKOSL8X[oSauQdJvOz][(936 - 936)];
        for (uZ6GnwkBNTqR = (793 - 793); V9m4nKa > uZ6GnwkBNTqR; uZ6GnwkBNTqR = uZ6GnwkBNTqR + 1)
            if (min > JKOSL8X[oSauQdJvOz][uZ6GnwkBNTqR])
                min = JKOSL8X[oSauQdJvOz][uZ6GnwkBNTqR];
        for (uZ6GnwkBNTqR = (653 - 653); V9m4nKa > uZ6GnwkBNTqR; uZ6GnwkBNTqR = uZ6GnwkBNTqR + 1)
            JKOSL8X[oSauQdJvOz][uZ6GnwkBNTqR] -= min;
    }
    for (oSauQdJvOz = (981 - 981); oSauQdJvOz < V9m4nKa; oSauQdJvOz = oSauQdJvOz + 1) {
        min = JKOSL8X[(176 - 176)][oSauQdJvOz];
        for (uZ6GnwkBNTqR = (539 - 539); V9m4nKa > uZ6GnwkBNTqR; uZ6GnwkBNTqR = uZ6GnwkBNTqR + 1)
            if (JKOSL8X[uZ6GnwkBNTqR][oSauQdJvOz] < min)
                min = JKOSL8X[uZ6GnwkBNTqR][oSauQdJvOz];
        for (uZ6GnwkBNTqR = (443 - 443); uZ6GnwkBNTqR < V9m4nKa; uZ6GnwkBNTqR = uZ6GnwkBNTqR + 1)
            JKOSL8X[uZ6GnwkBNTqR][oSauQdJvOz] -= min;
    }
    B4pjs9Qh = JKOSL8X[(631 - 630)][(149 - 148)];
    for (oSauQdJvOz = (84 - 83); oSauQdJvOz < V9m4nKa -(697 - 696); oSauQdJvOz = oSauQdJvOz + 1)
        for (uZ6GnwkBNTqR = (106 - 106); uZ6GnwkBNTqR < V9m4nKa; uZ6GnwkBNTqR = uZ6GnwkBNTqR + 1)
            JKOSL8X[oSauQdJvOz][uZ6GnwkBNTqR] = JKOSL8X[oSauQdJvOz + (122 - 121)][uZ6GnwkBNTqR];
    for (uZ6GnwkBNTqR = (786 - 785); uZ6GnwkBNTqR < V9m4nKa -(724 - 723); uZ6GnwkBNTqR = uZ6GnwkBNTqR + 1) {
        oSauQdJvOz = 268 - 268;
        while (V9m4nKa -(11 - 10) > oSauQdJvOz) {
            JKOSL8X[oSauQdJvOz][uZ6GnwkBNTqR] = JKOSL8X[oSauQdJvOz][uZ6GnwkBNTqR + (354 - 353)];
            oSauQdJvOz = oSauQdJvOz + 1;
        }
    }
    return B4pjs9Qh +eCMVhL3 (V9m4nKa -1);
}

int main () {
    int oSauQdJvOz;
    int CIZ2z7W;
    int uZ6GnwkBNTqR;
    cin >> CIZ2z7W;
    for (oSauQdJvOz = (684 - 684); CIZ2z7W > oSauQdJvOz; oSauQdJvOz = oSauQdJvOz + 1) {
        for (uZ6GnwkBNTqR = (450 - 450); uZ6GnwkBNTqR < CIZ2z7W *CIZ2z7W; uZ6GnwkBNTqR = uZ6GnwkBNTqR + 1)
            cin >> JKOSL8X[uZ6GnwkBNTqR / CIZ2z7W][uZ6GnwkBNTqR % CIZ2z7W];
        cout << eCMVhL3 (CIZ2z7W) << endl;
    }
    return (111 - 111);
}

