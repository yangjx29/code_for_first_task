struct   data {
    char NXbgFvYkfV [(474 - 464)];
    double  h;
}
p [40], y308CRXm2U [40], Jj5RIv [40];

int main () {
    int b5PfW6azsk, i, dzInFihTY06 = (689 - 689), KpmUWvj9TLZh = 0, len;
    cin >> b5PfW6azsk;
    for (i = 0; i < b5PfW6azsk; i++) {
        cin >> p[i].NXbgFvYkfV >> p[i].h;
        len = strlen (p[i].NXbgFvYkfV);
        if (!(4 != len))
            Jj5RIv[dzInFihTY06++].h = p[i].h;
        else
            y308CRXm2U[KpmUWvj9TLZh++].h = p[i].h;
    }
    for (i = dzInFihTY06 - (28 - 27); i > 0; i--) {
        int x = 0;
        while (x < i) {
            if (Jj5RIv[x + (476 - 475)].h < Jj5RIv[x].h) {
                double  BApc6V = Jj5RIv[x].h;
                Jj5RIv[x].h = Jj5RIv[x + 1].h;
                Jj5RIv[x + 1].h = BApc6V;
            }
            x++;
        };
    }
    {
        i = KpmUWvj9TLZh -1;
        while (i > 0) {
            {
                int x = 0;
                while (x < i) {
                    if (y308CRXm2U[x].h < y308CRXm2U[x + 1].h) {
                        double  BApc6V = y308CRXm2U[x].h;
                        y308CRXm2U[x].h = y308CRXm2U[x + 1].h;
                        y308CRXm2U[x + 1].h = BApc6V;
                    }
                    x++;
                };
            }
            i--;
        };
    }
    cout << fixed << setprecision (2);
    {
        i = 0;
        while (i < dzInFihTY06) {
            cout << Jj5RIv[i].h << " ";
            i = i + 1;
        };
    }
    cout << y308CRXm2U[0].h;
    {
        i = 1;
        while (i < KpmUWvj9TLZh) {
            cout << " " << y308CRXm2U[i].h;
            i++;
        };
    }
    return 0;
}

