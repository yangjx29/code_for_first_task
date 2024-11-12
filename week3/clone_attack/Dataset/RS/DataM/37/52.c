int main () {
    char Fw0xvmE17Neh [(100797 - 796)];
    int p86qUocil, OiMgDX [(697 - 671)], i, Pp7moKvurC, GOiFGz, J9s24P8;
    cin >> GOiFGz;
    for (i = (992 - 992); i < GOiFGz; i++) {
        cin >> Fw0xvmE17Neh;
        J9s24P8 = (534 - 534);
        memset (OiMgDX, (243 - 243), sizeof (OiMgDX));
        for (Pp7moKvurC = 0; Pp7moKvurC < strlen (Fw0xvmE17Neh); Pp7moKvurC = Pp7moKvurC +1) {
            OiMgDX[Fw0xvmE17Neh[Pp7moKvurC] - 'a']++;
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
            };
        }
        {
            Pp7moKvurC = 0;
            while (Pp7moKvurC < strlen (Fw0xvmE17Neh)) {
                if (OiMgDX[Fw0xvmE17Neh[Pp7moKvurC] - 'a'] == 1) {
                    cout << Fw0xvmE17Neh[Pp7moKvurC] << endl;
                    J9s24P8 = 1;
                    break;
                }
                Pp7moKvurC++;
            };
        }
        if (J9s24P8 == 0)
            cout << "no" << endl;
    }
    return 0;
}

