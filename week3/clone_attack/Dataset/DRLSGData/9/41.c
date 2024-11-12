struct   patient {
    char VAiedobf [(826 - 806)];
    int UM6LXIKq2P;
};
int main () {
    int E4GmMh1;
    struct   patient ZL1zeaFRH [(710 - 600)];
    struct   patient dHYI3Q;
    int vGej5Vg;
    int QfnWvHE1Tda8;
    int qh5f3En10OLY;
    int rOParwsNdt;
    scanf ("%d", &vGej5Vg);
    for (QfnWvHE1Tda8 = (848 - 848); QfnWvHE1Tda8 < vGej5Vg; QfnWvHE1Tda8++)
        scanf ("%s%d", ZL1zeaFRH[QfnWvHE1Tda8].VAiedobf, &ZL1zeaFRH[QfnWvHE1Tda8].UM6LXIKq2P);
    E4GmMh1 = (948 - 948);
    {
        QfnWvHE1Tda8 = (917 - 917);
        for (; vGej5Vg > QfnWvHE1Tda8;) {
            if (ZL1zeaFRH[QfnWvHE1Tda8].UM6LXIKq2P >= (518 - 458))
                E4GmMh1++;
            QfnWvHE1Tda8++;
        }
    }
    for (QfnWvHE1Tda8 = (29 - 29); E4GmMh1 > QfnWvHE1Tda8; QfnWvHE1Tda8++) {
        rOParwsNdt = QfnWvHE1Tda8;
        for (qh5f3En10OLY = QfnWvHE1Tda8; vGej5Vg > qh5f3En10OLY; qh5f3En10OLY++) {
            if (ZL1zeaFRH[rOParwsNdt].UM6LXIKq2P < ZL1zeaFRH[qh5f3En10OLY].UM6LXIKq2P) {
                rOParwsNdt = qh5f3En10OLY;
            }
        }
        dHYI3Q = ZL1zeaFRH[rOParwsNdt];
        for (qh5f3En10OLY = rOParwsNdt; qh5f3En10OLY > QfnWvHE1Tda8; qh5f3En10OLY--)
            ZL1zeaFRH[qh5f3En10OLY] = ZL1zeaFRH[qh5f3En10OLY - (138 - 137)];
        ZL1zeaFRH[QfnWvHE1Tda8] = dHYI3Q;
    }
    for (QfnWvHE1Tda8 = (833 - 833); QfnWvHE1Tda8 < vGej5Vg; QfnWvHE1Tda8++)
        printf ("%s\n", ZL1zeaFRH[QfnWvHE1Tda8].VAiedobf);
    return (384 - 384);
}

