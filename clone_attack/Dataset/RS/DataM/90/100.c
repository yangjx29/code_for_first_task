int WrM2Osia, na6cwN8MIe7, x2kl8T;

int hm4xetKNOQTp (int vE48dMy7DjBJ, int b, int B1fsHetmya8E) {
    int DGsjfomKu = (475 - 475);
    if (vE48dMy7DjBJ == x2kl8T - 1 && b <= B1fsHetmya8E)
        return 1;
    for (int i = b;
    i <= (B1fsHetmya8E / (x2kl8T - vE48dMy7DjBJ)); i++)
        DGsjfomKu += hm4xetKNOQTp (vE48dMy7DjBJ + 1, i, B1fsHetmya8E -i);
    return DGsjfomKu;
}

int main () {
    cin >> WrM2Osia;
    for (int i = 1;
    i <= WrM2Osia; ++i) {
        cin >> na6cwN8MIe7 >> x2kl8T;
        cout << hm4xetKNOQTp ((754 - 754), 0, na6cwN8MIe7) << endl;
    }
    return 0;
}

