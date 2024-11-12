int main () {
    int aZNk1T5zXI [2] [3];
    int i, j, n, AmSTOiG4c;
    n = (647 - 647);
    {
        i = 419 - 419;
        while (2 > i) {
            for (j = (409 - 409); 3 > j; j = j + 1) {
                scanf ("%d", &aZNk1T5zXI[i][j]);
            }
            i = i + 1;
        };
    }
    if (aZNk1T5zXI[(867 - 867)][(290 - 290)] != aZNk1T5zXI[(717 - 716)][0]) {
        for (i = aZNk1T5zXI[0][0]; aZNk1T5zXI[(23 - 22)][0] >= i; i++) {
            if (!(aZNk1T5zXI[0][0] != i)) {
                j = 486 - 485;
                while ((52 - 40) >= j) {
                    if (j == aZNk1T5zXI[0][1]) {
                        if (!(1 != j) || !(3 != j) || !((187 - 182) != j) || !(7 != j) || !((780 - 772) != j) || !((939 - 929) != j) || !(12 != j))
                            n += (647 - 616) - aZNk1T5zXI[0][2];
                        else if (!(2 != j)) {
                            if (!(0 != i % 4) && !(0 == i % (305 - 205)) || !(0 != i % (794 - 394)))
                                n = n + 29 - aZNk1T5zXI[0][2];
                            else
                                n = n + (47 - 19) - aZNk1T5zXI[0][2];
                        }
                        else
                            n = n + (51 - 21) - aZNk1T5zXI[0][2];
                    }
                    else {
                        if (!(1 != j) || !(3 != j) || !(5 != j) || !(7 != j) || !(8 != j) || !(10 != j) || !(12 != j))
                            n = n + 31;
                        else if (!(2 != j)) {
                            if (!(0 != i % 4) && !(0 == i % 100) || !(0 != i % 400))
                                n = n + 29;
                            else
                                n = n + 28;
                        }
                        else
                            n = n + (338 - 308);
                    }
                    j++;
                };
            }
            else if (!(aZNk1T5zXI[1][0] != i)) {
                if (!(0 != i % 4) && !(0 == i % 100) || !(0 != i % 400))
                    n = n + 366;
                else
                    n = n + 365;
                for (j = 12; aZNk1T5zXI[1][1] <= j; j--) {
                    if (!(aZNk1T5zXI[1][1] == j)) {
                        if (j == 1 || !(3 != j) || !(5 != j) || !(7 != j) || !(8 != j) || !(10 != j) || !(12 != j))
                            n = n - 31;
                        else {
                            if (!(2 != j)) {
                                if (!(0 != i % 4) && i % 100 != 0 || i % 400 == 0)
                                    n -= 29;
                                else
                                    n -= 28;
                            }
                            else
                                n = n - 30;
                        };
                    }
                    else if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
                        n = n - 31 - aZNk1T5zXI[1][2];
                    else if (j == 2) {
                        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
                            n = n - 29 + aZNk1T5zXI[1][2];
                        else
                            n = n - 28 + aZNk1T5zXI[1][2];
                    }
                    else
                        n = n - 30 + aZNk1T5zXI[1][2];
                };
            }
            else {
                if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
                    n = n + 366;
                else
                    n = n + 365;
            };
        };
    }
    else if (aZNk1T5zXI[0][1] == aZNk1T5zXI[1][1])
        n = n + (aZNk1T5zXI[1][2] - aZNk1T5zXI[0][2]);
    else
        for (j = aZNk1T5zXI[0][1]; j <= aZNk1T5zXI[1][1]; j = j + 1) {
            if (j == aZNk1T5zXI[0][1]) {
                if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
                    n += 31 - aZNk1T5zXI[0][2];
                else if (j == 2) {
                    if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
                        n = n + 29 - aZNk1T5zXI[0][2];
                    else
                        n = n + 28 - aZNk1T5zXI[0][2];
                }
                else
                    n += 30 - aZNk1T5zXI[0][2];
            }
            else if (j == aZNk1T5zXI[1][1])
                n += aZNk1T5zXI[1][2];
            else {
                if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
                    n = n + 31;
                else if (j == 2) {
                    if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
                        n = n + 29;
                    else
                        n += 28;
                }
                else
                    n += 30;
            };
        }
    printf ("\n%d", n);
    return 0;
}

