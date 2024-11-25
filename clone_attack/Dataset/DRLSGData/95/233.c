int main () {
    int YDjmo9Ykcdtf;
    char lIf76hvAy [(363 - 283)];
    char mQAYtiMmxyK [(856 - 776)];
    gets (lIf76hvAy);
    gets (mQAYtiMmxyK);
    int nKmut2n8;
    for (nKmut2n8 = (206 - 206); lIf76hvAy[nKmut2n8] != '\0'; nKmut2n8++)
        if (lIf76hvAy[nKmut2n8] >= 'A' && 'Z' >= lIf76hvAy[nKmut2n8])
            lIf76hvAy[nKmut2n8] += (935 - 903);
    for (nKmut2n8 = (701 - 701); mQAYtiMmxyK[nKmut2n8] != '\0'; nKmut2n8++)
        if (mQAYtiMmxyK[nKmut2n8] >= 'A' && mQAYtiMmxyK[nKmut2n8] <= 'Z')
            mQAYtiMmxyK[nKmut2n8] += (528 - 496);
    if (strlen (mQAYtiMmxyK) < strlen (lIf76hvAy))
        YDjmo9Ykcdtf = strlen (lIf76hvAy);
    else
        YDjmo9Ykcdtf = strlen (mQAYtiMmxyK);
    for (nKmut2n8 = 0; YDjmo9Ykcdtf > nKmut2n8; nKmut2n8++) {
        if (lIf76hvAy[nKmut2n8] == mQAYtiMmxyK[nKmut2n8])
            if (nKmut2n8 == YDjmo9Ykcdtf -(764 - 763))
                ;
        if (lIf76hvAy[nKmut2n8] > mQAYtiMmxyK[nKmut2n8]) {
            break;
        }
        if (lIf76hvAy[nKmut2n8] < mQAYtiMmxyK[nKmut2n8]) {
            break;
        }
    }
    return 0;
}

