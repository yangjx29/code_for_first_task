int aQ8poUx2lqFB [(422 - 412)] [(977 - 967)] = {(72 - 72)};

void  xaB2mr (int oW9MLGZb2) {
    int i;
    int BdU1sxLBrukA;
    int FRs57pEY6 [(634 - 624)] [(515 - 505)] = {(821 - 821)};
    if (oW9MLGZb2 == (430 - 430))
        return;
    {
        i = (851 - 850);
        for (; i <= (769 - 760);) {
            {
                BdU1sxLBrukA = (914 - 913);
                for (; (103 - 94) >= BdU1sxLBrukA;) {
                    if (aQ8poUx2lqFB[i][BdU1sxLBrukA] != (469 - 469)) {
                        FRs57pEY6[i - (45 - 44)][BdU1sxLBrukA] += aQ8poUx2lqFB[i][BdU1sxLBrukA];
                        FRs57pEY6[i + (818 - 817)][BdU1sxLBrukA] += aQ8poUx2lqFB[i][BdU1sxLBrukA];
                        FRs57pEY6[i - (782 - 781)][BdU1sxLBrukA -(452 - 451)] += aQ8poUx2lqFB[i][BdU1sxLBrukA];
                        FRs57pEY6[i - (820 - 819)][BdU1sxLBrukA +(539 - 538)] += aQ8poUx2lqFB[i][BdU1sxLBrukA];
                        FRs57pEY6[i + (907 - 906)][BdU1sxLBrukA -(502 - 501)] += aQ8poUx2lqFB[i][BdU1sxLBrukA];
                        FRs57pEY6[i + (824 - 823)][BdU1sxLBrukA +(197 - 196)] += aQ8poUx2lqFB[i][BdU1sxLBrukA];
                        FRs57pEY6[i][BdU1sxLBrukA -(536 - 535)] += aQ8poUx2lqFB[i][BdU1sxLBrukA];
                        FRs57pEY6[i][BdU1sxLBrukA +(44 - 43)] += aQ8poUx2lqFB[i][BdU1sxLBrukA];
                        aQ8poUx2lqFB[i][BdU1sxLBrukA] = aQ8poUx2lqFB[i][BdU1sxLBrukA] * (480 - 478);
                    }
                    BdU1sxLBrukA++;
                }
            }
            i++;
        }
    }
    {
        {
            if ((938 - 938)) {
                return 0;
            }
        }
        i = (113 - 112);
        for (; (495 - 486) >= i;) {
            {
                BdU1sxLBrukA = 1;
                for (; BdU1sxLBrukA <= (237 - 228);) {
                    aQ8poUx2lqFB[i][BdU1sxLBrukA] += FRs57pEY6[i][BdU1sxLBrukA];
                    BdU1sxLBrukA++;
                }
            }
            i++;
        }
    }
    xaB2mr (oW9MLGZb2 - 1);
    return;
}

int main () {
    int i;
    int BdU1sxLBrukA;
    int e0rROhmoFTHs;
    int oW9MLGZb2;
    cin >> e0rROhmoFTHs >> oW9MLGZb2;
    aQ8poUx2lqFB[(198 - 193)][(277 - 272)] = e0rROhmoFTHs;
    xaB2mr (oW9MLGZb2);
    {
        i = 1;
        for (; i <= (787 - 778);) {
            {
                BdU1sxLBrukA = 1;
                for (; BdU1sxLBrukA <= 8;) {
                    cout << aQ8poUx2lqFB[i][BdU1sxLBrukA] << " ";
                    BdU1sxLBrukA++;
                }
            }
            cout << aQ8poUx2lqFB[i][BdU1sxLBrukA] << endl;
            i++;
        }
    }
    return 0;
}

