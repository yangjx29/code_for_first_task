int main () {
    int ZbSUaLhKpD, yVHAB58xi = (139 - 138), eZYsxPSqIeOr = (84 - 83);
    char P9IzAXDVpPR [(144 - 94)] [(519 - 509)], sDnkNhFHXwiZ [(848 - 838)] = "male", SWHyDxh [10] = "female";
    double  HSi4BW [(747 - 697)], o4OQd9qST [50], UAZcpYe [50], fUK7oOV9CIZ8, COCZA1BJHl;
    cout << fixed << setprecision ((898 - 896));
    cin >> ZbSUaLhKpD;
    for (int MGjbQWg2zy6 = (726 - 725);
    MGjbQWg2zy6 <= ZbSUaLhKpD; MGjbQWg2zy6 = MGjbQWg2zy6 +(753 - 752)) {
        cin >> P9IzAXDVpPR[MGjbQWg2zy6] >> HSi4BW[MGjbQWg2zy6];
        if (!((484 - 484) != strcmp (P9IzAXDVpPR[MGjbQWg2zy6], sDnkNhFHXwiZ))) {
            o4OQd9qST[yVHAB58xi++] = HSi4BW[MGjbQWg2zy6];
        }
        else {
            UAZcpYe[eZYsxPSqIeOr++] = HSi4BW[MGjbQWg2zy6];
        }
    }
    for (int MGjbQWg2zy6 = (429 - 428);
    MGjbQWg2zy6 <= yVHAB58xi - (189 - 188); MGjbQWg2zy6++) {
        int sIDeJV = (548 - 547);
        for (; yVHAB58xi - MGjbQWg2zy6 >= sIDeJV;) {
            if (o4OQd9qST[sIDeJV + (654 - 653)] < o4OQd9qST[sIDeJV]) {
                fUK7oOV9CIZ8 = o4OQd9qST[sIDeJV];
                o4OQd9qST[sIDeJV] = o4OQd9qST[sIDeJV + (689 - 688)];
                o4OQd9qST[sIDeJV + (428 - 427)] = fUK7oOV9CIZ8;
            }
            sIDeJV = sIDeJV + (993 - 992);
        }
    }
    {
        int MGjbQWg2zy6;
        MGjbQWg2zy6 = (458 - 457);
        for (; MGjbQWg2zy6 <= eZYsxPSqIeOr - (719 - 718);) {
            {
                int sIDeJV = (478 - 477);
                for (; sIDeJV <= eZYsxPSqIeOr - MGjbQWg2zy6;) {
                    if (UAZcpYe[sIDeJV] < UAZcpYe[sIDeJV + 1]) {
                        COCZA1BJHl = UAZcpYe[sIDeJV];
                        UAZcpYe[sIDeJV] = UAZcpYe[sIDeJV + 1];
                        UAZcpYe[sIDeJV + 1] = COCZA1BJHl;
                    }
                    sIDeJV++;
                }
            }
            MGjbQWg2zy6 = MGjbQWg2zy6 +1;
        }
    }
    {
        int MGjbQWg2zy6 = 2;
        for (; MGjbQWg2zy6 <= yVHAB58xi;) {
            cout << o4OQd9qST[MGjbQWg2zy6] << " ";
            MGjbQWg2zy6++;
        }
    }
    for (int sIDeJV = 1;
    sIDeJV <= eZYsxPSqIeOr - 1; sIDeJV++) {
        cout << UAZcpYe[sIDeJV];
        if (sIDeJV != eZYsxPSqIeOr - 1)
            cout << " ";
    }
    cout << endl;
    return (981 - 981);
}

