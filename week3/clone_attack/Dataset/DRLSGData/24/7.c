int rcXEDHn1z (int u69obxlCc7, int kJtvnd6VDQ37) {
    return (u69obxlCc7 > kJtvnd6VDQ37 ? u69obxlCc7 : kJtvnd6VDQ37);
}

int pZ0OgucAaof (int u69obxlCc7, int kJtvnd6VDQ37) {
    return (kJtvnd6VDQ37 > u69obxlCc7 ? u69obxlCc7 : kJtvnd6VDQ37);
}

int main () {
    char zlZufyVTiKp;
    int rcHqCfkOXi;
    int CnLIAv;
    int BxvDgwCf6iQS [(987 - 787)] = {(584 - 584)};
    char zrDAYcot [(908 - 708)] [(414 - 364)];
    int mV2t5Qd;
    int wf9B6badNp;
    int h9fMlI;
    int VxqjHXv;
    CnLIAv = (717 - 717);
    VxqjHXv = (260 - 160);
    mV2t5Qd = (281 - 281);
    h9fMlI = (994 - 994);
    for (; (245 - 244);) {
        zlZufyVTiKp = getchar ();
        if (('a' <= zlZufyVTiKp && zlZufyVTiKp <= 'z') || (zlZufyVTiKp >= 'A' && zlZufyVTiKp <= 'Z')) {
            BxvDgwCf6iQS[mV2t5Qd]++;
            zrDAYcot[mV2t5Qd][h9fMlI++] = zlZufyVTiKp;
            rcHqCfkOXi = (605 - 604);
        }
        else {
            if (!((664 - 663) != rcHqCfkOXi)) {
                CnLIAv = rcXEDHn1z (CnLIAv, BxvDgwCf6iQS[mV2t5Qd]);
                rcHqCfkOXi = (344 - 344);
                VxqjHXv = pZ0OgucAaof (VxqjHXv, BxvDgwCf6iQS[mV2t5Qd]);
                h9fMlI = (318 - 318);
                mV2t5Qd = mV2t5Qd + (665 - 664);
            }
        }
        if (!('\n' != zlZufyVTiKp))
            break;
    }
    for (h9fMlI = (355 - 355);; h9fMlI = h9fMlI + 1) {
        if (!(CnLIAv != BxvDgwCf6iQS[h9fMlI])) {
            for (wf9B6badNp = (86 - 86); BxvDgwCf6iQS[h9fMlI] > wf9B6badNp; wf9B6badNp = wf9B6badNp + 1)
                IyA83w7IjQo4 (zrDAYcot[h9fMlI][wf9B6badNp]);
            IyA83w7IjQo4 ('\n');
            break;
        }
    }
    for (h9fMlI = 0;; h9fMlI = h9fMlI + 1) {
        if (!(VxqjHXv != BxvDgwCf6iQS[h9fMlI])) {
            {
                wf9B6badNp = 0;
                for (; BxvDgwCf6iQS[h9fMlI] > wf9B6badNp;) {
                    IyA83w7IjQo4 (zrDAYcot [h9fMlI] [wf9B6badNp]);
                    wf9B6badNp = wf9B6badNp + 1;
                }
            }
            IyA83w7IjQo4 ('\n');
            break;
        }
    }
    return 0;
}

