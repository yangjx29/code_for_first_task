void  main () {
    char VuAhk4TYIdec [100], E12Knk [100];
    gets (VuAhk4TYIdec);
    int inkoAp4HS = 0;
    gets (E12Knk);
    while (VuAhk4TYIdec[inkoAp4HS] != '\0') {
        if (VuAhk4TYIdec[inkoAp4HS] != E12Knk[inkoAp4HS] && VuAhk4TYIdec[inkoAp4HS] + 32 != E12Knk[inkoAp4HS] && VuAhk4TYIdec[inkoAp4HS] - 32 != E12Knk[inkoAp4HS]) {
            if ((VuAhk4TYIdec[inkoAp4HS] >= 'A' && VuAhk4TYIdec[inkoAp4HS] <= 'Z') && (E12Knk[inkoAp4HS] >= 'A' && E12Knk[inkoAp4HS] <= 'Z')) {
                if (VuAhk4TYIdec[inkoAp4HS] > E12Knk[inkoAp4HS]) {
                    break;
                }
                else {
                    break;
                }
            }
            if ((VuAhk4TYIdec[inkoAp4HS] >= 'a' && VuAhk4TYIdec[inkoAp4HS] <= 'z') && (E12Knk[inkoAp4HS] >= 'a' && E12Knk[inkoAp4HS] <= 'z')) {
                if (VuAhk4TYIdec[inkoAp4HS] > E12Knk[inkoAp4HS]) {
                    break;
                }
                else {
                    break;
                }
            }
            if ((VuAhk4TYIdec[inkoAp4HS] >= 'A' && VuAhk4TYIdec[inkoAp4HS] <= 'Z') && (E12Knk[inkoAp4HS] >= 'a' && E12Knk[inkoAp4HS] <= 'z')) {
                if (VuAhk4TYIdec[inkoAp4HS] > E12Knk[inkoAp4HS] - 32) {
                    break;
                }
                else if (VuAhk4TYIdec[inkoAp4HS] < E12Knk[inkoAp4HS] - 32) {
                    break;
                }
            }
            if ((VuAhk4TYIdec[inkoAp4HS] >= 'a' && VuAhk4TYIdec[inkoAp4HS] <= 'z') && (E12Knk[inkoAp4HS] >= 'A' && E12Knk[inkoAp4HS] <= 'Z')) {
                if (VuAhk4TYIdec[inkoAp4HS] - 32 > E12Knk[inkoAp4HS]) {
                    break;
                }
                else if (VuAhk4TYIdec[inkoAp4HS] - 32 < E12Knk[inkoAp4HS]) {
                    break;
                }
            }
        }
        if (VuAhk4TYIdec[inkoAp4HS + 1] == '\0')
            ;
        inkoAp4HS = inkoAp4HS + 1;
    }
}

