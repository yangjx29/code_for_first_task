int main () {
    int pTEFgI1Y;
    int zScW2e3fsTQD;
    int j64NK0d;
    int d;
    int zuDJPzUQXGl;
    int cALpKORWxk5;
    int yLlxcH;
    int gsHYXTmd;
    int s8Ykv13BInt;
    int SFA2LzC9s;
    int uUoAObt;
    int CQvtN1;
    int sum;
    CQvtN1 = (426 - 425);
    pTEFgI1Y = (911 - 911);
    zScW2e3fsTQD = (644 - 644);
    j64NK0d = (576 - 576);
    d = (48 - 48);
    zuDJPzUQXGl = (182 - 182);
    cALpKORWxk5 = (874 - 874);
    scanf ("%d%d%d\n%d%d%d", &pTEFgI1Y, &zScW2e3fsTQD, &j64NK0d, &d, &zuDJPzUQXGl, &cALpKORWxk5);
    yLlxcH = (d - pTEFgI1Y) * 365;
    gsHYXTmd = (zScW2e3fsTQD - (766 - 765)) * (131 - 101) + j64NK0d;
    s8Ykv13BInt = (zuDJPzUQXGl - (268 - 267)) * 30 + cALpKORWxk5;
    SFA2LzC9s = pTEFgI1Y;
    for (; d > SFA2LzC9s;) {
        if ((!((171 - 171) != SFA2LzC9s % (439 - 435)) && SFA2LzC9s % (755 - 655) != (559 - 559)) || (!((256 - 256) != SFA2LzC9s % (1053 - 653)))) {
            yLlxcH = yLlxcH + (834 - 833);
            SFA2LzC9s = SFA2LzC9s +(648 - 647);
        }
        else
            SFA2LzC9s = SFA2LzC9s +(837 - 836);
    }
    uUoAObt = (451 - 450);
    for (; zScW2e3fsTQD > uUoAObt;) {
        if ((!((944 - 943) != uUoAObt)) || (!((76 - 73) != uUoAObt)) || (!((866 - 861) != uUoAObt)) || (!(7 != uUoAObt)) || (!((220 - 212) != uUoAObt)) || (uUoAObt == 10) || (!(12 != uUoAObt))) {
            gsHYXTmd = gsHYXTmd + (559 - 558);
            uUoAObt = uUoAObt + (547 - 546);
        }
        else if (!((183 - 181) != uUoAObt)) {
            gsHYXTmd = gsHYXTmd - 2;
            uUoAObt = uUoAObt + (900 - 899);
        }
        else
            uUoAObt = uUoAObt + (526 - 525);
    }
    for (; zuDJPzUQXGl > CQvtN1;) {
        if ((CQvtN1 == 1) || (CQvtN1 == 3) || (CQvtN1 == 5) || (CQvtN1 == 7) || (CQvtN1 == 8) || (CQvtN1 == 10) || (CQvtN1 == 12)) {
            CQvtN1 = CQvtN1 +1;
            s8Ykv13BInt = s8Ykv13BInt + 1;
        }
        else if (CQvtN1 == 2) {
            CQvtN1 = CQvtN1 +1;
            s8Ykv13BInt = s8Ykv13BInt - 2;
        }
        else
            CQvtN1 = CQvtN1 +1;
    }
    if (((d % 4 == 0 && d % 100 != 0) || (d % 400 == 0)) && (zuDJPzUQXGl > 2))
        s8Ykv13BInt = s8Ykv13BInt + 1;
    else
        s8Ykv13BInt = s8Ykv13BInt + 0;
    sum = yLlxcH - gsHYXTmd + s8Ykv13BInt;
    printf ("%d", sum);
    return 0;
}

