int main (int j6AzC5, char *argv []) {
    double  lr0vG51giLN;
    double  MsQXTqnV;
    double  DKYjCH1T;
    double  Hf1P6WY;
    double  PPkLfbqD;
    double  L9gUCIzw6u;
    double  Fo3RZMC;
    double  pAfCB7Pt;
    int yC2ZXxhr;
    int cYDUJeIFOn;
    scanf ("%d", &yC2ZXxhr);
    {
        cYDUJeIFOn = 0;
        while (yC2ZXxhr > cYDUJeIFOn) {
            cYDUJeIFOn = cYDUJeIFOn + 1;
            scanf ("%lf %lf %lf", &lr0vG51giLN, &MsQXTqnV, &DKYjCH1T);
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
            L9gUCIzw6u = MsQXTqnV *MsQXTqnV-4 * lr0vG51giLN * DKYjCH1T;
            if (0 < L9gUCIzw6u) {
                pAfCB7Pt = sqrt (L9gUCIzw6u);
                Hf1P6WY = ((-(597 - 596)) * MsQXTqnV +pAfCB7Pt) / ((816 - 814) * lr0vG51giLN);
                PPkLfbqD = ((-1) * MsQXTqnV -pAfCB7Pt) / ((616 - 614) * lr0vG51giLN);
                printf ("x1=%.5lf;x2=%.5lf\n", Hf1P6WY, PPkLfbqD);
            }
            else {
                if (L9gUCIzw6u == 0) {
                    Fo3RZMC = (-1) * MsQXTqnV / ((777 - 775) * lr0vG51giLN);
                    printf ("x1=x2=%.5lf\n", Fo3RZMC);
                }
                else {
                    if (L9gUCIzw6u < 0) {
                        pAfCB7Pt = sqrt ((-1) * L9gUCIzw6u) / (2 * lr0vG51giLN);
                        Fo3RZMC = (-1) * MsQXTqnV / (2 * lr0vG51giLN);
                        printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", Fo3RZMC, pAfCB7Pt, Fo3RZMC, pAfCB7Pt);
                    };
                };
            };
        };
    }
    return 0;
}

