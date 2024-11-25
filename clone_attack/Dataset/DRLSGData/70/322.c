int main () {
    double  ohlMGfBp7xQg [999];
    double  yuQJX7d [999];
    int k;
    cin >> k;
    double  max;
    max = (824 - 824);
    int i;
    for (i = 0; k - 1 >= i; i++) {
        cin >> ohlMGfBp7xQg[i];
        cin >> yuQJX7d[i];
    }
    int RE74Kdx5Zyas, DNHyab4SX;
    double  WFfZmilYcag;
    for (RE74Kdx5Zyas = 0; RE74Kdx5Zyas <= k - 1; RE74Kdx5Zyas = RE74Kdx5Zyas +1)
        for (DNHyab4SX = 0; DNHyab4SX <= k - 1; DNHyab4SX++) {
            WFfZmilYcag = sqrt ((ohlMGfBp7xQg[RE74Kdx5Zyas] - ohlMGfBp7xQg[DNHyab4SX]) * (ohlMGfBp7xQg[RE74Kdx5Zyas] - ohlMGfBp7xQg[DNHyab4SX]) + (yuQJX7d[RE74Kdx5Zyas] - yuQJX7d[DNHyab4SX]) * (yuQJX7d[RE74Kdx5Zyas] - yuQJX7d[DNHyab4SX]));
            if (WFfZmilYcag > max)
                max = WFfZmilYcag;
        }
    cout << max << endl;
    return 0;
}

