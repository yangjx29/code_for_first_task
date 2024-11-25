void  main () {
    int jqt9H5 [(1080 - 980)] [100];
    int s9UZS6lXA [100] [100];
    int J4D9pOoCJtq3 [100] [100] = {0};
    int iZ7Xj3VYIqyO;
    int tnAPZqHQob;
    int goaLBArSjRhQ;
    int d4b2Az;
    int uEsZMncSuGV0;
    int DDUyLr;
    int f6EofsYn;
    scanf ("%d%d", &iZ7Xj3VYIqyO, &tnAPZqHQob);
    for (uEsZMncSuGV0 = 0; uEsZMncSuGV0 <= iZ7Xj3VYIqyO - (234 - 233); uEsZMncSuGV0 = uEsZMncSuGV0 + 1)
        for (DDUyLr = 0; DDUyLr <= tnAPZqHQob - (200 - 199); DDUyLr = DDUyLr +1)
            scanf ("%d", &jqt9H5[uEsZMncSuGV0][DDUyLr]);
    scanf ("%d%d", &goaLBArSjRhQ, &d4b2Az);
    for (uEsZMncSuGV0 = 0; goaLBArSjRhQ - 1 >= uEsZMncSuGV0; uEsZMncSuGV0 = uEsZMncSuGV0 + 1)
        for (DDUyLr = 0; d4b2Az - 1 >= DDUyLr; DDUyLr = DDUyLr +1)
            scanf ("%d", &s9UZS6lXA[uEsZMncSuGV0][DDUyLr]);
    for (uEsZMncSuGV0 = 0; uEsZMncSuGV0 <= iZ7Xj3VYIqyO - 1; uEsZMncSuGV0++)
        for (DDUyLr = 0; DDUyLr <= d4b2Az - 1; DDUyLr++)
            for (f6EofsYn = 0; f6EofsYn <= goaLBArSjRhQ - 1; f6EofsYn++)
                J4D9pOoCJtq3[uEsZMncSuGV0][DDUyLr] = J4D9pOoCJtq3[uEsZMncSuGV0][DDUyLr] + jqt9H5[uEsZMncSuGV0][f6EofsYn] * s9UZS6lXA[f6EofsYn][DDUyLr];
    for (uEsZMncSuGV0 = 0; uEsZMncSuGV0 <= iZ7Xj3VYIqyO - 1; uEsZMncSuGV0++) {
        for (DDUyLr = 0; DDUyLr <= d4b2Az - 2; DDUyLr++)
            printf ("%d ", J4D9pOoCJtq3[uEsZMncSuGV0][DDUyLr]);
        printf ("%d", J4D9pOoCJtq3[uEsZMncSuGV0][d4b2Az - 1]);
        putchar (10);
    }
}

