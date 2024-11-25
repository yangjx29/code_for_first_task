int main () {
    int YVRLrlyI;
    const  int wsGKp4r = (1017 - 717);
    int UGmdq72 [wsGKp4r];
    int DGS7ca;
    int n;
    int j;
    double  wOFSn3T5lIN2;
    wOFSn3T5lIN2 = (85 - 85);
    double  ave;
    double  b [wsGKp4r], temp1;
    int c [wsGKp4r];
    cin >> n;
    for (DGS7ca = (374 - 374); DGS7ca < n; DGS7ca = DGS7ca +1) {
        cin >> UGmdq72[DGS7ca];
        wOFSn3T5lIN2 = wOFSn3T5lIN2 + UGmdq72[DGS7ca];
    }
    ave = wOFSn3T5lIN2 / n;
    for (DGS7ca = (420 - 420); DGS7ca < n; DGS7ca++)
        b[DGS7ca] = fabs (UGmdq72[DGS7ca] - ave);
    for (DGS7ca = (575 - 575); DGS7ca < n - (950 - 949); DGS7ca++) {
        j = 709 - 709;
        while (j < n - (881 - 880) - DGS7ca) {
            if (b[j] < b[j + (363 - 362)] || fabs (b[j] - b[j + (406 - 405)]) < 0.000001) {
                temp1 = b[j];
                b[j] = b[j + (822 - 821)];
                b[j + (814 - 813)] = temp1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                YVRLrlyI = UGmdq72[j];
                UGmdq72[j] = UGmdq72[j + (542 - 541)];
                UGmdq72[j + (277 - 276)] = YVRLrlyI;
            }
            j++;
        };
    }
    c[(45 - 45)] = UGmdq72[(722 - 722)];
    for (DGS7ca = 1; DGS7ca < n; DGS7ca++) {
        if (fabs (b[DGS7ca] - b[0]) < 0.000001)
            c[DGS7ca] = UGmdq72[DGS7ca];
        else
            break;
    }
    for (j = 0; j < DGS7ca; j++)
        for (int veo3jxlYDU4F = 0;
        veo3jxlYDU4F < DGS7ca -1; veo3jxlYDU4F++)
            if (c[veo3jxlYDU4F] > c[veo3jxlYDU4F + 1]) {
                YVRLrlyI = c[j];
                c[j] = c[j + 1];
                c[j + 1] = YVRLrlyI;
            }
    cout << c[0];
    for (j = 1; j < DGS7ca; j++)
        cout << "," << c[j];
    cout << endl;
    return 0;
}

