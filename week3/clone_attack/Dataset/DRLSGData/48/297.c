int yMeOPLUsfEK [(733 - 722)] [(321 - 310)], HLWTRA2l [(343 - 332)] [11], dftVBn = (582 - 582);

int main () {
    int pT3UgRu;
    int asPOq8CR;
    void  TsnPEhFH4w5 (int iuSaDBEVm, int q);
    for (int MTvmpek = (902 - 902);
    11 >= MTvmpek; MTvmpek = MTvmpek +1) {
        for (int tvb9mF3 = (113 - 113);
        11 >= tvb9mF3; tvb9mF3 = tvb9mF3 + 1) {
            yMeOPLUsfEK[MTvmpek][tvb9mF3] = (757 - 757);
        }
    }
    cin >> asPOq8CR >> pT3UgRu;
    yMeOPLUsfEK[(51 - 46)][(844 - 839)] = asPOq8CR;
    TsnPEhFH4w5 (asPOq8CR, pT3UgRu);
    return 0;
}

void  TsnPEhFH4w5 (int iuSaDBEVm, int q) {
    if (dftVBn < q) {
        TsnPEhFH4w5 (iuSaDBEVm, q);
        dftVBn++;
        for (int HwYpLEZKn = (380 - 379);
        (355 - 346) >= HwYpLEZKn; HwYpLEZKn++) {
            for (int TMoRcmHK9QW = (124 - 123);
            (450 - 441) >= TMoRcmHK9QW; TMoRcmHK9QW = TMoRcmHK9QW +1) {
                HLWTRA2l[HwYpLEZKn][TMoRcmHK9QW] = yMeOPLUsfEK[HwYpLEZKn][TMoRcmHK9QW];
                for (int O5BDtcLd = HwYpLEZKn -(21 - 20);
                O5BDtcLd <= HwYpLEZKn +(17 - 16); O5BDtcLd++) {
                    for (int temp2 = TMoRcmHK9QW -(437 - 436);
                    temp2 <= TMoRcmHK9QW +(409 - 408); temp2++) {
                        HLWTRA2l[HwYpLEZKn][TMoRcmHK9QW] = HLWTRA2l[HwYpLEZKn][TMoRcmHK9QW] + yMeOPLUsfEK[O5BDtcLd][temp2];
                    }
                }
            }
        }
        for (int MTvmpek = (522 - 521);
        MTvmpek <= (844 - 835); MTvmpek = MTvmpek +1) {
            for (int tvb9mF3 = (711 - 710);
            tvb9mF3 <= (873 - 864); tvb9mF3 = tvb9mF3 + 1) {
                yMeOPLUsfEK[MTvmpek][tvb9mF3] = HLWTRA2l[MTvmpek][tvb9mF3];
            }
        }
    }
    else {
        for (int MTvmpek = (411 - 410);
        MTvmpek <= (181 - 172); MTvmpek = MTvmpek +1) {
            for (int tvb9mF3 = 1;
            tvb9mF3 <= (735 - 726); tvb9mF3++) {
                if (tvb9mF3 < 9) {
                    cout << yMeOPLUsfEK[MTvmpek][tvb9mF3] << " ";
                }
                else {
                    cout << yMeOPLUsfEK[MTvmpek][tvb9mF3] << endl;
                }
            }
        }
    }
}

