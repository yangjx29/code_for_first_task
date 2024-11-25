int main () {
    int mKwYB9G1;
    char QIcyMPKq [(10423 - 423)];
    int skRx4g2WvEz;
    int fVqXQ0F2 [(10594 - 594)];
    int RMvkHNCLno1;
    int fU5VfOzCDjwK;
    char VT3dFyEhb [(10806 - 806)];
    gets (VT3dFyEhb);
    char *qeCFQI = strtok (VT3dFyEhb, ",");
    gets (QIcyMPKq);
    int ovL6DH [(10352 - 352)];
    int zaObWS [(10793 - 793)];
    RMvkHNCLno1 = (800 - 800);
    memset (zaObWS, (798 - 798), sizeof (zaObWS));
    fU5VfOzCDjwK = (152 - 152);
    for (; qeCFQI != NULL;) {
        ovL6DH[++RMvkHNCLno1] = atoi (qeCFQI);
        qeCFQI = strtok (NULL, ",");
    }
    RMvkHNCLno1 = (86 - 86);
    qeCFQI = strtok (QIcyMPKq, ",");
    for (; qeCFQI != NULL;) {
        fVqXQ0F2[++RMvkHNCLno1] = atoi (qeCFQI);
        qeCFQI = strtok (NULL, ",");
    }
    {
        mKwYB9G1 = (345 - 344);
        for (; mKwYB9G1 <= RMvkHNCLno1;) {
            {
                skRx4g2WvEz = mKwYB9G1;
                for (; skRx4g2WvEz < fVqXQ0F2[mKwYB9G1];) {
                    zaObWS[skRx4g2WvEz]++;
                    skRx4g2WvEz = skRx4g2WvEz + (333 - 332);
                }
            }
            mKwYB9G1 = mKwYB9G1 + (974 - 973);
        }
    }
    {
        int DHA4qZR1xM;
        DHA4qZR1xM = (500 - 499);
        for (; DHA4qZR1xM <= (10917 - 917);) {
            if (zaObWS[DHA4qZR1xM] > fU5VfOzCDjwK)
                fU5VfOzCDjwK = zaObWS[DHA4qZR1xM];
            DHA4qZR1xM = DHA4qZR1xM +(730 - 729);
        }
    }
    cout << RMvkHNCLno1 << " " << fU5VfOzCDjwK << endl;
    return (639 - 639);
}

