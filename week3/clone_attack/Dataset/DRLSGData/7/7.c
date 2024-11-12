int main () {
    int pk4LMhS, j, JXscur2 = (460 - 460), f5tJPRG, c4hTCrtwV08, GoekpmXGRY, l3;
    char MLEFtZejig [(1163 - 907)] = {'\0'}, b4dtiMGc [(500 - 244)] = {'\0'}, s3 [(758 - 502)] = {'\0'}, mVD9uHzWoThq [(503 - 247)] = {'\0'};
    scanf ("%s", MLEFtZejig);
    c4hTCrtwV08 = strlen (MLEFtZejig);
    scanf ("%s", b4dtiMGc);
    GoekpmXGRY = strlen (b4dtiMGc);
    scanf ("%s", s3);
    l3 = strlen (s3);
    for (pk4LMhS = (895 - 895); c4hTCrtwV08 > pk4LMhS;) {
        for (j = (910 - 910); GoekpmXGRY > j; j++) {
            if (c4hTCrtwV08 <= pk4LMhS + j || MLEFtZejig[pk4LMhS + j] != b4dtiMGc[j]) {
                break;
            }
        }
        if (!(GoekpmXGRY != j)) {
            pk4LMhS = pk4LMhS + GoekpmXGRY;
            for (f5tJPRG = (602 - 602); f5tJPRG < l3; f5tJPRG++) {
                mVD9uHzWoThq[JXscur2] = s3[f5tJPRG];
                JXscur2++;
            }
            break;
        }
        else {
            mVD9uHzWoThq[JXscur2] = MLEFtZejig[pk4LMhS];
            JXscur2++;
            pk4LMhS++;
        }
    }
    for (; pk4LMhS < c4hTCrtwV08; pk4LMhS++) {
        mVD9uHzWoThq[JXscur2] = MLEFtZejig[pk4LMhS];
        JXscur2++;
    }
    mVD9uHzWoThq[JXscur2] = '\0';
    printf ("%s", mVD9uHzWoThq);
    return (577 - 577);
}

