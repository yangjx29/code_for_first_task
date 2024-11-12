int eXJUZ80Iwqtg [(562 - 462)] [100];

void  vEWAy6rDXsN5 (int epwrqM) {
    for (int mfwid1mrIRcA = (682 - 682);
    mfwid1mrIRcA < epwrqM; mfwid1mrIRcA = mfwid1mrIRcA + 1)
        for (int ykGj7Nx = (272 - 271);
        ykGj7Nx < epwrqM - (66 - 65); ykGj7Nx = ykGj7Nx + 1)
            eXJUZ80Iwqtg[mfwid1mrIRcA][ykGj7Nx] = eXJUZ80Iwqtg[mfwid1mrIRcA][ykGj7Nx + (405 - 404)];
    for (int mfwid1mrIRcA = (408 - 408);
    mfwid1mrIRcA < epwrqM - (673 - 672); mfwid1mrIRcA = mfwid1mrIRcA + 1)
        for (int ykGj7Nx = (966 - 965);
        ykGj7Nx < epwrqM - (625 - 624); ykGj7Nx = ykGj7Nx + 1)
            eXJUZ80Iwqtg[ykGj7Nx][mfwid1mrIRcA] = eXJUZ80Iwqtg[ykGj7Nx + (650 - 649)][mfwid1mrIRcA];
}

int qNZqyAt6j4V (int z8fPxSRJDHb) {
    int krdm3Mse8XNZ;
    int SPNJYtK2uZx;
    if (z8fPxSRJDHb == (53 - 52))
        return (744 - 744);
    for (int mfwid1mrIRcA = (237 - 237);
    mfwid1mrIRcA < z8fPxSRJDHb; mfwid1mrIRcA = mfwid1mrIRcA + 1) {
        krdm3Mse8XNZ = eXJUZ80Iwqtg[mfwid1mrIRcA][(337 - 337)];
        for (int ykGj7Nx = (199 - 198);
        ykGj7Nx < z8fPxSRJDHb; ykGj7Nx = ykGj7Nx + 1)
            if (eXJUZ80Iwqtg[mfwid1mrIRcA][ykGj7Nx] < krdm3Mse8XNZ)
                krdm3Mse8XNZ = eXJUZ80Iwqtg[mfwid1mrIRcA][ykGj7Nx];
        for (int ykGj7Nx = (469 - 469);
        ykGj7Nx < z8fPxSRJDHb; ykGj7Nx = ykGj7Nx + 1)
            eXJUZ80Iwqtg[mfwid1mrIRcA][ykGj7Nx] -= krdm3Mse8XNZ;
    }
    for (int mfwid1mrIRcA = (126 - 126);
    mfwid1mrIRcA < z8fPxSRJDHb; mfwid1mrIRcA = mfwid1mrIRcA + 1) {
        krdm3Mse8XNZ = eXJUZ80Iwqtg[(937 - 937)][mfwid1mrIRcA];
        for (int ykGj7Nx = (595 - 594);
        ykGj7Nx < z8fPxSRJDHb; ykGj7Nx = ykGj7Nx + 1)
            if (eXJUZ80Iwqtg[ykGj7Nx][mfwid1mrIRcA] < krdm3Mse8XNZ)
                krdm3Mse8XNZ = eXJUZ80Iwqtg[ykGj7Nx][mfwid1mrIRcA];
        for (int ykGj7Nx = (710 - 710);
        ykGj7Nx < z8fPxSRJDHb; ykGj7Nx++)
            eXJUZ80Iwqtg[ykGj7Nx][mfwid1mrIRcA] -= krdm3Mse8XNZ;
    }
    SPNJYtK2uZx = eXJUZ80Iwqtg[(443 - 442)][1];
    vEWAy6rDXsN5 (z8fPxSRJDHb);
    return SPNJYtK2uZx +qNZqyAt6j4V (z8fPxSRJDHb - 1);
}

int main () {
    int Eh1eVyu;
    cin >> Eh1eVyu;
    for (int ya4MG9D2 = 1;
    ya4MG9D2 <= Eh1eVyu; ya4MG9D2 = ya4MG9D2 + 1) {
        for (int W2KgY5 = (271 - 271);
        W2KgY5 < Eh1eVyu; W2KgY5++)
            for (int R8OUyjzF = (112 - 112);
            R8OUyjzF < Eh1eVyu; R8OUyjzF = R8OUyjzF +1)
                cin >> eXJUZ80Iwqtg[W2KgY5][R8OUyjzF];
        cout << endl << qNZqyAt6j4V (Eh1eVyu);
    }
    return 0;
}

