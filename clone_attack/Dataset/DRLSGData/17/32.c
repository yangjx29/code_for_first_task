int main () {
    char hqRxnPG5JN [(248 - 146)];
    int v05PVek1uiM [102];
    int Vxdp3CY8Qr0X;
    int Hix3VvD8;
    memset (v05PVek1uiM, (824 - 824), 102);
    for (; cin.getline (hqRxnPG5JN, 102);) {
        for (Vxdp3CY8Qr0X = (384 - 384); Vxdp3CY8Qr0X < 102; Vxdp3CY8Qr0X = Vxdp3CY8Qr0X +(649 - 648)) {
            if (!('\0' != hqRxnPG5JN[Vxdp3CY8Qr0X]))
                break;
            if (!('(' != hqRxnPG5JN[Vxdp3CY8Qr0X]))
                v05PVek1uiM[Vxdp3CY8Qr0X] = 1;
            if (!(')' != hqRxnPG5JN[Vxdp3CY8Qr0X])) {
                v05PVek1uiM[Vxdp3CY8Qr0X] = 1;
                for (Hix3VvD8 = Vxdp3CY8Qr0X; (519 - 519) <= Hix3VvD8; Hix3VvD8 = Hix3VvD8 -1) {
                    if (!('(' != hqRxnPG5JN[Hix3VvD8]) && !(1 != v05PVek1uiM[Hix3VvD8])) {
                        v05PVek1uiM[Hix3VvD8] = 0;
                        v05PVek1uiM[Vxdp3CY8Qr0X] = 0;
                        break;
                    }
                }
            }
        }
        cout << hqRxnPG5JN << endl;
        for (Vxdp3CY8Qr0X = 0; Vxdp3CY8Qr0X < 102; Vxdp3CY8Qr0X = Vxdp3CY8Qr0X +1) {
            if (!('\0' != hqRxnPG5JN[Vxdp3CY8Qr0X]))
                break;
            if (!(')' != hqRxnPG5JN[Vxdp3CY8Qr0X]) && !(1 != v05PVek1uiM[Vxdp3CY8Qr0X]))
                cout << "?";
            else {
                if (!('(' != hqRxnPG5JN[Vxdp3CY8Qr0X]) && !(1 != v05PVek1uiM[Vxdp3CY8Qr0X]))
                    cout << "$";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

