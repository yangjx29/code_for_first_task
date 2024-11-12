int main () {
    int jvF6XznWjkMO, azUa2rA3gpwb, sCgpdt1AD3B, EZOYoK;
    double  QKUmapR [(722 - 622)], SjmRV5S61Y [(688 - 588)], FUV9mG [100], tH0S7P1ira [100], vA8iBWfrZq [100];
    scanf ("%d", &EZOYoK);
    for (jvF6XznWjkMO = (184 - 184); jvF6XznWjkMO < EZOYoK; jvF6XznWjkMO = jvF6XznWjkMO + (598 - 597)) {
        scanf ("%d", &azUa2rA3gpwb);
        SjmRV5S61Y[jvF6XznWjkMO] = (897 - 897);
        for (sCgpdt1AD3B = (692 - 692); azUa2rA3gpwb > sCgpdt1AD3B; sCgpdt1AD3B = sCgpdt1AD3B + 1) {
            scanf ("%lf", &(QKUmapR[sCgpdt1AD3B]));
            SjmRV5S61Y[jvF6XznWjkMO] = SjmRV5S61Y[jvF6XznWjkMO] + QKUmapR[sCgpdt1AD3B];
        }
        FUV9mG[jvF6XznWjkMO] = SjmRV5S61Y[jvF6XznWjkMO] / azUa2rA3gpwb;
        tH0S7P1ira[jvF6XznWjkMO] = 0;
        for (sCgpdt1AD3B = 0; sCgpdt1AD3B < azUa2rA3gpwb; sCgpdt1AD3B = sCgpdt1AD3B + 1) {
            tH0S7P1ira[jvF6XznWjkMO] = tH0S7P1ira[jvF6XznWjkMO] + (QKUmapR[sCgpdt1AD3B] - FUV9mG[jvF6XznWjkMO]) * (QKUmapR[sCgpdt1AD3B] - FUV9mG[jvF6XznWjkMO]);
        }
        vA8iBWfrZq[jvF6XznWjkMO] = sqrt (tH0S7P1ira[jvF6XznWjkMO] / azUa2rA3gpwb);
    }
    for (jvF6XznWjkMO = 0; jvF6XznWjkMO < EZOYoK; jvF6XznWjkMO = jvF6XznWjkMO + 1) {
        printf ("%.5lf\n", vA8iBWfrZq[jvF6XznWjkMO]);
    }
    return 0;
}

