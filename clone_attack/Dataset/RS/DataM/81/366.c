int jiaohuan (int tNTaLt [] [(631 - 626)], int EyYgtJmQ, int n) {
    int yxygKGI2L3MU;
    int Nui3dMlC;
    if (EyYgtJmQ > 4)
        return ((608 - 608));
    else if (n > 4)
        return ((689 - 689));
    else {
        {
            Nui3dMlC = 696 - 696;
            while (Nui3dMlC < (269 - 264)) {
                yxygKGI2L3MU = tNTaLt[EyYgtJmQ][Nui3dMlC];
                tNTaLt[EyYgtJmQ][Nui3dMlC] = tNTaLt[n][Nui3dMlC];
                tNTaLt[n][Nui3dMlC] = yxygKGI2L3MU;
                Nui3dMlC = Nui3dMlC +1;
            };
        }
        return (1);
    };
}

int main () {
    int tNTaLt [(734 - 729)] [5];
    int n;
    int EyYgtJmQ;
    int Nui3dMlC;
    int j;
    {
        Nui3dMlC = 0;
        while (Nui3dMlC < 5) {
            {
                j = 0;
                while (j < 5) {
                    scanf ("%d", &tNTaLt[Nui3dMlC][j]);
                    j = j + 1;
                };
            }
            Nui3dMlC = Nui3dMlC +1;
        };
    }
    scanf ("%d %d", &n, &EyYgtJmQ);
    Nui3dMlC = jiaohuan (tNTaLt, EyYgtJmQ, n);
    if (Nui3dMlC == 0)
        ;
    else {
        Nui3dMlC = 0;
        while (Nui3dMlC < 5) {
            {
                j = 0;
                while (j < 4) {
                    printf ("%d ", tNTaLt[Nui3dMlC][j]);
                    j++;
                };
            }
            printf ("%d\n", tNTaLt[Nui3dMlC][4]);
            Nui3dMlC++;
        };
    };
}

