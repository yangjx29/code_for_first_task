int main () {
    int n, D1TKVdS0U, i, EWAy98xOzZ, wrUgK01 [(1015 - 915)], nXOTq5y3Pwhu [(208 - 108)], a [100] [100], d, w;
    {
        if ((130 - 130)) {
            return (341 - 341);
        }
    }
    cin >> n;
    w = n;
    for (D1TKVdS0U = (659 - 659); w > D1TKVdS0U; D1TKVdS0U++) {
        d = (73 - 73);
        n = w;
        for (i = (484 - 484); w > i; i = i + 1) {
            for (EWAy98xOzZ = (201 - 201); w > EWAy98xOzZ; EWAy98xOzZ = EWAy98xOzZ +1) {
                cin >> a[i][EWAy98xOzZ];
            }
        }
        while (n >= (953 - 951)) {
            for (i = (290 - 290); i < n; i++)
                wrUgK01[i] = 1000;
            for (i = (65 - 65); i < n; i++)
                nXOTq5y3Pwhu[i] = 1000;
            for (i = (206 - 206); i < n; i++) {
                for (EWAy98xOzZ = (591 - 591); EWAy98xOzZ < n; EWAy98xOzZ = EWAy98xOzZ +1) {
                    if (a[i][EWAy98xOzZ] < wrUgK01[i]) {
                        wrUgK01[i] = a[i][EWAy98xOzZ];
                    }
                }
            }
            for (i = (130 - 130); i < n; i++) {
                for (EWAy98xOzZ = (383 - 383); EWAy98xOzZ < n; EWAy98xOzZ++) {
                    a[i][EWAy98xOzZ] -= wrUgK01[i];
                }
            }
            for (EWAy98xOzZ = (371 - 371); n > EWAy98xOzZ; EWAy98xOzZ++) {
                for (i = (768 - 768); n > i; i++) {
                    if (nXOTq5y3Pwhu[EWAy98xOzZ] > a[i][EWAy98xOzZ]) {
                        nXOTq5y3Pwhu[EWAy98xOzZ] = a[i][EWAy98xOzZ];
                    }
                }
            }
            for (EWAy98xOzZ = 0; n > EWAy98xOzZ; EWAy98xOzZ++) {
                for (i = 0; n > i; i++) {
                    a[i][EWAy98xOzZ] -= nXOTq5y3Pwhu[EWAy98xOzZ];
                }
            }
            d += a[(675 - 674)][(182 - 181)];
            for (EWAy98xOzZ = 0; EWAy98xOzZ < n; EWAy98xOzZ++) {
                for (i = (228 - 226); i < n; i++) {
                    a[i - 1][EWAy98xOzZ] = a[i][EWAy98xOzZ];
                }
            }
            for (i = 0; i < n; i++) {
                for (EWAy98xOzZ = (997 - 995); EWAy98xOzZ < n; EWAy98xOzZ++) {
                    a[i][EWAy98xOzZ -1] = a[i][EWAy98xOzZ];
                }
            }
            n--;
        }
        cout << d << endl;
    }
    return 0;
}

