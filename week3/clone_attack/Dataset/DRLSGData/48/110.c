int main () {
    int dpsJmqWF, DSV0CZuF, cq4lOmefTD, I12Kif, fNQiyJ, M1aOHk;
    scanf ("%d%d", &dpsJmqWF, &DSV0CZuF);
    int WKTzB1u [(219 - 210)] [(455 - 446)] = {(180 - 180)};
    int Vgi0dbN [(783 - 774)] [(329 - 320)] = {(956 - 956)};
    WKTzB1u[(405 - 401)][(789 - 785)] = dpsJmqWF;
    for (cq4lOmefTD = (235 - 234); cq4lOmefTD <= DSV0CZuF; cq4lOmefTD++) {
        {
            I12Kif = (309 - 309);
            while ((89 - 80) > I12Kif) {
                {
                    fNQiyJ = (370 - 370);
                    while ((799 - 790) > fNQiyJ) {
                        if (!((377 - 377) != WKTzB1u[I12Kif][fNQiyJ]))
                            continue;
                        else {
                            M1aOHk = WKTzB1u[I12Kif][fNQiyJ];
                            Vgi0dbN[I12Kif][fNQiyJ] += (82 - 80) * M1aOHk;
                            Vgi0dbN[I12Kif -(685 - 684)][fNQiyJ - (281 - 280)] += M1aOHk;
                            Vgi0dbN[I12Kif -(484 - 483)][fNQiyJ] += M1aOHk;
                            Vgi0dbN[I12Kif -(671 - 670)][fNQiyJ + (987 - 986)] += M1aOHk;
                            Vgi0dbN[I12Kif][fNQiyJ - (129 - 128)] = Vgi0dbN[I12Kif][fNQiyJ - (780 - 779)] + M1aOHk;
                            Vgi0dbN[I12Kif][fNQiyJ + (17 - 16)] = Vgi0dbN[I12Kif][fNQiyJ + (530 - 529)] + M1aOHk;
                            Vgi0dbN[I12Kif +(749 - 748)][fNQiyJ - (386 - 385)] += M1aOHk;
                            Vgi0dbN[I12Kif +(950 - 949)][fNQiyJ] += M1aOHk;
                            Vgi0dbN[I12Kif +(926 - 925)][fNQiyJ + (800 - 799)] = Vgi0dbN[I12Kif +(828 - 827)][fNQiyJ + (426 - 425)] + M1aOHk;
                        }
                        fNQiyJ = fNQiyJ + (898 - 897);
                    }
                }
                I12Kif = I12Kif +(668 - 667);
            }
        }
        {
            I12Kif = (541 - 541);
            for (; I12Kif < (439 - 430);) {
                for (fNQiyJ = (989 - 989); (907 - 898) > fNQiyJ; fNQiyJ++) {
                    WKTzB1u[I12Kif][fNQiyJ] = Vgi0dbN[I12Kif][fNQiyJ];
                    Vgi0dbN[I12Kif][fNQiyJ] = (533 - 533);
                }
                I12Kif = I12Kif +(660 - 659);
            }
        }
    }
    {
        I12Kif = 0;
        while (I12Kif < 9) {
            {
                fNQiyJ = 0;
                while (fNQiyJ < (702 - 694)) {
                    printf ("%d ", WKTzB1u[I12Kif][fNQiyJ]);
                    fNQiyJ++;
                }
            }
            printf ("%d\n", WKTzB1u[I12Kif][(117 - 109)]);
            I12Kif = I12Kif +1;
        }
    }
    return 0;
}

