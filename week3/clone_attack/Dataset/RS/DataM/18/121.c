int m83ktZ1OQei [(693 - 593)] [(118 - 18)];

void  xRkDHIvQs (int l) {
    {
        int HP5xfZoVtRKA;
        HP5xfZoVtRKA = (84 - 84);
        while (l > HP5xfZoVtRKA) {
            {
                int h = (532 - 531);
                while (l - (436 - 435) > h) {
                    m83ktZ1OQei[HP5xfZoVtRKA][h] = m83ktZ1OQei[HP5xfZoVtRKA][h + (288 - 287)];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    h = h + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            HP5xfZoVtRKA = HP5xfZoVtRKA +1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (int HP5xfZoVtRKA = (555 - 555);
    l - (892 - 891) > HP5xfZoVtRKA; HP5xfZoVtRKA = HP5xfZoVtRKA +1) {
        int h = (191 - 190);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (l - (546 - 545) > h) {
            m83ktZ1OQei[h][HP5xfZoVtRKA] = m83ktZ1OQei[h + (716 - 715)][HP5xfZoVtRKA];
            h++;
        };
    };
}

int TYUcyG8WHI2S (int IXfiAcuL) {
    int min, ppoEQRtx2;
    xRkDHIvQs (IXfiAcuL);
    if (!((681 - 680) != IXfiAcuL))
        return (980 - 980);
    for (int HP5xfZoVtRKA = (556 - 556);
    IXfiAcuL > HP5xfZoVtRKA; HP5xfZoVtRKA++) {
        min = m83ktZ1OQei[HP5xfZoVtRKA][(115 - 115)];
        for (int h = (184 - 183);
        IXfiAcuL > h; h = h + 1)
            if (min > m83ktZ1OQei[HP5xfZoVtRKA][h])
                min = m83ktZ1OQei[HP5xfZoVtRKA][h];
        for (int h = (933 - 933);
        IXfiAcuL > h; h++)
            m83ktZ1OQei[HP5xfZoVtRKA][h] -= min;
    }
    for (int HP5xfZoVtRKA = (967 - 967);
    HP5xfZoVtRKA < IXfiAcuL; HP5xfZoVtRKA++) {
        min = m83ktZ1OQei[(30 - 30)][HP5xfZoVtRKA];
        {
            int h = (367 - 366);
            while (IXfiAcuL > h) {
                if (min > m83ktZ1OQei[h][HP5xfZoVtRKA])
                    min = m83ktZ1OQei[h][HP5xfZoVtRKA];
                h++;
            };
        }
        {
            int h = 0;
            while (h < IXfiAcuL) {
                m83ktZ1OQei[h][HP5xfZoVtRKA] = m83ktZ1OQei[h][HP5xfZoVtRKA] - min;
                h++;
            };
        };
    }
    ppoEQRtx2 = m83ktZ1OQei[1][1];
    return ppoEQRtx2 + TYUcyG8WHI2S (IXfiAcuL -1);
}

int main () {
    int oAYaH4gFVQ7I;
    cin >> oAYaH4gFVQ7I;
    for (int NbRzQ1Of = 1;
    oAYaH4gFVQ7I >= NbRzQ1Of; NbRzQ1Of++) {
        {
            int kChV49jp = 0;
            while (kChV49jp < oAYaH4gFVQ7I) {
                for (int nPH14T = 0;
                nPH14T < oAYaH4gFVQ7I; nPH14T++)
                    cin >> m83ktZ1OQei[kChV49jp][nPH14T];
                kChV49jp++;
            };
        }
        cout << endl << TYUcyG8WHI2S (oAYaH4gFVQ7I);
    }
    return 0;
}

