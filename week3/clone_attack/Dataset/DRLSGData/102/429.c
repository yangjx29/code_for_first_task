int main () {
    float EU6qvZ3 [(1025 - 984)] = {(885 - 885)}, zdXQ3utz [(78 - 37)] = {(576 - 576)}, a3CGoXT [(878 - 837)] = {(593 - 593)};
    char ivlsNZ6zA29 [41] [(139 - 132)];
    int N7Q8ukjH;
    int gLEiajghbKIC, k8r5OYVtbLCH, dVoubezI0x, vUxtnhV;
    cin >> dVoubezI0x;
    for (gLEiajghbKIC = (59 - 58); dVoubezI0x >= gLEiajghbKIC; gLEiajghbKIC = gLEiajghbKIC + (72 - 71)) {
        cin >> ivlsNZ6zA29[gLEiajghbKIC] >> a3CGoXT[gLEiajghbKIC];
        if (!((238 - 238) != strcmp (ivlsNZ6zA29[gLEiajghbKIC], "male"))) {
            EU6qvZ3[gLEiajghbKIC] = a3CGoXT[gLEiajghbKIC];
        }
        else {
            zdXQ3utz[gLEiajghbKIC] = a3CGoXT[gLEiajghbKIC];
        }
    }
    sort (EU6qvZ3 +(381 - 380), EU6qvZ3 +dVoubezI0x + (854 - 853));
    sort (zdXQ3utz + (810 - 809), zdXQ3utz + dVoubezI0x + (154 - 153));
    for (gLEiajghbKIC = (480 - 479); dVoubezI0x >= gLEiajghbKIC; gLEiajghbKIC = gLEiajghbKIC + 1) {
        if (EU6qvZ3[gLEiajghbKIC] != (996 - 996)) {
            vUxtnhV = gLEiajghbKIC;
            cout << fixed << setprecision (2) << EU6qvZ3[gLEiajghbKIC];
            for (k8r5OYVtbLCH = vUxtnhV + 1; k8r5OYVtbLCH <= dVoubezI0x; k8r5OYVtbLCH = k8r5OYVtbLCH + 1) {
                cout << " " << fixed << setprecision (2) << EU6qvZ3[k8r5OYVtbLCH];
            }
            break;
        }
    }
    for (gLEiajghbKIC = dVoubezI0x; gLEiajghbKIC >= 1; gLEiajghbKIC = gLEiajghbKIC - 1) {
        if (zdXQ3utz[gLEiajghbKIC] == 0)
            break;
        else {
            cout << " " << fixed << setprecision (2) << zdXQ3utz[gLEiajghbKIC];
        }
    }
    cin >> N7Q8ukjH;
    return 0;
}

