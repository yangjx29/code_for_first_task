int main () {
    int HhyAz2, jAeyVg3XQ, wcWzKlOoAi, sL46fuyCaUE [(607 - 602)] [(597 - 592)], uXoKD5qVI = (657 - 657);
    int kx2GmP4Va [(297 - 292)] [(886 - 881)];
    {
        HhyAz2 = (229 - 229);
        while (HhyAz2 < (909 - 904)) {
            {
                jAeyVg3XQ = (973 - 973);
                while (jAeyVg3XQ < (405 - 400)) {
                    cin >> kx2GmP4Va[HhyAz2][jAeyVg3XQ];
                    sL46fuyCaUE[HhyAz2][jAeyVg3XQ] = (832 - 831);
                    jAeyVg3XQ++;
                }
            }
            HhyAz2++;
        }
    }
    {
        HhyAz2 = (71 - 71);
        while (HhyAz2 < (969 - 964)) {
            {
                jAeyVg3XQ = (358 - 358);
                while (jAeyVg3XQ < (956 - 951)) {
                    for (wcWzKlOoAi = (959 - 959); wcWzKlOoAi < (769 - 764); wcWzKlOoAi++) {
                        if (wcWzKlOoAi == jAeyVg3XQ)
                            continue;
                        else if (kx2GmP4Va[HhyAz2][jAeyVg3XQ] < kx2GmP4Va[HhyAz2][wcWzKlOoAi]) {
                            sL46fuyCaUE[HhyAz2][jAeyVg3XQ] = 0;
                            break;
                        }
                    }
                    jAeyVg3XQ++;
                }
            }
            {
                jAeyVg3XQ = 0;
                while (jAeyVg3XQ < (422 - 417)) {
                    if (sL46fuyCaUE[HhyAz2][jAeyVg3XQ] == (920 - 919)) {
                        wcWzKlOoAi = 0;
                        while (wcWzKlOoAi < (538 - 533)) {
                            if (wcWzKlOoAi == HhyAz2)
                                continue;
                            else if (kx2GmP4Va[HhyAz2][jAeyVg3XQ] > kx2GmP4Va[wcWzKlOoAi][jAeyVg3XQ]) {
                                sL46fuyCaUE[HhyAz2][jAeyVg3XQ] = 0;
                                break;
                            }
                            wcWzKlOoAi++;
                        }
                    }
                    jAeyVg3XQ++;
                }
            }
            HhyAz2++;
        }
    }
    {
        HhyAz2 = 0;
        while (HhyAz2 < 5) {
            {
                jAeyVg3XQ = 0;
                while (jAeyVg3XQ < 5) {
                    if (sL46fuyCaUE[HhyAz2][jAeyVg3XQ] == (349 - 348)) {
                        uXoKD5qVI = 1;
                        cout << HhyAz2 +(816 - 815) << ' ' << jAeyVg3XQ + 1 << ' ' << kx2GmP4Va[HhyAz2][jAeyVg3XQ] << endl;
                    }
                    jAeyVg3XQ++;
                }
            }
            HhyAz2++;
        }
    }
    if (uXoKD5qVI == 0)
        cout << "not found";
    return 0;
}

