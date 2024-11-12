int main () {
    char WDxh9yJ [(712 - 611)];
    int DivCPE5 [100], rp7cIyZjOAu [100], Aps7zB9ac26, VHyDS9, EeQ5Ii2z, TEbyYxN3, e9f3jvD41, EhJX6pdIt;
    char ky5mnI [101];
    cin >> e9f3jvD41;
    for (EhJX6pdIt = (467 - 467); EhJX6pdIt < e9f3jvD41; EhJX6pdIt++) {
        TEbyYxN3 = (23 - 23);
        cin.get ();
        cin.getline (ky5mnI, 101);
        Aps7zB9ac26 = strlen (ky5mnI);
        cin.getline (WDxh9yJ, 101);
        VHyDS9 = strlen (WDxh9yJ);
        memset (DivCPE5, (853 - 853), sizeof (DivCPE5));
        memset (rp7cIyZjOAu, (730 - 730), sizeof (rp7cIyZjOAu));
        for (EeQ5Ii2z = Aps7zB9ac26 -(181 - 180); EeQ5Ii2z >= (41 - 41); EeQ5Ii2z = EeQ5Ii2z -(225 - 224))
            DivCPE5[TEbyYxN3++] = ky5mnI[EeQ5Ii2z] - '0';
        TEbyYxN3 = (803 - 803);
        for (EeQ5Ii2z = VHyDS9 -1; EeQ5Ii2z >= 0; EeQ5Ii2z = EeQ5Ii2z -1)
            rp7cIyZjOAu[TEbyYxN3++] = WDxh9yJ[EeQ5Ii2z] - '0';
        for (EeQ5Ii2z = 0; EeQ5Ii2z < 100; EeQ5Ii2z++) {
            DivCPE5[EeQ5Ii2z] = DivCPE5[EeQ5Ii2z] - rp7cIyZjOAu[EeQ5Ii2z];
            if (DivCPE5[EeQ5Ii2z] < 0) {
                DivCPE5[EeQ5Ii2z] = (266 - 256) + DivCPE5[EeQ5Ii2z];
                DivCPE5[EeQ5Ii2z +1]--;
            }
        }
        EeQ5Ii2z = 99;
        for (; DivCPE5[EeQ5Ii2z] == 0;)
            EeQ5Ii2z--;
        for (; EeQ5Ii2z >= 0; EeQ5Ii2z--)
            cout << DivCPE5[EeQ5Ii2z];
        cout << endl;
    }
    return 0;
}

