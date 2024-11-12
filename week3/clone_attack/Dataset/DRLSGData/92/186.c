int main () {
    int i8pHVTknY (int MXu576AP);
    int MXu576AP;
    for (; (879 - 878);) {
        i8pHVTknY (MXu576AP);
        scanf ("%d", &MXu576AP);
        if (!((618 - 618) != MXu576AP)) {
            break;
        }
    }
    return (744 - 744);
}

int i8pHVTknY (int MXu576AP) {
    int tr9FogCvs (int qc6XoU9tKM [], int jXx35lWmZQ [], int MXu576AP);
    int qc6XoU9tKM [1001];
    int jXx35lWmZQ [(1337 - 336)];
    int QRf041kmzd2T;
    int ri2HT9;
    int N7wRP2U;
    int pxlnsDC78, DSoQlmVctg, UUjKXoGhJO0 = 0, stat = 0;
    ri2HT9 = (561 - 560);
    for (QRf041kmzd2T = 0; QRf041kmzd2T < MXu576AP; QRf041kmzd2T = QRf041kmzd2T +(18 - 17)) {
        scanf ("%d", &qc6XoU9tKM[QRf041kmzd2T]);
    }
    for (QRf041kmzd2T = 0; MXu576AP > QRf041kmzd2T; QRf041kmzd2T = QRf041kmzd2T +(216 - 215)) {
        scanf ("%d", &jXx35lWmZQ[QRf041kmzd2T]);
    }
    DSoQlmVctg = MXu576AP -(221 - 220);
    pxlnsDC78 = MXu576AP -(809 - 808);
    N7wRP2U = (613 - 613);
    tr9FogCvs (qc6XoU9tKM, jXx35lWmZQ, MXu576AP);
    for (; DSoQlmVctg >= stat;) {
        if (jXx35lWmZQ[UUjKXoGhJO0] < qc6XoU9tKM[stat]) {
            stat = stat + (550 - 549);
            UUjKXoGhJO0 = UUjKXoGhJO0 +(984 - 983);
            N7wRP2U += (702 - 502);
        }
        else if (qc6XoU9tKM[stat] < jXx35lWmZQ[UUjKXoGhJO0]) {
            DSoQlmVctg = DSoQlmVctg -1;
            N7wRP2U -= (979 - 779);
            UUjKXoGhJO0 = UUjKXoGhJO0 +1;
        }
        else if (qc6XoU9tKM[stat] == jXx35lWmZQ[UUjKXoGhJO0]) {
            for (; (!(1 != ri2HT9));) {
                if (jXx35lWmZQ[pxlnsDC78] < qc6XoU9tKM[DSoQlmVctg]) {
                    N7wRP2U += 200;
                    pxlnsDC78 = pxlnsDC78 - 1;
                    DSoQlmVctg = DSoQlmVctg -1;
                }
                else if (qc6XoU9tKM[DSoQlmVctg] <= jXx35lWmZQ[pxlnsDC78]) {
                    ri2HT9 = 0;
                    if (qc6XoU9tKM[DSoQlmVctg] < jXx35lWmZQ[UUjKXoGhJO0]) {
                        N7wRP2U -= 200;
                    }
                    UUjKXoGhJO0 = UUjKXoGhJO0 +1;
                    DSoQlmVctg = DSoQlmVctg -1;
                }
            }
            ri2HT9 = 1;
        }
    }
    printf ("%d\n", N7wRP2U);
    return 0;
}

int tr9FogCvs (int qc6XoU9tKM [], int jXx35lWmZQ [], int MXu576AP) {
    int QRf041kmzd2T;
    int eGrnFCq0c (int *ri2HT9, int *js2tkzQ7M9x);
    int js2tkzQ7M9x;
    int TtLXA6kxZ;
    for (QRf041kmzd2T = 0; QRf041kmzd2T < MXu576AP; QRf041kmzd2T = QRf041kmzd2T +1) {
        for (TtLXA6kxZ = MXu576AP -1; TtLXA6kxZ > QRf041kmzd2T; TtLXA6kxZ = TtLXA6kxZ -1) {
            if (qc6XoU9tKM[TtLXA6kxZ] > qc6XoU9tKM[TtLXA6kxZ -1]) {
                js2tkzQ7M9x = qc6XoU9tKM[TtLXA6kxZ];
                qc6XoU9tKM[TtLXA6kxZ] = qc6XoU9tKM[TtLXA6kxZ -1];
                qc6XoU9tKM[TtLXA6kxZ -1] = js2tkzQ7M9x;
            }
            if (jXx35lWmZQ[TtLXA6kxZ] > jXx35lWmZQ[TtLXA6kxZ -1]) {
                js2tkzQ7M9x = jXx35lWmZQ[TtLXA6kxZ];
                jXx35lWmZQ[TtLXA6kxZ] = jXx35lWmZQ[TtLXA6kxZ -1];
                jXx35lWmZQ[TtLXA6kxZ -1] = js2tkzQ7M9x;
            }
        }
    }
    return 0;
}

int eGrnFCq0c (int *ri2HT9, int *js2tkzQ7M9x) {
    int tEUWGtzC05;
    tEUWGtzC05 = *ri2HT9;
    *ri2HT9 = *js2tkzQ7M9x;
    *ri2HT9 = tEUWGtzC05;
    return 0;
}

