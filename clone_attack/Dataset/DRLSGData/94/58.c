int main () {
    int YKYgecSCx [555];
    int q3pK5XsUlGvo [555];
    int VFYhHPenx;
    int rOh1le36ct2;
    int yzQ8UvD;
    int zveHI703a;
    int ThuSKYgUibt;
    int WZjGPY;
    int yBzPutlCWyjr;
    int esbgIRq576;
    VFYhHPenx = 0;
    scanf ("%d", &rOh1le36ct2);
    {
        zveHI703a = 0;
        while (rOh1le36ct2 > zveHI703a) {
            scanf ("%d", &YKYgecSCx[zveHI703a]);
            if (YKYgecSCx[zveHI703a] % 2 != 0)
                q3pK5XsUlGvo[zveHI703a] = YKYgecSCx[zveHI703a];
            else
                q3pK5XsUlGvo[zveHI703a] = 0;
            zveHI703a = zveHI703a + 1;
        }
    }
    for (ThuSKYgUibt = 0; rOh1le36ct2 > ThuSKYgUibt; ThuSKYgUibt = ThuSKYgUibt +1) {
        esbgIRq576 = 0;
        for (WZjGPY = rOh1le36ct2 - 1; ThuSKYgUibt < WZjGPY; WZjGPY = WZjGPY -1) {
            if (q3pK5XsUlGvo[WZjGPY -1] < q3pK5XsUlGvo[WZjGPY]) {
                esbgIRq576 = q3pK5XsUlGvo[WZjGPY -1];
                q3pK5XsUlGvo[WZjGPY -1] = q3pK5XsUlGvo[WZjGPY];
                q3pK5XsUlGvo[WZjGPY] = esbgIRq576;
            }
        }
    }
    {
        yBzPutlCWyjr = rOh1le36ct2;
        while (0 <= yBzPutlCWyjr) {
            if (q3pK5XsUlGvo[yBzPutlCWyjr] > 0) {
                if (VFYhHPenx == 1) {
                }
                printf ("%d", q3pK5XsUlGvo[yBzPutlCWyjr]);
                VFYhHPenx = 1;
            }
            yBzPutlCWyjr = yBzPutlCWyjr - 1;
        }
    }
    return 0;
}

