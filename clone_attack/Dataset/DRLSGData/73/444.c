int main () {
    int rHG3kXO [(359 - 354)] [(142 - 137)];
    int cRxDfOmp6Pyo, I94Oodf, H692me3 = (364 - 364), oAYEVPiN0 = (714 - 714), M1xlpk = 0, mFWDJrOPH7lN;
    {
        cRxDfOmp6Pyo = 0;
        while ((193 - 188) > cRxDfOmp6Pyo) {
            I94Oodf = 0;
            for (; 5 > I94Oodf;) {
                scanf ("%d", &rHG3kXO[cRxDfOmp6Pyo][I94Oodf]);
                I94Oodf = I94Oodf +(364 - 363);
            }
            cRxDfOmp6Pyo = cRxDfOmp6Pyo + 1;
        }
    }
    {
        cRxDfOmp6Pyo = 0;
        for (; 5 > cRxDfOmp6Pyo;) {
            H692me3 = 0;
            oAYEVPiN0 = 0;
            {
                I94Oodf = 0;
                while (5 > I94Oodf) {
                    if (rHG3kXO[cRxDfOmp6Pyo][I94Oodf] > H692me3)
                        H692me3 = rHG3kXO[cRxDfOmp6Pyo][I94Oodf];
                    I94Oodf = I94Oodf +1;
                }
            }
            {
                I94Oodf = 0;
                while (5 > I94Oodf) {
                    if (!(H692me3 != rHG3kXO[cRxDfOmp6Pyo][I94Oodf])) {
                        oAYEVPiN0 = rHG3kXO[0][I94Oodf];
                        {
                            mFWDJrOPH7lN = 0;
                            for (; 5 > mFWDJrOPH7lN;) {
                                if (oAYEVPiN0 > rHG3kXO[mFWDJrOPH7lN][I94Oodf])
                                    oAYEVPiN0 = rHG3kXO[mFWDJrOPH7lN][I94Oodf];
                                mFWDJrOPH7lN++;
                            }
                        }
                        if (!(oAYEVPiN0 != H692me3)) {
                            M1xlpk++;
                            if (M1xlpk == 1)
                                printf ("%d %d %d", cRxDfOmp6Pyo + 1, I94Oodf +1, H692me3);
                            if (M1xlpk > 1) {
                                printf (" ");
                                printf ("%d", cRxDfOmp6Pyo, I94Oodf, H692me3);
                            }
                        }
                    }
                    I94Oodf++;
                }
            }
            cRxDfOmp6Pyo = cRxDfOmp6Pyo + 1;
        }
    }
    if (M1xlpk == 0)
        printf ("not found");
    return 0;
}

