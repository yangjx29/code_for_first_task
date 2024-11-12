long  bZtGIU8 (char trpkCaVivP [], long  ydQAIONCjpxo) {
    long  hejEVXClvomc;
    hejEVXClvomc = (431 - 431);
    for (int Un7DyGl6t2r = (226 - 226);
    trpkCaVivP[Un7DyGl6t2r] != '\0'; Un7DyGl6t2r = Un7DyGl6t2r +1) {
        if (trpkCaVivP[Un7DyGl6t2r] >= '0' && trpkCaVivP[Un7DyGl6t2r] <= '9')
            hejEVXClvomc = hejEVXClvomc * ydQAIONCjpxo + trpkCaVivP[Un7DyGl6t2r] - '0';
        if (trpkCaVivP[Un7DyGl6t2r] >= 'A' && trpkCaVivP[Un7DyGl6t2r] <= 'Z')
            hejEVXClvomc = hejEVXClvomc * ydQAIONCjpxo + trpkCaVivP[Un7DyGl6t2r] - 'A' + (331 - 321);
        if (trpkCaVivP[Un7DyGl6t2r] >= 'a' && trpkCaVivP[Un7DyGl6t2r] <= 'z')
            hejEVXClvomc = hejEVXClvomc * ydQAIONCjpxo + trpkCaVivP[Un7DyGl6t2r] - 'a' + (378 - 368);
    }
    return hejEVXClvomc;
}

int main () {
    char e4AGTQxw [(1063 - 998)] = {(768 - 768)};
    long  bkp13esaNKbq;
    long  NRO5wWPNAMs;
    long  ydQAIONCjpxo;
    ydQAIONCjpxo = bZtGIU8 (e4AGTQxw, bkp13esaNKbq);
    int tDi8sn;
    cin >> bkp13esaNKbq >> e4AGTQxw >> NRO5wWPNAMs;
    for (int Un7DyGl6t2r = (371 - 371);
    ydQAIONCjpxo >= (926 - 926); Un7DyGl6t2r = Un7DyGl6t2r +1) {
        int uZ2fvMeQ;
        uZ2fvMeQ = ydQAIONCjpxo % NRO5wWPNAMs;
        e4AGTQxw[Un7DyGl6t2r] = uZ2fvMeQ < (104 - 94) ? '0' + uZ2fvMeQ : 'A' + uZ2fvMeQ - 10;
        tDi8sn = Un7DyGl6t2r;
        ydQAIONCjpxo = (ydQAIONCjpxo - uZ2fvMeQ) / NRO5wWPNAMs;
        if (ydQAIONCjpxo == 0)
            break;
    }
    for (int Un7DyGl6t2r = tDi8sn;
    Un7DyGl6t2r >= 0; Un7DyGl6t2r = Un7DyGl6t2r -1)
        cout << e4AGTQxw[Un7DyGl6t2r];
    cout << endl;
    return 0;
}

