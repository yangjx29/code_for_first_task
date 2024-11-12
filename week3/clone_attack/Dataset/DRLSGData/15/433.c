int main () {
    int dEMv3C;
    int mhT5ORkwtcr;
    int ohOBfD;
    int Nm6kYwhWMyFA;
    int MNpzx9 [hang] [X31MnfUJ];
    int XDhSQIqb;
    int SjMeW4;
    int x2;
    int yQSoq1aRvwMn;
    mhT5ORkwtcr = 0;
    scanf ("%d", &dEMv3C);
    dEMv3C = dEMv3C;
    {
        ohOBfD = 0;
        for (; ohOBfD < dEMv3C;) {
            {
                Nm6kYwhWMyFA = 0;
                for (; dEMv3C > Nm6kYwhWMyFA;) {
                    scanf ("%d", &MNpzx9[ohOBfD][Nm6kYwhWMyFA]);
                    Nm6kYwhWMyFA = Nm6kYwhWMyFA +1;
                }
            }
            ohOBfD = ohOBfD + 1;
        }
    }
    {
        ohOBfD = 0;
        for (; dEMv3C > ohOBfD;) {
            {
                Nm6kYwhWMyFA = 0;
                for (; Nm6kYwhWMyFA < dEMv3C;) {
                    if (!(0 != MNpzx9[ohOBfD][Nm6kYwhWMyFA]) && !(255 != MNpzx9[ohOBfD - 1][Nm6kYwhWMyFA]) && !(255 != MNpzx9[ohOBfD][Nm6kYwhWMyFA -1]) && !(0 != MNpzx9[ohOBfD + 1][Nm6kYwhWMyFA]) && !(0 != MNpzx9[ohOBfD][Nm6kYwhWMyFA +1])) {
                        XDhSQIqb = ohOBfD;
                        SjMeW4 = Nm6kYwhWMyFA;
                    }
                    else {
                        if (MNpzx9[ohOBfD][Nm6kYwhWMyFA] == 0 && MNpzx9[ohOBfD - 1][Nm6kYwhWMyFA] == 0 && MNpzx9[ohOBfD][Nm6kYwhWMyFA -1] == 0 && MNpzx9[ohOBfD + 1][Nm6kYwhWMyFA] == 255 && MNpzx9[ohOBfD][Nm6kYwhWMyFA +1] == 255) {
                            x2 = ohOBfD;
                            yQSoq1aRvwMn = Nm6kYwhWMyFA;
                        }
                    }
                    Nm6kYwhWMyFA = Nm6kYwhWMyFA +1;
                }
            }
            ohOBfD = ohOBfD + 1;
        }
    }
    mhT5ORkwtcr = (x2 - XDhSQIqb -1) * (yQSoq1aRvwMn - SjMeW4 -1);
    printf ("%d", mhT5ORkwtcr);
    return 0;
}

