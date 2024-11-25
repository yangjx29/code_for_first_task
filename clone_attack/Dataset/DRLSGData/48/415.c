int main () {
    int NyVG49O [(708 - 698)] [(70 - 60)] = {(462 - 462)}, LSK0TDva2Bn1 [(212 - 202)] [10] = {(643 - 643)}, aytOVN, Ft2knZPi, khmBz7E, M6wn4pf;
    scanf ("%d%d", &NyVG49O[(838 - 833)][(680 - 675)], &M6wn4pf);
    LSK0TDva2Bn1[(655 - 650)][(292 - 287)] = NyVG49O[(249 - 244)][5];
    for (khmBz7E = (325 - 324); M6wn4pf >= khmBz7E; khmBz7E = khmBz7E + (417 - 416)) {
        for (aytOVN = (635 - 634); (462 - 453) >= aytOVN; aytOVN++) {
            for (Ft2knZPi = (35 - 34); Ft2knZPi <= (261 - 252); Ft2knZPi = Ft2knZPi +(130 - 129)) {
                if (NyVG49O[aytOVN][Ft2knZPi] != (171 - 171)) {
                    LSK0TDva2Bn1[aytOVN - (363 - 362)][Ft2knZPi -(338 - 337)] += NyVG49O[aytOVN][Ft2knZPi];
                    LSK0TDva2Bn1[aytOVN - (952 - 951)][Ft2knZPi] += NyVG49O[aytOVN][Ft2knZPi];
                    LSK0TDva2Bn1[aytOVN - (232 - 231)][Ft2knZPi +(172 - 171)] = LSK0TDva2Bn1[aytOVN - (522 - 521)][Ft2knZPi +(801 - 800)] + NyVG49O[aytOVN][Ft2knZPi];
                    LSK0TDva2Bn1[aytOVN][Ft2knZPi -(196 - 195)] = LSK0TDva2Bn1[aytOVN][Ft2knZPi -(152 - 151)] + NyVG49O[aytOVN][Ft2knZPi];
                    LSK0TDva2Bn1[aytOVN][Ft2knZPi] += NyVG49O[aytOVN][Ft2knZPi];
                    LSK0TDva2Bn1[aytOVN][Ft2knZPi +(431 - 430)] += NyVG49O[aytOVN][Ft2knZPi];
                    LSK0TDva2Bn1[aytOVN + (582 - 581)][Ft2knZPi -1] += NyVG49O[aytOVN][Ft2knZPi];
                    LSK0TDva2Bn1[aytOVN + 1][Ft2knZPi] += NyVG49O[aytOVN][Ft2knZPi];
                    LSK0TDva2Bn1[aytOVN + 1][Ft2knZPi +1] += NyVG49O[aytOVN][Ft2knZPi];
                }
            }
        }
        for (aytOVN = 1; (49 - 40) >= aytOVN; aytOVN++) {
            for (Ft2knZPi = 1; Ft2knZPi <= (549 - 540); Ft2knZPi++) {
                NyVG49O[aytOVN][Ft2knZPi] = LSK0TDva2Bn1[aytOVN][Ft2knZPi];
            }
        }
    }
    for (aytOVN = 1; aytOVN <= 9; aytOVN++) {
        printf ("%d", NyVG49O[aytOVN][1]);
        for (Ft2knZPi = (614 - 612); Ft2knZPi <= 9; Ft2knZPi++) {
            printf (" %d", NyVG49O[aytOVN][Ft2knZPi]);
        }
        printf ("\n");
    }
    return 0;
}

