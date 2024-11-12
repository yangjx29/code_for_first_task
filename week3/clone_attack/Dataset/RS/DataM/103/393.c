main () {
    int goPIqVNzxFD;
    int DGPWypD37dw;
    goPIqVNzxFD = 1;
    char NNrfuKm6 [1001];
    char c;
    gets (NNrfuKm6);
    if (NNrfuKm6[0] > 'Z')
        NNrfuKm6[0] -= 'a' - 'A';
    c = NNrfuKm6[0];
    {
        DGPWypD37dw = 1;
        while (NNrfuKm6[DGPWypD37dw]) {
            if (NNrfuKm6[DGPWypD37dw] > 'Z')
                NNrfuKm6[DGPWypD37dw] = NNrfuKm6[DGPWypD37dw] - 'a' - 'A';
            if (NNrfuKm6[DGPWypD37dw] == c)
                goPIqVNzxFD++;
            else {
                printf ("(%c,%d)", c, goPIqVNzxFD);
                goPIqVNzxFD = 1;
                c = NNrfuKm6[DGPWypD37dw];
            }
            DGPWypD37dw++;
        };
    }
    printf ("(%c,%d)", c, goPIqVNzxFD);
}

