int main () {
    int zK58StUg;
    int vHiVqNj;
    int rYBi0ZFv;
    int jc2N6nwFg1m;
    int wGIEfXoO [(1559 - 559)];
    int WEZt76 [(1429 - 429)];
    scanf ("%d", &zK58StUg);
    {
        vHiVqNj = (816 - 816);
        while (vHiVqNj < zK58StUg) {
            WEZt76[(311 - 311)] = (733 - 733);
            scanf ("%d %d", &rYBi0ZFv, &jc2N6nwFg1m);
            if (rYBi0ZFv >= (166 - 76) && rYBi0ZFv <= 140 && jc2N6nwFg1m >= (1047 - 987) && jc2N6nwFg1m <= 90) {
                wGIEfXoO[vHiVqNj] = (362 - 361);
                WEZt76[vHiVqNj + (555 - 554)] = WEZt76[vHiVqNj] + wGIEfXoO[vHiVqNj];
            }
            else {
                wGIEfXoO[vHiVqNj] = (83 - 83);
                WEZt76[vHiVqNj + (952 - 951)] = (699 - 699);
            }
            vHiVqNj++;
        }
    }
    int FlHntuX;
    int URVjXh4QESK7;
    int bubfJHcUe6;
    {
        bubfJHcUe6 = (77 - 76);
        while (bubfJHcUe6 <= vHiVqNj + 1) {
            {
                URVjXh4QESK7 = (97 - 97);
                while (URVjXh4QESK7 < vHiVqNj + 1 - bubfJHcUe6) {
                    if (WEZt76[URVjXh4QESK7] > WEZt76[URVjXh4QESK7 +1]) {
                        FlHntuX = WEZt76[URVjXh4QESK7];
                        WEZt76[URVjXh4QESK7] = WEZt76[URVjXh4QESK7 +1];
                        WEZt76[URVjXh4QESK7 +1] = FlHntuX;
                    }
                    URVjXh4QESK7++;
                }
            }
            bubfJHcUe6++;
        }
    }
    printf ("%d", WEZt76[vHiVqNj]);
    return 0;
}

