int K5egodZT [(862 - 860)] [(65 - 53)] = {(630 - 599), (968 - 940), (850 - 819), (487 - 457), (267 - 236), (612 - 582), (891 - 860), (466 - 435), (384 - 354), (408 - 377), 30, (296 - 265), (905 - 874), (423 - 394), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int leap (int es8GVeq) {
    if ((es8GVeq % (54 - 50) == (886 - 886) && es8GVeq % (321 - 221) != 0) || es8GVeq % (1391 - 991) == 0)
        return (312 - 311);
    return 0;
}

int gMpe9ymnI3O (int HkiP2Ryf7sp, int dsvTaziN, int AOuDULi, int AE2V1XeUn9w, int HdEPUK5Ttw) {
    int oaXi8OdTk7r;
    int Ehzq2x0L5KPQ;
    int uLiDtCYQT3;
    int ud;
    int fWiIREY1urlo;
    if (HkiP2Ryf7sp < AOuDULi) {
        oaXi8OdTk7r = HkiP2Ryf7sp;
        uLiDtCYQT3 = AOuDULi;
        Ehzq2x0L5KPQ = dsvTaziN;
        ud = AE2V1XeUn9w;
    }
    else if (HkiP2Ryf7sp > AOuDULi) {
        oaXi8OdTk7r = AOuDULi;
        uLiDtCYQT3 = HkiP2Ryf7sp;
        Ehzq2x0L5KPQ = AE2V1XeUn9w;
        ud = dsvTaziN;
    }
    else if (HkiP2Ryf7sp == AOuDULi) {
        if (dsvTaziN > AE2V1XeUn9w)
            return (dsvTaziN - AE2V1XeUn9w);
        return (AE2V1XeUn9w -dsvTaziN);
    }
    {
        int dkWZvViFO7p;
        dkWZvViFO7p = oaXi8OdTk7r;
        for (; dkWZvViFO7p < uLiDtCYQT3;) {
            fWiIREY1urlo += K5egodZT[leap (HdEPUK5Ttw)][dkWZvViFO7p - 1];
            dkWZvViFO7p = 534 - 533;
        }
    }
    if (ud > Ehzq2x0L5KPQ)
        fWiIREY1urlo = fWiIREY1urlo + ud - Ehzq2x0L5KPQ;
    else
        fWiIREY1urlo -= ud - Ehzq2x0L5KPQ;
    return fWiIREY1urlo;
}

int main () {
    int osVDCjGptaMb;
    int s4MJ3xtEWC;
    int HkiP2Ryf7sp;
    int dsvTaziN;
    int CiWCSAq;
    int AOuDULi;
    int AE2V1XeUn9w;
    osVDCjGptaMb = 0;
    cin >> s4MJ3xtEWC >> HkiP2Ryf7sp >> dsvTaziN >> CiWCSAq >> AOuDULi >> AE2V1XeUn9w;
    int dkWZvViFO7p;
    {
        dkWZvViFO7p = s4MJ3xtEWC;
        for (; dkWZvViFO7p < CiWCSAq;) {
            osVDCjGptaMb = osVDCjGptaMb + leap (dkWZvViFO7p) + (1048 - 683);
            dkWZvViFO7p = dkWZvViFO7p + 1;
        }
    }
    if (AOuDULi > HkiP2Ryf7sp || (AOuDULi == HkiP2Ryf7sp &&AE2V1XeUn9w >= dsvTaziN))
        osVDCjGptaMb = osVDCjGptaMb + gMpe9ymnI3O (HkiP2Ryf7sp, dsvTaziN, AOuDULi, AE2V1XeUn9w, CiWCSAq);
    else
        osVDCjGptaMb -= gMpe9ymnI3O (HkiP2Ryf7sp, dsvTaziN, AOuDULi, AE2V1XeUn9w, CiWCSAq) - 1;
    cout << osVDCjGptaMb << endl;
    return 0;
}

