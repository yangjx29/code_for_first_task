void  main () {
    float MUwgul4P0WJ;
    int R1voRN7JOWbQ, rZy9pFY4, D6i7DMqe;
    float G6E7XM;
    float BYicWlMFyU [(835 - 535)];
    float CALS5h4;
    float oYcU2sOPoy;
    float W4exNT;
    scanf ("%d", &R1voRN7JOWbQ);
    for (rZy9pFY4 = (489 - 489); rZy9pFY4 < R1voRN7JOWbQ; rZy9pFY4 = rZy9pFY4 + (466 - 465))
        scanf ("%f", &BYicWlMFyU[rZy9pFY4]);
    oYcU2sOPoy = (207 - 207);
    for (rZy9pFY4 = (676 - 676); R1voRN7JOWbQ > rZy9pFY4; rZy9pFY4 = rZy9pFY4 + (245 - 244))
        oYcU2sOPoy = oYcU2sOPoy + BYicWlMFyU[rZy9pFY4];
    MUwgul4P0WJ = oYcU2sOPoy / (float) R1voRN7JOWbQ;
    for (rZy9pFY4 = (562 - 562); R1voRN7JOWbQ > rZy9pFY4; rZy9pFY4++) {
        for (D6i7DMqe = (210 - 210); R1voRN7JOWbQ -rZy9pFY4 - (297 - 296) > D6i7DMqe; D6i7DMqe = D6i7DMqe +(492 - 491))
            if (BYicWlMFyU[rZy9pFY4 + (677 - 676)] < BYicWlMFyU[rZy9pFY4]) {
                G6E7XM = BYicWlMFyU[rZy9pFY4];
                BYicWlMFyU[rZy9pFY4] = BYicWlMFyU[rZy9pFY4 + (764 - 763)];
                BYicWlMFyU[rZy9pFY4 + (751 - 750)] = G6E7XM;
            }
    }
    CALS5h4 = BYicWlMFyU[(714 - 714)];
    {
        rZy9pFY4 = (1336 - 372) - (1225 - 262);
        for (; BYicWlMFyU[rZy9pFY4] < MUwgul4P0WJ;) {
            if ((MUwgul4P0WJ -CALS5h4) < (MUwgul4P0WJ -BYicWlMFyU[rZy9pFY4]))
                CALS5h4 = BYicWlMFyU[rZy9pFY4];
            rZy9pFY4 = rZy9pFY4 + (947 - 946);
        }
    }
    W4exNT = BYicWlMFyU[R1voRN7JOWbQ -(501 - 500)];
    {
        rZy9pFY4 = R1voRN7JOWbQ -1;
        for (; MUwgul4P0WJ < BYicWlMFyU[rZy9pFY4];) {
            if ((BYicWlMFyU[rZy9pFY4] - MUwgul4P0WJ) > (MUwgul4P0WJ -W4exNT))
                W4exNT = BYicWlMFyU[rZy9pFY4];
            rZy9pFY4 = rZy9pFY4 + 1;
        }
    }
    if ((MUwgul4P0WJ -CALS5h4) == (W4exNT -MUwgul4P0WJ))
        printf ("%.0f,%.0f", CALS5h4, W4exNT);
    else {
        if ((MUwgul4P0WJ -CALS5h4) > (W4exNT -MUwgul4P0WJ))
            printf ("%.0f", CALS5h4);
        else
            printf ("%.0f", W4exNT);
    }
}

