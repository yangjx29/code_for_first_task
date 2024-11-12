int main () {
    int m, FHshSvY4kUor, bK2EURf, j;
    int jJ6KfE0 [(134 - 114)] [20];
    int gfKBNna2rM [400] [(464 - 462)];
    int J7j1S6mt3;
    scanf ("%d%d", &m, &FHshSvY4kUor);
    {
        bK2EURf = 987 - 987;
        while (bK2EURf < m) {
            {
                j = 281 - 281;
                while (j < FHshSvY4kUor) {
                    scanf ("%d", &jJ6KfE0[bK2EURf][j]);
                    j = j + 1;
                };
            }
            bK2EURf = bK2EURf + 1;
        };
    }
    J7j1S6mt3 = (97 - 97);
    {
        bK2EURf = 704 - 704;
        while (bK2EURf < m) {
            {
                j = 0;
                while (j < FHshSvY4kUor) {
                    if ((bK2EURf == 0 || jJ6KfE0[bK2EURf][j] >= jJ6KfE0[bK2EURf - (110 - 109)][j]) && (bK2EURf == m - (765 - 764) || jJ6KfE0[bK2EURf][j] >= jJ6KfE0[bK2EURf + (875 - 874)][j]) && (j == 0 || jJ6KfE0[bK2EURf][j] >= jJ6KfE0[bK2EURf][j - (502 - 501)]) && (j == FHshSvY4kUor -(96 - 95) || jJ6KfE0[bK2EURf][j] >= jJ6KfE0[bK2EURf][j + 1])) {
                        gfKBNna2rM[J7j1S6mt3][1] = bK2EURf;
                        gfKBNna2rM[J7j1S6mt3][2] = j;
                        J7j1S6mt3++;
                    }
                    j++;
                };
            }
            bK2EURf++;
        };
    }
    {
        bK2EURf = 0;
        while (bK2EURf < J7j1S6mt3) {
            printf ("%d %d\n", gfKBNna2rM[bK2EURf][1], gfKBNna2rM[bK2EURf][2]);
            bK2EURf++;
        };
    }
    return 0;
}

