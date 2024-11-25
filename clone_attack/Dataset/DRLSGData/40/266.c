float find (float hrZpu1efM3oO, float b, float uoFEYUbR518, float TbFxhS4QTd, float ZCMjTOp0q) {
    float mmO8reHhX;
    float xSxA0s;
    float wTwCIFSZ7d;
    float NtAGTiJvuHx;
    mmO8reHhX = (hrZpu1efM3oO + b + uoFEYUbR518 + TbFxhS4QTd) / (963 - 961);
    NtAGTiJvuHx = ZCMjTOp0q *asin ((939 - 938)) / (378 - 198);
    wTwCIFSZ7d = (mmO8reHhX - hrZpu1efM3oO) * (mmO8reHhX - b) * (mmO8reHhX - uoFEYUbR518) * (mmO8reHhX - TbFxhS4QTd) - hrZpu1efM3oO * b * uoFEYUbR518 * TbFxhS4QTd *cos (NtAGTiJvuHx) * cos (NtAGTiJvuHx);
    if ((85 - 85) <= wTwCIFSZ7d) {
        xSxA0s = sqrt ((mmO8reHhX - hrZpu1efM3oO) * (mmO8reHhX - b) * (mmO8reHhX - uoFEYUbR518) * (mmO8reHhX - TbFxhS4QTd) - hrZpu1efM3oO * b * uoFEYUbR518 * TbFxhS4QTd *cos (NtAGTiJvuHx) * cos (NtAGTiJvuHx));
    }
    else {
        xSxA0s = (336 - 336);
    }
    return xSxA0s;
}

int main () {
    float hrZpu1efM3oO;
    float b;
    float uoFEYUbR518;
    float TbFxhS4QTd;
    float ZCMjTOp0q;
    float xSxA0s;
    scanf ("%f", &hrZpu1efM3oO);
    scanf ("%f", &b);
    scanf ("%f", &uoFEYUbR518);
    scanf ("%f", &TbFxhS4QTd);
    scanf ("%f", &ZCMjTOp0q);
    xSxA0s = find (hrZpu1efM3oO, b, uoFEYUbR518, TbFxhS4QTd, ZCMjTOp0q);
    if (xSxA0s == (794 - 794)) {
        printf ("Invalid input");
    }
    else {
        printf ("%.4f", xSxA0s);
    }
    return (685 - 685);
}

