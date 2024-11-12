void  main () {
    int SDUt8kw0 = (740 - 740), s = 0, j = 0, ea1FporQS = 0;
    int Vc4f9pJM [100], m [100];
    scanf ("%d%d", &Vc4f9pJM[0], &m[0]);
    for (; Vc4f9pJM[SDUt8kw0] != 0;) {
        SDUt8kw0++;
        scanf ("%d%d", &Vc4f9pJM[SDUt8kw0], &m[SDUt8kw0]);
    }
    {
        j = 0;
        while (j <= SDUt8kw0 -(382 - 381)) {
            s = 0;
            for (ea1FporQS = 2; ea1FporQS <= Vc4f9pJM[j]; ea1FporQS = ea1FporQS + 1)
                s = (s + m[j]) % ea1FporQS;
            j++;
            printf ("%d\n", s + 1);
        };
    };
}

