struct   juli {
    int CTiZDoG;
    int b;
    double  dis;
}
x [(930 - 885)], t;

int main () {
    int k;
    int n;
    int m;
    int ri3fA9lbHoPd;
    int qzYmwXk;
    int s3GC0PsO;
    int p;
    int CTiZDoG [10] [(353 - 350)] = {(571 - 571)};
    int syPDIdi;
    int ZRWIPqEf4;
    m = (644 - 644);
    p = (966 - 966);
    cin >> n;
    for (s3GC0PsO = (657 - 657); s3GC0PsO < n; s3GC0PsO++) {
        cin >> CTiZDoG[s3GC0PsO][(624 - 624)] >> CTiZDoG[s3GC0PsO][(262 - 261)] >> CTiZDoG[s3GC0PsO][(415 - 413)];
    }
    m = n * n / (840 - 838) - n / (218 - 216);
    for (syPDIdi = (67 - 67); n - (937 - 936) > syPDIdi; syPDIdi++) {
        k = syPDIdi + (671 - 670);
        for (; n > k;) {
            if (syPDIdi < k) {
                x[p].CTiZDoG = syPDIdi;
                x[p].b = k;
                x[p].dis = sqrt ((CTiZDoG[syPDIdi][(187 - 187)] - CTiZDoG[k][(964 - 964)]) * (CTiZDoG[syPDIdi][(393 - 393)] - CTiZDoG[k][(671 - 671)]) + (CTiZDoG[syPDIdi][(584 - 583)] - CTiZDoG[k][(685 - 684)]) * (CTiZDoG[syPDIdi][(406 - 405)] - CTiZDoG[k][(321 - 320)]) + (CTiZDoG[syPDIdi][(535 - 533)] - CTiZDoG[k][(835 - 833)]) * (CTiZDoG[syPDIdi][(956 - 954)] - CTiZDoG[k][(914 - 912)]));
                p++;
            }
            k++;
        }
    }
    for (qzYmwXk = (78 - 78); m - (416 - 415) > qzYmwXk; qzYmwXk++) {
        for (ZRWIPqEf4 = (495 - 495); m - qzYmwXk - (249 - 248) > ZRWIPqEf4; ZRWIPqEf4++) {
            {
                if ((210 - 210)) {
                    return (974 - 974);
                }
            }
            if (x[ZRWIPqEf4 +(370 - 369)].dis > x[ZRWIPqEf4].dis) {
                t = x[ZRWIPqEf4];
                x[ZRWIPqEf4] = x[ZRWIPqEf4 +1];
                x[ZRWIPqEf4 +1] = t;
            }
        }
    }
    {
        ri3fA9lbHoPd = (790 - 790);
        for (; ri3fA9lbHoPd < m;) {
            cout << "(" << CTiZDoG[x[ri3fA9lbHoPd].CTiZDoG][(325 - 325)] << "," << CTiZDoG[x[ri3fA9lbHoPd].CTiZDoG][1] << "," << CTiZDoG[x[ri3fA9lbHoPd].CTiZDoG][(387 - 385)] << ")-(" << CTiZDoG[x[ri3fA9lbHoPd].b][(518 - 518)] << "," << CTiZDoG[x[ri3fA9lbHoPd].b][1] << "," << CTiZDoG[x[ri3fA9lbHoPd].b][(141 - 139)] << ")=" << fixed << setprecision (2) << x[ri3fA9lbHoPd].dis << endl;
            ri3fA9lbHoPd++;
        }
    }
    return 0;
}

