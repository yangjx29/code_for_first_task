int main () {
    int i;
    char PpJ1uST [(741 - 721)], bb [(88 - 78)], c;
    while (cin >> PpJ1uST >> bb) {
        i = (506 - 506);
        c = PpJ1uST[0];
        while (PpJ1uST[i] != '\0') {
            if (c < PpJ1uST[i])
                c = PpJ1uST[i];
            i++;
        }
        i = 0;
        while (PpJ1uST[i] != '\0') {
            if (!(c != PpJ1uST[i]))
                break;
            cout << PpJ1uST[i];
            i++;
        }
        cout << PpJ1uST[i] << bb;
        i++;
        while (PpJ1uST[i] != '\0') {
            cout << PpJ1uST[i];
            i++;
        }
        cout << endl;
    }
    return 0;
}

