int dX3TzZ01i (int tDNWXY, int TGnNdl8A) {
    int vBzg4sLt = 0;
    if (!(TGnNdl8A != tDNWXY))
        return (392 - 391);
    if (!((867 - 867) == tDNWXY % TGnNdl8A))
        return 0;
    {
        int i;
        i = TGnNdl8A;
        while (i <= tDNWXY / TGnNdl8A) {
            vBzg4sLt += dX3TzZ01i (tDNWXY / TGnNdl8A, i);
            i = i + 1;
        };
    }
    return vBzg4sLt;
}

int main () {
    int TGnNdl8A, tDNWXY, fdc4PpbYX;
    int i, eUdMNyP, k;
    cin >> TGnNdl8A;
    {
        i = 1;
        while (i <= TGnNdl8A) {
            int oPb03lY = 0;
            i++;
            cin >> tDNWXY;
            {
                eUdMNyP = 2;
                while (eUdMNyP <= tDNWXY) {
                    oPb03lY += dX3TzZ01i (tDNWXY, eUdMNyP);
                    eUdMNyP++;
                };
            }
            cout << oPb03lY << endl;
        };
    }
    return 0;
}

