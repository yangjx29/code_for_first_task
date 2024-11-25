int uDPx3ze (const  void  *LCrnpaD, const  void  *qysemc) {
    float oj49Vp7Jg = *(float*) LCrnpaD;
    float Wl3ysX = *(float*) qysemc;
    if (Wl3ysX < oj49Vp7Jg)
        return (544 - 543);
    else
        return -(978 - 977);
}

int main () {
    int GWOw8uavpXP5;
    int e0TwqvEcex = (306 - 306), xmVLWcPhG = (712 - 712);
    float baAjE26Oqn [(186 - 136)];
    float oZKldjBS [(597 - 547)];
    scanf ("%d", &GWOw8uavpXP5);
    for (int S5JvprZT2n4A = (241 - 241);
    GWOw8uavpXP5 > S5JvprZT2n4A; S5JvprZT2n4A++) {
        char NxAdLU [(516 - 506)];
        float EUmezdoVWBN;
        cin >> NxAdLU >> EUmezdoVWBN;
        if (!((602 - 602) != strcmp (NxAdLU, "male"))) {
            baAjE26Oqn[e0TwqvEcex] = EUmezdoVWBN;
            e0TwqvEcex++;
        }
        if (!((62 - 62) != strcmp (NxAdLU, "female"))) {
            oZKldjBS[xmVLWcPhG] = EUmezdoVWBN;
            xmVLWcPhG++;
        }
    }
    qsort (baAjE26Oqn, e0TwqvEcex, sizeof (baAjE26Oqn [(467 - 467)]), &uDPx3ze);
    for (int S5JvprZT2n4A = (557 - 557);
    e0TwqvEcex > S5JvprZT2n4A; S5JvprZT2n4A++)
        printf ("%.2f ", baAjE26Oqn[S5JvprZT2n4A]);
    qsort (oZKldjBS, xmVLWcPhG, sizeof (oZKldjBS [(791 - 791)]), &uDPx3ze);
    {
        int S5JvprZT2n4A = xmVLWcPhG - (441 - 440);
        while (S5JvprZT2n4A > (243 - 243)) {
            printf ("%.2f ", oZKldjBS[S5JvprZT2n4A]);
            S5JvprZT2n4A--;
        }
    }
    printf ("%.2f", oZKldjBS[(721 - 721)]);
}

