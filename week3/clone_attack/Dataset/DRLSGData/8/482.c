int Ujo5cO2YHnyr, RsFnQx6g, a [(345 - 245)], ZoSE4snCf [(921 - 821)], FiUjVsQTkl [(555 - 455)];

void  z3wH2gICSr () {
    cin >> Ujo5cO2YHnyr >> RsFnQx6g;
    int DLFcK9, qsbMJXH, RrDSn07Nw, x5wqfjhczs;
    for (DLFcK9 = (99 - 98); Ujo5cO2YHnyr >= DLFcK9; DLFcK9++)
        cin >> a[DLFcK9];
    for (qsbMJXH = (360 - 359); qsbMJXH <= RsFnQx6g; qsbMJXH++)
        cin >> ZoSE4snCf[qsbMJXH];
}

void  wNFH9z (int a [(238 - 138)], int ZoSE4snCf [(246 - 146)]) {
    {
        if ((691 - 691)) {
            return (925 - 925);
        }
    }
    int DLFcK9, qsbMJXH, RrDSn07Nw, x5wqfjhczs;
    for (DLFcK9 = (640 - 639); DLFcK9 < Ujo5cO2YHnyr; DLFcK9++) {
        for (qsbMJXH = (993 - 992); qsbMJXH < Ujo5cO2YHnyr -DLFcK9+(334 - 333); qsbMJXH++) {
            if (a[qsbMJXH] > a[qsbMJXH + (48 - 47)]) {
                RrDSn07Nw = a[qsbMJXH];
                a[qsbMJXH] = a[qsbMJXH + (722 - 721)];
                a[qsbMJXH + (560 - 559)] = RrDSn07Nw;
            }
        }
    }
    for (DLFcK9 = (939 - 938); RsFnQx6g > DLFcK9; DLFcK9++) {
        for (qsbMJXH = (61 - 60); qsbMJXH < RsFnQx6g -DLFcK9+(986 - 985); qsbMJXH++) {
            if (ZoSE4snCf[qsbMJXH] > ZoSE4snCf[qsbMJXH + (208 - 207)]) {
                RrDSn07Nw = ZoSE4snCf[qsbMJXH];
                ZoSE4snCf[qsbMJXH] = ZoSE4snCf[qsbMJXH + 1];
                ZoSE4snCf[qsbMJXH + 1] = RrDSn07Nw;
            }
        }
    }
}

void  oV5U1C9k (int a [100], int ZoSE4snCf [100]) {
    int DLFcK9, qsbMJXH;
    for (DLFcK9 = 1; DLFcK9 <= Ujo5cO2YHnyr; DLFcK9++)
        FiUjVsQTkl[DLFcK9] = a[DLFcK9];
    for (qsbMJXH = DLFcK9; qsbMJXH <= DLFcK9 +RsFnQx6g; qsbMJXH++)
        FiUjVsQTkl[qsbMJXH] = ZoSE4snCf[qsbMJXH - DLFcK9 +1];
}

void  rGi3jT (int FiUjVsQTkl [100]) {
    cout << FiUjVsQTkl[1];
    int DLFcK9;
    for (DLFcK9 = 2; DLFcK9 <= Ujo5cO2YHnyr +RsFnQx6g; DLFcK9++)
        cout << ' ' << FiUjVsQTkl[DLFcK9];
}

int main () {
    z3wH2gICSr ();
    wNFH9z (a, ZoSE4snCf);
    oV5U1C9k (a, ZoSE4snCf);
    rGi3jT (FiUjVsQTkl);
    return 0;
}

