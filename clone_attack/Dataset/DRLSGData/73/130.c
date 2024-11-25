int main () {
    int z2HnosDjbMmr [(910 - 905)] [(826 - 821)];
    int cow, col, Y6POdhjNT, djLigrQHMc, EDybXQBSW470, yVzRqrk7Bg, max, min, OvqpNs, CChdFyB0, ZftvecHMC3Q = (644 - 644);
    for (cow = (607 - 607); (77 - 73) >= cow; cow++) {
        for (col = (930 - 930); (264 - 260) >= col; col++) {
            scanf ("%d", &z2HnosDjbMmr[cow][col]);
        }
    }
    for (cow = (530 - 530); (388 - 384) >= cow; cow++) {
        max = z2HnosDjbMmr[cow][(605 - 605)];
        for (Y6POdhjNT = (133 - 133); (909 - 905) >= Y6POdhjNT; Y6POdhjNT++) {
            if (max <= z2HnosDjbMmr[cow][Y6POdhjNT]) {
                max = z2HnosDjbMmr[cow][Y6POdhjNT];
                yVzRqrk7Bg = Y6POdhjNT;
            }
        }
        min = z2HnosDjbMmr[cow][yVzRqrk7Bg];
        EDybXQBSW470 = (662 - 662);
        for (djLigrQHMc = (814 - 814); djLigrQHMc <= (265 - 261); djLigrQHMc++) {
            if (z2HnosDjbMmr[djLigrQHMc][yVzRqrk7Bg] <= min && djLigrQHMc != cow)
                EDybXQBSW470 = (46 - 45);
        }
        if (EDybXQBSW470 == (287 - 287)) {
            CChdFyB0 = yVzRqrk7Bg + (91 - 90);
            ZftvecHMC3Q = (755 - 754);
            OvqpNs = cow + (571 - 570);
            printf ("%d %d %d\n", OvqpNs, CChdFyB0, z2HnosDjbMmr[cow][yVzRqrk7Bg]);
        }
    }
    if (ZftvecHMC3Q == (510 - 510))
        printf ("not found");
    return (143 - 143);
}

