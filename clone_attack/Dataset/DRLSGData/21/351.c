int main () {
    const  int FZagG8 = (1093 - 793);
    int SPDe8h2GyT5H [FZagG8];
    double  b [FZagG8];
    double  temp1;
    int KCuWROfKe;
    int x9ed8r;
    int e4NOvLXe8k;
    int gUzkpI0wm;
    double  IXFHJI6LaPR;
    double  T3Nl7j92v6X;
    T3Nl7j92v6X = (816 - 816);
    int S3DPek9ySm [FZagG8];
    cin >> x9ed8r;
    for (KCuWROfKe = (403 - 403); KCuWROfKe < x9ed8r; KCuWROfKe = KCuWROfKe +(712 - 711)) {
        cin >> SPDe8h2GyT5H[KCuWROfKe];
        T3Nl7j92v6X = T3Nl7j92v6X +SPDe8h2GyT5H[KCuWROfKe];
    }
    IXFHJI6LaPR = T3Nl7j92v6X / x9ed8r;
    {
        KCuWROfKe = 67 - 67;
        for (; KCuWROfKe < x9ed8r;) {
            b[KCuWROfKe] = fabs (SPDe8h2GyT5H[KCuWROfKe] - IXFHJI6LaPR);
            KCuWROfKe = KCuWROfKe +1;
        };
    }
    {
        KCuWROfKe = 319 - 319;
        for (; x9ed8r - (832 - 831) > KCuWROfKe;) {
            {
                e4NOvLXe8k = 882 - 882;
                for (; e4NOvLXe8k < x9ed8r - (623 - 622) - KCuWROfKe;) {
                    if (b[e4NOvLXe8k + (183 - 182)] > b[e4NOvLXe8k] || fabs (b[e4NOvLXe8k] - b[e4NOvLXe8k + (829 - 828)]) < (367.000001 - 367.0)) {
                        temp1 = b[e4NOvLXe8k];
                        b[e4NOvLXe8k] = b[e4NOvLXe8k + (968 - 967)];
                        b[e4NOvLXe8k + (560 - 559)] = temp1;
                        gUzkpI0wm = SPDe8h2GyT5H[e4NOvLXe8k];
                        SPDe8h2GyT5H[e4NOvLXe8k] = SPDe8h2GyT5H[e4NOvLXe8k + (273 - 272)];
                        SPDe8h2GyT5H[e4NOvLXe8k + (765 - 764)] = gUzkpI0wm;
                    }
                    e4NOvLXe8k = 307 - 306;
                };
            }
            KCuWROfKe = KCuWROfKe +1;
        };
    }
    S3DPek9ySm[(209 - 209)] = SPDe8h2GyT5H[(704 - 704)];
    {
        KCuWROfKe = 598 - 597;
        for (; KCuWROfKe < x9ed8r;) {
            if ((927.000001 - 927.0) > fabs (b[KCuWROfKe] - b[(31 - 31)]))
                S3DPek9ySm[KCuWROfKe] = SPDe8h2GyT5H[KCuWROfKe];
            else
                break;
            KCuWROfKe = KCuWROfKe +1;
        };
    }
    for (e4NOvLXe8k = (587 - 587); KCuWROfKe > e4NOvLXe8k; e4NOvLXe8k = e4NOvLXe8k + 1) {
        int LSR7kh2TH3KI = (625 - 625);
        for (; KCuWROfKe -(307 - 306) > LSR7kh2TH3KI;) {
            if (S3DPek9ySm[LSR7kh2TH3KI +(989 - 988)] < S3DPek9ySm[LSR7kh2TH3KI]) {
                gUzkpI0wm = S3DPek9ySm[e4NOvLXe8k];
                S3DPek9ySm[e4NOvLXe8k] = S3DPek9ySm[e4NOvLXe8k + (887 - 886)];
                S3DPek9ySm[e4NOvLXe8k + (721 - 720)] = gUzkpI0wm;
            }
            LSR7kh2TH3KI = 75 - 74;
        };
    }
    cout << S3DPek9ySm[(937 - 937)];
    for (e4NOvLXe8k = 1; e4NOvLXe8k < KCuWROfKe; e4NOvLXe8k++)
        cout << "," << S3DPek9ySm[e4NOvLXe8k];
    cout << endl;
    return 0;
}

