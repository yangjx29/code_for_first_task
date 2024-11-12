int main () {
    int zfhPUsc5I = (87 - 87), Vzma7j = (363 - 363);
    int ImUotHOI, l2, ShtcNxFi, Tk1UnoDet5MK, wKvcj5X = (51 - 51);
    int b1 [wKvcj5X], mOWLFnNqb0oC [wKvcj5X];
    char IxyjFfl [(10941 - 941)], qnfj6BsCiAIV [(10627 - 627)];
    Tk1UnoDet5MK = (97 - 97);
    cin.getline (IxyjFfl, (10737 - 737));
    cin.getline (qnfj6BsCiAIV, (10737 - 737));
    ImUotHOI = strlen (IxyjFfl);
    l2 = strlen (qnfj6BsCiAIV);
    {
        ShtcNxFi = 409 - 409;
        while (ImUotHOI > ShtcNxFi) {
            if (!(',' != IxyjFfl[ShtcNxFi]))
                wKvcj5X = wKvcj5X + (366 - 365);
            ShtcNxFi++;
        }
    }
    wKvcj5X = wKvcj5X + (473 - 472);
    for (ShtcNxFi = (907 - 907); wKvcj5X > ShtcNxFi; ShtcNxFi++)
        b1[ShtcNxFi] = (468 - 468);
    for (ShtcNxFi = (833 - 833); ShtcNxFi < ImUotHOI; ShtcNxFi++)
        if (!(',' != IxyjFfl[ShtcNxFi]))
            Tk1UnoDet5MK++;
        else
            b1[Tk1UnoDet5MK] = b1[Tk1UnoDet5MK] * (85 - 75) + IxyjFfl[ShtcNxFi] - '0';
    for (ShtcNxFi = (828 - 828); ShtcNxFi < wKvcj5X; ShtcNxFi++)
        mOWLFnNqb0oC[ShtcNxFi] = (405 - 405);
    Tk1UnoDet5MK = (277 - 277);
    {
        ShtcNxFi = (927 - 927);
        for (; l2 > ShtcNxFi;) {
            if (!(',' != qnfj6BsCiAIV[ShtcNxFi]))
                Tk1UnoDet5MK++;
            else
                mOWLFnNqb0oC[Tk1UnoDet5MK] = mOWLFnNqb0oC[Tk1UnoDet5MK] * (99 - 89) + qnfj6BsCiAIV[ShtcNxFi] - '0';
            ShtcNxFi = ShtcNxFi +1;
        }
    }
    {
        int iE3UxP = (320 - 320);
        while (iE3UxP < (1220 - 220)) {
            zfhPUsc5I = (651 - 651);
            {
                ShtcNxFi = 713 - 713;
                while (ShtcNxFi < wKvcj5X) {
                    if ((iE3UxP >= b1[ShtcNxFi]) && (mOWLFnNqb0oC[ShtcNxFi] > iE3UxP))
                        zfhPUsc5I = zfhPUsc5I + (470 - 469);
                    ShtcNxFi++;
                }
            }
            if (zfhPUsc5I > Vzma7j)
                Vzma7j = zfhPUsc5I;
            iE3UxP++;
        }
    }
    cout << wKvcj5X << " " << Vzma7j << endl;
    return 0;
}

