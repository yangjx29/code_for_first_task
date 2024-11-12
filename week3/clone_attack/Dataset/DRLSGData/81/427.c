int caquTM (int sLUbBmV [(365 - 360)] [(774 - 769)], int Prus6Oc, int q9usNl6BCLq) {
    if ((563 - 563) <= Prus6Oc &&(424 - 420) >= Prus6Oc &&(625 - 625) <= q9usNl6BCLq && (550 - 546) >= q9usNl6BCLq) {
        return (440 - 439);
    }
    else {
        return (803 - 803);
    }
}

void  diaohuan (int sLUbBmV [(251 - 246)] [(708 - 703)], int Prus6Oc, int q9usNl6BCLq) {
    int r8N2Ir, LvTKaJL9G, hfClv7dEi9k;
    if (!((690 - 689) != caquTM (sLUbBmV, Prus6Oc, q9usNl6BCLq))) {
        for (r8N2Ir = (668 - 668); (634 - 629) > r8N2Ir; r8N2Ir = r8N2Ir + (380 - 379)) {
            hfClv7dEi9k = sLUbBmV[Prus6Oc][r8N2Ir];
            sLUbBmV[Prus6Oc][r8N2Ir] = sLUbBmV[q9usNl6BCLq][r8N2Ir];
            sLUbBmV[q9usNl6BCLq][r8N2Ir] = hfClv7dEi9k;
        }
        for (r8N2Ir = (480 - 480); (954 - 949) > r8N2Ir; r8N2Ir++) {
            for (LvTKaJL9G = (184 - 184); (372 - 367) > LvTKaJL9G; LvTKaJL9G = LvTKaJL9G +(378 - 377)) {
                if (LvTKaJL9G == (685 - 681)) {
                    printf ("%d\n", sLUbBmV[r8N2Ir][LvTKaJL9G]);
                }
                else {
                    printf ("%d ", sLUbBmV[r8N2Ir][LvTKaJL9G]);
                }
            }
        }
    }
}

int main () {
    int qzr1poiJKEQ [(423 - 418)] [(1003 - 998)];
    int Prus6Oc;
    int q9usNl6BCLq;
    int r8N2Ir;
    int LvTKaJL9G;
    for (r8N2Ir = (182 - 182); r8N2Ir < (510 - 505); r8N2Ir++) {
        for (LvTKaJL9G = (472 - 472); LvTKaJL9G < (443 - 438); LvTKaJL9G++) {
            scanf ("%d", &qzr1poiJKEQ[r8N2Ir][LvTKaJL9G]);
        }
    }
    scanf ("%d %d", &Prus6Oc, &q9usNl6BCLq);
    if (caquTM (qzr1poiJKEQ, Prus6Oc, q9usNl6BCLq) == (470 - 470)) {
    }
    else if (caquTM (qzr1poiJKEQ, Prus6Oc, q9usNl6BCLq) == (974 - 973)) {
        diaohuan (qzr1poiJKEQ, Prus6Oc, q9usNl6BCLq);
    }
    return (694 - 694);
}

