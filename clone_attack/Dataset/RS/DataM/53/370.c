int main () {
    int i;
    int Pk6CVUnbvmj;
    int pO7rSz;
    int m;
    int JRLvlsi4C;
    float Dv80g2Zp;
    float oFLolWpYwj0 [1000];
    Dv80g2Zp = 0.1;
    scanf ("%d", &JRLvlsi4C);
    {
        i = 0;
        while (JRLvlsi4C > i) {
            scanf ("%f", &oFLolWpYwj0[i]);
            i = i + 1;
        };
    }
    {
        Pk6CVUnbvmj = 0;
        while (Pk6CVUnbvmj < JRLvlsi4C) {
            {
                i = Pk6CVUnbvmj +1;
                while (i < JRLvlsi4C) {
                    if (oFLolWpYwj0[Pk6CVUnbvmj] == oFLolWpYwj0[i])
                        oFLolWpYwj0[i] = Dv80g2Zp;
                    i++;
                };
            }
            Pk6CVUnbvmj = Pk6CVUnbvmj +1;
        };
    }
    printf ("%g", oFLolWpYwj0[0]);
    {
        i = 1;
        while (i < JRLvlsi4C) {
            if (oFLolWpYwj0[i] != Dv80g2Zp)
                printf (",%g", oFLolWpYwj0[i]);
            i++;
        };
    };
}

