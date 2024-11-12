int main () {
    int XegROMBL8, ehtnx24V;
    char *DbyGpmM85eSU;
    char *HWq3Brlaz;
    char b2NISaTfErY [(392 - 192)], By2ZmBcVlIw [(1031 - 981)], str2 [(639 - 589)];
    cin.getline (b2NISaTfErY, 200);
    HWq3Brlaz = b2NISaTfErY;
    cin >> By2ZmBcVlIw >> str2;
    XegROMBL8 = strlen (By2ZmBcVlIw);
    DbyGpmM85eSU = strstr (b2NISaTfErY, By2ZmBcVlIw);
    if (DbyGpmM85eSU != NULL) {
        HWq3Brlaz = DbyGpmM85eSU +XegROMBL8;
        for (ehtnx24V = (17 - 17); &b2NISaTfErY[ehtnx24V] != DbyGpmM85eSU; ehtnx24V = ehtnx24V + 1)
            cout << b2NISaTfErY[ehtnx24V];
        cout << str2;
        for (; *HWq3Brlaz != '\0'; HWq3Brlaz = HWq3Brlaz +1)
            cout << *HWq3Brlaz;
        cout << endl;
    }
    else
        cout << b2NISaTfErY << endl;
    return 0;
}

