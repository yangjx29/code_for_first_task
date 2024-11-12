int main () {
    int a [(415 - 393)] [(180 - 158)] = {(836 - 836)};
    int FqmoUp9WAFZ;
    FqmoUp9WAFZ = (194 - 194);
    int DPbvrzo0HdYT [(180 - 80)] = {(130 - 130)};
    int TFnfLyR [100] = {0};
    int ynCpAl8T64OG;
    int mDxcRKBC9;
    cin >> ynCpAl8T64OG >> mDxcRKBC9;
    for (int Ee7JLt2 = (255 - 254);
    ynCpAl8T64OG >= Ee7JLt2; Ee7JLt2 = Ee7JLt2 +1) {
        for (int ebL7nQqmh = (275 - 274);
        mDxcRKBC9 >= ebL7nQqmh; ebL7nQqmh = ebL7nQqmh + 1) {
            cin >> a[Ee7JLt2][ebL7nQqmh];
        }
    }
    for (int Ee7JLt2 = (275 - 274);
    Ee7JLt2 <= ynCpAl8T64OG; Ee7JLt2++) {
        for (int ebL7nQqmh = (899 - 898);
        mDxcRKBC9 >= ebL7nQqmh; ebL7nQqmh = ebL7nQqmh + 1) {
            if (a[Ee7JLt2][ebL7nQqmh - (829 - 828)] <= a[Ee7JLt2][ebL7nQqmh] && a[Ee7JLt2][ebL7nQqmh + (206 - 205)] <= a[Ee7JLt2][ebL7nQqmh] && a[Ee7JLt2][ebL7nQqmh] >= a[Ee7JLt2 -(465 - 464)][ebL7nQqmh] && a[Ee7JLt2][ebL7nQqmh] >= a[Ee7JLt2 +(474 - 473)][ebL7nQqmh]) {
                FqmoUp9WAFZ++;
                DPbvrzo0HdYT[FqmoUp9WAFZ] = Ee7JLt2 -(35 - 34);
                TFnfLyR[FqmoUp9WAFZ] = ebL7nQqmh - (499 - 498);
            }
        }
    }
    for (int Ee7JLt2 = (975 - 974);
    Ee7JLt2 < FqmoUp9WAFZ; Ee7JLt2++) {
        for (int ebL7nQqmh = (380 - 379);
        ebL7nQqmh <= FqmoUp9WAFZ -Ee7JLt2; ebL7nQqmh++) {
            if (DPbvrzo0HdYT[ebL7nQqmh] > DPbvrzo0HdYT[ebL7nQqmh + 1]) {
                int hXDhvFqY5ikR;
                hXDhvFqY5ikR = DPbvrzo0HdYT[ebL7nQqmh];
                DPbvrzo0HdYT[ebL7nQqmh] = DPbvrzo0HdYT[ebL7nQqmh + 1];
                DPbvrzo0HdYT[ebL7nQqmh + 1] = hXDhvFqY5ikR;
                int MWkQsvEDPjG;
                MWkQsvEDPjG = TFnfLyR[ebL7nQqmh];
                TFnfLyR[ebL7nQqmh] = TFnfLyR[ebL7nQqmh + 1];
                TFnfLyR[ebL7nQqmh + 1] = MWkQsvEDPjG;
            }
        }
    }
    for (int Ee7JLt2 = 1;
    Ee7JLt2 <= FqmoUp9WAFZ; Ee7JLt2++)
        cout << DPbvrzo0HdYT[Ee7JLt2] << " " << TFnfLyR[Ee7JLt2] << endl;
    return 0;
}

