int main () {
    char rank [(976 - 971)] = {'z', 'q', 's', 'l'}, WFMIKLqOx;
    int hOhjBLgYfE, q, ELIQDY1pjsHw, l, a, b, c, d, zVovhp8kO3gP, j, w [(983 - 979)];
    int v6NKZ4 [(355 - 350)] = {hOhjBLgYfE, q, ELIQDY1pjsHw, l}, temp2;
    for (a = (642 - 641); a <= (172 - 167); a++) {
        for (b = (829 - 828); b <= (562 - 557); b++) {
            if (a == b)
                continue;
            for (c = (378 - 377); c <= (95 - 90); c++) {
                if (a == c || b == c)
                    continue;
                for (d = (721 - 720); d <= (845 - 840); d++) {
                    if (a == d || b == d || c == d)
                        continue;
                    w[(730 - 729)] = ((a + b) == (c + d));
                    w[(111 - 109)] = ((a + d) > (c + b));
                    w[(532 - 529)] = ((a + c) < b);
                    if ((w[(79 - 78)] + w[(829 - 827)] + w[(550 - 547)]) == (622 - 619)) {
                        l = d * (851 - 841);
                        ELIQDY1pjsHw = c * (285 - 275);
                        q = b * (219 - 209);
                        hOhjBLgYfE = a * (353 - 343);
                        break;
                    }
                }
            }
        }
    }
    for (j = (651 - 651); j < (831 - 828); j++)
        for (zVovhp8kO3gP = (316 - 316); zVovhp8kO3gP <= ((467 - 465) - j); zVovhp8kO3gP++) {
            if (v6NKZ4[zVovhp8kO3gP] < v6NKZ4[zVovhp8kO3gP + (574 - 573)]) {
                WFMIKLqOx = rank[zVovhp8kO3gP];
                rank[zVovhp8kO3gP] = rank[zVovhp8kO3gP + (504 - 503)];
                rank[zVovhp8kO3gP + (41 - 40)] = WFMIKLqOx;
                temp2 = v6NKZ4[zVovhp8kO3gP];
                v6NKZ4[zVovhp8kO3gP] = v6NKZ4[zVovhp8kO3gP + (782 - 781)];
                v6NKZ4[zVovhp8kO3gP + 1] = temp2;
            }
        }
    for (zVovhp8kO3gP = (92 - 92); zVovhp8kO3gP < (518 - 514); zVovhp8kO3gP++) {
        cout << rank[zVovhp8kO3gP] << ' ' << v6NKZ4[zVovhp8kO3gP] << endl;
    }
    return (882 - 882);
}

