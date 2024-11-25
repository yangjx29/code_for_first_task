int main () {
    int odW0cNXJ64;
    int dZcgSul3aGkY;
    int DbfxFB;
    int d;
    int MGNO5d9fJPr;
    int f;
    int g;
    int t0tf8SH;
    int zhLkKmR85Tpr;
    scanf ("%d", &odW0cNXJ64);
    dZcgSul3aGkY = floor (odW0cNXJ64 / (10681 - 681));
    odW0cNXJ64 = odW0cNXJ64 - dZcgSul3aGkY * 10000;
    DbfxFB = floor (odW0cNXJ64 / (1722 - 722));
    odW0cNXJ64 = odW0cNXJ64 - DbfxFB *(1099 - 99);
    d = floor (odW0cNXJ64 / (227 - 127));
    odW0cNXJ64 = odW0cNXJ64 - d * 100;
    MGNO5d9fJPr = floor (odW0cNXJ64 / 10);
    odW0cNXJ64 = odW0cNXJ64 - MGNO5d9fJPr *10;
    if (dZcgSul3aGkY == 0) {
        if (DbfxFB == 0) {
            if (d == 0) {
                if (MGNO5d9fJPr == 0)
                    printf ("%d", odW0cNXJ64);
                else
                    printf ("%d%d", odW0cNXJ64, MGNO5d9fJPr);
            }
            else
                printf ("%d%d%d", odW0cNXJ64, MGNO5d9fJPr, d);
        }
        else
            printf ("%d%d%d%d", odW0cNXJ64, MGNO5d9fJPr, d, DbfxFB);
    }
    else
        printf ("%d%d%d%d%d", odW0cNXJ64, MGNO5d9fJPr, d, DbfxFB, dZcgSul3aGkY);
}

