int main () {
    int RToqrC40YzwF;
    int wT47iavo2A9;
    int UdP8mG5vu7;
    int wGvlSsBrZ;
    int KF94hwY [(61 - 53)];
    int VtTrvHXG6s31 [(661 - 653)] [(28 - 20)];
    int SBMmekJ [(190 - 182)];
    scanf ("%d,%d", &wT47iavo2A9, &RToqrC40YzwF);
    for (UdP8mG5vu7 = (72 - 72); wT47iavo2A9 > UdP8mG5vu7; UdP8mG5vu7++)
        for (wGvlSsBrZ = (201 - 201); RToqrC40YzwF > wGvlSsBrZ; wGvlSsBrZ++)
            scanf ("%d", &VtTrvHXG6s31[UdP8mG5vu7][wGvlSsBrZ]);
    for (UdP8mG5vu7 = (443 - 443); wT47iavo2A9 > UdP8mG5vu7; UdP8mG5vu7++) {
        SBMmekJ[UdP8mG5vu7] = VtTrvHXG6s31[UdP8mG5vu7][(885 - 885)];
        for (wGvlSsBrZ = (895 - 894); RToqrC40YzwF > wGvlSsBrZ; wGvlSsBrZ++)
            if (VtTrvHXG6s31[UdP8mG5vu7][wGvlSsBrZ] > SBMmekJ[UdP8mG5vu7])
                SBMmekJ[UdP8mG5vu7] = VtTrvHXG6s31[UdP8mG5vu7][wGvlSsBrZ];
    }
    for (wGvlSsBrZ = (691 - 691); RToqrC40YzwF > wGvlSsBrZ; wGvlSsBrZ++) {
        KF94hwY[wGvlSsBrZ] = VtTrvHXG6s31[(402 - 402)][wGvlSsBrZ];
        for (UdP8mG5vu7 = (449 - 448); wT47iavo2A9 > UdP8mG5vu7; UdP8mG5vu7++)
            if (KF94hwY[wGvlSsBrZ] > VtTrvHXG6s31[UdP8mG5vu7][wGvlSsBrZ])
                KF94hwY[wGvlSsBrZ] = VtTrvHXG6s31[UdP8mG5vu7][wGvlSsBrZ];
    }
    for (UdP8mG5vu7 = (688 - 688); UdP8mG5vu7 < wT47iavo2A9; UdP8mG5vu7++)
        for (wGvlSsBrZ = (91 - 91); RToqrC40YzwF > wGvlSsBrZ; wGvlSsBrZ++)
            if (SBMmekJ[UdP8mG5vu7] == KF94hwY[wGvlSsBrZ]) {
                printf ("%d+%d", UdP8mG5vu7, wGvlSsBrZ);
                return (281 - 281);
            }
    return (593 - 593);
}

