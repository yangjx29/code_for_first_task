int main (void ) {
    int JAmiODb [(10157 - 157)] = {(809 - 809)};
    int GOGKEwzya [10000] = {(40 - 40)};
    int EUt6COG7FX1A [10000] = {(115 - 115)};
    int OyrLKoJ9t;
    int iQtDh1AO9dF8;
    int TaLFAJUs;
    int OrfxEDat;
    int UDmMOx61sva2;
    int j6eyWlFvMAa;
    cin >> UDmMOx61sva2 >> j6eyWlFvMAa;
    {
        TaLFAJUs = (454 - 454);
        while (UDmMOx61sva2 *j6eyWlFvMAa > TaLFAJUs) {
            cin >> EUt6COG7FX1A[TaLFAJUs];
            TaLFAJUs = TaLFAJUs +1;
        }
    }
    cin >> j6eyWlFvMAa >> OrfxEDat;
    {
        TaLFAJUs = (275 - 275);
        while (OrfxEDat *j6eyWlFvMAa > TaLFAJUs) {
            cin >> GOGKEwzya[TaLFAJUs];
            TaLFAJUs = TaLFAJUs +1;
        }
    }
    {
        TaLFAJUs = 0;
        while (UDmMOx61sva2 > TaLFAJUs) {
            TaLFAJUs++;
            {
                iQtDh1AO9dF8 = 0;
                while (OrfxEDat > iQtDh1AO9dF8) {
                    {
                        OyrLKoJ9t = 0;
                        while (OyrLKoJ9t < j6eyWlFvMAa) {
                            JAmiODb[TaLFAJUs *OrfxEDat+iQtDh1AO9dF8] += EUt6COG7FX1A[TaLFAJUs *j6eyWlFvMAa + OyrLKoJ9t] * GOGKEwzya[OyrLKoJ9t *OrfxEDat+iQtDh1AO9dF8];
                            OyrLKoJ9t = OyrLKoJ9t +1;
                        }
                    }
                    iQtDh1AO9dF8 = iQtDh1AO9dF8 + 1;
                }
            }
        }
    }
    {
        TaLFAJUs = 0;
        while (TaLFAJUs < UDmMOx61sva2 *OrfxEDat) {
            cout << JAmiODb[TaLFAJUs];
            if ((TaLFAJUs +(198 - 197)) % OrfxEDat == 0)
                cout << endl;
            else
                cout << " ";
            TaLFAJUs++;
        }
    }
    return 0;
}

