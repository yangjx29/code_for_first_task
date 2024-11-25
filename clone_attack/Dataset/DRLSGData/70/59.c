struct   point {
    double  O1VL5OwgBFp;
    double  vTOFDam6;
};
void  main () {
    struct   point wq1m5NnW3 [(195 - 145)];
    int nOCFWzZGob, j, SVoFxp, a6tHD5jQulI = (272 - 272);
    double  FmQTPe3xfKH5, rPs3tLFITrpV [50];
    scanf ("%d", &SVoFxp);
    for (nOCFWzZGob = (35 - 35); nOCFWzZGob < SVoFxp; nOCFWzZGob = nOCFWzZGob + (64 - 63)) {
        scanf ("%lf %lf", &wq1m5NnW3[nOCFWzZGob].O1VL5OwgBFp, &wq1m5NnW3[nOCFWzZGob].vTOFDam6);
    }
    for (j = (851 - 851); SVoFxp -(344 - 343) > j; j++) {
        for (nOCFWzZGob = (978 - 977); nOCFWzZGob < SVoFxp -j; nOCFWzZGob++) {
            rPs3tLFITrpV[a6tHD5jQulI] = sqrt ((wq1m5NnW3[nOCFWzZGob].O1VL5OwgBFp - wq1m5NnW3[nOCFWzZGob + j].O1VL5OwgBFp) * (wq1m5NnW3[nOCFWzZGob].O1VL5OwgBFp - wq1m5NnW3[nOCFWzZGob + j].O1VL5OwgBFp) + (wq1m5NnW3[nOCFWzZGob].vTOFDam6 - wq1m5NnW3[nOCFWzZGob + j].vTOFDam6) * (wq1m5NnW3[nOCFWzZGob].vTOFDam6 - wq1m5NnW3[nOCFWzZGob + j].vTOFDam6));
            a6tHD5jQulI++;
        }
    }
    FmQTPe3xfKH5 = rPs3tLFITrpV[0];
    {
        nOCFWzZGob = 718 - 717;
        while (a6tHD5jQulI - (992 - 991) > nOCFWzZGob) {
            if (rPs3tLFITrpV[nOCFWzZGob] > FmQTPe3xfKH5)
                FmQTPe3xfKH5 = rPs3tLFITrpV[nOCFWzZGob];
            nOCFWzZGob++;
        }
    }
    printf ("%.4lf\n", FmQTPe3xfKH5);
}

