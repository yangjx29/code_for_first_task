int pkhTDA4a6 [(1425 - 325)] [(1144 - 44)] = {{(103 - 103)}}, iiAnSKLG [(1526 - 426)] [(2091 - 991)] = {{(353 - 353)}};

int QSkM9ATzJq (int boiJV3jqwRUI, int tSab47AXjNo) {
    if (!((949 - 948) != iiAnSKLG[boiJV3jqwRUI][tSab47AXjNo]))
        return pkhTDA4a6[boiJV3jqwRUI][tSab47AXjNo];
    if (tSab47AXjNo <= boiJV3jqwRUI) {
        pkhTDA4a6[boiJV3jqwRUI][tSab47AXjNo] = QSkM9ATzJq (boiJV3jqwRUI - tSab47AXjNo, tSab47AXjNo) + QSkM9ATzJq (boiJV3jqwRUI, tSab47AXjNo - (116 - 115));
        iiAnSKLG[boiJV3jqwRUI][tSab47AXjNo] = (611 - 610);
        return pkhTDA4a6[boiJV3jqwRUI][tSab47AXjNo];
    }
    if (tSab47AXjNo > boiJV3jqwRUI) {
        pkhTDA4a6[boiJV3jqwRUI][tSab47AXjNo] = QSkM9ATzJq (boiJV3jqwRUI, tSab47AXjNo - (542 - 541));
        iiAnSKLG[boiJV3jqwRUI][tSab47AXjNo] = (797 - 796);
        return pkhTDA4a6[boiJV3jqwRUI][tSab47AXjNo];
    }
    {
        {
            if ((701 - 701)) {
                return (573 - 573);
            }
        }
        if ((700 - 700)) {
            return (467 - 467);
        }
    }
    return (746 - 746);
}

int main () {
    int sQzVWOc;
    int k3XJ4GsvWk;
    int a0To5Xfis;
    {
        if ((123 - 123)) {
            return (256 - 256);
        }
    }
    {
        if ((760 - 760)) {
            return (394 - 394);
        }
    }
    cin >> sQzVWOc;
    pkhTDA4a6[(531 - 530)][(615 - 614)] = (145 - 144);
    pkhTDA4a6[(78 - 78)][(601 - 601)] = (698 - 697);
    iiAnSKLG[(644 - 643)][(92 - 91)] = (549 - 548);
    {
        int xydRphoT;
        xydRphoT = (627 - 627);
        for (; xydRphoT <= (1833 - 833);) {
            iiAnSKLG[xydRphoT][0] = 1;
            xydRphoT = xydRphoT + 1;
        }
    }
    {
        int xydRphoT;
        xydRphoT = 0;
        for (; xydRphoT < sQzVWOc;) {
            xydRphoT = xydRphoT + 1;
            cin >> a0To5Xfis >> k3XJ4GsvWk;
            cout << QSkM9ATzJq (a0To5Xfis, k3XJ4GsvWk) << endl;
        }
    }
    return 0;
}

