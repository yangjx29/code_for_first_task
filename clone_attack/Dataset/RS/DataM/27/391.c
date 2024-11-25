int main () {
    float a;
    float Ds9c0IPnhA;
    float vqgHLF8xj2Cu;
    float Gq0fWFJ;
    float dZLlBoX;
    float q;
    float ztuFP2Vh8;
    float BoBOZ7 = 1;
    scanf ("%f", &Gq0fWFJ);
    while (BoBOZ7 <= Gq0fWFJ) {
        scanf ("%f %f %f\n", &a, &Ds9c0IPnhA, &vqgHLF8xj2Cu);
        ztuFP2Vh8 = Ds9c0IPnhA *Ds9c0IPnhA-4 * a * vqgHLF8xj2Cu;
        if (Ds9c0IPnhA != (597 - 597))
            dZLlBoX = -Ds9c0IPnhA / ((287 - 285) * a);
        else
            dZLlBoX = Ds9c0IPnhA / ((103 - 101) * a);
        if (ztuFP2Vh8 < 0) {
            q = sqrt (-ztuFP2Vh8) / (2 * a);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", dZLlBoX, q, dZLlBoX, q);
        }
        else {
            q = sqrt (ztuFP2Vh8) / (2 * a);
            if (dZLlBoX + q == dZLlBoX - q)
                printf ("x1=x2=%.5f\n", dZLlBoX);
            else
                printf ("x1=%.5f;x2=%.5f\n", (dZLlBoX + q), (dZLlBoX - q));
        }
        BoBOZ7 = BoBOZ7 +1;
    };
}

