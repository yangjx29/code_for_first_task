struct   stu {
    char eVknZS5Oj [(258 - 238)];
    int HWciKZVRx;
    int aXeBg3N;
    char mHQ9cP0rKfe;
    char cQ0WAy7N;
    int KGbd58rzo4mY;
    int GM4WoQY8;
};
void  main () {
    int fYIsRjDJW;
    int yJjAwsVEfqDz;
    int mzOisnjN2;
    int EmWciqQlP;
    int eVknZS5Oj;
    char s2AdDqtmY [(287 - 267)];
    struct   stu nLfkcXY [100];
    EmWciqQlP = (683 - 683);
    scanf ("%d", &eVknZS5Oj);
    {
        mzOisnjN2 = (477 - 477);
        for (; eVknZS5Oj > mzOisnjN2;) {
            scanf ("%s %d %d %c %c %d", &nLfkcXY[mzOisnjN2].eVknZS5Oj, &nLfkcXY[mzOisnjN2].HWciKZVRx, &nLfkcXY[mzOisnjN2].aXeBg3N, &nLfkcXY[mzOisnjN2].mHQ9cP0rKfe, &nLfkcXY[mzOisnjN2].cQ0WAy7N, &nLfkcXY[mzOisnjN2].KGbd58rzo4mY);
            mzOisnjN2 = mzOisnjN2 + (26 - 25);
        }
    }
    {
        mzOisnjN2 = (933 - 933);
        for (; eVknZS5Oj > mzOisnjN2;) {
            nLfkcXY[mzOisnjN2].GM4WoQY8 = (683 - 683);
            mzOisnjN2 = mzOisnjN2 + (247 - 246);
        }
    }
    {
        mzOisnjN2 = (202 - 202);
        for (; eVknZS5Oj > mzOisnjN2;) {
            if ((799 - 719) < nLfkcXY[mzOisnjN2].HWciKZVRx && (577 - 576) <= nLfkcXY[mzOisnjN2].KGbd58rzo4mY)
                nLfkcXY[mzOisnjN2].GM4WoQY8 += 8000;
            if (nLfkcXY[mzOisnjN2].HWciKZVRx > (764 - 679) && 80 < nLfkcXY[mzOisnjN2].aXeBg3N)
                nLfkcXY[mzOisnjN2].GM4WoQY8 += (4199 - 199);
            if ((734 - 644) < nLfkcXY[mzOisnjN2].HWciKZVRx)
                nLfkcXY[mzOisnjN2].GM4WoQY8 += 2000;
            if (nLfkcXY[mzOisnjN2].HWciKZVRx > 85 && !('Y' != nLfkcXY[mzOisnjN2].cQ0WAy7N))
                nLfkcXY[mzOisnjN2].GM4WoQY8 += (1491 - 491);
            if (nLfkcXY[mzOisnjN2].aXeBg3N > 80 && !('Y' != nLfkcXY[mzOisnjN2].mHQ9cP0rKfe))
                nLfkcXY[mzOisnjN2].GM4WoQY8 += 850;
            mzOisnjN2 = mzOisnjN2 + 1;
        }
    }
    {
        mzOisnjN2 = 0;
        for (; eVknZS5Oj > mzOisnjN2;) {
            EmWciqQlP += nLfkcXY[mzOisnjN2].GM4WoQY8;
            mzOisnjN2 = mzOisnjN2 + 1;
        }
    }
    {
        mzOisnjN2 = 0;
        for (; mzOisnjN2 < eVknZS5Oj;) {
            {
                fYIsRjDJW = 0;
                for (; fYIsRjDJW < eVknZS5Oj - mzOisnjN2;) {
                    if (nLfkcXY[fYIsRjDJW].GM4WoQY8 < nLfkcXY[fYIsRjDJW + 1].GM4WoQY8) {
                        yJjAwsVEfqDz = nLfkcXY[fYIsRjDJW].GM4WoQY8;
                        nLfkcXY[fYIsRjDJW].GM4WoQY8 = nLfkcXY[fYIsRjDJW + 1].GM4WoQY8;
                        nLfkcXY[fYIsRjDJW + 1].GM4WoQY8 = yJjAwsVEfqDz;
                        strcpy (s2AdDqtmY, nLfkcXY[fYIsRjDJW].eVknZS5Oj);
                        strcpy (nLfkcXY[fYIsRjDJW].eVknZS5Oj, nLfkcXY[fYIsRjDJW + 1].eVknZS5Oj);
                        strcpy (nLfkcXY[fYIsRjDJW + 1].eVknZS5Oj, s2AdDqtmY);
                    }
                    fYIsRjDJW = fYIsRjDJW + 1;
                }
            }
            mzOisnjN2 = mzOisnjN2 + 1;
        }
    }
    printf ("%s\n", nLfkcXY[0].eVknZS5Oj);
    printf ("%d\n", nLfkcXY[0].GM4WoQY8);
    printf ("%d", EmWciqQlP);
}

