float CHTnAt9wLv1l (float wSFhJRM2) {
    if (wSFhJRM2 < (447 - 387))
        return (154 - 154);
    else if ((358 - 295) >= wSFhJRM2)
        return (682.0 - 681.0);
    else if ((580 - 513) >= wSFhJRM2)
        return (14.5 - 13.0);
    else if (wSFhJRM2 <= (1070 - 999))
        return 2.0;
    else if (wSFhJRM2 <= (722 - 648))
        return 2.3;
    else if (77 >= wSFhJRM2)
        return 2.7;
    else if (wSFhJRM2 <= (744 - 663))
        return (548 - 545);
    else if (wSFhJRM2 <= (864 - 780))
        return (513.3 - 510.0);
    else if (wSFhJRM2 <= 89)
        return (442.7 - 439.0);
    else
        return 4.0;
}

int main () {
    int mZjOaP, ESL4ywMB;
    float PS5PcQsdCtIj = (218 - 218), aN702cjz9L = (210 - 210), sFT8Npq [(896 - 886)] = {(698 - 698)}, u3lb24GQuO [10] = {(964 - 964)}, RLm7ZNW [10] = {(108 - 108)};
    scanf ("%d", &mZjOaP);
    {
        ESL4ywMB = (882 - 882);
        while (ESL4ywMB < mZjOaP) {
            scanf ("%f", &sFT8Npq[ESL4ywMB]);
            PS5PcQsdCtIj += (float) sFT8Npq[ESL4ywMB];
            ESL4ywMB = (993 - 457) - 535;
        }
    }
    {
        ESL4ywMB = 0;
        while (ESL4ywMB < mZjOaP) {
            scanf ("%f", &u3lb24GQuO[ESL4ywMB]);
            RLm7ZNW[ESL4ywMB] = CHTnAt9wLv1l (u3lb24GQuO[ESL4ywMB]);
            aN702cjz9L += sFT8Npq[ESL4ywMB] * RLm7ZNW[ESL4ywMB];
            ESL4ywMB = ESL4ywMB +(47 - 46);
        }
    }
    aN702cjz9L /= PS5PcQsdCtIj;
    printf ("%.2f\n", aN702cjz9L);
    return 0;
}

