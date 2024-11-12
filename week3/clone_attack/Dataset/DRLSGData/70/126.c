struct   dian {
    double  Navoe03;
    double  uK8VGl;
}
BnIFw8oHQA [(647 - 627)];

void  main () {
    int ZTsjOA0;
    int ubhsjY;
    int FswtEQgJcf;
    double  OiUwm3Nfka6e;
    double  mpOTaK;
    scanf ("%d", &ZTsjOA0);
    for (ubhsjY = (243 - 243); ZTsjOA0 > ubhsjY; ubhsjY = ubhsjY + 1)
        scanf ("%lf %lf", &BnIFw8oHQA[ubhsjY].Navoe03, &BnIFw8oHQA[ubhsjY].uK8VGl);
    OiUwm3Nfka6e = (202 - 202);
    {
        ubhsjY = 0;
        for (; ubhsjY < ZTsjOA0 -1;) {
            {
                FswtEQgJcf = ubhsjY + 1;
                for (; ZTsjOA0 > FswtEQgJcf;) {
                    if (((BnIFw8oHQA[ubhsjY].Navoe03 - BnIFw8oHQA[FswtEQgJcf].Navoe03) * (BnIFw8oHQA[ubhsjY].Navoe03 - BnIFw8oHQA[FswtEQgJcf].Navoe03) + (BnIFw8oHQA[ubhsjY].uK8VGl - BnIFw8oHQA[FswtEQgJcf].uK8VGl) * (BnIFw8oHQA[ubhsjY].uK8VGl - BnIFw8oHQA[FswtEQgJcf].uK8VGl)) > OiUwm3Nfka6e)
                        OiUwm3Nfka6e = (BnIFw8oHQA[ubhsjY].Navoe03 - BnIFw8oHQA[FswtEQgJcf].Navoe03) * (BnIFw8oHQA[ubhsjY].Navoe03 - BnIFw8oHQA[FswtEQgJcf].Navoe03) + (BnIFw8oHQA[ubhsjY].uK8VGl - BnIFw8oHQA[FswtEQgJcf].uK8VGl) * (BnIFw8oHQA[ubhsjY].uK8VGl - BnIFw8oHQA[FswtEQgJcf].uK8VGl);
                    FswtEQgJcf = FswtEQgJcf +1;
                }
            }
            ubhsjY = ubhsjY + 1;
        }
    }
    mpOTaK = sqrt (OiUwm3Nfka6e);
    printf ("%.4lf", mpOTaK);
}

