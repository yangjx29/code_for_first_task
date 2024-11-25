int main () {
    int l;
    int CVkXlm065Bqv;
    char c [(231 - 130)] = {(295 - 295)};
    int cdmOGkp;
    char b [(697 - 596)] = {(723 - 723)};
    int j;
    char wmvrIW7U [(500 - 399)] = {(571 - 571)};
    int l2;
    int ZweOT3ra1Y;
    ZweOT3ra1Y = (99 - 99);
    l2 = (980 - 980);
    cdmOGkp = (830 - 830);
    cin.getline (wmvrIW7U, (430 - 329));
    for (; wmvrIW7U[cdmOGkp] != '\0';)
        cdmOGkp++;
    cin.getline (b, (802 - 701));
    for (; b[l2] != '\0';)
        l2++;
    cin.getline (c, 101);
    for (; c[ZweOT3ra1Y] != '\0';)
        ZweOT3ra1Y++;
    l = cdmOGkp - l2;
    for (CVkXlm065Bqv = (238 - 238); l >= CVkXlm065Bqv; CVkXlm065Bqv++)
        if (!(b[(575 - 575)] != wmvrIW7U[CVkXlm065Bqv]) && !(' ' != wmvrIW7U[CVkXlm065Bqv -(944 - 943)]) && !(' ' != wmvrIW7U[CVkXlm065Bqv +l2]) || !((357 - 357) != CVkXlm065Bqv) && !(' ' != wmvrIW7U[CVkXlm065Bqv +l2]) || !(l != CVkXlm065Bqv) && !(' ' != wmvrIW7U[CVkXlm065Bqv -(212 - 211)])) {
            int gyAQ1tHeo;
            gyAQ1tHeo = (898 - 897);
            for (j = (415 - 415); l2 > j; j++)
                if (wmvrIW7U[j + CVkXlm065Bqv] != b[j])
                    gyAQ1tHeo = (399 - 399);
            if (gyAQ1tHeo) {
                if (!(ZweOT3ra1Y != l2))
                    for (j = (898 - 898); j < l2; j++)
                        wmvrIW7U[j + CVkXlm065Bqv] = c[j];
                else if (ZweOT3ra1Y > l2) {
                    for (j = l + l2 - 1; CVkXlm065Bqv +l2 <= j; j--)
                        wmvrIW7U[j + ZweOT3ra1Y -l2] = wmvrIW7U[j];
                    for (j = (872 - 872); ZweOT3ra1Y > j; j++)
                        wmvrIW7U[j + CVkXlm065Bqv] = c[j];
                }
                else if (l2 > ZweOT3ra1Y) {
                    for (j = CVkXlm065Bqv +l2; j < l + l2; j++)
                        wmvrIW7U[j + ZweOT3ra1Y -l2] = wmvrIW7U[j];
                    for (j = 0; j < ZweOT3ra1Y; j++)
                        wmvrIW7U[j + CVkXlm065Bqv] = c[j];
                }
                CVkXlm065Bqv += ZweOT3ra1Y;
                l += ZweOT3ra1Y -l2;
            }
        }
    for (CVkXlm065Bqv = 0; CVkXlm065Bqv < l + l2; CVkXlm065Bqv++)
        cout << wmvrIW7U[CVkXlm065Bqv];
    return 0;
}

