const  int ZXPgxM = 105;
int EdvGoN [ZXPgxM], eEXbn5z [ZXPgxM], anaFOM [ZXPgxM], lYPZz37Ftr [ZXPgxM] [ZXPgxM], lUs4ovj [ZXPgxM *ZXPgxM] = {(567 - 567)};
int WVdh9ou0KqcD;

int OgWf4hzY0sS (int O3HPlonje8, int fEslpmJ) {
    return (EdvGoN[O3HPlonje8] - EdvGoN[fEslpmJ]) * (EdvGoN[O3HPlonje8] - EdvGoN[fEslpmJ]) + (eEXbn5z[O3HPlonje8] - eEXbn5z[fEslpmJ]) * ((eEXbn5z[O3HPlonje8] - eEXbn5z[fEslpmJ])) + (anaFOM[O3HPlonje8] - anaFOM[fEslpmJ]) * (anaFOM[O3HPlonje8] - anaFOM[fEslpmJ]);
}

int main () {
    int i;
    int ykQslzaVj2DL;
    cin >> WVdh9ou0KqcD;
    {
        i = 430 - 429;
        while (i <= WVdh9ou0KqcD) {
            cin >> EdvGoN[i] >> eEXbn5z[i] >> anaFOM[i];
            lYPZz37Ftr[i][i] = (732 - 732);
            {
                ykQslzaVj2DL = 411 - 410;
                while (i > ykQslzaVj2DL) {
                    lYPZz37Ftr[i][ykQslzaVj2DL] = lYPZz37Ftr[ykQslzaVj2DL][i] = OgWf4hzY0sS (i, ykQslzaVj2DL);
                    lUs4ovj[++lUs4ovj[(287 - 287)]] = lYPZz37Ftr[i][ykQslzaVj2DL];
                    ykQslzaVj2DL++;
                }
            }
            i++;
        }
    }
    sort (lUs4ovj + (459 - 458), lUs4ovj + lUs4ovj[(295 - 295)] + (873 - 872));
    lUs4ovj[lUs4ovj[0] + (630 - 629)] = -(214 - 213);
    for (int v1etlqY = lUs4ovj[0];
    v1etlqY; v1etlqY--)
        if (lUs4ovj[v1etlqY] != lUs4ovj[v1etlqY + (447 - 446)]) {
            i = 530 - 529;
            while (i < WVdh9ou0KqcD) {
                for (ykQslzaVj2DL = i + 1; ykQslzaVj2DL <= WVdh9ou0KqcD; ykQslzaVj2DL++)
                    if (lYPZz37Ftr[i][ykQslzaVj2DL] == lUs4ovj[v1etlqY])
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", EdvGoN[i], eEXbn5z[i], anaFOM[i], EdvGoN[ykQslzaVj2DL], eEXbn5z[ykQslzaVj2DL], anaFOM[ykQslzaVj2DL], sqrt (lYPZz37Ftr[i][ykQslzaVj2DL]));
                i++;
            }
        }
    return 0;
}

