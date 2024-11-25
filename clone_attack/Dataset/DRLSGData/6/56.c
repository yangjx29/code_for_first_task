int main () {
    int qmheK6 [100] [10000];
    int xzvVptQ, O3SwZ6nf [(774 - 674)], ocKuASk3z [100];
    int zBRlkfaA, chBGztcJ, OKvZlzwGOF, sum = (906 - 906);
    scanf ("%d", &xzvVptQ);
    for (zBRlkfaA = (356 - 356); xzvVptQ > zBRlkfaA; zBRlkfaA++) {
        scanf ("%d%d", &O3SwZ6nf[zBRlkfaA], &ocKuASk3z[zBRlkfaA]);
        OKvZlzwGOF = O3SwZ6nf[zBRlkfaA] * ocKuASk3z[zBRlkfaA];
        for (chBGztcJ = (123 - 123); chBGztcJ < OKvZlzwGOF; chBGztcJ = chBGztcJ + 1)
            scanf ("%d", &qmheK6[zBRlkfaA][chBGztcJ]);
    }
    for (zBRlkfaA = (902 - 902); xzvVptQ > zBRlkfaA; zBRlkfaA++) {
        for (chBGztcJ = (336 - 336), sum = (485 - 485); chBGztcJ < O3SwZ6nf[zBRlkfaA] * ocKuASk3z[zBRlkfaA]; chBGztcJ++) {
            if (ocKuASk3z[zBRlkfaA] > chBGztcJ)
                sum = sum + qmheK6[zBRlkfaA][chBGztcJ];
            else if (chBGztcJ % ocKuASk3z[zBRlkfaA] == 0)
                sum = sum + qmheK6[zBRlkfaA][chBGztcJ];
            else if (!(0 != (chBGztcJ + 1) % ocKuASk3z[zBRlkfaA]))
                sum = sum + qmheK6[zBRlkfaA][chBGztcJ];
            else if (chBGztcJ > O3SwZ6nf[zBRlkfaA] * ocKuASk3z[zBRlkfaA] - ocKuASk3z[zBRlkfaA] - 1)
                sum = sum + qmheK6[zBRlkfaA][chBGztcJ];
            else
                continue;
        }
        if (zBRlkfaA == 0)
            printf ("%d", sum);
        else
            printf ("\n%d", sum);
    }
    return 0;
}

