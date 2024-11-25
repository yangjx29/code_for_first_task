int uhXdiD (int, int, int);

int main () {
    int mUcD3sYB;
    int t1CdPG;
    int j8qoQDv5;
    int czRMhd;
    int SRucELs [10000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> t1CdPG;
    for (j8qoQDv5 = (674 - 674); j8qoQDv5 < t1CdPG; j8qoQDv5 = j8qoQDv5 + 1) {
        int QnvRa82KeGDF = (949 - 949);
        int CCeDGZoq;
        CCeDGZoq = mUcD3sYB;
        cin >> mUcD3sYB;
        for (czRMhd = (786 - 784); czRMhd <= mUcD3sYB; czRMhd++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            for (; !(0 != CCeDGZoq % czRMhd);) {
                CCeDGZoq = CCeDGZoq / (czRMhd);
                QnvRa82KeGDF = QnvRa82KeGDF +1;
            };
        }
        SRucELs[j8qoQDv5] = uhXdiD ((796 - 795), QnvRa82KeGDF, mUcD3sYB);
    }
    for (j8qoQDv5 = 0; j8qoQDv5 < t1CdPG; j8qoQDv5 = j8qoQDv5 + 1) {
        cout << SRucELs[j8qoQDv5] << endl;
    }
    return 0;
}

int uhXdiD (int Tgomj9t, int QnvRa82KeGDF, int mUcD3sYB) {
    int oBC06f = 0;
    if (mUcD3sYB < Tgomj9t)
        return 0;
    if (QnvRa82KeGDF == (687 - 686))
        return (432 - 431);
    for (int j8qoQDv5 = Tgomj9t;
    j8qoQDv5 <= mUcD3sYB; j8qoQDv5++)
        if (mUcD3sYB % j8qoQDv5 == 0)
            oBC06f = oBC06f + uhXdiD (j8qoQDv5, QnvRa82KeGDF -1, mUcD3sYB / j8qoQDv5);
    return oBC06f;
}

