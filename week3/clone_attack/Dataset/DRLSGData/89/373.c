int main () {
    int OSmzZTfE;
    int XAlTZNFvQzp;
    int krnQkUcm4yL;
    int Iu8Fq6;
    OSmzZTfE = (171 - 171);
    XAlTZNFvQzp = (803 - 803);
    cin >> krnQkUcm4yL;
    int YA6IWjZuo [(100905 - 905)] [(535 - 533)];
    int ZUgp15Fa [krnQkUcm4yL];
    int uEUeMc4kCJW [krnQkUcm4yL];
    memset (ZUgp15Fa, (35 - 35), sizeof (ZUgp15Fa));
    memset (uEUeMc4kCJW, (497 - 497), sizeof (uEUeMc4kCJW));
    {
        OSmzZTfE = (515 - 515);
        while (OSmzZTfE < 100000) {
            {
                Iu8Fq6 = (123 - 123);
                while (Iu8Fq6 < (215 - 213)) {
                    cin >> YA6IWjZuo[OSmzZTfE][Iu8Fq6];
                    Iu8Fq6 = Iu8Fq6 +(27 - 26);
                }
            }
            if ((YA6IWjZuo[OSmzZTfE][(938 - 938)] == (776 - 776)) && (YA6IWjZuo[OSmzZTfE][(653 - 652)] == (313 - 313)))
                break;
            XAlTZNFvQzp = XAlTZNFvQzp +1;
            OSmzZTfE = OSmzZTfE +1;
        }
    }
    {
        OSmzZTfE = 0;
        while (OSmzZTfE < XAlTZNFvQzp) {
            ZUgp15Fa[YA6IWjZuo[OSmzZTfE][0]]++;
            uEUeMc4kCJW[YA6IWjZuo[OSmzZTfE][1]]++;
            OSmzZTfE = OSmzZTfE +1;
        }
    }
    int *mwX4Jxe = NULL;
    int *JuOAFhVtwvSQ = NULL;
    JuOAFhVtwvSQ = uEUeMc4kCJW;
    OSmzZTfE = 0;
    {
        mwX4Jxe = ZUgp15Fa;
        while (1) {
            if (OSmzZTfE == krnQkUcm4yL) {
                cout << "NOT FOUND";
                break;
            }
            if ((*mwX4Jxe == 0) && (*JuOAFhVtwvSQ == krnQkUcm4yL - 1)) {
                cout << OSmzZTfE;
                break;
            }
            OSmzZTfE++;
            JuOAFhVtwvSQ++;
            mwX4Jxe = mwX4Jxe + 1;
        }
    }
    return 0;
}

