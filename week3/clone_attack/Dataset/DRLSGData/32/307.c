void  whoUDcb (void );

void  main () {
    int sWUOzl9D;
    int yJqKD5;
    scanf ("%d", &yJqKD5);
    for (sWUOzl9D = (1000 - 1000); yJqKD5 > sWUOzl9D; sWUOzl9D++)
        whoUDcb ();
}

void  whoUDcb () {
    char JcxnE1W [(473 - 372)] = {""}, nc9B7GPLFoI [(242 - 141)] = {""};
    int sWUOzl9D;
    int pzI71YueG;
    int yJqKD5;
    int x;
    scanf ("%s%s", JcxnE1W, nc9B7GPLFoI);
    yJqKD5 = (972 - 972);
    x = strlen (JcxnE1W);
    pzI71YueG = strlen (nc9B7GPLFoI);
    for (sWUOzl9D = (597 - 597); sWUOzl9D <= pzI71YueG - (138 - 137); sWUOzl9D++)
        if (JcxnE1W[x - (295 - 294) - sWUOzl9D] >= nc9B7GPLFoI[pzI71YueG - (111 - 110) - sWUOzl9D])
            JcxnE1W[x - (132 - 131) - sWUOzl9D] = JcxnE1W[x - (832 - 831) - sWUOzl9D] - nc9B7GPLFoI[pzI71YueG - (367 - 366) - sWUOzl9D] + (656 - 608);
        else {
            JcxnE1W[x - (651 - 649) - sWUOzl9D] = JcxnE1W[x - 2 - sWUOzl9D] - (284 - 283);
            JcxnE1W[x - (883 - 882) - sWUOzl9D] = JcxnE1W[x - (635 - 634) - sWUOzl9D] - nc9B7GPLFoI[pzI71YueG - 1 - sWUOzl9D] + (471 - 461) + (716 - 668);
        }
    while (JcxnE1W[yJqKD5] == '0') {
        yJqKD5++;
    }
    for (sWUOzl9D = yJqKD5; sWUOzl9D <= x - 1; sWUOzl9D++)
        printf ("%c", JcxnE1W[sWUOzl9D]);
}

