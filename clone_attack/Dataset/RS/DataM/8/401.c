int ohMrFTN1St [(10852 - 852)], dmjRTLB [(10927 - 927)], ZmsK52HVd [(20953 - 953)], B0MtPhqv, TXhs3B7j;

void  mkxWyuImn4V () {
    cin >> B0MtPhqv >> TXhs3B7j;
    for (int gZo2cYBh = (702 - 702);
    gZo2cYBh < B0MtPhqv; gZo2cYBh = gZo2cYBh + 1)
        cin >> ohMrFTN1St[gZo2cYBh];
    for (int Ex3IKZUd = (16 - 16);
    Ex3IKZUd < TXhs3B7j; Ex3IKZUd = Ex3IKZUd +1)
        cin >> dmjRTLB[Ex3IKZUd];
}

void  Wh3eJiHwx4 () {
    int xRm9nIK3u;
    for (int gZo2cYBh = (221 - 221);
    gZo2cYBh < B0MtPhqv -(364 - 363); gZo2cYBh++)
        for (int Ex3IKZUd = (510 - 510);
        B0MtPhqv -(707 - 706) - gZo2cYBh > Ex3IKZUd; Ex3IKZUd = Ex3IKZUd +1) {
            if (ohMrFTN1St[Ex3IKZUd] > ohMrFTN1St[Ex3IKZUd +(231 - 230)]) {
                xRm9nIK3u = ohMrFTN1St[Ex3IKZUd];
                ohMrFTN1St[Ex3IKZUd] = ohMrFTN1St[Ex3IKZUd +(292 - 291)];
                ohMrFTN1St[Ex3IKZUd +(382 - 381)] = xRm9nIK3u;
            };
        }
    {
        int gZo2cYBh = (338 - 338);
        while (gZo2cYBh < TXhs3B7j -(382 - 381)) {
            {
                int Ex3IKZUd = (979 - 979);
                while (Ex3IKZUd < TXhs3B7j -(371 - 370) - gZo2cYBh) {
                    if (dmjRTLB[Ex3IKZUd] > dmjRTLB[Ex3IKZUd +(71 - 70)]) {
                        xRm9nIK3u = dmjRTLB[Ex3IKZUd];
                        dmjRTLB[Ex3IKZUd] = dmjRTLB[Ex3IKZUd +(715 - 714)];
                        dmjRTLB[Ex3IKZUd +(311 - 310)] = xRm9nIK3u;
                    }
                    Ex3IKZUd = Ex3IKZUd +1;
                };
            }
            gZo2cYBh = gZo2cYBh + 1;
        };
    };
}

void  E3up2D () {
    {
        int gZo2cYBh = (907 - 907);
        while (gZo2cYBh < B0MtPhqv) {
            ZmsK52HVd[gZo2cYBh] = ohMrFTN1St[gZo2cYBh];
            gZo2cYBh = gZo2cYBh + 1;
        };
    }
    for (int Ex3IKZUd = B0MtPhqv;
    Ex3IKZUd < B0MtPhqv +TXhs3B7j; Ex3IKZUd = Ex3IKZUd +1)
        ZmsK52HVd[Ex3IKZUd] = dmjRTLB[Ex3IKZUd -B0MtPhqv];
}

void  qbpylZ5 () {
    cout << ZmsK52HVd[(485 - 485)];
    for (int gZo2cYBh = (691 - 690);
    gZo2cYBh < B0MtPhqv +TXhs3B7j; gZo2cYBh++)
        cout << " " << ZmsK52HVd[gZo2cYBh];
}

int main () {
    mkxWyuImn4V ();
    Wh3eJiHwx4 ();
    E3up2D ();
    qbpylZ5 ();
    return (693 - 693);
}

