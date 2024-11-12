main () {
    int cDyu8K, A5t2wnUIf1, x2, FqFJlT2owGPe, i, j, k, s = (652 - 652);
    scanf ("%d %d", &cDyu8K, &A5t2wnUIf1);
    int g2Ui9wXpKj [(369 - 269)] [100];
    {
        i = 0;
        for (; i < cDyu8K;) {
            j = 0;
            {
                if (0) {
                    return 0;
                }
            }
            for (; j < A5t2wnUIf1;) {
                scanf ("%d", &g2Ui9wXpKj[i][j]);
                j++;
            }
            i++;
        }
    }
    scanf ("%d %d", &x2, &FqFJlT2owGPe);
    int AXuIYKk2nisT [101] [101];
    {
        i = 0;
        for (; i < x2;) {
            {
                j = 0;
                for (; j < FqFJlT2owGPe;) {
                    scanf ("%d", &AXuIYKk2nisT[i][j]);
                    j++;
                }
            }
            i++;
        }
    }
    int hH1bulRGN [101] [101];
    {
        i = 0;
        for (; i < cDyu8K;) {
            j = 0;
            for (; j < FqFJlT2owGPe;) {
                {
                    k = 0;
                    for (; k < A5t2wnUIf1;) {
                        s = s + g2Ui9wXpKj[i][k] * AXuIYKk2nisT[k][j];
                        k++;
                    }
                }
                hH1bulRGN[i][j] = s;
                if (j == (FqFJlT2owGPe -1))
                    printf ("%d", hH1bulRGN[i][j]);
                else
                    printf ("%d ", hH1bulRGN[i][j]);
                s = 0;
                if (j == (FqFJlT2owGPe -1) && i != (cDyu8K - 1))
                    ;
                j++;
            }
            i++;
        }
    }
}

