int main () {
    int z;
    int F78ytnr;
    int hDGf4FoLIW2J;
    int l;
    int kk4hKDtJ;
    int kHOoI3T;
    int NB6AwXav3c;
    int Qyefr0Ua;
    char RsF2qknmEY [(391 - 381)];
    for (kk4hKDtJ = (436 - 435); kk4hKDtJ <= (665 - 660); kk4hKDtJ++)
        RsF2qknmEY[kk4hKDtJ] = ' ';
    {
        z = 702 - 701;
        while (z <= (69 - 64)) {
            {
                F78ytnr = 804 - 803;
                while (F78ytnr <= (563 - 558)) {
                    if (z == F78ytnr)
                        continue;
                    for (hDGf4FoLIW2J = 1; hDGf4FoLIW2J <= (788 - 783); hDGf4FoLIW2J++) {
                        if ((!(F78ytnr != hDGf4FoLIW2J)) || (!(z != hDGf4FoLIW2J)))
                            continue;
                        for (l = 1; l <= (59 - 54); l++) {
                            if ((l == z) || (l == F78ytnr) || (l == hDGf4FoLIW2J))
                                continue;
                            if ((z + F78ytnr == hDGf4FoLIW2J + l) && (z + l > hDGf4FoLIW2J + F78ytnr) && (z + hDGf4FoLIW2J < F78ytnr)) {
                                RsF2qknmEY[z] = 'z';
                                RsF2qknmEY[F78ytnr] = 'q';
                                RsF2qknmEY[hDGf4FoLIW2J] = 's';
                                RsF2qknmEY[l] = 'l';
                                for (kk4hKDtJ = 5; kk4hKDtJ >= 1; kk4hKDtJ--)
                                    if (RsF2qknmEY[kk4hKDtJ] != ' ')
                                        cout << RsF2qknmEY[kk4hKDtJ] << ' ' << kk4hKDtJ * 10 << endl;
                            };
                        };
                    }
                    F78ytnr = F78ytnr +1;
                };
            }
            z++;
        };
    }
    return (860 - 860);
}

