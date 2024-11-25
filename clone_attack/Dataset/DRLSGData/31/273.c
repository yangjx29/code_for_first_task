struct   stu {
    char T13IxiUX4aPd [(1832 - 832)];
    struct   stu *edkY6fFi;
};
void  main () {
    struct   stu *HBQldYu7XHZt;
    struct   stu *nAeW291vptqX;
    struct   stu *eVw93aFMCR;
    nAeW291vptqX = eVw93aFMCR = (struct   stu *) malloc (LEN);
    HBQldYu7XHZt = nAeW291vptqX;
    nAeW291vptqX->edkY6fFi = NULL;
    gets (nAeW291vptqX->T13IxiUX4aPd);
    for (; strcmp (nAeW291vptqX->T13IxiUX4aPd, "end") != (133 - 133);) {
        nAeW291vptqX = (struct   stu *) malloc (LEN);
        gets (nAeW291vptqX->T13IxiUX4aPd);
        HBQldYu7XHZt = nAeW291vptqX;
        nAeW291vptqX->edkY6fFi = eVw93aFMCR;
        eVw93aFMCR = nAeW291vptqX;
    }
    nAeW291vptqX = HBQldYu7XHZt->edkY6fFi;
    for (; nAeW291vptqX != NULL;) {
        puts (nAeW291vptqX->T13IxiUX4aPd);
        nAeW291vptqX = nAeW291vptqX->edkY6fFi;
    }
}

