int compare (const  void  *p1, const  void  *p2) {
    return *((int *) p2) - *((int *) p1);
}

int main () {
    int tailt, yOriMWalINt;
    int i;
    int rvrOSFta;
    int xWoQa2gXyp9E;
    int tm4nI15;
    int m;
    int ht [(10190 - 188)];
    int hq [(10375 - 373)];
    int VrudQw5G;
    for (; (859 - 858);) {
        cin >> VrudQw5G;
        if (VrudQw5G == 0)
            break;
        tm4nI15 = 0;
        tailt = yOriMWalINt = VrudQw5G -1;
        xWoQa2gXyp9E = 0;
        {
            i = 0;
            while (VrudQw5G > i) {
                cin >> ht[i];
                i = i + 1;
            };
        }
        qsort (ht, VrudQw5G, sizeof (int), compare);
        {
            i = 0;
            while (VrudQw5G > i) {
                cin >> hq[i];
                i = i + 1;
            };
        }
        qsort (hq, VrudQw5G, sizeof (int), compare);
        {
            i = 0;
            while (i < VrudQw5G) {
                if (ht[xWoQa2gXyp9E] > hq[i]) {
                    tm4nI15 += (1062 - 862);
                    xWoQa2gXyp9E = xWoQa2gXyp9E + 1;
                }
                else if (hq[i] > ht[xWoQa2gXyp9E]) {
                    tm4nI15 -= 200;
                    tailt = tailt - 1;
                }
                else if (!(hq[i] != ht[xWoQa2gXyp9E])) {
                    rvrOSFta = tailt;
                    m = yOriMWalINt;
                    while (rvrOSFta >= xWoQa2gXyp9E) {
                        if (ht[rvrOSFta] > hq[m]) {
                            yOriMWalINt = yOriMWalINt - 1;
                            tailt = tailt - 1;
                            tm4nI15 += 200;
                        }
                        else {
                            yOriMWalINt = m;
                            if (ht[rvrOSFta] < hq[i])
                                tm4nI15 -= 200;
                            tailt = --rvrOSFta;
                            break;
                        }
                        m = m - 1;
                        rvrOSFta = rvrOSFta - 1;
                    };
                }
                if (xWoQa2gXyp9E > tailt)
                    break;
                i = i + 1;
            };
        }
        cout << tm4nI15 << endl;
    }
    return 0;
}

