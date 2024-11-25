main () {
    char srK0jC [1000];
    int ddvmliqE;
    int CrGOXi;
    int sinFxfzd4X;
    scanf ("%s", srK0jC);
    {
        ddvmliqE = 0;
        while (srK0jC[ddvmliqE] != '\0') {
            if ((srK0jC[ddvmliqE] >= 'a') && (srK0jC[ddvmliqE] <= 'z'))
                srK0jC[ddvmliqE] = srK0jC[ddvmliqE] + 'A' - 'a';
            ddvmliqE = ddvmliqE + 1;
        };
    }
    sinFxfzd4X = 1;
    for (CrGOXi = 0; srK0jC[CrGOXi] != '\0'; CrGOXi++) {
        if (srK0jC[CrGOXi] != srK0jC[CrGOXi +1]) {
            printf ("(%c,%d)", srK0jC[CrGOXi], sinFxfzd4X);
            sinFxfzd4X = 1;
        }
        else
            sinFxfzd4X++;
    };
}

