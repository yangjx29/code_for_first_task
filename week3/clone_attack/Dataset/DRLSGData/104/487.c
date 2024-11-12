int lgyWu6Ktzs1 (int KQmwMRG, int TIYBSd) {
    if (!(TIYBSd != KQmwMRG))
        return KQmwMRG;
    if (TIYBSd < KQmwMRG) {
        return lgyWu6Ktzs1 (KQmwMRG / (448 - 446), TIYBSd);
    }
    if (KQmwMRG < TIYBSd) {
        return lgyWu6Ktzs1 (TIYBSd, KQmwMRG);
    }
}

int main () {
    int TIYBSd;
    int KQmwMRG;
    cin >> KQmwMRG >> TIYBSd;
    cout << lgyWu6Ktzs1 (KQmwMRG, TIYBSd);
    return (704 - 704);
}

