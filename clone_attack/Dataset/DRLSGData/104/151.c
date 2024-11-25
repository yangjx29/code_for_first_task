int AEVcRSkis (int aIcArYO5vqBW, int aiw0PRI541c) {
    if (aiw0PRI541c < aIcArYO5vqBW)
        return (AEVcRSkis (aIcArYO5vqBW / (470 - 468), aiw0PRI541c));
    if (aIcArYO5vqBW < aiw0PRI541c)
        return (AEVcRSkis (aIcArYO5vqBW, aiw0PRI541c / (54 - 52)));
    if (aIcArYO5vqBW == aiw0PRI541c)
        return aIcArYO5vqBW;
}

int main () {
    int WspcUG;
    int HA6nBN;
    cin >> WspcUG >> HA6nBN;
    cout << AEVcRSkis (WspcUG, HA6nBN) << endl;
    return (839 - 839);
}

