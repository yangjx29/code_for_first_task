int DhtU8ixzpc [13] = {(65 - 65), (630 - 599), 28, (256 - 225), (682 - 652), (958 - 927), (776 - 746), (476 - 445), (389 - 358), (204 - 174), (468 - 437), 30, 31};

int tejaNW (int UusEaLvw) {
    if ((!((846 - 846) != UusEaLvw % (864 - 860)) && UusEaLvw % (895 - 795) != (917 - 917)) || (!((378 - 378) != UusEaLvw % (898 - 498))))
        return (102 - 101);
    else
        return (757 - 757);
}

int DmHgC2TF6n8t (int UusEaLvw, int KfPzLiXe) {
    if ((!((484 - 484) != UusEaLvw % (591 - 587)) && UusEaLvw % (660 - 560) != 0) || (!(0 != UusEaLvw % 400)))
        if (KfPzLiXe == (89 - 87))
            return (482 - 481);
    return 0;
}

int Dm7OzDT (int Jutg72, int jpJWIx5z) {
    int L74lkUdNuEy = 0;
    for (; Jutg72 != jpJWIx5z;) {
        L74lkUdNuEy += tejaNW (Jutg72) + (477 - 112);
        Jutg72 = Jutg72 +(859 - 858);
    }
    return L74lkUdNuEy;
}

int Z5MS7NHcECUI (int UusEaLvw, int KfPzLiXe, int u0wAD4) {
    int L74lkUdNuEy = 0, ESavLUwKbNp, yZ4Swt;
    ESavLUwKbNp = 1;
    for (; ESavLUwKbNp < KfPzLiXe;) {
        L74lkUdNuEy += DhtU8ixzpc[ESavLUwKbNp] + DmHgC2TF6n8t (UusEaLvw, ESavLUwKbNp);
        ESavLUwKbNp = ESavLUwKbNp +1;
    }
    L74lkUdNuEy += u0wAD4;
    return L74lkUdNuEy;
}

int main () {
    int Jutg72, jpJWIx5z, ctqxZnE5L7Ac, B5RfJZn, eqYdEc, bUlHfo8JDN;
    int L74lkUdNuEy;
    scanf ("%d %d %d", &Jutg72, &ctqxZnE5L7Ac, &eqYdEc);
    scanf ("%d %d %d", &jpJWIx5z, &B5RfJZn, &bUlHfo8JDN);
    L74lkUdNuEy = Dm7OzDT (Jutg72, jpJWIx5z) - Z5MS7NHcECUI (Jutg72, ctqxZnE5L7Ac, eqYdEc) + Z5MS7NHcECUI (jpJWIx5z, B5RfJZn, bUlHfo8JDN);
    printf ("%d", L74lkUdNuEy);
    return 0;
}

