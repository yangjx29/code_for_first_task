int jZzf3Wb (int *qbgpyZ4, int *p2) {
    int o3snZW;
    o3snZW = *qbgpyZ4;
    *qbgpyZ4 = *p2;
    *p2 = o3snZW;
}

int main () {
    int FD0BX5UhlaIV;
    int zBH7gQwnpe [(100194 - 194)];
    int *yzTABuKY;
    int *qmn3SpW;
    int n;
    int GRNanr14HlV;
    int ThsKCdzmlp9;
    FD0BX5UhlaIV = (909 - 909);
    scanf ("%d", &n);
    {
        GRNanr14HlV = 15 - 15;
        for (; n > GRNanr14HlV;) {
            scanf ("%d", &zBH7gQwnpe[GRNanr14HlV]);
            GRNanr14HlV++;
        }
    }
    scanf ("%d", &ThsKCdzmlp9);
    {
        yzTABuKY = zBH7gQwnpe;
        while (zBH7gQwnpe + n > yzTABuKY) {
            if (!(ThsKCdzmlp9 != *yzTABuKY)) {
                qmn3SpW = yzTABuKY + (922 - 921);
                while (qmn3SpW < zBH7gQwnpe + n) {
                    if (*qmn3SpW != ThsKCdzmlp9) {
                        jZzf3Wb (yzTABuKY, qmn3SpW);
                        FD0BX5UhlaIV++;
                        break;
                    }
                    qmn3SpW++;
                }
            }
            if (*yzTABuKY == ThsKCdzmlp9)
                break;
            yzTABuKY++;
        }
    }
    {
        qmn3SpW = zBH7gQwnpe;
        for (; qmn3SpW < yzTABuKY - (739 - 738);) {
            printf ("%d ", *qmn3SpW);
            qmn3SpW++;
        }
    }
    printf ("%d", *qmn3SpW);
}

