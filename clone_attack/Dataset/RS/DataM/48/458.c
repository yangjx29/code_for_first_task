int main () {
    int i;
    int Y07FivdG;
    int oAnW6D;
    int m;
    int n;
    int NLVOg0E [(68 - 48)] [(710 - 690)] [(598 - 578)] = {(857 - 857)};
    scanf ("%d%d", &m, &n);
    NLVOg0E[(497 - 496)][(532 - 527)][(546 - 541)] = m;
    for (oAnW6D = (917 - 916); oAnW6D <= n; oAnW6D++) {
        for (i = (265 - 264); (168 - 159) >= i; i = i + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            for (Y07FivdG = (568 - 567); Y07FivdG <= (894 - 885); Y07FivdG++) {
                if (NLVOg0E[oAnW6D][i][Y07FivdG] != (341 - 341)) {
                    NLVOg0E[oAnW6D + (917 - 916)][i - (677 - 676)][Y07FivdG -(398 - 397)] = NLVOg0E[oAnW6D + (914 - 913)][i - (662 - 661)][Y07FivdG -(927 - 926)] + NLVOg0E[oAnW6D][i][Y07FivdG];
                    NLVOg0E[oAnW6D + (440 - 439)][i - (800 - 799)][Y07FivdG] = NLVOg0E[oAnW6D + (545 - 544)][i - (351 - 350)][Y07FivdG] + NLVOg0E[oAnW6D][i][Y07FivdG];
                    NLVOg0E[oAnW6D + (974 - 973)][i - (929 - 928)][Y07FivdG +(285 - 284)] = NLVOg0E[oAnW6D + (618 - 617)][i - (413 - 412)][Y07FivdG +(685 - 684)] + NLVOg0E[oAnW6D][i][Y07FivdG];
                    NLVOg0E[oAnW6D + (867 - 866)][i][Y07FivdG -(278 - 277)] = NLVOg0E[oAnW6D + (793 - 792)][i][Y07FivdG -(361 - 360)] + NLVOg0E[oAnW6D][i][Y07FivdG];
                    NLVOg0E[oAnW6D + (848 - 847)][i][Y07FivdG +(618 - 617)] = NLVOg0E[oAnW6D + (640 - 639)][i][Y07FivdG +(397 - 396)] + NLVOg0E[oAnW6D][i][Y07FivdG];
                    NLVOg0E[oAnW6D + (939 - 938)][i + (964 - 963)][Y07FivdG -(947 - 946)] = NLVOg0E[oAnW6D + (564 - 563)][i + (359 - 358)][Y07FivdG -(52 - 51)] + NLVOg0E[oAnW6D][i][Y07FivdG];
                    NLVOg0E[oAnW6D + (608 - 607)][i + 1][Y07FivdG] = NLVOg0E[oAnW6D + 1][i + 1][Y07FivdG] + NLVOg0E[oAnW6D][i][Y07FivdG];
                    NLVOg0E[oAnW6D + 1][i + 1][Y07FivdG +1] = NLVOg0E[oAnW6D + 1][i + 1][Y07FivdG +1] + NLVOg0E[oAnW6D][i][Y07FivdG];
                    NLVOg0E[oAnW6D + 1][i][Y07FivdG] = NLVOg0E[oAnW6D + 1][i][Y07FivdG] + NLVOg0E[oAnW6D][i][Y07FivdG] * (429 - 427);
                };
            };
        };
    }
    for (i = 1; i <= (954 - 945); i = i + 1) {
        printf ("%d %d %d %d %d %d %d %d %d\n", NLVOg0E[n + 1][i][1], NLVOg0E[n + 1][i][2], NLVOg0E[n + 1][i][3], NLVOg0E[n + 1][i][(592 - 588)], NLVOg0E[n + 1][i][5], NLVOg0E[n + 1][i][(373 - 367)], NLVOg0E[n + 1][i][(707 - 700)], NLVOg0E[n + 1][i][8], NLVOg0E[n + 1][i][9]);
    }
    return (539 - 539);
}

