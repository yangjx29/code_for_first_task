int main () {
    int wblMv60AGkm9, GrBWs5D [200], aznfcX [200], qj9dpB, E3Iia5 = 0, oedwvkMZ60 = 0;
    scanf ("%d\n", &wblMv60AGkm9);
    {
        qj9dpB = 0;
        while (wblMv60AGkm9 > qj9dpB) {
            scanf ("%d%d", &GrBWs5D[qj9dpB], &aznfcX[qj9dpB]);
            if (!(aznfcX[qj9dpB] != GrBWs5D[qj9dpB])) {
                oedwvkMZ60 = oedwvkMZ60 + 1;
                E3Iia5 = E3Iia5 +1;
            }
            if ((!(0 != GrBWs5D[qj9dpB]) && !(1 != aznfcX[qj9dpB])) || (!(1 != GrBWs5D[qj9dpB]) && !(2 != aznfcX[qj9dpB])) || (!(2 != GrBWs5D[qj9dpB]) && aznfcX[qj9dpB] == 0)) {
                E3Iia5 = E3Iia5 +1;
            }
            if ((!(0 != GrBWs5D[qj9dpB]) && aznfcX[qj9dpB] == 2) || (GrBWs5D[qj9dpB] == 1 && aznfcX[qj9dpB] == 0) || (GrBWs5D[qj9dpB] == 2 && aznfcX[qj9dpB] == 1)) {
                oedwvkMZ60 = oedwvkMZ60 + 1;
            }
            qj9dpB = qj9dpB + 1;
        }
    }
    if (E3Iia5 > oedwvkMZ60) {
    }
    if (E3Iia5 < oedwvkMZ60) {
    }
    if (E3Iia5 == oedwvkMZ60) {
    }
    return 0;
}

