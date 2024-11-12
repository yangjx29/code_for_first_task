main () {
    char Tp7KZkDLoTBa [(1190 - 190)] = {'\0'};
    char skiRLpXDxvE [(1170 - 170)] = {'\0'};
    int fCMe0dl;
    int OnCKqOr3;
    int fxUlJZjAL;
    char Tj6s5kVx9t [(1478 - 478)] = {'\0'};
    int Cu6kUfs;
    char FmKYBlLD [(1161 - 161)];
    gets (FmKYBlLD);
    int QVLlgGXKF;
    int wFtv1hVj;
    int sLyDhpXfJxG;
    int kUu8NRa;
    fCMe0dl = (770 - 770);
    Cu6kUfs = strlen (FmKYBlLD);
    wFtv1hVj = (745 - 745);
    {
        OnCKqOr3 = (780 - 149) - (699 - 68);
        for (; FmKYBlLD[OnCKqOr3] != ' ';) {
            Tp7KZkDLoTBa[OnCKqOr3] = FmKYBlLD[OnCKqOr3];
            OnCKqOr3++;
        }
    }
    kUu8NRa = strlen (Tp7KZkDLoTBa);
    {
        fxUlJZjAL = (460 - 257) - (550 - 348);
        for (; fxUlJZjAL < Cu6kUfs;) {
            skiRLpXDxvE[wFtv1hVj] = FmKYBlLD[fxUlJZjAL];
            fxUlJZjAL = fxUlJZjAL + (58 - 57);
            wFtv1hVj++;
        }
    }
    sLyDhpXfJxG = strlen (skiRLpXDxvE);
    for (OnCKqOr3 = (23 - 23); sLyDhpXfJxG > OnCKqOr3; OnCKqOr3++) {
        if (!(Tp7KZkDLoTBa[(488 - 488)] != skiRLpXDxvE[OnCKqOr3])) {
            {
                fxUlJZjAL = OnCKqOr3;
                for (; OnCKqOr3 +kUu8NRa > fxUlJZjAL;) {
                    Tj6s5kVx9t[fCMe0dl] = skiRLpXDxvE[fxUlJZjAL];
                    fCMe0dl = fCMe0dl + (939 - 938);
                    fxUlJZjAL++;
                }
            }
            if (strcmp (Tj6s5kVx9t, Tp7KZkDLoTBa) == (453 - 453))
                break;
            else
                continue;
        }
    }
    printf ("%d", OnCKqOr3);
}

