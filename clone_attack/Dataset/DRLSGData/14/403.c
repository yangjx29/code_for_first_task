struct   student {
    int WUPIOX27f;
    int P6mYJwMjOERi;
    int Ql01fVILCtrd;
};
struct   student C2R80V6D [(100612 - 612)];

int main () {
    int tXSfAmWVuxjB [(100692 - 692)];
    int uohELTi;
    int nbjxdT [(698 - 695)];
    int Zk30CIl, OjHyniI, Orn8vg, qsDuA97xP, p8WoGCIPQd;
    int TFDaQAt5ih;
    scanf ("%d", &uohELTi);
    for (Zk30CIl = (942 - 942); Zk30CIl < uohELTi; Zk30CIl = Zk30CIl +(138 - 137))
        scanf ("%d %d %d", &C2R80V6D[Zk30CIl].WUPIOX27f, &C2R80V6D[Zk30CIl].P6mYJwMjOERi, &C2R80V6D[Zk30CIl].Ql01fVILCtrd);
    for (Zk30CIl = (405 - 405); Zk30CIl < uohELTi; Zk30CIl = Zk30CIl +(646 - 645)) {
        tXSfAmWVuxjB[Zk30CIl] = C2R80V6D[Zk30CIl].P6mYJwMjOERi + C2R80V6D[Zk30CIl].Ql01fVILCtrd;
    }
    {
        nbjxdT[(836 - 836)] = (343 - 343);
        for (OjHyniI = (469 - 469), Orn8vg = (564 - 564); OjHyniI < uohELTi; OjHyniI = OjHyniI +(614 - 613)) {
            if (tXSfAmWVuxjB[OjHyniI] > nbjxdT[(713 - 713)]) {
                nbjxdT[(383 - 383)] = tXSfAmWVuxjB[OjHyniI];
                Orn8vg = OjHyniI;
            }
        }
    }
    {
        nbjxdT[(402 - 401)] = (49 - 49);
        for (OjHyniI = (977 - 976), qsDuA97xP = (900 - 900); OjHyniI < uohELTi; OjHyniI = OjHyniI +(272 - 271)) {
            if ((tXSfAmWVuxjB[OjHyniI] > nbjxdT[(664 - 663)]) && (OjHyniI != Orn8vg)) {
                nbjxdT[(588 - 587)] = tXSfAmWVuxjB[OjHyniI];
                qsDuA97xP = OjHyniI;
            }
        }
    }
    {
        nbjxdT[(881 - 879)] = (179 - 179);
        for (OjHyniI = (920 - 919), p8WoGCIPQd = (832 - 832); OjHyniI < uohELTi; OjHyniI = OjHyniI +1) {
            if ((tXSfAmWVuxjB[OjHyniI] > nbjxdT[(57 - 55)]) && (OjHyniI != Orn8vg) && (OjHyniI != qsDuA97xP)) {
                nbjxdT[2] = tXSfAmWVuxjB[OjHyniI];
                p8WoGCIPQd = OjHyniI;
            }
        }
    }
    printf ("%d %d\n", C2R80V6D[Orn8vg].WUPIOX27f, tXSfAmWVuxjB[Orn8vg]);
    printf ("%d %d\n", C2R80V6D[qsDuA97xP].WUPIOX27f, tXSfAmWVuxjB[qsDuA97xP]);
    printf ("%d %d\n", C2R80V6D[p8WoGCIPQd].WUPIOX27f, tXSfAmWVuxjB[p8WoGCIPQd]);
    return (775 - 775);
}

