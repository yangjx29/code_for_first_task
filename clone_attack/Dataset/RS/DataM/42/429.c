int main () {
    int wGrpcwNy [100000];
    int Hfjyi9OV;
    int aPmXaNHL;
    int olxgjXAS2;
    int vV0eE6pQP;
    int lyHhTzBC;
    int RPKlQ49;
    Hfjyi9OV = (366 - 365);
    aPmXaNHL = (371 - 370);
    olxgjXAS2 = (374 - 373);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    vV0eE6pQP = (541 - 541);
    lyHhTzBC = (626 - 626);
    RPKlQ49 = (664 - 664);
    cin >> Hfjyi9OV;
    for (vV0eE6pQP = 0; Hfjyi9OV > vV0eE6pQP; vV0eE6pQP++) {
        cin >> olxgjXAS2;
        wGrpcwNy[vV0eE6pQP] = olxgjXAS2;
    }
    cin >> aPmXaNHL;
    {
        lyHhTzBC = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (Hfjyi9OV > lyHhTzBC) {
            if (!(aPmXaNHL != wGrpcwNy[lyHhTzBC])) {
                for (RPKlQ49 = lyHhTzBC; Hfjyi9OV > RPKlQ49; RPKlQ49++) {
                    wGrpcwNy[RPKlQ49] = wGrpcwNy[RPKlQ49 +1];
                }
                lyHhTzBC--;
                Hfjyi9OV--;
            }
            else
                continue;
            lyHhTzBC = lyHhTzBC + 1;
        };
    }
    cout << wGrpcwNy[0];
    for (vV0eE6pQP = 1; vV0eE6pQP < Hfjyi9OV; vV0eE6pQP++) {
        cout << " " << wGrpcwNy[vV0eE6pQP];
    }
    return 0;
}

