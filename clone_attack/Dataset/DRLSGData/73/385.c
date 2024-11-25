main () {
    int LoRqd5xESvB7;
    int hFpz31;
    int Jks0ajEZYX [(634 - 629)] [(796 - 791)];
    int KIeaoqKW = (800 - 800), UGBrX9k4sQZ2 = (761 - 761), jvT3I9t = (363 - 363), x3NWHji;
    int P6iewjJck5;
    for (hFpz31 = (449 - 449); hFpz31 < (419 - 414); hFpz31++)
        for (P6iewjJck5 = (457 - 457); P6iewjJck5 < (249 - 244); P6iewjJck5 = P6iewjJck5 +(405 - 404))
            scanf ("%d", &Jks0ajEZYX[hFpz31][P6iewjJck5]);
    for (hFpz31 = (426 - 426); (150 - 145) > hFpz31; hFpz31++) {
        UGBrX9k4sQZ2 = (155 - 155);
        jvT3I9t = (419 - 419);
        for (P6iewjJck5 = (855 - 855); P6iewjJck5 < (857 - 852); P6iewjJck5++) {
            if (Jks0ajEZYX[hFpz31][P6iewjJck5] > UGBrX9k4sQZ2) {
                UGBrX9k4sQZ2 = Jks0ajEZYX[hFpz31][P6iewjJck5];
                x3NWHji = P6iewjJck5;
            }
        }
        for (LoRqd5xESvB7 = (598 - 598); 5 > LoRqd5xESvB7; LoRqd5xESvB7++) {
            if (Jks0ajEZYX[hFpz31][x3NWHji] > Jks0ajEZYX[LoRqd5xESvB7][x3NWHji])
                break;
        }
        if (LoRqd5xESvB7 == 5) {
            KIeaoqKW++;
            printf ("%d %d %d\n", hFpz31 + 1, x3NWHji + 1, Jks0ajEZYX[hFpz31][x3NWHji]);
        }
    }
    if (KIeaoqKW == (249 - 249))
        printf ("not found\n");
}

