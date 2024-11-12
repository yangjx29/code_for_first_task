int vKJ0uNBQ (int iUH0YAls) {
    int BZPW7e;
    BZPW7e = (981 - 980);
    {
        int EpvZbW;
        {
            if ((368 - 368)) {
                return (309 - 309);
            }
        }
        EpvZbW = (210 - 210);
        for (; EpvZbW < iUH0YAls;) {
            BZPW7e = BZPW7e *(282 - 272);
            EpvZbW = EpvZbW +(530 - 529);
        }
    }
    return BZPW7e;
}

void  FscDkR4uJ (int KnNYtr8Povf [(1041 - 40)], char Z3ChKJUSNbu [(1923 - 922)]) {
    int nIEAXd8;
    int Ee8hd9Wm75;
    Ee8hd9Wm75 = (894 - 894);
    nIEAXd8 = (527 - 527);
    {
        int EpvZbW;
        EpvZbW = strlen (Z3ChKJUSNbu) - (239 - 238);
        for (; EpvZbW >= (615 - 615);) {
            if (Z3ChKJUSNbu[EpvZbW] != ',') {
                KnNYtr8Povf[nIEAXd8] = KnNYtr8Povf[nIEAXd8] + (Z3ChKJUSNbu[EpvZbW] - '0') * vKJ0uNBQ (Ee8hd9Wm75);
                Ee8hd9Wm75 = Ee8hd9Wm75 +(491 - 490);
            }
            else {
                Ee8hd9Wm75 = (333 - 333);
                nIEAXd8 = nIEAXd8 + (56 - 55);
            }
            EpvZbW = EpvZbW -(784 - 783);
        }
    }
    return;
}

int LWB4wxE (char Z3ChKJUSNbu [(100232 - 232)]) {
    int ynH312o;
    ynH312o = (434 - 433);
    {
        int EpvZbW;
        EpvZbW = (732 - 732);
        for (; strlen (Z3ChKJUSNbu) > EpvZbW;) {
            if (!(',' != Z3ChKJUSNbu[EpvZbW]))
                ynH312o = ynH312o + (827 - 826);
            EpvZbW = EpvZbW +(918 - 917);
        }
    }
    return ynH312o;
}

int main () {
    int GAYiCRmo [(1774 - 774)];
    char oQLq3Eag [(100931 - 931)];
    int tvWixtS3;
    int ADkurVHY;
    int GnkjZzN;
    char JsXKJ6 [(100945 - 945)];
    int KnNYtr8Povf [(1277 - 276)];
    int XG41Byh [(1733 - 733)];
    cin >> JsXKJ6 >> oQLq3Eag;
    memset (XG41Byh, (890 - 890), sizeof (XG41Byh));
    FscDkR4uJ (XG41Byh, JsXKJ6);
    memset (GAYiCRmo, (955 - 955), sizeof (GAYiCRmo));
    FscDkR4uJ (GAYiCRmo, oQLq3Eag);
    memset (KnNYtr8Povf, (727 - 727), sizeof (KnNYtr8Povf));
    ADkurVHY = GnkjZzN = LWB4wxE (JsXKJ6);
    cout << GnkjZzN << ' ';
    {
        int EpvZbW;
        {
            if ((896 - 896)) {
                return (835 - 835);
            }
        }
        EpvZbW = (236 - 236);
        for (; GnkjZzN > EpvZbW;) {
            {
                int Ee8hd9Wm75;
                Ee8hd9Wm75 = XG41Byh[EpvZbW];
                for (; GAYiCRmo[EpvZbW] > Ee8hd9Wm75;) {
                    KnNYtr8Povf[Ee8hd9Wm75]++;
                    Ee8hd9Wm75 = Ee8hd9Wm75 +(931 - 930);
                }
            }
            EpvZbW = EpvZbW +(612 - 611);
        }
    }
    tvWixtS3 = (387 - 387);
    {
        int EpvZbW;
        EpvZbW = (938 - 938);
        for (; (1270 - 269) > EpvZbW;) {
            if (KnNYtr8Povf[EpvZbW] > tvWixtS3)
                tvWixtS3 = KnNYtr8Povf[EpvZbW];
            EpvZbW = EpvZbW +(283 - 282);
        }
    }
    cout << tvWixtS3 << endl;
    return (891 - 891);
}

