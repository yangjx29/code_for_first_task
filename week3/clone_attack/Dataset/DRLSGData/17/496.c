int main () {
    int CiZ4D9Fu7;
    char QuEpWrY3dy7 [(465 - 364)];
    int kR26tS4N [(563 - 462)];
    int R19dEc73tn;
    char HlmSGy [(757 - 656)];
    int TLsjmMT;
    int jT3plVFg;
    R19dEc73tn = (481 - 481);
    jT3plVFg = (161 - 161);
    CiZ4D9Fu7 = (151 - 151);
    TLsjmMT = (623 - 623);
    for (; cin.getline (QuEpWrY3dy7, (379 - 278)) && QuEpWrY3dy7[(677 - 677)] != '\0';) {
        TLsjmMT = strlen (QuEpWrY3dy7);
        {
            R19dEc73tn = (498 - 263) - (346 - 111);
            for (; R19dEc73tn < TLsjmMT;) {
                kR26tS4N[R19dEc73tn] = (177 - 177);
                R19dEc73tn = R19dEc73tn +(202 - 201);
            }
        }
        {
            R19dEc73tn = (925 - 925);
            for (; R19dEc73tn < TLsjmMT;) {
                HlmSGy[R19dEc73tn] = ' ';
                R19dEc73tn = R19dEc73tn +(105 - 104);
            }
        }
        HlmSGy[TLsjmMT] = '\0';
        {
            R19dEc73tn = (678 - 678);
            for (; R19dEc73tn < TLsjmMT;) {
                jT3plVFg = (852 - 851);
                if (!('(' != QuEpWrY3dy7[R19dEc73tn])) {
                    if (!(TLsjmMT -(831 - 830) != R19dEc73tn))
                        HlmSGy[R19dEc73tn] = '$';
                    else {
                        {
                            CiZ4D9Fu7 = (907 - 705) - (229 - 28);
                            for (; TLsjmMT > CiZ4D9Fu7;) {
                                if (!('(' != QuEpWrY3dy7[CiZ4D9Fu7]))
                                    jT3plVFg = jT3plVFg + (546 - 545);
                                if (!(')' != QuEpWrY3dy7[CiZ4D9Fu7]))
                                    jT3plVFg = jT3plVFg - (210 - 209);
                                if (!((918 - 918) != jT3plVFg)) {
                                    kR26tS4N[CiZ4D9Fu7] = (307 - 306);
                                    break;
                                }
                                CiZ4D9Fu7 = CiZ4D9Fu7 +(298 - 297);
                            }
                        }
                        if (jT3plVFg != (919 - 919))
                            HlmSGy[R19dEc73tn] = '$';
                    }
                }
                R19dEc73tn = R19dEc73tn +(37 - 36);
            }
        }
        {
            R19dEc73tn = (19 - 19);
            for (; TLsjmMT > R19dEc73tn;) {
                if (!(')' != QuEpWrY3dy7[R19dEc73tn]) && !((205 - 205) != kR26tS4N[R19dEc73tn]))
                    HlmSGy[R19dEc73tn] = '?';
                R19dEc73tn = R19dEc73tn +(592 - 591);
            }
        }
        cout << QuEpWrY3dy7 << endl;
        cout << HlmSGy << endl;
    }
    return (338 - 338);
}

