int main () {
    int jyWIlZe, kH7XO6vw;
    int LlPcJLyg8X96 [(918 - 909)] [(323 - 314)] = {(439 - 439), (947 - 947)};
    cin >> jyWIlZe >> kH7XO6vw;
    LlPcJLyg8X96[4][4] = jyWIlZe;
    {
        int Gf51GoU = (392 - 391);
        while (kH7XO6vw >= Gf51GoU) {
            int HFszwiuH [(242 - 233)] [9] = {(246 - 246), (52 - 52)};
            {
                int seiohzyV = (98 - 98);
                while (9 > seiohzyV) {
                    {
                        int DFfJXgpYSP = (707 - 707);
                        while (9 > DFfJXgpYSP) {
                            if (LlPcJLyg8X96[seiohzyV][DFfJXgpYSP] != 0) {
                                HFszwiuH[seiohzyV][DFfJXgpYSP] += LlPcJLyg8X96[seiohzyV][DFfJXgpYSP];
                                HFszwiuH[seiohzyV - (101 - 100)][DFfJXgpYSP -(639 - 638)] += LlPcJLyg8X96[seiohzyV][DFfJXgpYSP];
                                HFszwiuH[seiohzyV - (365 - 364)][DFfJXgpYSP] += LlPcJLyg8X96[seiohzyV][DFfJXgpYSP];
                                HFszwiuH[seiohzyV - (116 - 115)][DFfJXgpYSP +1] += LlPcJLyg8X96[seiohzyV][DFfJXgpYSP];
                                HFszwiuH[seiohzyV][DFfJXgpYSP -1] += LlPcJLyg8X96[seiohzyV][DFfJXgpYSP];
                                HFszwiuH[seiohzyV][DFfJXgpYSP +1] += LlPcJLyg8X96[seiohzyV][DFfJXgpYSP];
                                HFszwiuH[seiohzyV + 1][DFfJXgpYSP -1] += LlPcJLyg8X96[seiohzyV][DFfJXgpYSP];
                                HFszwiuH[seiohzyV + 1][DFfJXgpYSP] += LlPcJLyg8X96[seiohzyV][DFfJXgpYSP];
                                HFszwiuH[seiohzyV + 1][DFfJXgpYSP +1] += LlPcJLyg8X96[seiohzyV][DFfJXgpYSP];
                            }
                            DFfJXgpYSP = DFfJXgpYSP +1;
                        };
                    }
                    seiohzyV++;
                };
            }
            {
                int seiohzyV = 0;
                while (seiohzyV < 9) {
                    {
                        int DFfJXgpYSP = 0;
                        while (DFfJXgpYSP < 9) {
                            LlPcJLyg8X96[seiohzyV][DFfJXgpYSP] += HFszwiuH[seiohzyV][DFfJXgpYSP];
                            DFfJXgpYSP = DFfJXgpYSP +1;
                        };
                    }
                    seiohzyV++;
                };
            }
            Gf51GoU = Gf51GoU +1;
        };
    }
    {
        int Gf51GoU = 0;
        while (Gf51GoU < 9) {
            cout << LlPcJLyg8X96[Gf51GoU][0];
            {
                int seiohzyV = 1;
                while (seiohzyV < 9) {
                    cout << " " << LlPcJLyg8X96[Gf51GoU][seiohzyV];
                    seiohzyV++;
                };
            }
            cout << endl;
            Gf51GoU++;
        };
    }
    return 0;
}

