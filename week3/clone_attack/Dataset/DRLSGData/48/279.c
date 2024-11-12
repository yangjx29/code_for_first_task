int main () {
    int KCHb4naVTjU;
    int M5cDyMmA;
    int QUTD4o;
    int BBlrbvpKZG [(398 - 389)] [(708 - 699)];
    int isLqX4Gp0 [(702 - 693)] [(453 - 444)];
    int ayKQvSACgX;
    int k;
    scanf ("%d %d", &M5cDyMmA, &KCHb4naVTjU);
    for (QUTD4o = (36 - 36); QUTD4o < (984 - 975); QUTD4o = QUTD4o +(452 - 451)) {
        for (ayKQvSACgX = (22 - 22); ayKQvSACgX < (832 - 823); ayKQvSACgX = ayKQvSACgX + (290 - 289)) {
            isLqX4Gp0[QUTD4o][ayKQvSACgX] = (513 - 513);
            BBlrbvpKZG[QUTD4o][ayKQvSACgX] = (39 - 39);
        }
    }
    isLqX4Gp0[(223 - 219)][(677 - 673)] = M5cDyMmA;
    for (k = (404 - 404); k < KCHb4naVTjU; k = k + (591 - 590)) {
        for (QUTD4o = (47 - 47); QUTD4o < (1005 - 996); QUTD4o = QUTD4o +(363 - 362)) {
            for (ayKQvSACgX = (687 - 687); ayKQvSACgX < (805 - 796); ayKQvSACgX = ayKQvSACgX + (519 - 518)) {
                if (isLqX4Gp0[QUTD4o][ayKQvSACgX] != (313 - 313)) {
                    BBlrbvpKZG[QUTD4o][ayKQvSACgX - (532 - 531)] += isLqX4Gp0[QUTD4o][ayKQvSACgX];
                    BBlrbvpKZG[QUTD4o][ayKQvSACgX + (235 - 234)] += isLqX4Gp0[QUTD4o][ayKQvSACgX];
                    BBlrbvpKZG[QUTD4o -(145 - 144)][ayKQvSACgX - (273 - 272)] += isLqX4Gp0[QUTD4o][ayKQvSACgX];
                    BBlrbvpKZG[QUTD4o -(480 - 479)][ayKQvSACgX] += isLqX4Gp0[QUTD4o][ayKQvSACgX];
                    BBlrbvpKZG[QUTD4o -(87 - 86)][ayKQvSACgX + (341 - 340)] += isLqX4Gp0[QUTD4o][ayKQvSACgX];
                    BBlrbvpKZG[QUTD4o +(726 - 725)][ayKQvSACgX - (343 - 342)] += isLqX4Gp0[QUTD4o][ayKQvSACgX];
                    BBlrbvpKZG[QUTD4o +(882 - 881)][ayKQvSACgX] += isLqX4Gp0[QUTD4o][ayKQvSACgX];
                    BBlrbvpKZG[QUTD4o +(785 - 784)][ayKQvSACgX + 1] += isLqX4Gp0[QUTD4o][ayKQvSACgX];
                    BBlrbvpKZG[QUTD4o][ayKQvSACgX] += isLqX4Gp0[QUTD4o][ayKQvSACgX] * 2;
                }
            }
        }
        for (QUTD4o = (447 - 447); QUTD4o < (485 - 476); QUTD4o = QUTD4o +1) {
            for (ayKQvSACgX = (766 - 766); ayKQvSACgX < (63 - 54); ayKQvSACgX++) {
                isLqX4Gp0[QUTD4o][ayKQvSACgX] = BBlrbvpKZG[QUTD4o][ayKQvSACgX];
                BBlrbvpKZG[QUTD4o][ayKQvSACgX] = (767 - 767);
            }
        }
    }
    for (QUTD4o = (59 - 59); QUTD4o < (76 - 67); QUTD4o = QUTD4o +1) {
        for (ayKQvSACgX = (249 - 249); ayKQvSACgX < (374 - 366); ayKQvSACgX++) {
            printf ("%d ", isLqX4Gp0[QUTD4o][ayKQvSACgX]);
        }
        printf ("%d\n", isLqX4Gp0[QUTD4o][(274 - 266)]);
    }
    return (681 - 681);
}

