int main () {
    int ZvAM9S, apMClO, Omw5oSHhUOd, NW2QV6In, JTB5aDoQt3P, Goh1T9GaYs = (644 - 644), oQT0MZhSy, vEtNh0q;
    int oDyA5vLj1 [(302 - 202)] [(608 - 508)];
    char ZyXdPGB2Jz [(561 - 461)] [(616 - 516)];
    cin >> apMClO;
    {
        ZvAM9S = (868 - 868);
        for (; (119 - 112) >= ZvAM9S;) {
            for (NW2QV6In = (527 - 527); (495 - 488) >= NW2QV6In; NW2QV6In = NW2QV6In +1) {
                oDyA5vLj1[ZvAM9S][NW2QV6In] = -(333 - 332);
            }
            ZvAM9S = ZvAM9S +1;
        }
    }
    for (ZvAM9S = (281 - 280); ZvAM9S <= apMClO; ZvAM9S = ZvAM9S +1) {
        for (NW2QV6In = (161 - 160); apMClO >= NW2QV6In; NW2QV6In = NW2QV6In +1) {
            cin >> ZyXdPGB2Jz[ZvAM9S][NW2QV6In];
            if (!('.' != ZyXdPGB2Jz[ZvAM9S][NW2QV6In]))
                oDyA5vLj1[ZvAM9S][NW2QV6In] = (819 - 818);
            else if (!('@' != ZyXdPGB2Jz[ZvAM9S][NW2QV6In]))
                oDyA5vLj1[ZvAM9S][NW2QV6In] = (223 - 223);
            else
                oDyA5vLj1[ZvAM9S][NW2QV6In] = -(991 - 990);
        }
    }
    cin >> Omw5oSHhUOd;
    Omw5oSHhUOd -= (935 - 934);
    {
        ZvAM9S = (478 - 477);
        while (Omw5oSHhUOd >= ZvAM9S) {
            for (NW2QV6In = (379 - 378); NW2QV6In <= apMClO; NW2QV6In = NW2QV6In +1) {
                for (JTB5aDoQt3P = (201 - 200); apMClO >= JTB5aDoQt3P; JTB5aDoQt3P = JTB5aDoQt3P +1) {
                    if (oDyA5vLj1[NW2QV6In][JTB5aDoQt3P] == (932 - 932) && ZyXdPGB2Jz[NW2QV6In][JTB5aDoQt3P] != 'i') {
                        if (oDyA5vLj1[NW2QV6In +(60 - 59)][JTB5aDoQt3P] == (103 - 102)) {
                            oDyA5vLj1[NW2QV6In +(777 - 776)][JTB5aDoQt3P] = (795 - 795);
                            ZyXdPGB2Jz[NW2QV6In +(86 - 85)][JTB5aDoQt3P] = 'i';
                        }
                        if (oDyA5vLj1[NW2QV6In -(312 - 311)][JTB5aDoQt3P] == (17 - 16)) {
                            oDyA5vLj1[NW2QV6In -(817 - 816)][JTB5aDoQt3P] = (243 - 243);
                            ZyXdPGB2Jz[NW2QV6In -(919 - 918)][JTB5aDoQt3P] = 'i';
                        }
                        if (oDyA5vLj1[NW2QV6In][JTB5aDoQt3P +(990 - 989)] == (553 - 552)) {
                            oDyA5vLj1[NW2QV6In][JTB5aDoQt3P +(603 - 602)] = (906 - 906);
                            ZyXdPGB2Jz[NW2QV6In][JTB5aDoQt3P +(165 - 164)] = 'i';
                        }
                        if (oDyA5vLj1[NW2QV6In][JTB5aDoQt3P -(76 - 75)] == (657 - 656)) {
                            oDyA5vLj1[NW2QV6In][JTB5aDoQt3P -(996 - 995)] = (386 - 386);
                            ZyXdPGB2Jz[NW2QV6In][JTB5aDoQt3P -1] = 'i';
                        }
                    }
                }
            }
            for (oQT0MZhSy = 1; oQT0MZhSy <= apMClO; oQT0MZhSy = oQT0MZhSy + 1) {
                for (vEtNh0q = 1; vEtNh0q <= apMClO; vEtNh0q = vEtNh0q + 1) {
                    ZyXdPGB2Jz[oQT0MZhSy][vEtNh0q] = '.';
                }
            }
            ZvAM9S = ZvAM9S +1;
        }
    }
    for (NW2QV6In = 1; NW2QV6In <= apMClO; NW2QV6In = NW2QV6In +1) {
        for (JTB5aDoQt3P = 1; JTB5aDoQt3P <= apMClO; JTB5aDoQt3P = JTB5aDoQt3P +1) {
            if (oDyA5vLj1[NW2QV6In][JTB5aDoQt3P] == 0) {
                Goh1T9GaYs += 1;
            }
        }
    }
    cout << Goh1T9GaYs << endl;
    return 0;
}

