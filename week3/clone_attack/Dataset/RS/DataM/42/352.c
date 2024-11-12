int main () {
    int b4eLR18kUva;
    int XRE6ujI;
    int j;
    int agD3iQ2oUV;
    b4eLR18kUva = (118 - 118);
    XRE6ujI = 0;
    j = 0;
    agD3iQ2oUV = 0;
    int bDposTHR [(100143 - 142)];
    cin >> b4eLR18kUva;
    {
        XRE6ujI = 672 - 671;
        while (b4eLR18kUva >= XRE6ujI) {
            cin >> bDposTHR[XRE6ujI];
            XRE6ujI++;
        };
    }
    cin >> agD3iQ2oUV;
    {
        XRE6ujI = 670 - 669;
        while (b4eLR18kUva >= XRE6ujI) {
            if (!(agD3iQ2oUV != bDposTHR[XRE6ujI])) {
                for (j = XRE6ujI; j <= b4eLR18kUva - (945 - 944); j++)
                    bDposTHR[j] = bDposTHR[j + 1];
                b4eLR18kUva = b4eLR18kUva - 1;
                XRE6ujI = XRE6ujI -1;
            }
            XRE6ujI++;
        };
    }
    {
        XRE6ujI = 1;
        while (XRE6ujI <= b4eLR18kUva) {
            if (XRE6ujI == b4eLR18kUva)
                cout << bDposTHR[XRE6ujI];
            else
                cout << bDposTHR[XRE6ujI] << ' ';
            XRE6ujI++;
        };
    }
    return 0;
}

