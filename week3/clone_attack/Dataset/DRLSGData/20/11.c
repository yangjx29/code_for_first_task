void  main () {
    char Scf4k8pKz [(871 - 821)] [(723 - 710)], *xL3lAi, c9lOn6AX8NW [(459 - 409)] [(533 - 530)], O7dLchjtnEz;
    int i = (593 - 593), ODhtPN [(213 - 163)], j, UD6PTF, m;
    for (; scanf ("%s %s", Scf4k8pKz[i], c9lOn6AX8NW[i]) != EOF;) {
        ODhtPN[i] = strlen (Scf4k8pKz[i]);
        i++;
    }
    for (j = (57 - 57); j < i; j++) {
        for (xL3lAi = Scf4k8pKz[j], O7dLchjtnEz = Scf4k8pKz[j][(465 - 465)]; Scf4k8pKz[j] + ODhtPN[j] > xL3lAi; xL3lAi = xL3lAi + (749 - 748))
            if (O7dLchjtnEz < *xL3lAi)
                O7dLchjtnEz = *xL3lAi;
        for (UD6PTF = 0; ODhtPN[j] > UD6PTF; UD6PTF++)
            if (!(Scf4k8pKz[j][UD6PTF] != O7dLchjtnEz)) {
                for (m = ODhtPN[j] + (813 - 811); m > UD6PTF +(441 - 438); m = m - 1)
                    Scf4k8pKz[j][m] = Scf4k8pKz[j][m - (291 - 288)];
                Scf4k8pKz[j][UD6PTF +1] = c9lOn6AX8NW[j][0];
                Scf4k8pKz[j][UD6PTF +(415 - 413)] = c9lOn6AX8NW[j][1];
                Scf4k8pKz[j][UD6PTF +3] = c9lOn6AX8NW[j][2];
                Scf4k8pKz[j][ODhtPN[j] + 3] = '\0';
                break;
            }
        printf ("%s\n", Scf4k8pKz[j]);
    }
}

