int main () {
    char O4CSK2TA [1000] [100];
    int mEkniyHc2uzP, l = (705 - 705), Gp09ebxf2XKN, WMaH1Xygvw [1000];
    scanf ("%d", &mEkniyHc2uzP);
    {
        Gp09ebxf2XKN = 0;
        while (mEkniyHc2uzP > Gp09ebxf2XKN) {
            scanf ("%s", O4CSK2TA[Gp09ebxf2XKN]);
            Gp09ebxf2XKN = Gp09ebxf2XKN +1;
        };
    }
    {
        Gp09ebxf2XKN = 0;
        while (mEkniyHc2uzP > Gp09ebxf2XKN) {
            WMaH1Xygvw[Gp09ebxf2XKN] = strlen (O4CSK2TA[Gp09ebxf2XKN]);
            Gp09ebxf2XKN = Gp09ebxf2XKN +1;
        };
    }
    {
        Gp09ebxf2XKN = 0;
        while (Gp09ebxf2XKN < mEkniyHc2uzP) {
            printf ("%s", O4CSK2TA[Gp09ebxf2XKN]);
            l = l + WMaH1Xygvw[Gp09ebxf2XKN] + 1;
            if (!(mEkniyHc2uzP - 1 == Gp09ebxf2XKN) && l + WMaH1Xygvw[Gp09ebxf2XKN +1] <= 80)
                ;
            else {
                l = 0;
            }
            Gp09ebxf2XKN = Gp09ebxf2XKN +1;
        };
    }
    return 0;
}

