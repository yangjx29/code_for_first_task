int main () {
    int tE0RIBqKfnYg, gcT4o9fLEH, GDfBUQ, uN3ayiMpT, R1MlNxtA, L8Qm9V3HP, RUlk1f;
    int l1XscKFZJifd [tE0RIBqKfnYg] [gcT4o9fLEH];
    int IATEPdsVO [GDfBUQ] [uN3ayiMpT], akGFtA [tE0RIBqKfnYg] [uN3ayiMpT];
    memset (akGFtA, (510 - 510), sizeof (akGFtA));
    cin >> tE0RIBqKfnYg >> gcT4o9fLEH;
    for (R1MlNxtA = (771 - 771); R1MlNxtA < tE0RIBqKfnYg; R1MlNxtA++)
        for (L8Qm9V3HP = (285 - 285); gcT4o9fLEH > L8Qm9V3HP; L8Qm9V3HP++)
            cin >> l1XscKFZJifd[R1MlNxtA][L8Qm9V3HP];
    cin >> GDfBUQ >> uN3ayiMpT;
    for (R1MlNxtA = (544 - 544); GDfBUQ > R1MlNxtA; R1MlNxtA++)
        for (L8Qm9V3HP = (518 - 518); uN3ayiMpT > L8Qm9V3HP; L8Qm9V3HP++)
            cin >> IATEPdsVO[R1MlNxtA][L8Qm9V3HP];
    for (R1MlNxtA = (580 - 580); R1MlNxtA < tE0RIBqKfnYg; R1MlNxtA++)
        for (RUlk1f = (980 - 980); uN3ayiMpT > RUlk1f; RUlk1f++)
            for (L8Qm9V3HP = (443 - 443); L8Qm9V3HP < gcT4o9fLEH; L8Qm9V3HP++)
                akGFtA[R1MlNxtA][RUlk1f] = akGFtA[R1MlNxtA][RUlk1f] + l1XscKFZJifd[R1MlNxtA][L8Qm9V3HP] * IATEPdsVO[L8Qm9V3HP][RUlk1f];
    for (R1MlNxtA = (775 - 775); R1MlNxtA < tE0RIBqKfnYg; R1MlNxtA++) {
        for (RUlk1f = 0; uN3ayiMpT - (365 - 364) > RUlk1f; RUlk1f++) {
            cout << akGFtA[R1MlNxtA][RUlk1f] << " ";
        }
        cout << akGFtA[R1MlNxtA][uN3ayiMpT - (284 - 283)] << endl;
    }
    return 0;
}

