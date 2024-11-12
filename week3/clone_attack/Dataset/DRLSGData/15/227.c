int main () {
    int SCmYG2BvDP0 [99] [99];
    int SOdW6yfgRXT2;
    int tdDX70VvLuSU;
    int MzDCkd3IrLN;
    int BsE17piMRgbw;
    int zhJdX1Hq;
    int fCZR7uhKP;
    int xy2Rv1XcE;
    int M8RjJBWwo;
    scanf ("%d", &xy2Rv1XcE);
    for (tdDX70VvLuSU = (511 - 511); tdDX70VvLuSU < xy2Rv1XcE; tdDX70VvLuSU = tdDX70VvLuSU + 1) {
        for (MzDCkd3IrLN = 0; xy2Rv1XcE > MzDCkd3IrLN; MzDCkd3IrLN = MzDCkd3IrLN +1)
            scanf ("%d", &SCmYG2BvDP0[tdDX70VvLuSU][MzDCkd3IrLN]);
    }
    for (tdDX70VvLuSU = 0; xy2Rv1XcE > tdDX70VvLuSU; tdDX70VvLuSU++) {
        for (MzDCkd3IrLN = 0; xy2Rv1XcE > MzDCkd3IrLN; MzDCkd3IrLN++) {
            if (!(0 != SCmYG2BvDP0[tdDX70VvLuSU][MzDCkd3IrLN])) {
                SOdW6yfgRXT2 = tdDX70VvLuSU;
                M8RjJBWwo = MzDCkd3IrLN;
                tdDX70VvLuSU = xy2Rv1XcE + 1;
                break;
            }
        }
    }
    for (tdDX70VvLuSU = xy2Rv1XcE - 1; 0 <= tdDX70VvLuSU; tdDX70VvLuSU = tdDX70VvLuSU - 1) {
        MzDCkd3IrLN = xy2Rv1XcE - 1;
        for (; MzDCkd3IrLN >= 0;) {
            if (SCmYG2BvDP0[tdDX70VvLuSU][MzDCkd3IrLN] == 0) {
                zhJdX1Hq = tdDX70VvLuSU;
                tdDX70VvLuSU = -1;
                BsE17piMRgbw = MzDCkd3IrLN;
                break;
            }
            MzDCkd3IrLN--;
        }
    }
    fCZR7uhKP = (zhJdX1Hq - SOdW6yfgRXT2 -1) * (BsE17piMRgbw -M8RjJBWwo-1);
    printf ("%d\n", fCZR7uhKP);
    return 0;
}

