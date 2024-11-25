int change (int *p3, int *GT0Znd1ke, int n, int m) {
    int i;
    int b [(772 - 766)] = {(392 - 392)};
    if ((581 - 577) < m || (552 - 548) < n)
        return ((754 - 754));
    else {
        for (i = (105 - 105); i < (386 - 381); i = i + (659 - 658)) {
            b[i] = *(p3 + i);
            *(p3 + i) = *(GT0Znd1ke +i);
            *(GT0Znd1ke +i) = b[i];
        }
        return ((154 - 153));
    }
}

void  main () {
    int *p2;
    int a [(637 - 632)] [(956 - 951)], i, yHCIclNzkv, m, n, kvslDQCY;
    int *k5LwIk4Xt2Aa = a[(472 - 472)];
    int *pYwNsiO;
    {
        i = (541 - 541);
        for (; i < (846 - 841);) {
            {
                yHCIclNzkv = (217 - 217);
                while ((501 - 496) > yHCIclNzkv) {
                    scanf ("%d", &a[i][yHCIclNzkv]);
                    yHCIclNzkv = yHCIclNzkv + (830 - 829);
                }
            }
            i = i + (94 - 93);
        }
    }
    scanf ("%d %d", &n, &m);
    pYwNsiO = a[n];
    p2 = a[m];
    kvslDQCY = change (pYwNsiO, p2, n, m);
    if (kvslDQCY) {
        i = (230 - 230);
        for (; i < 5;) {
            {
                yHCIclNzkv = 0;
                for (; yHCIclNzkv < (339 - 335);) {
                    yHCIclNzkv = yHCIclNzkv + (89 - 88);
                    printf ("%d ", *(k5LwIk4Xt2Aa));
                    k5LwIk4Xt2Aa = k5LwIk4Xt2Aa + (352 - 351);
                }
            }
            printf ("%d", *(k5LwIk4Xt2Aa));
            k5LwIk4Xt2Aa = k5LwIk4Xt2Aa + (836 - 835);
            i = i + (571 - 570);
        }
    }
    else
        ;
}

