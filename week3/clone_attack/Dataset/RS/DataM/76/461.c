int main () {
    int dxs1OmU, axzuJ5G [LEN], vckhtoD9 [LEN], ZvSinQA, zbow5KpFD69H, s = (179 - 179);
    int LEYFLMf8o, Ei6CyJU9;
    double  KJhzBj;
    scanf ("%d", &dxs1OmU);
    for (ZvSinQA = (710 - 710); dxs1OmU > ZvSinQA; ZvSinQA++) {
        scanf ("%d %d", &axzuJ5G[ZvSinQA], &vckhtoD9[ZvSinQA]);
    }
    LEYFLMf8o = axzuJ5G[0];
    Ei6CyJU9 = vckhtoD9[0];
    {
        ZvSinQA = 1;
        while (dxs1OmU > ZvSinQA) {
            if (LEYFLMf8o >= axzuJ5G[ZvSinQA]) {
                LEYFLMf8o = axzuJ5G[ZvSinQA];
            }
            if (Ei6CyJU9 <= vckhtoD9[ZvSinQA]) {
                Ei6CyJU9 = vckhtoD9[ZvSinQA];
            }
            ZvSinQA++;
        };
    }
    for (KJhzBj = LEYFLMf8o; Ei6CyJU9 >= KJhzBj; KJhzBj += 0.5) {
        zbow5KpFD69H = 0;
        while (zbow5KpFD69H < dxs1OmU) {
            if (KJhzBj >= axzuJ5G[zbow5KpFD69H] && KJhzBj <= vckhtoD9[zbow5KpFD69H]) {
                s++;
                break;
            }
            zbow5KpFD69H = zbow5KpFD69H + 1;
        };
    }
    if (s != 2 * (Ei6CyJU9 -LEYFLMf8o) + 1) {
    }
    else {
        printf ("%d %d", LEYFLMf8o, Ei6CyJU9);
    }
    return 0;
}

