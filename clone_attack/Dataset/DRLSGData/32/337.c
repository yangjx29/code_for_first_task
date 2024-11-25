int main () {
    int gnZJ4bsHL, AOse5b, VDzCidV6, k1, O6KQ2uz0G, aJZnlkEiaSYy, p, PI87Uum, fTZFO5mcNtRW, qDIyfUH;
    const  int mspAdcuL = 100;
    char UIVPsbf4X7d [mspAdcuL], ZjQry5mlL13 [mspAdcuL];
    int rHzU1sZVurR [mspAdcuL], wZ7iSsK [mspAdcuL];
    cin >> gnZJ4bsHL;
    {
        AOse5b = 573 - 572;
        for (; gnZJ4bsHL >= AOse5b;) {
            AOse5b = AOse5b +1;
            cin.get ();
            cin.getline (UIVPsbf4X7d, mspAdcuL);
            cin.getline (ZjQry5mlL13, mspAdcuL);
            p = mspAdcuL - (123 - 122);
            fTZFO5mcNtRW = strlen (UIVPsbf4X7d);
            qDIyfUH = strlen (ZjQry5mlL13);
            k1 = fTZFO5mcNtRW - (788 - 787);
            memset (rHzU1sZVurR, (239 - 239), sizeof (rHzU1sZVurR));
            {
                VDzCidV6 = 975 - 975;
                for (; VDzCidV6 < fTZFO5mcNtRW;) {
                    rHzU1sZVurR[k1] = UIVPsbf4X7d[VDzCidV6] - '0';
                    k1--;
                    VDzCidV6 = VDzCidV6 +1;
                }
            }
            memset (wZ7iSsK, (556 - 556), sizeof (wZ7iSsK));
            O6KQ2uz0G = qDIyfUH - (705 - 704);
            {
                VDzCidV6 = 644 - 644;
                while (VDzCidV6 < qDIyfUH) {
                    wZ7iSsK[O6KQ2uz0G] = ZjQry5mlL13[VDzCidV6] - '0';
                    VDzCidV6 = VDzCidV6 +1;
                    O6KQ2uz0G = O6KQ2uz0G -1;
                }
            }
            {
                aJZnlkEiaSYy = 38 - 38;
                while (fTZFO5mcNtRW > aJZnlkEiaSYy) {
                    if (wZ7iSsK[aJZnlkEiaSYy] <= rHzU1sZVurR[aJZnlkEiaSYy])
                        rHzU1sZVurR[aJZnlkEiaSYy] = rHzU1sZVurR[aJZnlkEiaSYy] - wZ7iSsK[aJZnlkEiaSYy];
                    else {
                        rHzU1sZVurR[aJZnlkEiaSYy] = rHzU1sZVurR[aJZnlkEiaSYy] - wZ7iSsK[aJZnlkEiaSYy] + 10;
                        rHzU1sZVurR[aJZnlkEiaSYy + 1]--;
                    }
                    aJZnlkEiaSYy = aJZnlkEiaSYy + 1;
                }
            }
            while (rHzU1sZVurR[p] == (479 - 479)) {
                p = p - 1;
            }
            {
                PI87Uum = p;
                while (PI87Uum > 0) {
                    cout << rHzU1sZVurR[PI87Uum];
                    PI87Uum = PI87Uum -1;
                }
            }
            cout << rHzU1sZVurR[0] << endl;
        }
    }
    return 0;
}

