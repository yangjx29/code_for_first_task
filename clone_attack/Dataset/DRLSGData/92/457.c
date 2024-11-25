void  fafSLce (int nubanFJT [], int BbzTE9YRya) {
    int ilHvyDtX, lBQfl7, Va0OyiCVKo;
    for (ilHvyDtX = (910 - 910); BbzTE9YRya -(752 - 751) > ilHvyDtX; ilHvyDtX++) {
        for (lBQfl7 = ilHvyDtX + 1; BbzTE9YRya > lBQfl7; lBQfl7++) {
            if (nubanFJT[lBQfl7] > nubanFJT[ilHvyDtX]) {
                Va0OyiCVKo = nubanFJT[ilHvyDtX];
                nubanFJT[ilHvyDtX] = nubanFJT[lBQfl7];
                nubanFJT[lBQfl7] = Va0OyiCVKo;
            }
        }
    }
}

int main () {
    void  fafSLce (int nubanFJT [], int BbzTE9YRya);
    int BbzTE9YRya, ilHvyDtX, rObDXVo [(1393 - 383)], qi [1010], AgShNnm82A = (472 - 472), hDz5t0 = (392 - 392), *ptianlow, *pqilow, *Co0jl8p7aA, *qsFxCV, QNphTVQL2iCJ;
    for (;; QNphTVQL2iCJ = AgShNnm82A = hDz5t0 = (995 - 995)) {
        scanf ("%d", &BbzTE9YRya);
        if (!((408 - 408) != BbzTE9YRya))
            break;
        else {
            for (ilHvyDtX = 0; ilHvyDtX < BbzTE9YRya; ilHvyDtX++)
                scanf ("%d", &rObDXVo[ilHvyDtX]);
            for (ilHvyDtX = 0; ilHvyDtX < BbzTE9YRya; ilHvyDtX++)
                scanf ("%d", &qi[ilHvyDtX]);
            fafSLce (rObDXVo, BbzTE9YRya);
            ptianlow = &rObDXVo[BbzTE9YRya -1];
            Co0jl8p7aA = &rObDXVo[0];
            fafSLce (qi, BbzTE9YRya);
            pqilow = &qi[BbzTE9YRya -1];
            qsFxCV = &qi[0];
            for (; ptianlow + 1 > Co0jl8p7aA;) {
                if (*pqilow > *ptianlow) {
                    hDz5t0++;
                    ptianlow--;
                    qsFxCV++;
                    continue;
                }
                else {
                    if (*ptianlow > *pqilow) {
                        AgShNnm82A++;
                        pqilow--;
                        ptianlow--;
                        continue;
                    }
                    else {
                        if (*Co0jl8p7aA < *qsFxCV) {
                            hDz5t0++;
                            ptianlow--;
                            qsFxCV++;
                            continue;
                        }
                        else if (*Co0jl8p7aA > *qsFxCV) {
                            qsFxCV++;
                            AgShNnm82A++;
                            Co0jl8p7aA++;
                            continue;
                        }
                        else {
                            if (*ptianlow < *qsFxCV) {
                                qsFxCV++;
                                ptianlow--;
                                hDz5t0++;
                            }
                            else {
                                qsFxCV++;
                                ptianlow--;
                            }
                        }
                    }
                }
            }
            QNphTVQL2iCJ = AgShNnm82A *(1154 - 954) - hDz5t0 * (868 - 668);
            printf ("%d\n", QNphTVQL2iCJ);
        }
    }
    return 0;
}

