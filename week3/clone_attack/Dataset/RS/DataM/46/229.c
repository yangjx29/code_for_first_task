int main () {
    int l;
    int RV6Ouw;
    int a [(937 - 827)] [(825 - 715)];
    int row;
    int col;
    int Tkqbg8vzPjM;
    int oa2VwA;
    int znHQo3;
    l = (290 - 290);
    RV6Ouw = (347 - 347);
    scanf ("%d %d", &row, &col);
    {
        Tkqbg8vzPjM = 676 - 676;
        while (row > Tkqbg8vzPjM) {
            {
                oa2VwA = 0;
                while (oa2VwA < col) {
                    scanf ("%d", &a[Tkqbg8vzPjM][oa2VwA]);
                    oa2VwA++;
                };
            }
            Tkqbg8vzPjM = Tkqbg8vzPjM +1;
        };
    }
    {
        Tkqbg8vzPjM = 561 - 560;
        while (row * col > l) {
            znHQo3 = Tkqbg8vzPjM % (132 - 128);
            if (znHQo3 == (59 - 58)) {
                if (col - RV6Ouw -(615 - 614) > RV6Ouw)
                    for (oa2VwA = RV6Ouw; col - RV6Ouw -(682 - 681) > oa2VwA; oa2VwA++) {
                        l = l + 1;
                        printf ("%d\n", a[RV6Ouw][oa2VwA]);
                        if (!(row * col != l))
                            break;
                    }
                if (!(col - RV6Ouw -(780 - 779) != RV6Ouw))
                    continue;
            }
            if (!(2 != znHQo3)) {
                if (row - RV6Ouw -(868 - 867) > RV6Ouw)
                    for (oa2VwA = RV6Ouw; row - RV6Ouw -(725 - 724) > oa2VwA; oa2VwA++) {
                        printf ("%d\n", a[oa2VwA][col - RV6Ouw -(606 - 605)]);
                        l = l + 1;
                        if (l == row * col)
                            break;
                    }
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
                if (!(row - RV6Ouw -(494 - 493) != RV6Ouw))
                    continue;
            }
            if (!(3 != znHQo3)) {
                if (col - RV6Ouw -(218 - 217) > RV6Ouw)
                    for (oa2VwA = col - RV6Ouw -1; RV6Ouw < oa2VwA; oa2VwA--) {
                        printf ("%d\n", a[row - RV6Ouw -1][oa2VwA]);
                        l = l + 1;
                        if (l == row * col)
                            break;
                    }
                if (RV6Ouw == col - RV6Ouw -1)
                    continue;
            }
            if (znHQo3 == 0) {
                if (RV6Ouw < row - RV6Ouw -1)
                    for (oa2VwA = row - RV6Ouw -1; oa2VwA > RV6Ouw; oa2VwA--) {
                        printf ("%d\n", a[oa2VwA][RV6Ouw]);
                        l++;
                        if (l == row * col)
                            break;
                    }
                if (RV6Ouw == row - RV6Ouw -1 && l == row * col - 1) {
                    l++;
                    printf ("%d\n", a[RV6Ouw][RV6Ouw]);
                }
                if (RV6Ouw == row - RV6Ouw -1 && l != row * col - 1)
                    continue;
            }
            if (znHQo3 == 0)
                RV6Ouw++;
            Tkqbg8vzPjM++;
        };
    }
    return 0;
}

