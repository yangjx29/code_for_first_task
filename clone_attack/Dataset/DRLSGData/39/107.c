int main () {
    int xGidQclEvXeq;
    int cBjon2Iu76;
    int jx3mJXNoi;
    struct   data {
        char hGTOR67j3 [22];
        int ZBfpKG1mPQl;
        int WamP9l;
        char oua7cQGl1Ho5;
        char hHZIKCngv;
        int PGayJFPfHb;
        int Zz1jG9;
    }
    o46T095d [100];
    int UF3vlEZJ;
    int tVYJrh;
    tVYJrh = 0;
    scanf ("%d", &jx3mJXNoi);
    xGidQclEvXeq = 0;
    cBjon2Iu76 = 0;
    {
        cBjon2Iu76 = 0;
        while (cBjon2Iu76 < jx3mJXNoi) {
            scanf ("%s", o46T095d[cBjon2Iu76].hGTOR67j3);
            scanf ("%d", &(o46T095d[cBjon2Iu76].ZBfpKG1mPQl));
            scanf ("%d", &(o46T095d[cBjon2Iu76].WamP9l));
            scanf ("%c", &(o46T095d[cBjon2Iu76].oua7cQGl1Ho5));
            scanf ("%c", &(o46T095d[cBjon2Iu76].hHZIKCngv));
            scanf ("%d", &(o46T095d[cBjon2Iu76].PGayJFPfHb));
            cBjon2Iu76 = cBjon2Iu76 + 1;
            getchar ();
            getchar ();
        }
    }
    {
        cBjon2Iu76 = 0;
        while (jx3mJXNoi > cBjon2Iu76) {
            o46T095d[cBjon2Iu76].Zz1jG9 = 0;
            cBjon2Iu76++;
        }
    }
    UF3vlEZJ = 0;
    for (cBjon2Iu76 = 0; jx3mJXNoi > cBjon2Iu76; cBjon2Iu76++) {
        if (80 < o46T095d[cBjon2Iu76].ZBfpKG1mPQl && 1 <= o46T095d[cBjon2Iu76].PGayJFPfHb) {
            o46T095d[cBjon2Iu76].Zz1jG9 += 8000;
        }
        if (o46T095d[cBjon2Iu76].ZBfpKG1mPQl > 85 && o46T095d[cBjon2Iu76].WamP9l > 80) {
            o46T095d[cBjon2Iu76].Zz1jG9 += 4000;
        }
        if (o46T095d[cBjon2Iu76].ZBfpKG1mPQl > 90) {
            o46T095d[cBjon2Iu76].Zz1jG9 += 2000;
        }
        if (o46T095d[cBjon2Iu76].ZBfpKG1mPQl > 85 && o46T095d[cBjon2Iu76].hHZIKCngv == 'Y') {
            o46T095d[cBjon2Iu76].Zz1jG9 += 1000;
        }
        if (o46T095d[cBjon2Iu76].WamP9l > 80 && o46T095d[cBjon2Iu76].oua7cQGl1Ho5 == 'Y') {
            o46T095d[cBjon2Iu76].Zz1jG9 += 850;
        }
        xGidQclEvXeq += o46T095d[cBjon2Iu76].Zz1jG9;
        if (o46T095d[cBjon2Iu76].Zz1jG9 > UF3vlEZJ) {
            UF3vlEZJ = o46T095d[cBjon2Iu76].Zz1jG9;
            tVYJrh = cBjon2Iu76;
        }
    }
    printf ("%s\n", o46T095d[tVYJrh].hGTOR67j3);
    printf ("%d\n", UF3vlEZJ);
    printf ("%d\n", xGidQclEvXeq);
    return 0;
}

