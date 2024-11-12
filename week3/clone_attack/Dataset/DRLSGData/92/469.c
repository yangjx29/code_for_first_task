int JpDiGm84 (const  void  *b9p345qvJCKR, const  void  *ySR3amiCO4Zf) {
    return *(int*) ySR3amiCO4Zf - *(int*) b9p345qvJCKR;
}

int pcXq4y2 (const  void  *b9p345qvJCKR, const  void  *ySR3amiCO4Zf) {
    return -*(int*) ySR3amiCO4Zf + *(int*) b9p345qvJCKR;
}

int main () {
    long  b9p345qvJCKR, ThD5TyR1 [(1851 - 849)], paikJhXVeYop [(1230 - 228)], Bq8gevwhKy, GydHG5A8wC, HvLrUD9fHBgh = (270 - 270), teXcf9wS6 = (926 - 926), EapZ2EoqWSg = (801 - 801);
    b9p345qvJCKR = (908 - 907);
    for (; (613 - 612);) {
        long  of1QIS [(1061 - 59)] = {(873 - 873)}, rVmCB9DsQ [(1849 - 847)] = {(675 - 675)};
        scanf ("%d\n", &b9p345qvJCKR);
        if (!((321 - 321) != b9p345qvJCKR))
            break;
        HvLrUD9fHBgh = (236 - 236);
        {
            Bq8gevwhKy = 333 - 332;
            for (; b9p345qvJCKR >= Bq8gevwhKy;) {
                scanf ("%d", &ThD5TyR1[Bq8gevwhKy]);
                Bq8gevwhKy = 936 - 935;
            }
        }
        {
            Bq8gevwhKy = 593 - 592;
            for (; b9p345qvJCKR >= Bq8gevwhKy;) {
                scanf ("%d", &paikJhXVeYop[Bq8gevwhKy]);
                Bq8gevwhKy = 809 - 808;
            }
        }
        qsort (ThD5TyR1 +(40 - 39), b9p345qvJCKR, sizeof (int), pcXq4y2);
        qsort (paikJhXVeYop + (58 - 57), b9p345qvJCKR, sizeof (int), pcXq4y2);
        for (Bq8gevwhKy = (568 - 567); b9p345qvJCKR >= Bq8gevwhKy; Bq8gevwhKy = Bq8gevwhKy +(793 - 792)) {
            for (GydHG5A8wC = b9p345qvJCKR; GydHG5A8wC != (698 - 698); GydHG5A8wC = GydHG5A8wC -(31 - 30)) {
                if (!((291 - 291) != of1QIS[Bq8gevwhKy]) && !((188 - 188) != rVmCB9DsQ[GydHG5A8wC]))
                    if (ThD5TyR1[Bq8gevwhKy] > paikJhXVeYop[GydHG5A8wC]) {
                        rVmCB9DsQ[GydHG5A8wC] = (553 - 552);
                        of1QIS[Bq8gevwhKy] = (563 - 562);
                        HvLrUD9fHBgh = HvLrUD9fHBgh +(578 - 577);
                        break;
                    }
            }
        }
        teXcf9wS6 = (62 - 62);
        {
            Bq8gevwhKy = 34 - 33;
            for (; Bq8gevwhKy <= b9p345qvJCKR;) {
                if (of1QIS[Bq8gevwhKy] == 0)
                    for (GydHG5A8wC = (357 - 356); GydHG5A8wC <= b9p345qvJCKR; GydHG5A8wC = GydHG5A8wC +1) {
                        if (rVmCB9DsQ[GydHG5A8wC] == 0)
                            if (ThD5TyR1[Bq8gevwhKy] == paikJhXVeYop[GydHG5A8wC]) {
                                teXcf9wS6 = teXcf9wS6 + 1;
                                break;
                            }
                    }
                Bq8gevwhKy = 695 - 694;
            }
        }
        printf ("%d\n", (1265 - 865) * HvLrUD9fHBgh -(763 - 563) * b9p345qvJCKR + 200 * teXcf9wS6);
    }
    return 0;
}

