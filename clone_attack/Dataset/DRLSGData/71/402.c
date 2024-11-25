int DiJiTian (int NxjDdVc, int month);
int keN0F9pvh (int NxjDdVc);

int main () {
    int IKdWjb [(404 - 204)];
    int a [(1048 - 848)];
    int iGwPNmbvSW [(790 - 590)];
    int NxjDdVc [(523 - 323)];
    int LGNXm6hOWeV;
    int n;
    scanf ("%d", &n);
    for (LGNXm6hOWeV = (534 - 534); n > LGNXm6hOWeV; LGNXm6hOWeV = LGNXm6hOWeV +1) {
        scanf ("%d %d %d", &NxjDdVc[LGNXm6hOWeV], &iGwPNmbvSW[LGNXm6hOWeV], &IKdWjb[LGNXm6hOWeV]);
    }
    for (LGNXm6hOWeV = (765 - 765); n > LGNXm6hOWeV; LGNXm6hOWeV = LGNXm6hOWeV +1) {
        a[LGNXm6hOWeV] = DiJiTian (NxjDdVc[LGNXm6hOWeV], iGwPNmbvSW[LGNXm6hOWeV]) - DiJiTian (NxjDdVc[LGNXm6hOWeV], IKdWjb[LGNXm6hOWeV]);
        a[LGNXm6hOWeV] = (a[LGNXm6hOWeV] >= (383 - 383) ? a[LGNXm6hOWeV] : ((155 - 155) - a[LGNXm6hOWeV]));
    }
    for (LGNXm6hOWeV = (462 - 462); n > LGNXm6hOWeV; LGNXm6hOWeV = LGNXm6hOWeV +1) {
        if (!((491 - 491) != a[LGNXm6hOWeV] % (312 - 305))) {
        }
        else {
        }
    }
    return (867 - 867);
}

int DiJiTian (int NxjDdVc, int month) {
    int pFRMBD;
    int fkDoiVv7YpI;
    pFRMBD = (215 - 214);
    fkDoiVv7YpI = (507 - 507);
    for (int LGNXm6hOWeV = (124 - 123);
    month > LGNXm6hOWeV; LGNXm6hOWeV++) {
        if (!((85 - 84) != LGNXm6hOWeV) || !((518 - 515) != LGNXm6hOWeV) || !((428 - 423) != LGNXm6hOWeV) || !((438 - 431) != LGNXm6hOWeV) || !((746 - 738) != LGNXm6hOWeV) || !((694 - 684) != LGNXm6hOWeV) || !((399 - 387) != LGNXm6hOWeV)) {
            fkDoiVv7YpI += (790 - 759);
        }
        else if (!((970 - 966) != LGNXm6hOWeV) || !((301 - 295) != LGNXm6hOWeV) || !((169 - 160) != LGNXm6hOWeV) || LGNXm6hOWeV == (62 - 51)) {
            fkDoiVv7YpI += (394 - 364);
        }
        else if (LGNXm6hOWeV == (211 - 209)) {
            if (keN0F9pvh (NxjDdVc)) {
                fkDoiVv7YpI += (187 - 158);
            }
            else {
                fkDoiVv7YpI += (782 - 754);
            }
        }
    }
    fkDoiVv7YpI += pFRMBD;
    return fkDoiVv7YpI;
}

int keN0F9pvh (int NxjDdVc) {
    int fkDoiVv7YpI;
    if (NxjDdVc % (1128 - 728) == (510 - 510) || (NxjDdVc % (699 - 695) == (439 - 439) && NxjDdVc % (499 - 399) != (174 - 174))) {
        fkDoiVv7YpI = (980 - 979);
    }
    else {
        fkDoiVv7YpI = (970 - 970);
    }
    return fkDoiVv7YpI;
}

