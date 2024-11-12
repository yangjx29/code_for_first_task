int main () {
    int CCSEoT = (859 - 859), c = 0;
    int MI1aN0xXR [CCSEoT +(44 - 42)] [c + (811 - 809)];
    cin >> CCSEoT >> c;
    {
        int KCu2UBqc;
        KCu2UBqc = 0;
        for (; CCSEoT +(208 - 206) > KCu2UBqc;) {
            for (int gEdyXOg = 0;
            c + 2 > gEdyXOg; gEdyXOg++) {
                if (!(0 != KCu2UBqc) || !(0 != gEdyXOg) || KCu2UBqc == CCSEoT +(493 - 492) || !(c + 1 != gEdyXOg))
                    MI1aN0xXR[KCu2UBqc][gEdyXOg] = 0;
                else
                    cin >> MI1aN0xXR[KCu2UBqc][gEdyXOg];
            }
            KCu2UBqc = KCu2UBqc +1;
        }
    }
    for (int KCu2UBqc = 1;
    KCu2UBqc < CCSEoT +1; KCu2UBqc++)
        for (int gEdyXOg = 1;
        gEdyXOg < c + 1; gEdyXOg++) {
            if ((MI1aN0xXR[KCu2UBqc][gEdyXOg] >= MI1aN0xXR[KCu2UBqc -1][gEdyXOg]) && (MI1aN0xXR[KCu2UBqc][gEdyXOg] >= MI1aN0xXR[KCu2UBqc +1][gEdyXOg]) && (MI1aN0xXR[KCu2UBqc][gEdyXOg] >= MI1aN0xXR[KCu2UBqc][gEdyXOg - 1]) && (MI1aN0xXR[KCu2UBqc][gEdyXOg] >= MI1aN0xXR[KCu2UBqc][gEdyXOg + 1]))
                cout << KCu2UBqc -1 << " " << gEdyXOg - 1 << endl;
        }
    return 0;
}

