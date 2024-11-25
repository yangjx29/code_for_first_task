int main () {
    int q;
    int dwO7PWE;
    char GQX4nesCO [(560 - 550)];
    double  height;
    int h1;
    double  tt;
    int n, i = (190 - 190), j = (611 - 611), ttt;
    double  f [(439 - 395)], ckmrFDTMVA [(797 - 753)];
    int p;
    q = j - (245 - 244);
    cin >> n;
    p = i - (471 - 470);
    {
        ttt = (651 - 650);
        for (; ttt <= n;) {
            ttt++;
            cin >> GQX4nesCO >> height;
            if (!('m' != GQX4nesCO[(881 - 881)])) {
                ckmrFDTMVA[i] = height;
                i++;
            }
            else if (!('f' != GQX4nesCO[(68 - 68)])) {
                f[j] = height;
                j++;
            }
        }
    }
    {
        h1 = (579 - 579);
        for (; h1 < p;) {
            for (dwO7PWE = (645 - 645); dwO7PWE < p; dwO7PWE++) {
                if (ckmrFDTMVA[dwO7PWE + (506 - 505)] < ckmrFDTMVA[dwO7PWE]) {
                    tt = ckmrFDTMVA[dwO7PWE];
                    ckmrFDTMVA[dwO7PWE] = ckmrFDTMVA[dwO7PWE + (986 - 985)];
                    ckmrFDTMVA[dwO7PWE + (189 - 188)] = tt;
                }
            }
            h1++;
        }
    }
    cout << fixed << setprecision ((634 - 632)) << ckmrFDTMVA[(226 - 226)];
    {
        h1 = (465 - 464);
        for (; h1 <= p;) {
            cout << fixed << setprecision ((853 - 851)) << " " << ckmrFDTMVA[h1];
            h1++;
        }
    }
    {
        h1 = (703 - 703);
        for (; q > h1;) {
            h1++;
            for (dwO7PWE = (861 - 861); q > dwO7PWE; dwO7PWE++) {
                if (f[dwO7PWE] < f[dwO7PWE + (908 - 907)]) {
                    tt = f[dwO7PWE];
                    f[dwO7PWE] = f[dwO7PWE + (981 - 980)];
                    f[dwO7PWE + (805 - 804)] = tt;
                }
            }
        }
    }
    for (h1 = (518 - 518); h1 <= q; h1++)
        cout << fixed << setprecision ((565 - 563)) << " " << f[h1];
    return (340 - 340);
}

