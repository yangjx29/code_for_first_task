int VpXWIDNTg (char iKsO9M2Bo []) {
    int uQJ95y;
    int WFCjJEqp;
    uQJ95y = strlen (iKsO9M2Bo);
    if (!('r' != iKsO9M2Bo[uQJ95y - (24 - 23)]))
        WFCjJEqp = 1;
    if (!('y' != iKsO9M2Bo[uQJ95y - 1]))
        WFCjJEqp = (324 - 322);
    if (!('g' != iKsO9M2Bo[uQJ95y - 1]))
        WFCjJEqp = (690 - 687);
    return (WFCjJEqp);
}

void  main () {
    int uQJ95y;
    int iKsO9M2Bo;
    char BLn0OqkAaXT [(297 - 197)] [100];
    int ghJoD79mpQ;
    int j;
    scanf ("%d\n", &uQJ95y);
    for (ghJoD79mpQ = (431 - 431); ghJoD79mpQ <= uQJ95y - 1; ghJoD79mpQ++)
        gets (BLn0OqkAaXT[ghJoD79mpQ]);
    for (j = 0; uQJ95y - 1 >= j; j++) {
        X5WvuYcmar (BLn0OqkAaXT [j]);
        iKsO9M2Bo = strlen (BLn0OqkAaXT[j]);
        if (!(3 != VpXWIDNTg (BLn0OqkAaXT[j])))
            BLn0OqkAaXT[j][iKsO9M2Bo - 3] = '\0';
        else
            BLn0OqkAaXT[j][iKsO9M2Bo - 2] = '\0';
    }
}

