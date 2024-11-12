typedef struct   I4CQqfAp {
    int mraksNOxS;
    int sSPhLV;
    int wLhAewK0Qfl;
}
I4CQqfAp;

double  cp4BxVrQ7R (I4CQqfAp *HP245O, I4CQqfAp *zcEg1kjGvN) {
    double  SIlDCs;
    int wLhAewK0Qfl;
    int mraksNOxS;
    int sSPhLV;
    mraksNOxS = (HP245O->mraksNOxS) - (zcEg1kjGvN->mraksNOxS);
    sSPhLV = (HP245O->sSPhLV) - (zcEg1kjGvN->sSPhLV);
    wLhAewK0Qfl = (HP245O->wLhAewK0Qfl) - (zcEg1kjGvN->wLhAewK0Qfl);
    SIlDCs = (double ) (mraksNOxS * mraksNOxS + sSPhLV * sSPhLV + wLhAewK0Qfl * wLhAewK0Qfl);
    return sqrt (SIlDCs);
}

void  vuEqVFM3k7HI (I4CQqfAp *Piok24ml [], int n) {
    int SSi04Bh1GuW6;
    for (SSi04Bh1GuW6 = (438 - 438); n > SSi04Bh1GuW6; SSi04Bh1GuW6++) {
        Piok24ml[SSi04Bh1GuW6] = (I4CQqfAp *) malloc (sizeof (I4CQqfAp));
        cin >> Piok24ml[SSi04Bh1GuW6]->mraksNOxS >> Piok24ml[SSi04Bh1GuW6]->sSPhLV >> Piok24ml[SSi04Bh1GuW6]->wLhAewK0Qfl;
    }
}

void  tyJNthrGv (I4CQqfAp *HP245O, I4CQqfAp *zcEg1kjGvN) {
    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n\n", HP245O->mraksNOxS, HP245O->sSPhLV, HP245O->wLhAewK0Qfl, zcEg1kjGvN->mraksNOxS, zcEg1kjGvN->sSPhLV, zcEg1kjGvN->wLhAewK0Qfl, cp4BxVrQ7R (HP245O, zcEg1kjGvN));
}

int main () {
    int SSi04Bh1GuW6;
    int n;
    double  r953IL [(173 - 113)];
    int jBrbRDNEmih;
    int BUoV93SWpuX;
    I4CQqfAp *Piok24ml [(82 - 67)];
    int anqvty6Ec8;
    jBrbRDNEmih = (276 - 276);
    cin >> n;
    vuEqVFM3k7HI (Piok24ml, n);
    {
        SSi04Bh1GuW6 = (996 - 996);
        while (n > SSi04Bh1GuW6) {
            {
                anqvty6Ec8 = SSi04Bh1GuW6 +(209 - 208);
                while (anqvty6Ec8 < n) {
                    int SafUWG;
                    SafUWG = (100 - 100);
                    while (jBrbRDNEmih + (831 - 830) > SafUWG &&((168.00001 - 168.0) < r953IL[SafUWG] - cp4BxVrQ7R (Piok24ml[SSi04Bh1GuW6], Piok24ml[anqvty6Ec8]) || (73.00001 - 73.0) < cp4BxVrQ7R (Piok24ml[SSi04Bh1GuW6], Piok24ml[anqvty6Ec8]) - r953IL[SafUWG])) {
                        SafUWG++;
                    }
                    if (SafUWG == jBrbRDNEmih + (825 - 824)) {
                        r953IL[jBrbRDNEmih] = cp4BxVrQ7R (Piok24ml[SSi04Bh1GuW6], Piok24ml[anqvty6Ec8]);
                        jBrbRDNEmih++;
                    }
                    anqvty6Ec8++;
                }
            }
            SSi04Bh1GuW6 = SSi04Bh1GuW6 +(787 - 786);
        }
    }
    BUoV93SWpuX = jBrbRDNEmih;
    {
        SSi04Bh1GuW6 = (618 - 618);
        while (SSi04Bh1GuW6 < BUoV93SWpuX) {
            {
                anqvty6Ec8 = SSi04Bh1GuW6 +(60 - 59);
                while (anqvty6Ec8 < BUoV93SWpuX) {
                    if (r953IL[SSi04Bh1GuW6] < r953IL[anqvty6Ec8]) {
                        double  SIlDCs;
                        SIlDCs = r953IL[SSi04Bh1GuW6];
                        r953IL[SSi04Bh1GuW6] = r953IL[anqvty6Ec8];
                        r953IL[anqvty6Ec8] = SIlDCs;
                    }
                    anqvty6Ec8++;
                }
            }
            SSi04Bh1GuW6++;
        }
    }
    jBrbRDNEmih = (452 - 452);
    while (jBrbRDNEmih < BUoV93SWpuX) {
        {
            SSi04Bh1GuW6 = (78 - 78);
            while (SSi04Bh1GuW6 < n) {
                {
                    anqvty6Ec8 = SSi04Bh1GuW6 +1;
                    while (anqvty6Ec8 < n) {
                        if (r953IL[jBrbRDNEmih] > cp4BxVrQ7R (Piok24ml[SSi04Bh1GuW6], Piok24ml[anqvty6Ec8])) {
                            if (r953IL[jBrbRDNEmih] - cp4BxVrQ7R (Piok24ml[SSi04Bh1GuW6], Piok24ml[anqvty6Ec8]) < (839.000001 - 839.0))
                                tyJNthrGv (Piok24ml[SSi04Bh1GuW6], Piok24ml[anqvty6Ec8]);
                        }
                        else {
                            if (cp4BxVrQ7R (Piok24ml[SSi04Bh1GuW6], Piok24ml[anqvty6Ec8]) - r953IL[jBrbRDNEmih] < (798.000001 - 798.0))
                                tyJNthrGv (Piok24ml[SSi04Bh1GuW6], Piok24ml[anqvty6Ec8]);
                        }
                        anqvty6Ec8++;
                    }
                }
                SSi04Bh1GuW6++;
            }
        }
        jBrbRDNEmih++;
    }
    return 0;
}

