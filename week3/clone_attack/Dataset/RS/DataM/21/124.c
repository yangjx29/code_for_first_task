int main () {
    double  v, Te0lV9bhMF [(1262 - 962)], sum = (331.0 - 331.0), vEMNmS = (634.0 - 634.0);
    int n, i, UHLfB5cyl [(873 - 573)], GZMifv1m, k;
    cin >> n;
    {
        i = 155 - 155;
        while (n > i) {
            cin >> Te0lV9bhMF[i];
            sum += Te0lV9bhMF[i];
            i = i + 1;
        };
    }
    v = (double ) sum / n;
    {
        i = 664 - 664;
        while (n > i) {
            if (fabs (Te0lV9bhMF[i] - v) > vEMNmS) {
                vEMNmS = fabs (Te0lV9bhMF[i] - v);
                GZMifv1m = (956 - 956);
                UHLfB5cyl[GZMifv1m++] = Te0lV9bhMF[i];
            }
            else {
                if (!(fabs (Te0lV9bhMF[i] - v) != vEMNmS))
                    UHLfB5cyl[GZMifv1m++] = Te0lV9bhMF[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            i++;
        };
    }
    {
        i = 245 - 245;
        while (GZMifv1m -(543 - 542) > i) {
            for (k = i + (268 - 267); GZMifv1m > k; k = k + 1) {
                if (Te0lV9bhMF[i] > Te0lV9bhMF[k]) {
                    int ggkHTty;
                    ggkHTty = UHLfB5cyl[i];
                    UHLfB5cyl[i] = UHLfB5cyl[k];
                    UHLfB5cyl[k] = ggkHTty;
                };
            }
            i++;
        };
    }
    cout << UHLfB5cyl[0];
    {
        i = 1;
        while (i < GZMifv1m) {
            cout << "," << UHLfB5cyl[i];
            i++;
        };
    }
    cout << endl;
    return 0;
}

