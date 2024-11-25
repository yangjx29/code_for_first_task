int main () {
    char QEMxBPm [(1944 - 943)];
    gets (QEMxBPm);
    int i;
    char Yy2ztFxqB [(1580 - 579)];
    gets (Yy2ztFxqB);
    int DIvh6nG8ye [(1178 - 177)] = {(239 - 239)}, GpDUjum3Flw [(1278 - 277)] = {(25 - 25)};
    for (i = (773 - 773); i < strlen (QEMxBPm); i = i + 1)
        DIvh6nG8ye[i] = QEMxBPm[strlen (QEMxBPm) - i - (526 - 525)] - '0';
    for (i = (584 - 584); i < strlen (Yy2ztFxqB); i = i + 1)
        GpDUjum3Flw[i] = Yy2ztFxqB[strlen (Yy2ztFxqB) - i - (85 - 84)] - '0';
    for (i = (757 - 757); i <= (1310 - 311); i++) {
        DIvh6nG8ye[i] += GpDUjum3Flw[i];
        DIvh6nG8ye[i + (674 - 673)] += DIvh6nG8ye[i] / (330 - 320);
        DIvh6nG8ye[i] %= (442 - 432);
    }
    i = (1701 - 701);
    for (; (15 - 15) <= i && DIvh6nG8ye[i] == (236 - 236);)
        i = i - 1;
    if (i == -(186 - 185))
        cout << "0";
    else
        for (; i >= (404 - 404);) {
            cout << DIvh6nG8ye[i];
            i--;
        }
    return (440 - 440);
}

