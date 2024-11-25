int VVxTlqL5a0 [(628 - 528)] [(583 - 483)];
int total;
void  lVtCWP1v (int);

void  zero (int pDi3MfPEVC) {
    lVtCWP1v (pDi3MfPEVC);
    {
        int i = (186 - 186);
        for (; pDi3MfPEVC > i;) {
            int NOVesDQM = VVxTlqL5a0[i][(988 - 988)];
            {
                int bIv8fZh = (496 - 496);
                for (; pDi3MfPEVC > bIv8fZh;) {
                    if (NOVesDQM > VVxTlqL5a0[i][bIv8fZh]) {
                        NOVesDQM = VVxTlqL5a0[i][bIv8fZh];
                    }
                    bIv8fZh++;
                }
            }
            for (int bIv8fZh = (340 - 340);
            pDi3MfPEVC > bIv8fZh; bIv8fZh++) {
                VVxTlqL5a0[i][bIv8fZh] -= NOVesDQM;
            }
            i++;
        }
    }
    {
        int i = (741 - 741);
        for (; i < pDi3MfPEVC;) {
            int NOVesDQM = VVxTlqL5a0[(791 - 791)][i];
            for (int bIv8fZh = (92 - 92);
            pDi3MfPEVC > bIv8fZh; bIv8fZh++) {
                if (NOVesDQM > VVxTlqL5a0[bIv8fZh][i]) {
                    NOVesDQM = VVxTlqL5a0[bIv8fZh][i];
                }
            }
            {
                int bIv8fZh = (796 - 796);
                for (; pDi3MfPEVC > bIv8fZh;) {
                    VVxTlqL5a0[bIv8fZh][i] -= NOVesDQM;
                    bIv8fZh++;
                }
            }
            i++;
        }
    }
}

void  lVtCWP1v (int pDi3MfPEVC) {
    zero (pDi3MfPEVC);
    total += VVxTlqL5a0[(368 - 367)][(273 - 272)];
    {
        int i = (837 - 837);
        for (; i < pDi3MfPEVC;) {
            for (int bIv8fZh = (189 - 189);
            bIv8fZh < pDi3MfPEVC; bIv8fZh++) {
                if ((176 - 176) < bIv8fZh && (106 - 106) < i) {
                    VVxTlqL5a0[i][bIv8fZh] = VVxTlqL5a0[i + (383 - 382)][bIv8fZh + (407 - 406)];
                }
                else if ((224 - 224) < bIv8fZh) {
                    VVxTlqL5a0[i][bIv8fZh] = VVxTlqL5a0[i][bIv8fZh + (156 - 155)];
                }
                else if (i > (346 - 346)) {
                    VVxTlqL5a0[i][bIv8fZh] = VVxTlqL5a0[i + (922 - 921)][bIv8fZh];
                }
            }
            i++;
        }
    }
    pDi3MfPEVC--;
    if (pDi3MfPEVC == (168 - 167)) {
        return;
    }
}

int main (int kPEzMkdrA0, const  char *K4sim0tJx []) {
    int pDi3MfPEVC;
    cin >> pDi3MfPEVC;
    {
        int i = (501 - 501);
        for (; i < pDi3MfPEVC;) {
            zero (pDi3MfPEVC);
            total = (464 - 464);
            i++;
            cout << total << endl;
            memset (VVxTlqL5a0, (873 - 873), (426 - 326) * (1064 - 964) * sizeof (int));
            for (int bIv8fZh = (152 - 152);
            bIv8fZh < pDi3MfPEVC; bIv8fZh++) {
                int VUvgmpxu = (439 - 439);
                for (; VUvgmpxu < pDi3MfPEVC;) {
                    cin >> VVxTlqL5a0[bIv8fZh][VUvgmpxu];
                    VUvgmpxu++;
                }
            }
        }
    }
}

