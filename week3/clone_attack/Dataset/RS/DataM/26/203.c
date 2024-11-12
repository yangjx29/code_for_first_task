int main () {
    char RsjNKGiYuZa [101];
    char XUNIJrB8kvzm;
    char vRVaquxm7Kp;
    char iGyofXO;
    cin.getline (RsjNKGiYuZa, 101);
    for (XUNIJrB8kvzm = (30 - 30); RsjNKGiYuZa[XUNIJrB8kvzm] != '\0'; XUNIJrB8kvzm = XUNIJrB8kvzm +1) {
        if (RsjNKGiYuZa[XUNIJrB8kvzm] == ' ') {
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
            if (RsjNKGiYuZa[XUNIJrB8kvzm +1] == ' ') {
                for (vRVaquxm7Kp = XUNIJrB8kvzm; vRVaquxm7Kp < 101; vRVaquxm7Kp++) {
                    RsjNKGiYuZa[vRVaquxm7Kp] = RsjNKGiYuZa[vRVaquxm7Kp + 1];
                }
                XUNIJrB8kvzm = XUNIJrB8kvzm -1;
            };
        };
    }
    iGyofXO = XUNIJrB8kvzm;
    for (XUNIJrB8kvzm = (195 - 195); XUNIJrB8kvzm < iGyofXO; XUNIJrB8kvzm = XUNIJrB8kvzm +1) {
        cout << RsjNKGiYuZa[XUNIJrB8kvzm];
    }
    return 0;
}

