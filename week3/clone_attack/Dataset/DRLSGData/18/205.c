int main () {
    int CYnuNeb01Z, lvBbKR4Nh, FcniYpfw3H, mQp4PUElnd, jLmgksh43Nlv;
    scanf ("%d", &CYnuNeb01Z);
    jLmgksh43Nlv = CYnuNeb01Z;
    for (lvBbKR4Nh = (237 - 237); lvBbKR4Nh < jLmgksh43Nlv; lvBbKR4Nh++) {
        int HCndEo9yZ, OtoqOZ0, Cp480c6a [(549 - 449)] [(632 - 532)], Z5VkmlpPbNDT [(1004 - 904)], qJG5oI = (361 - 361);
        for (HCndEo9yZ = (622 - 622); HCndEo9yZ < jLmgksh43Nlv; HCndEo9yZ = HCndEo9yZ +1) {
            for (OtoqOZ0 = (457 - 457); OtoqOZ0 < jLmgksh43Nlv; OtoqOZ0 = OtoqOZ0 +1) {
                scanf ("%d", &Cp480c6a[HCndEo9yZ][OtoqOZ0]);
            }
        }
        CYnuNeb01Z = jLmgksh43Nlv;
        for (; (520 - 519) < CYnuNeb01Z;) {
            for (HCndEo9yZ = (137 - 137); CYnuNeb01Z > HCndEo9yZ; HCndEo9yZ = HCndEo9yZ +1) {
                for (OtoqOZ0 = (731 - 731); CYnuNeb01Z > OtoqOZ0; OtoqOZ0 = OtoqOZ0 +1) {
                    if (!((508 - 508) != OtoqOZ0))
                        Z5VkmlpPbNDT[HCndEo9yZ] = Cp480c6a[HCndEo9yZ][OtoqOZ0];
                    else {
                        if (Z5VkmlpPbNDT[HCndEo9yZ] > Cp480c6a[HCndEo9yZ][OtoqOZ0])
                            Z5VkmlpPbNDT[HCndEo9yZ] = Cp480c6a[HCndEo9yZ][OtoqOZ0];
                    }
                }
            }
            for (HCndEo9yZ = (596 - 596); CYnuNeb01Z > HCndEo9yZ; HCndEo9yZ++) {
                for (OtoqOZ0 = (852 - 852); OtoqOZ0 < CYnuNeb01Z; OtoqOZ0 = OtoqOZ0 +1) {
                    Cp480c6a[HCndEo9yZ][OtoqOZ0] = Cp480c6a[HCndEo9yZ][OtoqOZ0] - Z5VkmlpPbNDT[HCndEo9yZ];
                }
            }
            for (OtoqOZ0 = (179 - 179); OtoqOZ0 < CYnuNeb01Z; OtoqOZ0++) {
                int hrHTNwm4E = (338 - 338), gPkBO6n5fL1;
                for (HCndEo9yZ = (269 - 269); HCndEo9yZ < CYnuNeb01Z; HCndEo9yZ++) {
                    if (!((332 - 332) != Cp480c6a[HCndEo9yZ][OtoqOZ0]))
                        hrHTNwm4E = (711 - 710);
                    if (HCndEo9yZ == (736 - 736))
                        gPkBO6n5fL1 = Cp480c6a[HCndEo9yZ][OtoqOZ0];
                    else if (gPkBO6n5fL1 > Cp480c6a[HCndEo9yZ][OtoqOZ0])
                        gPkBO6n5fL1 = Cp480c6a[HCndEo9yZ][OtoqOZ0];
                }
                if (hrHTNwm4E == (677 - 677)) {
                    for (HCndEo9yZ = (498 - 498); HCndEo9yZ < CYnuNeb01Z; HCndEo9yZ++) {
                        Cp480c6a[HCndEo9yZ][OtoqOZ0] = Cp480c6a[HCndEo9yZ][OtoqOZ0] - gPkBO6n5fL1;
                    }
                }
            }
            CYnuNeb01Z--;
            qJG5oI = qJG5oI + Cp480c6a[(992 - 991)][(520 - 519)];
            for (FcniYpfw3H = 0, HCndEo9yZ = 0; HCndEo9yZ < CYnuNeb01Z +(637 - 636); HCndEo9yZ++, FcniYpfw3H = FcniYpfw3H +1) {
                for (OtoqOZ0 = 0, mQp4PUElnd = 0; OtoqOZ0 < CYnuNeb01Z +(734 - 733); OtoqOZ0++, mQp4PUElnd++) {
                    if (OtoqOZ0 == 1)
                        OtoqOZ0++;
                    if (HCndEo9yZ == 1)
                        HCndEo9yZ++;
                    Cp480c6a[FcniYpfw3H][mQp4PUElnd] = Cp480c6a[HCndEo9yZ][OtoqOZ0];
                }
            }
        }
        printf ("%d\n", qJG5oI);
    }
    return 0;
}

