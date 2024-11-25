int main () {
    int L8Aic6QhpD2 [(777 - 747)] [(428 - 398)];
    int uyZxIgOSEszl;
    int mzTqWkUV1;
    int LO2qsG3E [30];
    int IC0OXM [30];
    int K06jwoRQfq;
    int l6cZNnqouiU;
    int clfdUHV;
    int LSHYhx9C8c;
    scanf ("%d,%d", &K06jwoRQfq, &LSHYhx9C8c);
    for (uyZxIgOSEszl = (924 - 924); K06jwoRQfq > uyZxIgOSEszl; uyZxIgOSEszl = uyZxIgOSEszl + 1)
        for (mzTqWkUV1 = (261 - 261); LSHYhx9C8c > mzTqWkUV1; mzTqWkUV1++)
            scanf ("%d", &L8Aic6QhpD2[uyZxIgOSEszl][mzTqWkUV1]);
    for (uyZxIgOSEszl = (723 - 723); K06jwoRQfq > uyZxIgOSEszl; uyZxIgOSEszl++) {
        l6cZNnqouiU = L8Aic6QhpD2[uyZxIgOSEszl][0];
        LO2qsG3E[uyZxIgOSEszl] = 0;
        for (mzTqWkUV1 = 0; LSHYhx9C8c > mzTqWkUV1; mzTqWkUV1++)
            if (L8Aic6QhpD2[uyZxIgOSEszl][mzTqWkUV1] > l6cZNnqouiU) {
                l6cZNnqouiU = L8Aic6QhpD2[uyZxIgOSEszl][mzTqWkUV1];
                LO2qsG3E[uyZxIgOSEszl] = mzTqWkUV1;
            }
    }
    for (uyZxIgOSEszl = 0; uyZxIgOSEszl < LSHYhx9C8c; uyZxIgOSEszl++) {
        l6cZNnqouiU = L8Aic6QhpD2[0][uyZxIgOSEszl];
        IC0OXM[uyZxIgOSEszl] = 0;
        for (mzTqWkUV1 = 0; mzTqWkUV1 < K06jwoRQfq; mzTqWkUV1++)
            if (l6cZNnqouiU > L8Aic6QhpD2[mzTqWkUV1][uyZxIgOSEszl]) {
                l6cZNnqouiU = L8Aic6QhpD2[mzTqWkUV1][uyZxIgOSEszl];
                IC0OXM[uyZxIgOSEszl] = mzTqWkUV1;
            }
    }
    clfdUHV = 0;
    for (uyZxIgOSEszl = 0; uyZxIgOSEszl < K06jwoRQfq; uyZxIgOSEszl++)
        for (mzTqWkUV1 = 0; mzTqWkUV1 < LSHYhx9C8c; mzTqWkUV1++)
            if (LO2qsG3E[uyZxIgOSEszl] == mzTqWkUV1 && IC0OXM[mzTqWkUV1] == uyZxIgOSEszl) {
                clfdUHV = 1;
                printf ("%d+%d", uyZxIgOSEszl, mzTqWkUV1);
            }
    if (clfdUHV == 0)
        printf ("No");
    return 0;
}

