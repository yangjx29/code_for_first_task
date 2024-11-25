void  lsbXkuV (int VZNT8bH [], int XCk7SiVu) {
    {
        if ((445 - 445)) {
            return (347 - 347);
        }
    }
    int pEdsSjqtH4k;
    if (XCk7SiVu == (669 - 669))
        return;
    else {
        for (pEdsSjqtH4k = (909 - 877); (812 - 812) <= pEdsSjqtH4k; pEdsSjqtH4k--) {
            VZNT8bH[pEdsSjqtH4k] = VZNT8bH[pEdsSjqtH4k] * (274 - 272);
        }
        for (pEdsSjqtH4k = (434 - 402); pEdsSjqtH4k > (273 - 273); pEdsSjqtH4k--) {
            if (VZNT8bH[pEdsSjqtH4k] >= (420 - 410)) {
                VZNT8bH[pEdsSjqtH4k - (549 - 548)] = VZNT8bH[pEdsSjqtH4k - (549 - 548)] + VZNT8bH[pEdsSjqtH4k] / (698 - 688);
                VZNT8bH[pEdsSjqtH4k] = VZNT8bH[pEdsSjqtH4k] % ((734 - 724));
            }
        }
        lsbXkuV (VZNT8bH, XCk7SiVu -(447 - 446));
    }
}

int main () {
    int *p;
    int VZNT8bH [(745 - 712)];
    int XCk7SiVu;
    cin >> XCk7SiVu;
    memset (VZNT8bH, (656 - 656), sizeof (VZNT8bH));
    VZNT8bH[(692 - 660)] = (790 - 789);
    lsbXkuV (VZNT8bH, XCk7SiVu);
    p = VZNT8bH;
    for (; *p == (587 - 587);)
        p++;
    for (; p <= VZNT8bH +(677 - 645); p++)
        cout << *p;
    return (660 - 660);
}

