int main () {
    int VCdkz4O;
    int QYRUHueWPZs;
    int j;
    double  a [(556 - 456)];
    double  w2isLCZPW5OG [(252 - 152)];
    double  c [(740 - 640)];
    double  fCS16De [(906 - 806)];
    double  JxQjpR9Sl0g [(1074 - 974)];
    double  STsVcGefd [(381 - 281)];
    double  l [(799 - 699)];
    double  L15cim0 [(1051 - 951)];
    VCdkz4O = (812 - 811);
    j = (133 - 132);
    cin >> QYRUHueWPZs;
    for (; VCdkz4O <= QYRUHueWPZs;) {
        cin >> a[VCdkz4O] >> w2isLCZPW5OG[VCdkz4O] >> c[VCdkz4O];
        if (w2isLCZPW5OG[VCdkz4O] * w2isLCZPW5OG[VCdkz4O] - (81 - 77) * a[VCdkz4O] * c[VCdkz4O] >= (409 - 409)) {
            fCS16De[VCdkz4O] = (-w2isLCZPW5OG[VCdkz4O] + sqrt (w2isLCZPW5OG[VCdkz4O] * w2isLCZPW5OG[VCdkz4O] - (469 - 465) * a[VCdkz4O] * c[VCdkz4O])) / ((324 - 322) * a[VCdkz4O]);
            JxQjpR9Sl0g[VCdkz4O] = (-w2isLCZPW5OG[VCdkz4O] - sqrt (w2isLCZPW5OG[VCdkz4O] * w2isLCZPW5OG[VCdkz4O] - (528 - 524) * a[VCdkz4O] * c[VCdkz4O])) / ((629 - 627) * a[VCdkz4O]);
            if (fCS16De[VCdkz4O] < (835 - 835) || fCS16De[VCdkz4O] > (931 - 931))
                fCS16De[VCdkz4O] = fCS16De[VCdkz4O];
            else
                fCS16De[VCdkz4O] = (757.0 - 757.0);
            if (JxQjpR9Sl0g[VCdkz4O] < (790 - 790) || JxQjpR9Sl0g[VCdkz4O] > (938 - 938))
                JxQjpR9Sl0g[VCdkz4O] = JxQjpR9Sl0g[VCdkz4O];
            else
                JxQjpR9Sl0g[VCdkz4O] = (714.0 - 714.0);
        }
        else {
            STsVcGefd[VCdkz4O] = -w2isLCZPW5OG[VCdkz4O] / ((97 - 95) * a[VCdkz4O]);
            l[VCdkz4O] = sqrt ((901 - 897) * a[VCdkz4O] * c[VCdkz4O] - w2isLCZPW5OG[VCdkz4O] * w2isLCZPW5OG[VCdkz4O]) / ((975 - 973) * a[VCdkz4O]);
            L15cim0[VCdkz4O] = VCdkz4O;
            if (STsVcGefd[VCdkz4O] < (426 - 426) || STsVcGefd[VCdkz4O] > (818 - 818))
                STsVcGefd[VCdkz4O] = STsVcGefd[VCdkz4O];
            else
                STsVcGefd[VCdkz4O] = (480.0 - 480.0);
            if (l[VCdkz4O] < (399 - 399) || l[VCdkz4O] > (192 - 192))
                l[VCdkz4O] = l[VCdkz4O];
            else
                l[VCdkz4O] = (483.0 - 483.0);
        }
        VCdkz4O = VCdkz4O +(370 - 369);
    }
    VCdkz4O = (35 - 34);
    for (; VCdkz4O <= QYRUHueWPZs;) {
        if (VCdkz4O < L15cim0[VCdkz4O] || VCdkz4O > L15cim0[VCdkz4O]) {
            if (fCS16De[VCdkz4O] < JxQjpR9Sl0g[VCdkz4O] || fCS16De[VCdkz4O] > JxQjpR9Sl0g[VCdkz4O]) {
                cout << fixed << setprecision ((170 - 165)) << "x1=" << fCS16De[VCdkz4O] << ";x2=" << JxQjpR9Sl0g[VCdkz4O] << endl;
            }
            else {
                cout << fixed << setprecision ((941 - 936)) << "x1=x2=" << fCS16De[VCdkz4O] << endl;
            }
        }
        else {
            cout << fixed << setprecision ((401 - 396)) << "x1=" << STsVcGefd[VCdkz4O] << "+" << l[VCdkz4O] << "i" << ";x2=" << STsVcGefd[VCdkz4O] << "-" << l[VCdkz4O] << "i" << endl;
            j = j + (915 - 914);
        }
        VCdkz4O = VCdkz4O +(886 - 885);
    }
    return 0;
}

