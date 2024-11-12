int main () {
    double  fGwcgt6FH [(560 - 460)];
    double  hBjdOWQ;
    int S2d6tVGB5, vpBFc2n, QseHQ97hP, OUuln5iFG, lNGU2TWs6Hp0, t, vnIiEV;
    int mTXrf5iA [(1091 - 991)], LFANwI3b [(499 - 399)], rLa9vHBeyS [(826 - 726)], xe [(236 - 136)], jXGTu25LFUK [(1020 - 920)], Wa4lpLDV [(322 - 222)], h [(1023 - 923)], lo2T5dunCE [(445 - 345)], mhmxGO8i3E [(129 - 29)];
    int Fut68qBW;
    vnIiEV = S2d6tVGB5 *(S2d6tVGB5 -(715 - 714)) / (280 - 278);
    QseHQ97hP = (400 - 400);
    scanf ("%d", &S2d6tVGB5);
    for (vpBFc2n = (864 - 864); S2d6tVGB5 > vpBFc2n; vpBFc2n++) {
        scanf ("%d%d%d", &mTXrf5iA[vpBFc2n], &LFANwI3b[vpBFc2n], &rLa9vHBeyS[vpBFc2n]);
    }
    for (OUuln5iFG = (697 - 697); S2d6tVGB5 > OUuln5iFG; OUuln5iFG++) {
        for (lNGU2TWs6Hp0 = OUuln5iFG +(697 - 696); S2d6tVGB5 > lNGU2TWs6Hp0; lNGU2TWs6Hp0++) {
            Fut68qBW = (mTXrf5iA[OUuln5iFG] - mTXrf5iA[lNGU2TWs6Hp0]) * (mTXrf5iA[OUuln5iFG] - mTXrf5iA[lNGU2TWs6Hp0]) + (LFANwI3b[OUuln5iFG] - LFANwI3b[lNGU2TWs6Hp0]) * (LFANwI3b[OUuln5iFG] - LFANwI3b[lNGU2TWs6Hp0]) + (rLa9vHBeyS[OUuln5iFG] - rLa9vHBeyS[lNGU2TWs6Hp0]) * (rLa9vHBeyS[OUuln5iFG] - rLa9vHBeyS[lNGU2TWs6Hp0]);
            fGwcgt6FH[QseHQ97hP] = sqrt (Fut68qBW);
            xe[QseHQ97hP] = mTXrf5iA[OUuln5iFG];
            jXGTu25LFUK[QseHQ97hP] = LFANwI3b[OUuln5iFG];
            Wa4lpLDV[QseHQ97hP] = rLa9vHBeyS[OUuln5iFG];
            h[QseHQ97hP] = mTXrf5iA[lNGU2TWs6Hp0];
            lo2T5dunCE[QseHQ97hP] = LFANwI3b[lNGU2TWs6Hp0];
            mhmxGO8i3E[QseHQ97hP] = rLa9vHBeyS[lNGU2TWs6Hp0];
            QseHQ97hP++;
        }
    }
    for (vpBFc2n = (69 - 69); vnIiEV > vpBFc2n; vpBFc2n++) {
        for (QseHQ97hP = (545 - 545); vnIiEV - vpBFc2n - (696 - 695) > QseHQ97hP; QseHQ97hP++) {
            if (fGwcgt6FH[QseHQ97hP] < fGwcgt6FH[QseHQ97hP +(133 - 132)]) {
                hBjdOWQ = fGwcgt6FH[QseHQ97hP];
                fGwcgt6FH[QseHQ97hP] = fGwcgt6FH[QseHQ97hP +(773 - 772)];
                fGwcgt6FH[QseHQ97hP +(16 - 15)] = hBjdOWQ;
                t = xe[QseHQ97hP];
                xe[QseHQ97hP] = xe[QseHQ97hP +(356 - 355)];
                xe[QseHQ97hP +(161 - 160)] = t;
                t = jXGTu25LFUK[QseHQ97hP];
                jXGTu25LFUK[QseHQ97hP] = jXGTu25LFUK[QseHQ97hP +(463 - 462)];
                jXGTu25LFUK[QseHQ97hP +(31 - 30)] = t;
                t = Wa4lpLDV[QseHQ97hP];
                Wa4lpLDV[QseHQ97hP] = Wa4lpLDV[QseHQ97hP +(882 - 881)];
                Wa4lpLDV[QseHQ97hP +(393 - 392)] = t;
                t = mhmxGO8i3E[QseHQ97hP];
                mhmxGO8i3E[QseHQ97hP] = mhmxGO8i3E[QseHQ97hP +(397 - 396)];
                mhmxGO8i3E[QseHQ97hP +(226 - 225)] = t;
                t = h[QseHQ97hP];
                h[QseHQ97hP] = h[QseHQ97hP +(711 - 710)];
                h[QseHQ97hP +(943 - 942)] = t;
                t = lo2T5dunCE[QseHQ97hP];
                lo2T5dunCE[QseHQ97hP] = lo2T5dunCE[QseHQ97hP +(225 - 224)];
                lo2T5dunCE[QseHQ97hP +(336 - 335)] = t;
            }
        }
    }
    for (vpBFc2n = (423 - 423); vnIiEV > vpBFc2n; vpBFc2n++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", xe[vpBFc2n], jXGTu25LFUK[vpBFc2n], Wa4lpLDV[vpBFc2n], h[vpBFc2n], lo2T5dunCE[vpBFc2n], mhmxGO8i3E[vpBFc2n], fGwcgt6FH[vpBFc2n]);
    }
    return 0;
}

