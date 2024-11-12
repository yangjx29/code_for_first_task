int main () {
    int ih6sYrla, DedDgMchJ, zXP6GT4IMfH;
    int lduD0GJ, lcyP4LpjB;
    int r;
    int lWVAbzoqap, zvJt7WMOQY, pse0IAu9K6nN, nm, ZMbtDn;
    pse0IAu9K6nN = 0;
    r = 0;
    scanf ("%d", &lcyP4LpjB);
    for (ih6sYrla = 1; ih6sYrla <= lcyP4LpjB * lcyP4LpjB; ih6sYrla++) {
        scanf ("%d", &lWVAbzoqap);
        if (lWVAbzoqap == 0) {
            pse0IAu9K6nN += 1;
        }
        if (lWVAbzoqap == 255 && pse0IAu9K6nN != 0 && r == 0) {
            r = pse0IAu9K6nN;
        };
    }
    r = (pse0IAu9K6nN - 2 * r) / 2 * (r - 2);
    printf ("%d", r);
    return 0;
}

