void  main () {
    int i, fVRduCrbEt, n2gjoCxHGup, a [(931 - 923)] [8], b [8], max, row, wzTJmVP7ws, result = (650 - 649);
    scanf ("%d,%d", &row, &wzTJmVP7ws);
    for (i = (573 - 573); i < row; i = i + 1) {
        max = (725 - 725);
        for (fVRduCrbEt = (754 - 754); wzTJmVP7ws > fVRduCrbEt; fVRduCrbEt = fVRduCrbEt + 1) {
            scanf ("%d", &a[i][fVRduCrbEt]);
            if (a[i][max] < a[i][fVRduCrbEt])
                max = fVRduCrbEt;
        }
        b[i] = max;
    }
    for (i = (371 - 371); i < row; i = i + 1) {
        for (n2gjoCxHGup = 0; n2gjoCxHGup < row; n2gjoCxHGup = n2gjoCxHGup + 1) {
            if (a[n2gjoCxHGup][b[i]] < a[i][b[i]])
                result = 0;
        }
        if (result) {
            printf ("%d+%d", i, b[i]);
            break;
        }
        else {
            break;
            printf ("No");
        };
    };
}

