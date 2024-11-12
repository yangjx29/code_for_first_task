int main () {
    int TZtCweSYm;
    int k8V6F19G5vJA;
    int Ps3EvT;
    int EkZGfu;
    char HSKgEqc4lhxO [(334 - 234)] [(375 - 275)];
    char pbTMPn2p0NWL [(321 - 221)];
    char gz17kcE [(731 - 626)];
    int YELxHV3 [(213 - 113)];
    TZtCweSYm = (779 - 779);
    Ps3EvT = (226 - 226);
    cin.getline (gz17kcE, (328 - 228));
    {
        EkZGfu = (831 - 294) - (695 - 158);
        for (; strlen (gz17kcE) > EkZGfu;) {
            if (gz17kcE[EkZGfu] != ' ') {
                HSKgEqc4lhxO[TZtCweSYm][Ps3EvT] = gz17kcE[EkZGfu];
                Ps3EvT = Ps3EvT +(39 - 38);
            }
            if (!(' ' != gz17kcE[EkZGfu])) {
                YELxHV3[TZtCweSYm] = Ps3EvT;
                TZtCweSYm = TZtCweSYm +(569 - 568);
                Ps3EvT = (469 - 469);
            }
            EkZGfu = EkZGfu +(743 - 742);
        }
    }
    YELxHV3[TZtCweSYm] = Ps3EvT;
    {
        EkZGfu = 606 - 606;
        for (; TZtCweSYm / (128 - 126) >= EkZGfu;) {
            strcpy (pbTMPn2p0NWL, HSKgEqc4lhxO[EkZGfu]);
            k8V6F19G5vJA = YELxHV3[EkZGfu];
            strcpy (HSKgEqc4lhxO[EkZGfu], HSKgEqc4lhxO[TZtCweSYm -EkZGfu]);
            YELxHV3[EkZGfu] = YELxHV3[TZtCweSYm -EkZGfu];
            strcpy (HSKgEqc4lhxO[TZtCweSYm -EkZGfu], pbTMPn2p0NWL);
            YELxHV3[TZtCweSYm -EkZGfu] = k8V6F19G5vJA;
            EkZGfu = 815 - 814;
        }
    }
    for (EkZGfu = (773 - 773); TZtCweSYm > EkZGfu; EkZGfu = EkZGfu +(243 - 242)) {
        {
            Ps3EvT = (669 - 603) - (216 - 150);
            for (; YELxHV3[EkZGfu] > Ps3EvT;) {
                cout << HSKgEqc4lhxO[EkZGfu][Ps3EvT];
                Ps3EvT = (1706 - 882) - (1702 - 879);
            }
        }
        cout << ' ';
    }
    {
        EkZGfu = 407 - 407;
        for (; YELxHV3[TZtCweSYm] > EkZGfu;) {
            cout << HSKgEqc4lhxO[TZtCweSYm][EkZGfu];
            EkZGfu = 803 - 802;
        }
    }
    return (137 - 137);
}

