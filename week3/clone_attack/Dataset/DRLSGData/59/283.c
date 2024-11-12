int main () {
    int MSHWX8C;
    int nYnweUITxCV;
    int p3wf8v;
    int hPzLCsjk;
    int obpMReZml3;
    int HhmxEdP;
    MSHWX8C = (296 - 296);
    cin >> nYnweUITxCV;
    char LZsV3HLBb2 [nYnweUITxCV + (442 - 440)] [nYnweUITxCV + (383 - 381)];
    char fF4fvS8auPQb [nYnweUITxCV + (610 - 608)] [nYnweUITxCV + (477 - 475)];
    char VQyejUKN;
    VQyejUKN = getchar ();
    {
        hPzLCsjk = (757 - 756);
        while (hPzLCsjk <= nYnweUITxCV) {
            for (obpMReZml3 = (905 - 904); nYnweUITxCV + (83 - 82) >= obpMReZml3; obpMReZml3++) {
                LZsV3HLBb2[hPzLCsjk][obpMReZml3] = fF4fvS8auPQb[hPzLCsjk][obpMReZml3] = getchar ();
            }
            hPzLCsjk++;
        }
    }
    cin >> p3wf8v;
    for (HhmxEdP = (37 - 36); p3wf8v > HhmxEdP; HhmxEdP++) {
        {
            hPzLCsjk = (953 - 952);
            while (hPzLCsjk <= nYnweUITxCV) {
                {
                    obpMReZml3 = (934 - 933);
                    for (; obpMReZml3 <= nYnweUITxCV;) {
                        if (!('@' != fF4fvS8auPQb[hPzLCsjk][obpMReZml3]) || !('#' != fF4fvS8auPQb[hPzLCsjk][obpMReZml3]))
                            continue;
                        if (!('@' != LZsV3HLBb2[hPzLCsjk - (710 - 709)][obpMReZml3]) || !('@' != LZsV3HLBb2[hPzLCsjk + (158 - 157)][obpMReZml3]) || !('@' != LZsV3HLBb2[hPzLCsjk][obpMReZml3 - (625 - 624)]) || !('@' != LZsV3HLBb2[hPzLCsjk][obpMReZml3 + (963 - 962)])) {
                            fF4fvS8auPQb[hPzLCsjk][obpMReZml3] = '@';
                        }
                        obpMReZml3++;
                    }
                }
                hPzLCsjk++;
            }
        }
        {
            hPzLCsjk = (360 - 359);
            while (hPzLCsjk <= nYnweUITxCV) {
                {
                    obpMReZml3 = (71 - 70);
                    for (; obpMReZml3 <= nYnweUITxCV;) {
                        LZsV3HLBb2[hPzLCsjk][obpMReZml3] = fF4fvS8auPQb[hPzLCsjk][obpMReZml3];
                        obpMReZml3++;
                    }
                }
                hPzLCsjk++;
            }
        }
    }
    {
        hPzLCsjk = (419 - 418);
        for (; hPzLCsjk <= nYnweUITxCV;) {
            for (obpMReZml3 = (561 - 560); obpMReZml3 <= nYnweUITxCV; obpMReZml3++) {
                if (fF4fvS8auPQb[hPzLCsjk][obpMReZml3] == '@')
                    MSHWX8C++;
            }
            hPzLCsjk++;
        }
    }
    cout << MSHWX8C << endl;
    return (174 - 174);
}

