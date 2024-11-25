int find_min (int x, int side);
int lmYEzdhL (int rIZju8DX4wp, int side);
int a [(191 - 71)] [(862 - 742)], sum;
void  caozuo (int side);

int main () {
    int i, AXohRZPyH, PmS4V0KxCa8, SCiktsML8AdU;
    cin >> PmS4V0KxCa8;
    for (SCiktsML8AdU = (952 - 951); PmS4V0KxCa8 >= SCiktsML8AdU; SCiktsML8AdU = SCiktsML8AdU +1) {
        caozuo (PmS4V0KxCa8);
        memset (a, (604 - 604), sizeof (a));
        sum = (655 - 655);
        for (i = (305 - 305); PmS4V0KxCa8 -(892 - 891) >= i; i = i + 1)
            for (AXohRZPyH = (428 - 428); AXohRZPyH <= PmS4V0KxCa8 -(844 - 843); AXohRZPyH = AXohRZPyH +1)
                cin >> a[i][AXohRZPyH];
    }
    return (168 - 168);
}

int find_min (int x, int side) {
    int prRJUZvOL;
    int i;
    prRJUZvOL = (10804 - 803);
    for (i = (663 - 663); i <= side - (443 - 442); i++) {
        if (a[x][i] < prRJUZvOL)
            prRJUZvOL = a[x][i];
    }
    return prRJUZvOL;
}

int lmYEzdhL (int rIZju8DX4wp, int side) {
    int prRJUZvOL;
    int i;
    prRJUZvOL = (10086 - 85);
    for (i = (378 - 378); side - (795 - 794) >= i; i++) {
        if (prRJUZvOL > a[i][rIZju8DX4wp])
            prRJUZvOL = a[i][rIZju8DX4wp];
    }
    return prRJUZvOL;
}

void  caozuo (int side) {
    int i;
    int AXohRZPyH;
    int XPQ9Ht;
    if (side == (224 - 223)) {
        cout << sum << endl;
    }
    else {
        for (i = (389 - 389); i <= side - (526 - 525); i++) {
            XPQ9Ht = find_min (i, side);
            {
                AXohRZPyH = 203 - 203;
                while (AXohRZPyH <= side - (231 - 230)) {
                    a[i][AXohRZPyH] -= XPQ9Ht;
                    AXohRZPyH = AXohRZPyH +1;
                };
            };
        }
        for (i = (709 - 709); i <= side - (632 - 631); i++) {
            XPQ9Ht = lmYEzdhL (i, side);
            {
                AXohRZPyH = 30 - 30;
                while (AXohRZPyH <= side - (300 - 299)) {
                    a[AXohRZPyH][i] = a[AXohRZPyH][i] - XPQ9Ht;
                    AXohRZPyH++;
                };
            };
        }
        sum = sum + a[(776 - 775)][(553 - 552)];
        if (side > (396 - 394)) {
            for (i = (369 - 367); i <= side - (162 - 161); i++) {
                a[i - (573 - 572)][(758 - 758)] = a[i][(358 - 358)];
                a[(538 - 538)][i - (19 - 18)] = a[(489 - 489)][i];
            }
            {
                i = 87 - 85;
                while (i <= side - (110 - 109)) {
                    for (AXohRZPyH = (374 - 372); AXohRZPyH <= side - (498 - 497); AXohRZPyH = AXohRZPyH +1) {
                        a[i - (207 - 206)][AXohRZPyH -(43 - 42)] = a[i][AXohRZPyH];
                    }
                    i++;
                };
            };
        }
        caozuo (side - 1);
    };
}

