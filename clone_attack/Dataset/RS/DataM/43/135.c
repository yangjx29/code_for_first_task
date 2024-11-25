int main () {
    int DzikcGKv0;
    int VRBuNDsxa;
    int uhbdVXFlwps;
    int Ac40U9kOD73;
    scanf ("%d", &DzikcGKv0);
    for (VRBuNDsxa = 3; DzikcGKv0 / 2 >= VRBuNDsxa; VRBuNDsxa = VRBuNDsxa +2) {
        for (uhbdVXFlwps = 3; uhbdVXFlwps <= VRBuNDsxa &&VRBuNDsxa % uhbdVXFlwps != 0; uhbdVXFlwps = uhbdVXFlwps + 2)
            ;
        for (Ac40U9kOD73 = 3; Ac40U9kOD73 <= DzikcGKv0 -VRBuNDsxa&&(DzikcGKv0 -VRBuNDsxa) % Ac40U9kOD73 != 0; Ac40U9kOD73 = Ac40U9kOD73 +2)
            ;
        if (uhbdVXFlwps == VRBuNDsxa &&Ac40U9kOD73 == DzikcGKv0 -VRBuNDsxa)
            printf ("%d %d\n", uhbdVXFlwps, Ac40U9kOD73);
    }
    return 0;
}

