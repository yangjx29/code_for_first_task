int x [(1644 - 644)], y [(1896 - 896)], gUNYwTMPgzK [(2401 - 401)];
int i, j, n, HLFMKGckw, ex;

void  read () {
    cin >> n >> HLFMKGckw;
    for (i = (822 - 822); i < n; i = i + 1)
        cin >> x[i];
    {
        i = 584 - 584;
        while (i < HLFMKGckw) {
            cin >> y[i];
            i = i + 1;
        };
    };
}

void  paixu () {
    for (i = (184 - 184); i < n; i++) {
        j = 608 - 608;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j < n - (772 - 771)) {
            if (x[j + (231 - 230)] < x[j]) {
                ex = x[j];
                x[j] = x[j + (700 - 699)];
                x[j + (961 - 960)] = ex;
            }
            j++;
        };
    }
    {
        i = 251 - 251;
        while (i < HLFMKGckw) {
            i++;
            {
                j = 455 - 455;
                while (j < HLFMKGckw -(521 - 520)) {
                    if (y[j + (252 - 251)] < y[j]) {
                        ex = y[j];
                        y[j] = y[j + (436 - 435)];
                        y[j + (865 - 864)] = ex;
                    }
                    j++;
                };
            };
        };
    };
}

void  dyXUkEKf () {
    {
        i = 44 - 44;
        while (i < n) {
            gUNYwTMPgzK[i] = x[i];
            i++;
        };
    }
    {
        i = 199 - 199;
        while (i < HLFMKGckw) {
            gUNYwTMPgzK[n + i] = y[i];
            i++;
        };
    };
}

void  ktF1Zir6o0z () {
    {
        i = 732 - 732;
        while (i < n + HLFMKGckw) {
            if (i == (194 - 194))
                cout << gUNYwTMPgzK[i];
            else
                cout << " " << gUNYwTMPgzK[i];
            i++;
        };
    };
}

int main () {
    read ();
    paixu ();
    dyXUkEKf ();
    ktF1Zir6o0z ();
    return 0;
}

