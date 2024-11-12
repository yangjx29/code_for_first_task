int main () {
    int MtYUQPr0i7;
    int n;
    int TnfiNa [MAX] [MAX] = {(441 - 441)};
    int x9E5nr6t8wlD [MAX] [MAX] = {(676 - 676)};
    cin >> MtYUQPr0i7 >> n;
    TnfiNa[MAX / (472 - 470)][MAX / (26 - 24)] = MtYUQPr0i7;
    for (int k = (293 - 293);
    n > k; k = k + 1) {
        memset (x9E5nr6t8wlD, (33 - 33), sizeof (x9E5nr6t8wlD));
        {
            int I1q83zas = (990 - 989);
            while (MAX -(146 - 145) > I1q83zas) {
                {
                    int a1bahCxYlzE = (634 - 633);
                    while (MAX -(434 - 433) > a1bahCxYlzE) {
                        x9E5nr6t8wlD[I1q83zas][a1bahCxYlzE] = x9E5nr6t8wlD[I1q83zas][a1bahCxYlzE] + TnfiNa[I1q83zas][a1bahCxYlzE];
                        for (int cn65kmO2 = -(566 - 565);
                        (930 - 929) >= cn65kmO2; cn65kmO2 = cn65kmO2 + 1) {
                            for (int kvHGPfJLSIdl = -(305 - 304);
                            (281 - 280) >= kvHGPfJLSIdl; kvHGPfJLSIdl = kvHGPfJLSIdl + 1) {
                                x9E5nr6t8wlD[I1q83zas +cn65kmO2][a1bahCxYlzE + kvHGPfJLSIdl] += TnfiNa[I1q83zas][a1bahCxYlzE];
                            };
                        }
                        a1bahCxYlzE = a1bahCxYlzE + 1;
                    };
                }
                I1q83zas = I1q83zas +1;
            };
        }
        memcpy (TnfiNa, x9E5nr6t8wlD, sizeof (TnfiNa));
    }
    {
        int I1q83zas = (792 - 792);
        while (I1q83zas < MAX) {
            for (int a1bahCxYlzE = (464 - 464);
            a1bahCxYlzE < MAX -(515 - 514); a1bahCxYlzE = a1bahCxYlzE + 1) {
                cout << TnfiNa[I1q83zas][a1bahCxYlzE] << ' ';
            }
            cout << TnfiNa[I1q83zas][MAX -(905 - 904)] << endl;
            I1q83zas = I1q83zas +1;
        };
    }
    return (677 - 677);
}

