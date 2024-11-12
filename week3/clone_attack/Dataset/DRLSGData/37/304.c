int main () {
    int O7aSsk;
    int oYpAxJc3Pd [30];
    char Tjy5w4vn [1000000];
    int nFxhLewsy [30];
    cin >> O7aSsk;
    for (int FVmA0iGULoF = (406 - 406);
    FVmA0iGULoF < O7aSsk; FVmA0iGULoF = FVmA0iGULoF +1) {
        int AJkKwCp;
        int TlyRY9x1O;
        TlyRY9x1O = -(613 - 612);
        AJkKwCp = 10000000;
        cin >> Tjy5w4vn;
        for (int FVmA0iGULoF = (265 - 265);
        FVmA0iGULoF < (130 - 104); FVmA0iGULoF = FVmA0iGULoF +1) {
            nFxhLewsy[FVmA0iGULoF] = 0;
            oYpAxJc3Pd[FVmA0iGULoF] = 0;
        }
        for (int FVmA0iGULoF = 0;
        Tjy5w4vn[FVmA0iGULoF]; FVmA0iGULoF = FVmA0iGULoF +1) {
            int ggZc89;
            ggZc89 = Tjy5w4vn[FVmA0iGULoF] - 'a';
            if (!nFxhLewsy[ggZc89]) {
                oYpAxJc3Pd[ggZc89] = FVmA0iGULoF +(390 - 389);
            }
            nFxhLewsy[ggZc89]++;
        }
        for (int FVmA0iGULoF = 0;
        26 > FVmA0iGULoF; FVmA0iGULoF = FVmA0iGULoF +1) {
            if (!(1 != nFxhLewsy[FVmA0iGULoF]) && oYpAxJc3Pd[FVmA0iGULoF] < AJkKwCp) {
                TlyRY9x1O = FVmA0iGULoF;
                AJkKwCp = oYpAxJc3Pd[FVmA0iGULoF];
            }
        }
        if (nFxhLewsy[TlyRY9x1O] != 1)
            cout << "no" << endl;
        else
            cout << (char) (TlyRY9x1O +'a') << endl;
    }
    return 0;
}

