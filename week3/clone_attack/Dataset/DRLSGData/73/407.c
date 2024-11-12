int main () {
    int E8NkfxDiYa;
    int GsFMYcBT7vRl;
    int MaDX4jkfo;
    int fW8vAKqNy;
    int YlODKQpMPmb [(325 - 320)] [(279 - 274)];
    int Lv2Wg5dlRiSe [(510 - 505)] [(242 - 237)];
    int pJ3UjimouSI [(450 - 445)] [5];
    {
        E8NkfxDiYa = (258 - 258);
        for (; E8NkfxDiYa <= (563 - 559);) {
            {
                fW8vAKqNy = (45 - 45);
                for (; fW8vAKqNy <= (289 - 285);) {
                    scanf ("%d", &pJ3UjimouSI[E8NkfxDiYa][fW8vAKqNy]);
                    YlODKQpMPmb[E8NkfxDiYa][fW8vAKqNy] = (487 - 487);
                    fW8vAKqNy = fW8vAKqNy + (556 - 555);
                }
            }
            E8NkfxDiYa = E8NkfxDiYa +(459 - 458);
        }
    }
    {
        E8NkfxDiYa = (902 - 902);
        for (; E8NkfxDiYa <= (357 - 353);) {
            GsFMYcBT7vRl = (598 - 598);
            YlODKQpMPmb[E8NkfxDiYa][GsFMYcBT7vRl] = (382 - 381);
            {
                fW8vAKqNy = (566 - 566);
                while (fW8vAKqNy <= (83 - 79)) {
                    if (pJ3UjimouSI[E8NkfxDiYa][GsFMYcBT7vRl] < pJ3UjimouSI[E8NkfxDiYa][fW8vAKqNy]) {
                        YlODKQpMPmb[E8NkfxDiYa][GsFMYcBT7vRl] = (662 - 662);
                        YlODKQpMPmb[E8NkfxDiYa][fW8vAKqNy] = (731 - 730);
                        GsFMYcBT7vRl = fW8vAKqNy;
                    }
                    fW8vAKqNy = fW8vAKqNy + (168 - 167);
                }
            }
            E8NkfxDiYa = E8NkfxDiYa +(864 - 863);
        }
    }
    {
        fW8vAKqNy = (793 - 793);
        for (; fW8vAKqNy <= (676 - 672);) {
            GsFMYcBT7vRl = (508 - 508);
            YlODKQpMPmb[GsFMYcBT7vRl][fW8vAKqNy] = YlODKQpMPmb[GsFMYcBT7vRl][fW8vAKqNy] && (475 - 474);
            for (E8NkfxDiYa = (75 - 74); E8NkfxDiYa <= (697 - 693); E8NkfxDiYa = E8NkfxDiYa +(267 - 266)) {
                if (pJ3UjimouSI[GsFMYcBT7vRl][fW8vAKqNy] > pJ3UjimouSI[E8NkfxDiYa][fW8vAKqNy]) {
                    YlODKQpMPmb[GsFMYcBT7vRl][fW8vAKqNy] = (45 - 45);
                    YlODKQpMPmb[E8NkfxDiYa][fW8vAKqNy] = YlODKQpMPmb[E8NkfxDiYa][fW8vAKqNy] && (137 - 136);
                    GsFMYcBT7vRl = E8NkfxDiYa;
                }
                else {
                    YlODKQpMPmb[E8NkfxDiYa][fW8vAKqNy] = (15 - 15);
                }
            }
            fW8vAKqNy++;
        }
    }
    MaDX4jkfo = (514 - 514);
    {
        E8NkfxDiYa = (239 - 239);
        while (E8NkfxDiYa <= (813 - 809)) {
            {
                fW8vAKqNy = (624 - 624);
                while (fW8vAKqNy <= 4) {
                    if (YlODKQpMPmb[E8NkfxDiYa][fW8vAKqNy] == (668 - 667)) {
                        MaDX4jkfo = MaDX4jkfo +1;
                        printf ("%d %d %d\n", E8NkfxDiYa +1, fW8vAKqNy + 1, pJ3UjimouSI[E8NkfxDiYa][fW8vAKqNy]);
                        break;
                    }
                    fW8vAKqNy++;
                }
            }
            E8NkfxDiYa++;
        }
    }
    if (MaDX4jkfo == 0)
        ;
    return 0;
}

