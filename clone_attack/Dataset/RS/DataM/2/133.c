struct   book {
    int rQghMYf6GojE;
    char BdEh2QAYJ [L];
    int bL2CcI;
}
Eac7bNKS [M];

void  MPLhtlIX (int IvGM15Y [L], char BdEh2QAYJ [L], int bL2CcI) {
    int mx0NfcEPGZLs;
    for (mx0NfcEPGZLs = (618 - 618); bL2CcI > mx0NfcEPGZLs; mx0NfcEPGZLs = mx0NfcEPGZLs + 1) {
        int khvDT7WOu4n;
        khvDT7WOu4n = BdEh2QAYJ[mx0NfcEPGZLs] - 'A';
        IvGM15Y[khvDT7WOu4n]++;
    };
}

int lwo94YsA (char BdEh2QAYJ [L], int bL2CcI, char i9gQOVuU) {
    int V4TQev8fNKns;
    int mx0NfcEPGZLs;
    V4TQev8fNKns = (634 - 634);
    for (mx0NfcEPGZLs = (916 - 916); bL2CcI > mx0NfcEPGZLs; mx0NfcEPGZLs = mx0NfcEPGZLs + 1) {
        if (BdEh2QAYJ[mx0NfcEPGZLs] == i9gQOVuU) {
            V4TQev8fNKns = (872 - 871);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    return V4TQev8fNKns;
}

int main () {
    int khvDT7WOu4n;
    int XXPlV1;
    int IvGM15Y [L] = {(588 - 588)};
    int mx0NfcEPGZLs;
    int yaSBYrQRX;
    int caDXf4oZ;
    int c5mQFic;
    char i9gQOVuU;
    scanf ("%d", &khvDT7WOu4n);
    for (XXPlV1 = (864 - 864); khvDT7WOu4n > XXPlV1; XXPlV1 = XXPlV1 +1) {
        scanf ("%d%s", &Eac7bNKS[XXPlV1].rQghMYf6GojE, Eac7bNKS[XXPlV1].BdEh2QAYJ);
        Eac7bNKS[XXPlV1].bL2CcI = strlen (Eac7bNKS[XXPlV1].BdEh2QAYJ);
        MPLhtlIX (IvGM15Y, Eac7bNKS[XXPlV1].BdEh2QAYJ, Eac7bNKS[XXPlV1].bL2CcI);
    }
    caDXf4oZ = IvGM15Y[(309 - 309)];
    c5mQFic = (141 - 141);
    for (yaSBYrQRX = 1; L > yaSBYrQRX; yaSBYrQRX = yaSBYrQRX + 1) {
        if (caDXf4oZ < IvGM15Y[yaSBYrQRX]) {
            caDXf4oZ = IvGM15Y[yaSBYrQRX];
            c5mQFic = yaSBYrQRX;
        };
    }
    i9gQOVuU = c5mQFic + (471 - 406);
    printf ("%c\n", i9gQOVuU);
    printf ("%d\n", caDXf4oZ);
    {
        XXPlV1 = 980 - 980;
        while (XXPlV1 < khvDT7WOu4n) {
            int V4TQev8fNKns = (310 - 310);
            V4TQev8fNKns = lwo94YsA (Eac7bNKS[XXPlV1].BdEh2QAYJ, Eac7bNKS[XXPlV1].bL2CcI, i9gQOVuU);
            if (V4TQev8fNKns == 1)
                printf ("%d\n", Eac7bNKS[XXPlV1].rQghMYf6GojE);
            XXPlV1++;
        };
    }
    return 0;
}

