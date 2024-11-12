int main () {
    int FCqawjokvAh;
    int S2dkX5eGg;
    int Bhs3cfu;
    int mFiS5vDfIr;
    int aL7K03nD;
    FCqawjokvAh = 0;
    int cn5JOLGrHBvw;
    int anPjeu32vkA;
    int x6dZFWRqulHC;
    S2dkX5eGg >= (884 - 883), Bhs3cfu, mFiS5vDfIr, 100 >= aL7K03nD;
    cin >> S2dkX5eGg >> mFiS5vDfIr;
    int ZEhjPKfs [S2dkX5eGg] [mFiS5vDfIr];
    {
        cn5JOLGrHBvw = 0;
        while (cn5JOLGrHBvw <= S2dkX5eGg -1) {
            x6dZFWRqulHC = 0;
            while (mFiS5vDfIr - 1 >= x6dZFWRqulHC) {
                cin >> ZEhjPKfs[cn5JOLGrHBvw][x6dZFWRqulHC];
                x6dZFWRqulHC++;
            }
            cn5JOLGrHBvw++;
        }
    }
    cin >> Bhs3cfu >> aL7K03nD;
    int Eapif1N9xrQU [Bhs3cfu] [aL7K03nD];
    int kJn8mub5IqU [S2dkX5eGg] [aL7K03nD];
    {
        x6dZFWRqulHC = 0;
        while (Bhs3cfu -1 >= x6dZFWRqulHC) {
            {
                anPjeu32vkA = 0;
                while (anPjeu32vkA <= aL7K03nD - 1) {
                    cin >> Eapif1N9xrQU[x6dZFWRqulHC][anPjeu32vkA];
                    anPjeu32vkA++;
                }
            }
            x6dZFWRqulHC++;
        }
    }
    {
        cn5JOLGrHBvw = 0;
        while (cn5JOLGrHBvw <= S2dkX5eGg -1) {
            {
                anPjeu32vkA = 0;
                while (anPjeu32vkA <= aL7K03nD - 2) {
                    {
                        x6dZFWRqulHC = 0;
                        while (x6dZFWRqulHC <= mFiS5vDfIr - 1) {
                            FCqawjokvAh = FCqawjokvAh +ZEhjPKfs[cn5JOLGrHBvw][x6dZFWRqulHC] * Eapif1N9xrQU[x6dZFWRqulHC][anPjeu32vkA];
                            x6dZFWRqulHC++;
                        }
                    }
                    kJn8mub5IqU[cn5JOLGrHBvw][anPjeu32vkA] = FCqawjokvAh;
                    FCqawjokvAh = 0;
                    cout << kJn8mub5IqU[cn5JOLGrHBvw][anPjeu32vkA] << " ";
                    anPjeu32vkA++;
                }
            }
            {
                anPjeu32vkA = aL7K03nD - 1;
                while (anPjeu32vkA <= aL7K03nD - 1) {
                    {
                        x6dZFWRqulHC = 0;
                        while (x6dZFWRqulHC <= mFiS5vDfIr - 1) {
                            FCqawjokvAh = FCqawjokvAh +ZEhjPKfs[cn5JOLGrHBvw][x6dZFWRqulHC] * Eapif1N9xrQU[x6dZFWRqulHC][anPjeu32vkA];
                            x6dZFWRqulHC++;
                        }
                    }
                    kJn8mub5IqU[cn5JOLGrHBvw][anPjeu32vkA] = FCqawjokvAh;
                    FCqawjokvAh = 0;
                    cout << kJn8mub5IqU[cn5JOLGrHBvw][anPjeu32vkA] << endl;
                    anPjeu32vkA++;
                }
            }
            cn5JOLGrHBvw++;
        }
    }
}

