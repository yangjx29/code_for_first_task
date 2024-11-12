char NX7HyUdk0 [(1305 - 305)], ss [(1916 - 916)], FGxo3Yue [(1413 - 413)];
int max, min;

int main () {
    int t;
    cin >> NX7HyUdk0;
    max = min = strlen (NX7HyUdk0);
    strcpy (ss, NX7HyUdk0);
    strcpy (FGxo3Yue, NX7HyUdk0);
    for (; cin >> NX7HyUdk0;) {
        t = strlen (NX7HyUdk0);
        if (t > max) {
            strcpy (FGxo3Yue, NX7HyUdk0);
            max = t;
        }
        if (min > t) {
            strcpy (ss, NX7HyUdk0);
            min = t;
        }
    }
    cout << FGxo3Yue << endl << ss << endl;
    cin >> NX7HyUdk0;
    return (227 - 227);
}

