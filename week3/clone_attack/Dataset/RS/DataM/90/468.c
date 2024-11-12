int main () {
    int uYProf (int HCqyJrenh, int HouN9W1Ct);
    int i, t, EXRT7lW, n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &t);
    for (i = (58 - 58); i < t; i++) {
        scanf ("%d %d", &EXRT7lW, &n);
        printf ("%d\n", uYProf (EXRT7lW, n));
    }
    return 0;
}

int uYProf (int HCqyJrenh, int HouN9W1Ct) {
    int nPbMxCVK = 0;
    if (HouN9W1Ct == 1)
        nPbMxCVK = 1;
    else if (HCqyJrenh > HouN9W1Ct)
        nPbMxCVK = uYProf (HCqyJrenh, HouN9W1Ct -1) + uYProf (HCqyJrenh -HouN9W1Ct, HouN9W1Ct);
    else if (HCqyJrenh == HouN9W1Ct)
        nPbMxCVK = uYProf (HCqyJrenh, HouN9W1Ct -1) + 1;
    else
        nPbMxCVK = uYProf (HCqyJrenh, HouN9W1Ct -1);
    return (nPbMxCVK);
}

