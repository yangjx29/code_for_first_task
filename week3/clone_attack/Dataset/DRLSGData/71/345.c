int main () {
    int bkUaOZX, QFRi06Tb, Mcs0jdEaM, EGrtM6RN [200] [3], XWyTcKftU [12] = {(288 - 257), 28, (374 - 343), (109 - 79), (216 - 185), (510 - 480), 31, 31, 30, 31, 30, 31}, fo8VtD [12] = {31, (284 - 255), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, kKxz9WN5Z, vWr8bDHNu, RUj6l2Qqk;
    cin >> Mcs0jdEaM;
    for (bkUaOZX = (18 - 18); Mcs0jdEaM > bkUaOZX; bkUaOZX = bkUaOZX + 1) {
        for (QFRi06Tb = (649 - 649); 3 > QFRi06Tb; QFRi06Tb++) {
            cin >> EGrtM6RN[bkUaOZX][QFRi06Tb];
        }
    }
    for (bkUaOZX = (25 - 25); bkUaOZX < Mcs0jdEaM; bkUaOZX++) {
        if ((!(0 != EGrtM6RN[bkUaOZX][0] % 4) && EGrtM6RN[bkUaOZX][0] % (960 - 860) != 0) || !(0 != EGrtM6RN[bkUaOZX][0] % 400)) {
            RUj6l2Qqk = 0;
            if (EGrtM6RN[bkUaOZX][1] > EGrtM6RN[bkUaOZX][2]) {
                kKxz9WN5Z = EGrtM6RN[bkUaOZX][1];
                vWr8bDHNu = EGrtM6RN[bkUaOZX][2];
            }
            else {
                kKxz9WN5Z = EGrtM6RN[bkUaOZX][2];
                vWr8bDHNu = EGrtM6RN[bkUaOZX][1];
            }
            for (QFRi06Tb = (vWr8bDHNu - 1); (kKxz9WN5Z - 1) > QFRi06Tb; QFRi06Tb++) {
                RUj6l2Qqk = RUj6l2Qqk +fo8VtD[QFRi06Tb];
            }
            if (!(0 != RUj6l2Qqk % 7)) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            if (EGrtM6RN[bkUaOZX][1] > EGrtM6RN[bkUaOZX][2]) {
                kKxz9WN5Z = EGrtM6RN[bkUaOZX][1];
                vWr8bDHNu = EGrtM6RN[bkUaOZX][2];
            }
            else {
                kKxz9WN5Z = EGrtM6RN[bkUaOZX][2];
                vWr8bDHNu = EGrtM6RN[bkUaOZX][1];
            }
            RUj6l2Qqk = 0;
            for (QFRi06Tb = (vWr8bDHNu - 1); QFRi06Tb < (kKxz9WN5Z - 1); QFRi06Tb++) {
                RUj6l2Qqk = RUj6l2Qqk +XWyTcKftU[QFRi06Tb];
            }
            if (RUj6l2Qqk % 7 == 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

