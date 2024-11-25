main () {
    for (;;) {
        int UZLeGl7;
        int fPDB4tnkw5bE [1050] = {0}, JQ8mAnIjk0W [1050] = {0};
        int NyDNWw, DRYy8P, ZkXgRH, KOxRMkHfdXp, RvTR5Co8zS7H, Odcb2C9LEu, oo5feHDLIk9g = 0, EAQ7sEaIZ4n = 0, qBcp13ax60 = 0;
        scanf ("%d", &UZLeGl7);
        if (!(0 != UZLeGl7))
            break;
        else {
            {
                NyDNWw = 1;
                for (; NyDNWw <= UZLeGl7;) {
                    scanf ("%d", &fPDB4tnkw5bE[NyDNWw]);
                    NyDNWw = NyDNWw +1;
                }
            }
            {
                NyDNWw = 1;
                for (; NyDNWw <= UZLeGl7;) {
                    scanf ("%d", &JQ8mAnIjk0W[NyDNWw]);
                    NyDNWw = NyDNWw +1;
                }
            }
            {
                NyDNWw = 1;
                for (; UZLeGl7 -1 >= NyDNWw;) {
                    for (DRYy8P = NyDNWw +1; DRYy8P <= UZLeGl7; DRYy8P++) {
                        if (fPDB4tnkw5bE[DRYy8P] < fPDB4tnkw5bE[NyDNWw])
                            KOxRMkHfdXp = fPDB4tnkw5bE[NyDNWw], fPDB4tnkw5bE[NyDNWw] = fPDB4tnkw5bE[DRYy8P], fPDB4tnkw5bE[DRYy8P] = KOxRMkHfdXp;
                        if (JQ8mAnIjk0W[NyDNWw] > JQ8mAnIjk0W[DRYy8P])
                            KOxRMkHfdXp = JQ8mAnIjk0W[NyDNWw], JQ8mAnIjk0W[NyDNWw] = JQ8mAnIjk0W[DRYy8P], JQ8mAnIjk0W[DRYy8P] = KOxRMkHfdXp;
                    }
                    NyDNWw = NyDNWw +1;
                }
            }
            for (NyDNWw = 1, RvTR5Co8zS7H = UZLeGl7, Odcb2C9LEu = UZLeGl7, DRYy8P = 1; NyDNWw <= Odcb2C9LEu;) {
                for (; RvTR5Co8zS7H >= DRYy8P;) {
                    if (JQ8mAnIjk0W[DRYy8P] < fPDB4tnkw5bE[NyDNWw]) {
                        NyDNWw = NyDNWw +1;
                        oo5feHDLIk9g = oo5feHDLIk9g + 1;
                        DRYy8P = DRYy8P +1;
                        break;
                    }
                    if (JQ8mAnIjk0W[DRYy8P] > fPDB4tnkw5bE[NyDNWw]) {
                        RvTR5Co8zS7H = RvTR5Co8zS7H -1;
                        NyDNWw = NyDNWw +1;
                        EAQ7sEaIZ4n = EAQ7sEaIZ4n +1;
                        break;
                    }
                    if (fPDB4tnkw5bE[NyDNWw] == JQ8mAnIjk0W[DRYy8P]) {
                        if (fPDB4tnkw5bE[Odcb2C9LEu] > JQ8mAnIjk0W[RvTR5Co8zS7H]) {
                            Odcb2C9LEu = Odcb2C9LEu -1, RvTR5Co8zS7H = RvTR5Co8zS7H -1;
                            oo5feHDLIk9g++;
                            break;
                        }
                        if (fPDB4tnkw5bE[Odcb2C9LEu] < JQ8mAnIjk0W[RvTR5Co8zS7H]) {
                            NyDNWw = NyDNWw +1;
                            RvTR5Co8zS7H = RvTR5Co8zS7H -1;
                            EAQ7sEaIZ4n = EAQ7sEaIZ4n +1;
                            break;
                        }
                        if (fPDB4tnkw5bE[Odcb2C9LEu] == JQ8mAnIjk0W[RvTR5Co8zS7H]) {
                            if (fPDB4tnkw5bE[NyDNWw] == JQ8mAnIjk0W[RvTR5Co8zS7H]) {
                                RvTR5Co8zS7H = RvTR5Co8zS7H -1;
                                NyDNWw = NyDNWw +1;
                                break;
                            }
                            if (fPDB4tnkw5bE[NyDNWw] < JQ8mAnIjk0W[RvTR5Co8zS7H]) {
                                NyDNWw = NyDNWw +1;
                                EAQ7sEaIZ4n++;
                                RvTR5Co8zS7H = RvTR5Co8zS7H -1;
                                break;
                            }
                        }
                    }
                }
            }
            qBcp13ax60 = 200 * oo5feHDLIk9g - 200 * EAQ7sEaIZ4n;
            printf ("%d\n", qBcp13ax60);
        }
    }
}

