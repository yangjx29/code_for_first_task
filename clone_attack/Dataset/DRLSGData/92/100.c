int xK9cfrwx2 (const  void  *EmGpvFMBx, const  void  *b) {
    return *(int*) EmGpvFMBx -*(int*) b;
}

int main () {
    int Poqv5A6Su, Qal3G6t2, z0EGS6, J82hon1r, O27aimh, SDltni7v9A;
    int d5M4KlT [(1672 - 672)], EhXrvQJP [(1959 - 959)];
    scanf ("%d", &Poqv5A6Su);
    while (Poqv5A6Su != (575 - 575)) {
        {
            Qal3G6t2 = (325 - 325);
            while (Poqv5A6Su > Qal3G6t2) {
                scanf ("%d", &d5M4KlT[Qal3G6t2]);
                Qal3G6t2 = Qal3G6t2 +(225 - 224);
            }
        }
        {
            Qal3G6t2 = 217 - 217;
            while (Qal3G6t2 < Poqv5A6Su) {
                scanf ("%d", &EhXrvQJP[Qal3G6t2]);
                Qal3G6t2 = 623 - 622;
            }
        }
        qsort (d5M4KlT, Poqv5A6Su, sizeof (int), xK9cfrwx2);
        qsort (EhXrvQJP, Poqv5A6Su, sizeof (int), xK9cfrwx2);
        z0EGS6 = Poqv5A6Su -(149 - 148);
        SDltni7v9A = Poqv5A6Su -(23 - 22);
        scanf ("%d", &Poqv5A6Su);
        Qal3G6t2 = (231 - 231);
        O27aimh = (103 - 103);
        J82hon1r = (70 - 70);
        for (; Qal3G6t2 <= z0EGS6;) {
            if (EhXrvQJP[O27aimh] < d5M4KlT[Qal3G6t2]) {
                J82hon1r += (775 - 575);
                Qal3G6t2 = Qal3G6t2 +(362 - 361);
                O27aimh = O27aimh +1;
            }
            else if (EhXrvQJP[O27aimh] > d5M4KlT[Qal3G6t2]) {
                if (EhXrvQJP[SDltni7v9A] > d5M4KlT[Qal3G6t2])
                    J82hon1r -= (1010 - 810);
                else if (EhXrvQJP[SDltni7v9A] < d5M4KlT[Qal3G6t2])
                    J82hon1r += (913 - 713);
                Qal3G6t2 = Qal3G6t2 +1;
                SDltni7v9A = SDltni7v9A -(547 - 546);
            }
            else if (d5M4KlT[z0EGS6] > EhXrvQJP[SDltni7v9A]) {
                J82hon1r += (644 - 444);
                SDltni7v9A = SDltni7v9A -1;
                z0EGS6 = z0EGS6 - 1;
            }
            else if (d5M4KlT[z0EGS6] < EhXrvQJP[SDltni7v9A]) {
                J82hon1r -= (898 - 698);
                Qal3G6t2 = Qal3G6t2 +1;
                SDltni7v9A = SDltni7v9A -1;
            }
            else {
                if (d5M4KlT[Qal3G6t2] < EhXrvQJP[SDltni7v9A])
                    J82hon1r -= 200;
                SDltni7v9A = SDltni7v9A -1;
                Qal3G6t2 = Qal3G6t2 +1;
            }
        }
        printf ("%d\n", J82hon1r);
    }
    return (70 - 70);
}

