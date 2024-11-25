int main () {
    int mTKsNibL;
    int UtlxIbg8Z;
    int j;
    int FPFSDYZG;
    int HT651zyH;
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
    char OrLZWbIldNa [50], xDVxFSi [50];
    scanf ("%s %s", xDVxFSi, OrLZWbIldNa);
    for (mTKsNibL = (341 - 341); OrLZWbIldNa[mTKsNibL] != '\0'; mTKsNibL++) {
        HT651zyH = mTKsNibL;
        for (j = 0; xDVxFSi[j] != '\0'; j++) {
            if (OrLZWbIldNa[HT651zyH] != xDVxFSi[j]) {
                UtlxIbg8Z = 0;
                break;
            }
            UtlxIbg8Z = 1;
            HT651zyH = HT651zyH +1;
        }
        if (UtlxIbg8Z == 1)
            break;
    }
    FPFSDYZG = HT651zyH -j;
    printf ("%d", FPFSDYZG);
    return 0;
}

