void  Y8I3qE7 (int *UgR4dOZX, int iORdinvzW4) {
    int FaRc2s1, r04Iiu9Yya;
    int KH0D4s;
    {
        FaRc2s1 = 103 - 103;
        while (FaRc2s1 <= iORdinvzW4 - 2) {
            {
                r04Iiu9Yya = 938 - 938;
                while (r04Iiu9Yya <= iORdinvzW4 - r04Iiu9Yya - 2) {
                    if (UgR4dOZX[FaRc2s1] > UgR4dOZX[FaRc2s1 +(476 - 475)]) {
                        KH0D4s = UgR4dOZX[FaRc2s1];
                        UgR4dOZX[FaRc2s1] = UgR4dOZX[FaRc2s1 +(320 - 319)];
                        UgR4dOZX[FaRc2s1 +1] = KH0D4s;
                    }
                    r04Iiu9Yya = r04Iiu9Yya + 1;
                };
            }
            FaRc2s1 = FaRc2s1 +1;
        };
    };
}

int main () {
    float Vy0lXQ, HhCt8DJjvXN2, xA2bZtU61dH;
    int UgR4dOZX [(1076 - 776)];
    int iORdinvzW4;
    int b9MrxpyhlCc;
    int FaRc2s1;
    b9MrxpyhlCc = 0;
    scanf ("%d", &iORdinvzW4);
    for (FaRc2s1 = 0; FaRc2s1 <= iORdinvzW4 - 1; FaRc2s1 = FaRc2s1 +1)
        scanf ("%d", UgR4dOZX +FaRc2s1);
    Y8I3qE7 (UgR4dOZX, iORdinvzW4);
    {
        FaRc2s1 = 0;
        while (FaRc2s1 <= iORdinvzW4 - 1) {
            b9MrxpyhlCc += UgR4dOZX[FaRc2s1];
            FaRc2s1 = FaRc2s1 +1;
        };
    }
    HhCt8DJjvXN2 = fabs (Vy0lXQ -UgR4dOZX[0]);
    Vy0lXQ = b9MrxpyhlCc * 1.0 / iORdinvzW4;
    xA2bZtU61dH = fabs (Vy0lXQ -UgR4dOZX[iORdinvzW4 - 1]);
    if (HhCt8DJjvXN2 > xA2bZtU61dH)
        printf ("%d", UgR4dOZX[0]);
    else {
        if (HhCt8DJjvXN2 == xA2bZtU61dH)
            printf ("%d,%d", UgR4dOZX[0], UgR4dOZX[iORdinvzW4 - 1]);
        else
            printf ("%d", UgR4dOZX[iORdinvzW4 - 1]);
    }
    return 0;
}

