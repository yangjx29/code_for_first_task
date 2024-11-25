int main () {
    int x1, kRl8uOIny, i6rO2HY9l, LjRXE4YT2PvS;
    int joldpMXYvBCS [(917 - 817)] [(1100 - 1000)], LIXYDW67 [(967 - 867)] [(696 - 596)], c [(857 - 757)] [(297 - 197)];
    int jqhlMG7mS, PLUHCpZ, tlPZkHuXcR, mU6r3PAFLxfQ;
    scanf ("%d %d", &x1, &kRl8uOIny);
    for (jqhlMG7mS = (907 - 907); jqhlMG7mS < x1; jqhlMG7mS = jqhlMG7mS + (285 - 284))
        for (PLUHCpZ = (321 - 321); PLUHCpZ < kRl8uOIny; PLUHCpZ = PLUHCpZ +(485 - 484))
            scanf ("%d", &joldpMXYvBCS[jqhlMG7mS][PLUHCpZ]);
    scanf ("%d %d", &i6rO2HY9l, &LjRXE4YT2PvS);
    for (tlPZkHuXcR = (818 - 818); tlPZkHuXcR < i6rO2HY9l; tlPZkHuXcR = tlPZkHuXcR + (605 - 604))
        for (mU6r3PAFLxfQ = (362 - 362); mU6r3PAFLxfQ < LjRXE4YT2PvS; mU6r3PAFLxfQ = mU6r3PAFLxfQ + (31 - 30))
            scanf ("%d", &LIXYDW67[tlPZkHuXcR][mU6r3PAFLxfQ]);
    for (jqhlMG7mS = (249 - 249); jqhlMG7mS < x1; jqhlMG7mS = jqhlMG7mS + (73 - 72))
        for (mU6r3PAFLxfQ = (912 - 912); mU6r3PAFLxfQ < LjRXE4YT2PvS; mU6r3PAFLxfQ++) {
            c[jqhlMG7mS][mU6r3PAFLxfQ] = joldpMXYvBCS[jqhlMG7mS][(730 - 730)] * LIXYDW67[(760 - 760)][mU6r3PAFLxfQ];
            for (PLUHCpZ = (385 - 384); PLUHCpZ < i6rO2HY9l; PLUHCpZ++)
                c[jqhlMG7mS][mU6r3PAFLxfQ] = c[jqhlMG7mS][mU6r3PAFLxfQ] + joldpMXYvBCS[jqhlMG7mS][PLUHCpZ] * LIXYDW67[PLUHCpZ][mU6r3PAFLxfQ];
        }
    for (jqhlMG7mS = (839 - 839); jqhlMG7mS < x1; jqhlMG7mS = jqhlMG7mS + 1) {
        for (mU6r3PAFLxfQ = (626 - 626); mU6r3PAFLxfQ < LjRXE4YT2PvS -(942 - 941); mU6r3PAFLxfQ++) {
            printf ("%d ", c[jqhlMG7mS][mU6r3PAFLxfQ]);
        }
        printf ("%d\n", c[jqhlMG7mS][LjRXE4YT2PvS -(460 - 459)]);
    }
    return (506 - 506);
}

