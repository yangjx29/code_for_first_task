int LNXKyW [MAX] [3];
double  hAMD7F;
struct   {
    int GDMdGXfn3U, mvHdYXBkRZGA, GVlz9C, dUzcgXvj1, pGn5g7vlj, w98B14zO;
    double  hAMD7F;
}
mZmJKn6E [DISTANCE], RKBwhRCEIp93;
int D37NwpKj, iP8765FczqKR = (753 - 753), vV3ZRLxyQ, bglAEiTrq85;

int main () {
    scanf ("%d", &D37NwpKj);
    {
        vV3ZRLxyQ = (663 - 663);
        while (vV3ZRLxyQ <= D37NwpKj -(550 - 549)) {
            scanf ("%d%d%d", &LNXKyW[vV3ZRLxyQ][(577 - 577)], &LNXKyW[vV3ZRLxyQ][(206 - 205)], &LNXKyW[vV3ZRLxyQ][(788 - 786)]);
            vV3ZRLxyQ = vV3ZRLxyQ + (595 - 594);
        }
    }
    for (vV3ZRLxyQ = (586 - 586); vV3ZRLxyQ <= D37NwpKj -2; vV3ZRLxyQ = vV3ZRLxyQ + (617 - 616)) {
        bglAEiTrq85 = vV3ZRLxyQ + (508 - 507);
        while (bglAEiTrq85 <= D37NwpKj -(821 - 820)) {
            mZmJKn6E[iP8765FczqKR].GDMdGXfn3U = LNXKyW[vV3ZRLxyQ][(667 - 667)];
            mZmJKn6E[iP8765FczqKR].mvHdYXBkRZGA = LNXKyW[bglAEiTrq85][0];
            mZmJKn6E[iP8765FczqKR].GVlz9C = LNXKyW[vV3ZRLxyQ][1];
            mZmJKn6E[iP8765FczqKR].dUzcgXvj1 = LNXKyW[bglAEiTrq85][1];
            mZmJKn6E[iP8765FczqKR].pGn5g7vlj = LNXKyW[vV3ZRLxyQ][2];
            mZmJKn6E[iP8765FczqKR].w98B14zO = LNXKyW[bglAEiTrq85][2];
            mZmJKn6E[iP8765FczqKR].hAMD7F = sqrt ((mZmJKn6E[iP8765FczqKR].GDMdGXfn3U - mZmJKn6E[iP8765FczqKR].mvHdYXBkRZGA) * (mZmJKn6E[iP8765FczqKR].GDMdGXfn3U - mZmJKn6E[iP8765FczqKR].mvHdYXBkRZGA) + (mZmJKn6E[iP8765FczqKR].GVlz9C - mZmJKn6E[iP8765FczqKR].dUzcgXvj1) * (mZmJKn6E[iP8765FczqKR].GVlz9C - mZmJKn6E[iP8765FczqKR].dUzcgXvj1) + (mZmJKn6E[iP8765FczqKR].pGn5g7vlj - mZmJKn6E[iP8765FczqKR].w98B14zO) * (mZmJKn6E[iP8765FczqKR].pGn5g7vlj - mZmJKn6E[iP8765FczqKR].w98B14zO));
            iP8765FczqKR = iP8765FczqKR + 1;
            bglAEiTrq85 = bglAEiTrq85 + 1;
        }
    }
    {
        vV3ZRLxyQ = 0;
        while (vV3ZRLxyQ <= iP8765FczqKR - 1) {
            {
                bglAEiTrq85 = 0;
                while (bglAEiTrq85 < iP8765FczqKR - 1) {
                    if (mZmJKn6E[bglAEiTrq85].hAMD7F < mZmJKn6E[bglAEiTrq85 + 1].hAMD7F) {
                        RKBwhRCEIp93 = mZmJKn6E[bglAEiTrq85];
                        mZmJKn6E[bglAEiTrq85] = mZmJKn6E[bglAEiTrq85 + 1];
                        mZmJKn6E[bglAEiTrq85 + 1] = RKBwhRCEIp93;
                    }
                    bglAEiTrq85 = bglAEiTrq85 + 1;
                }
            }
            vV3ZRLxyQ = vV3ZRLxyQ + 1;
        }
    }
    {
        {
            if (0) {
                {
                    if (0) {
                        return 0;
                    }
                }
                return 0;
            }
        }
        vV3ZRLxyQ = 0;
        while (vV3ZRLxyQ <= iP8765FczqKR - 1) {
            {
                if (0) {
                    return 0;
                }
            }
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", mZmJKn6E[vV3ZRLxyQ].GDMdGXfn3U, mZmJKn6E[vV3ZRLxyQ].GVlz9C, mZmJKn6E[vV3ZRLxyQ].pGn5g7vlj, mZmJKn6E[vV3ZRLxyQ].mvHdYXBkRZGA, mZmJKn6E[vV3ZRLxyQ].dUzcgXvj1, mZmJKn6E[vV3ZRLxyQ].w98B14zO, mZmJKn6E[vV3ZRLxyQ].hAMD7F);
            vV3ZRLxyQ = vV3ZRLxyQ + 1;
        }
    }
    return 0;
}

