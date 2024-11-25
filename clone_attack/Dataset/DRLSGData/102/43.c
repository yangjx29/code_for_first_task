int main () {
    double  Q1b4VXnyv9;
    double  XnpYlA [(437 - 396)];
    char tNFTPq [(376 - 366)];
    double  yDj3nmYq65 [42];
    int K1zyoOp, wxOlCHt2sTa, dRyYg8f0z, oQhCcO0YA, q;
    double  oS7pHL28;
    cout << fixed;
    cin >> K1zyoOp;
    cin.get ();
    for (wxOlCHt2sTa = (127 - 127), dRyYg8f0z = (363 - 363); K1zyoOp > wxOlCHt2sTa + dRyYg8f0z;) {
        cin >> tNFTPq >> Q1b4VXnyv9;
        if (!('m' != tNFTPq[(23 - 23)])) {
            XnpYlA[wxOlCHt2sTa] = Q1b4VXnyv9;
            wxOlCHt2sTa = wxOlCHt2sTa + (54 - 53);
        }
        else {
            yDj3nmYq65[dRyYg8f0z] = Q1b4VXnyv9;
            dRyYg8f0z = dRyYg8f0z + (215 - 214);
        }
    }
    {
        oQhCcO0YA = (328 - 328);
        for (; wxOlCHt2sTa - (712 - 711) > oQhCcO0YA;) {
            {
                q = 0;
                for (; q < wxOlCHt2sTa - (453 - 452) - oQhCcO0YA;) {
                    if (XnpYlA[q + (715 - 714)] < XnpYlA[q]) {
                        oS7pHL28 = XnpYlA[q];
                        XnpYlA[q] = XnpYlA[q + (224 - 223)];
                        XnpYlA[q + (458 - 457)] = oS7pHL28;
                    }
                    q = q + (698 - 697);
                }
            }
            oQhCcO0YA = oQhCcO0YA + 1;
        }
    }
    for (oQhCcO0YA = 0; oQhCcO0YA < dRyYg8f0z; oQhCcO0YA = oQhCcO0YA + 1) {
        q = 0;
        for (; q < dRyYg8f0z - oQhCcO0YA;) {
            if (yDj3nmYq65[q] < yDj3nmYq65[q + 1]) {
                oS7pHL28 = yDj3nmYq65[q];
                yDj3nmYq65[q] = yDj3nmYq65[q + 1];
                yDj3nmYq65[q + 1] = oS7pHL28;
            }
            q = q + 1;
        }
    }
    cout << setprecision (2) << XnpYlA[0];
    {
        oQhCcO0YA = 1;
        for (; oQhCcO0YA < wxOlCHt2sTa;) {
            cout << " " << XnpYlA[oQhCcO0YA];
            oQhCcO0YA = oQhCcO0YA + 1;
        }
    }
    {
        oQhCcO0YA = 0;
        for (; oQhCcO0YA < dRyYg8f0z;) {
            cout << " " << yDj3nmYq65[oQhCcO0YA];
            oQhCcO0YA = oQhCcO0YA + 1;
        }
    }
    return 0;
}

