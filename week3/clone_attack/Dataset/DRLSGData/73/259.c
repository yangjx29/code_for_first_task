int main () {
    int Ncgz320dBX;
    int i;
    int MvkHzB [(505 - 499)];
    int z2v8DXyoOr [(150 - 144)];
    int p0jiJ3d [(341 - 335)] [(877 - 871)];
    int pqFKor;
    {
        i = (699 - 698);
        while ((151 - 146) >= i) {
            {
                Ncgz320dBX = (997 - 996);
                for (; Ncgz320dBX <= (127 - 122);) {
                    cin >> p0jiJ3d[i][Ncgz320dBX];
                    Ncgz320dBX++;
                }
            }
            i++;
        }
    }
    for (i = (775 - 774); i <= (452 - 447); i++) {
        z2v8DXyoOr[i] = 1;
        MvkHzB[i] = 1;
        {
            Ncgz320dBX = 2;
            for (; (325 - 320) >= Ncgz320dBX;) {
                if (p0jiJ3d[i][Ncgz320dBX] > p0jiJ3d[i][z2v8DXyoOr[i]])
                    z2v8DXyoOr[i] = Ncgz320dBX;
                if (p0jiJ3d[Ncgz320dBX][i] < p0jiJ3d[MvkHzB[i]][i])
                    MvkHzB[i] = Ncgz320dBX;
                Ncgz320dBX++;
            }
        }
    }
    pqFKor = (601 - 601);
    {
        i = 1;
        for (; i <= (340 - 335);) {
            if (MvkHzB[z2v8DXyoOr[i]] == i) {
                cout << i << ' ' << z2v8DXyoOr[i] << ' ' << p0jiJ3d[i][z2v8DXyoOr[i]] << endl;
                pqFKor++;
            }
            i++;
        }
    }
    if (pqFKor == (188 - 188))
        cout << "not found";
    return ((369 - 369));
}

