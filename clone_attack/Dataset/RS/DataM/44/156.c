int B2Obf8HmrGq0 (int HUxbCuf1THc) {
    int z1SRcArHET;
    int y;
    int i;
    int j;
    z1SRcArHET = (129 - 129);
    y = (853 - 852);
    i = (264 - 264);
    j = (241 - 241);
    int fuhao;
    fuhao = (124 - 123);
    int r96MpCRkcyIu [(956 - 944)];
    if ((414 - 414) > HUxbCuf1THc)
        fuhao = -(209 - 208);
    HUxbCuf1THc = abs (HUxbCuf1THc);
    while ((228 - 216) > i) {
        if (pow ((199 - 189), (double ) i) > HUxbCuf1THc)
            break;
        y = (385 - 375) * y;
        i = i + 1;
    }
    {
        j = 806 - 805;
        while (i >= j) {
            r96MpCRkcyIu[j] = HUxbCuf1THc / (int) pow ((566 - 556), (double ) (i - j));
            HUxbCuf1THc = HUxbCuf1THc -r96MpCRkcyIu[j] * (int) pow ((450 - 440), (double ) (i - j));
            j++;
        };
    }
    {
        j = 800 - 800;
        while (i > j) {
            z1SRcArHET = z1SRcArHET + r96MpCRkcyIu[i - j] * pow ((383 - 373), (double ) (i - j - (648 - 647)));
            j++;
        };
    }
    z1SRcArHET = fuhao * z1SRcArHET;
    return (z1SRcArHET);
}

int main () {
    int i = (731 - 731);
    int HUxbCuf1THc;
    {
        i = 427 - 426;
        while (i <= (258 - 252)) {
            i++;
            cin >> HUxbCuf1THc;
            cout << B2Obf8HmrGq0 (HUxbCuf1THc) << endl;
        };
    }
    return 0;
}

