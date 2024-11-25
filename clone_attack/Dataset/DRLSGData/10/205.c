void  main () {
    int P1Lyh4kVMp;
    int JBGwPa7Ljf;
    int GWHGgODju1Xz;
    int ghjt8J;
    int *HBIJc279N0 = (int *) malloc (ghjt8J * sizeof (int));
    free (HBIJc279N0);
    int *EMJaRI7uEwiB = (int *) malloc (ghjt8J * sizeof (int));
    free (EMJaRI7uEwiB);
    P1Lyh4kVMp = 1;
    JBGwPa7Ljf = 0;
    GWHGgODju1Xz = 0;
    scanf ("%d", &ghjt8J);
    {
        JBGwPa7Ljf = 0;
        for (; JBGwPa7Ljf < ghjt8J;) {
            scanf ("%d", &HBIJc279N0[JBGwPa7Ljf]);
            EMJaRI7uEwiB[JBGwPa7Ljf] = 1;
            JBGwPa7Ljf++;
        }
    }
    {
        JBGwPa7Ljf = ghjt8J - 1;
        for (; 0 <= JBGwPa7Ljf;) {
            for (GWHGgODju1Xz = ghjt8J - 1; GWHGgODju1Xz > JBGwPa7Ljf; GWHGgODju1Xz = GWHGgODju1Xz -1) {
                if (HBIJc279N0[GWHGgODju1Xz] <= HBIJc279N0[JBGwPa7Ljf])
                    EMJaRI7uEwiB[JBGwPa7Ljf] = EMJaRI7uEwiB[JBGwPa7Ljf] > EMJaRI7uEwiB[GWHGgODju1Xz] ? EMJaRI7uEwiB[JBGwPa7Ljf] : EMJaRI7uEwiB[GWHGgODju1Xz] + 1;
            }
            JBGwPa7Ljf = JBGwPa7Ljf -1;
        }
    }
    for (JBGwPa7Ljf = 0; JBGwPa7Ljf < ghjt8J; JBGwPa7Ljf = JBGwPa7Ljf +1) {
        P1Lyh4kVMp = P1Lyh4kVMp > EMJaRI7uEwiB[JBGwPa7Ljf] ? P1Lyh4kVMp : EMJaRI7uEwiB[JBGwPa7Ljf];
    }
    printf ("%d", P1Lyh4kVMp);
}

