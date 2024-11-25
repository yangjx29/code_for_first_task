int main () {
    int rQmBk4jLng [100000];
    char uj4NnqA;
    char NK3d5fJ [100000];
    int MUJHhza6ILc, SXVPcMd, vIeHmjgZwDoL, iTdHKkg, gYPkJmboT;
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
    cin >> MUJHhza6ILc;
    cin.get ();
    for (SXVPcMd = (26 - 25); SXVPcMd <= MUJHhza6ILc; SXVPcMd++) {
        for (vIeHmjgZwDoL = 0; vIeHmjgZwDoL < 100000; vIeHmjgZwDoL = vIeHmjgZwDoL + 1)
            rQmBk4jLng[vIeHmjgZwDoL] = 0;
        cin.getline (NK3d5fJ, 100000, '\n');
        for (vIeHmjgZwDoL = 0; NK3d5fJ[vIeHmjgZwDoL + 1] != '\0'; vIeHmjgZwDoL = vIeHmjgZwDoL + 1) {
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
            if (rQmBk4jLng[vIeHmjgZwDoL] == 0) {
                for (iTdHKkg = vIeHmjgZwDoL + 1; NK3d5fJ[iTdHKkg] != '\0'; iTdHKkg = iTdHKkg + 1)
                    if (NK3d5fJ[iTdHKkg] == NK3d5fJ[vIeHmjgZwDoL]) {
                        rQmBk4jLng[iTdHKkg] = 1;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        rQmBk4jLng[vIeHmjgZwDoL] = 1;
                    };
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        gYPkJmboT = 0;
        for (vIeHmjgZwDoL = 0; NK3d5fJ[vIeHmjgZwDoL] != '\0'; vIeHmjgZwDoL++)
            if (rQmBk4jLng[vIeHmjgZwDoL] == 0) {
                cout << NK3d5fJ[vIeHmjgZwDoL] << endl;
                gYPkJmboT = gYPkJmboT + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                break;
            }
        if (gYPkJmboT == 0)
            cout << "no" << endl;
    }
    return 0;
}

