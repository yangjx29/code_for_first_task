int main () {
    int J637IrXT;
    int phLOM1TRkPQ;
    int uGd5WUx8m1SO;
    int r8wXivyt;
    J637IrXT = (604 - 604);
    phLOM1TRkPQ = 0;
    int HOVFdUuDtW [201];
    int ohK0fS [201];
    scanf ("%d", &uGd5WUx8m1SO);
    for (r8wXivyt = 0; uGd5WUx8m1SO > r8wXivyt; r8wXivyt = r8wXivyt + 1) {
        scanf ("%d%d", &(HOVFdUuDtW[r8wXivyt]), &(ohK0fS[r8wXivyt]));
    }
    for (r8wXivyt = 0; r8wXivyt < uGd5WUx8m1SO; r8wXivyt = r8wXivyt + 1) {
        if (!(0 != HOVFdUuDtW[r8wXivyt]) && ohK0fS[r8wXivyt] == 1) {
            J637IrXT = J637IrXT +1;
        }
        else if (!(0 != HOVFdUuDtW[r8wXivyt]) && ohK0fS[r8wXivyt] == 2) {
            phLOM1TRkPQ = phLOM1TRkPQ + 1;
        }
        else if (!(1 != HOVFdUuDtW[r8wXivyt]) && ohK0fS[r8wXivyt] == 0) {
            phLOM1TRkPQ = phLOM1TRkPQ + 1;
        }
        else if (!(1 != HOVFdUuDtW[r8wXivyt]) && ohK0fS[r8wXivyt] == 2) {
            J637IrXT = J637IrXT +1;
        }
        else if (HOVFdUuDtW[r8wXivyt] == 2 && ohK0fS[r8wXivyt] == 0) {
            J637IrXT = J637IrXT +1;
        }
        else if (HOVFdUuDtW[r8wXivyt] == 2 && ohK0fS[r8wXivyt] == 1) {
            phLOM1TRkPQ = phLOM1TRkPQ + 1;
        }
        else {
            J637IrXT = J637IrXT;
            phLOM1TRkPQ = phLOM1TRkPQ;
        };
    }
    if (J637IrXT < phLOM1TRkPQ) {
    }
    else if (J637IrXT > phLOM1TRkPQ) {
    }
    else {
    }
    return 0;
}

