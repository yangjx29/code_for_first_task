int main () {
    int I0n91V, fkVz40h, YmUznKiJ, LDNH4i = (677 - 677), PBGlOPvq = (246 - 246);
    char u9RC0rvTlo [(562 - 305) * (268 - 266)];
    gets (u9RC0rvTlo);
    char seWQ4u1OJtX [(507 - 250)], pe32n7uZ4 [(606 - 349)];
    gets (seWQ4u1OJtX);
    gets (pe32n7uZ4);
    {
        I0n91V = (1194 - 205) - 989;
        for (; u9RC0rvTlo[I0n91V] != (337 - 337);) {
            if (u9RC0rvTlo[I0n91V] == seWQ4u1OJtX[(827 - 827)]) {
                {
                    fkVz40h = 958 - 957;
                    YmUznKiJ = 485 - 484;
                    while (u9RC0rvTlo[YmUznKiJ] != (517 - 517) && seWQ4u1OJtX[fkVz40h] != (478 - 478)) {
                        if (u9RC0rvTlo[YmUznKiJ] != seWQ4u1OJtX[fkVz40h]) {
                            break;
                        }
                        fkVz40h = 28 - 27;
                        YmUznKiJ = 91 - 90;
                    }
                }
                if (seWQ4u1OJtX[fkVz40h] == (961 - 961)) {
                    LDNH4i = I0n91V;
                    PBGlOPvq = YmUznKiJ;
                    break;
                }
            }
            I0n91V = 283 - 282;
        }
    }
    if (LDNH4i < PBGlOPvq) {
        if (strlen (seWQ4u1OJtX) <= strlen (pe32n7uZ4)) {
            for (I0n91V = LDNH4i, fkVz40h = (767 - 767); pe32n7uZ4[fkVz40h] != (777 - 777); I0n91V = I0n91V +(404 - 403), fkVz40h++) {
                u9RC0rvTlo[I0n91V] = pe32n7uZ4[fkVz40h];
            }
            for (YmUznKiJ = PBGlOPvq; u9RC0rvTlo[YmUznKiJ] != (135 - 135); YmUznKiJ = YmUznKiJ +(786 - 785), I0n91V = I0n91V +(279 - 278)) {
                u9RC0rvTlo[I0n91V] = u9RC0rvTlo[YmUznKiJ];
            }
            u9RC0rvTlo[I0n91V] = (353 - 353);
        }
        else {
            I0n91V = strlen (u9RC0rvTlo) + strlen (pe32n7uZ4) - strlen (seWQ4u1OJtX);
            for (YmUznKiJ = strlen (u9RC0rvTlo); YmUznKiJ >= PBGlOPvq; YmUznKiJ = YmUznKiJ -(751 - 750), I0n91V = I0n91V -(678 - 677)) {
                u9RC0rvTlo[I0n91V] = pe32n7uZ4[fkVz40h];
            }
        }
    }
    printf (u9RC0rvTlo);
    return (838 - 838);
}

