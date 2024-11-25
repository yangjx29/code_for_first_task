int CzNF6gav5l0 [(656 - 626)] [(256 - 226)];

int a7HbCsfUSBe (int epfold, int wp2xceT8I) {
    {
        if ((83 - 83)) {
            return (353 - 353);
        }
    }
    if (CzNF6gav5l0[epfold][wp2xceT8I]) {
        return CzNF6gav5l0[epfold][wp2xceT8I];
    }
    else {
        if (!((355 - 354) != epfold) || !((863 - 862) != wp2xceT8I)) {
            {
                if ((657 - 657)) {
                    {
                        if ((69 - 69)) {
                            return (383 - 383);
                        }
                    }
                    return (835 - 835);
                }
            }
            CzNF6gav5l0[epfold][wp2xceT8I] = (690 - 689);
            return CzNF6gav5l0[epfold][wp2xceT8I];
        }
        else {
            if (wp2xceT8I > epfold) {
                CzNF6gav5l0[epfold][wp2xceT8I] = a7HbCsfUSBe (epfold, epfold);
                return CzNF6gav5l0[epfold][wp2xceT8I];
            }
            else {
                {
                    if ((292 - 292)) {
                        return (183 - 183);
                    }
                }
                if (!(wp2xceT8I != epfold)) {
                    {
                        if ((283 - 283)) {
                            return (424 - 424);
                        }
                    }
                    CzNF6gav5l0[epfold][wp2xceT8I] = a7HbCsfUSBe (epfold, epfold - (281 - 280)) + (995 - 994);
                    return CzNF6gav5l0[epfold][wp2xceT8I];
                }
                else {
                    CzNF6gav5l0[epfold][wp2xceT8I] = a7HbCsfUSBe (epfold - wp2xceT8I, wp2xceT8I) + a7HbCsfUSBe (epfold, wp2xceT8I - (846 - 845));
                    return CzNF6gav5l0[epfold][wp2xceT8I];
                }
            }
        }
    }
}

int main () {
    int flR1Ykp;
    int W8gWtoA;
    int ktQW8CIzJc;
    int S52DqagxInu;
    {
        if ((96 - 96)) {
            return (174 - 174);
        }
    }
    scanf ("%d", &W8gWtoA);
    {
        int Wu7NKjv2LTR;
        Wu7NKjv2LTR = (389 - 389);
        for (; Wu7NKjv2LTR < W8gWtoA;) {
            scanf ("%d%d", &flR1Ykp, &S52DqagxInu);
            ktQW8CIzJc = a7HbCsfUSBe (flR1Ykp, S52DqagxInu);
            printf ("%d\n", ktQW8CIzJc);
            Wu7NKjv2LTR = Wu7NKjv2LTR +(276 - 275);
        }
    }
    return (412 - 412);
}

