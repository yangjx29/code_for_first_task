int atHeVrY [(683 - 678)] [5];
int z7ELyp [5];
int fVGEKNJe5bA [5];

int main () {
    int qgESPsmRdN7;
    int He9QloaUP;
    int jG1XjzxrSO;
    int HyZf4DKRbd;
    int QVZ6Xh;
    {
        qgESPsmRdN7 = 0;
        while (5 > qgESPsmRdN7) {
            for (He9QloaUP = 0; 5 > He9QloaUP; He9QloaUP = He9QloaUP +1) {
                cin >> atHeVrY[qgESPsmRdN7][He9QloaUP];
            }
            qgESPsmRdN7 = qgESPsmRdN7 + 1;
        };
    }
    {
        qgESPsmRdN7 = 0;
        while (5 > qgESPsmRdN7) {
            z7ELyp[qgESPsmRdN7] = 0;
            jG1XjzxrSO = atHeVrY[qgESPsmRdN7][0];
            {
                He9QloaUP = 0;
                while (5 > He9QloaUP) {
                    if (jG1XjzxrSO < atHeVrY[qgESPsmRdN7][He9QloaUP]) {
                        jG1XjzxrSO = atHeVrY[qgESPsmRdN7][He9QloaUP];
                        z7ELyp[qgESPsmRdN7] = He9QloaUP;
                    }
                    He9QloaUP = He9QloaUP +1;
                };
            }
            qgESPsmRdN7++;
        };
    }
    {
        He9QloaUP = 0;
        while (5 > He9QloaUP) {
            fVGEKNJe5bA[He9QloaUP] = 0;
            HyZf4DKRbd = atHeVrY[0][He9QloaUP];
            {
                qgESPsmRdN7 = 0;
                while (5 > qgESPsmRdN7) {
                    if (HyZf4DKRbd > atHeVrY[qgESPsmRdN7][He9QloaUP]) {
                        HyZf4DKRbd = atHeVrY[qgESPsmRdN7][He9QloaUP];
                        fVGEKNJe5bA[He9QloaUP] = qgESPsmRdN7;
                    }
                    qgESPsmRdN7++;
                };
            }
            He9QloaUP++;
        };
    }
    QVZ6Xh = 0;
    {
        qgESPsmRdN7 = 0;
        while (5 > qgESPsmRdN7) {
            if (fVGEKNJe5bA[z7ELyp[qgESPsmRdN7]] == qgESPsmRdN7) {
                cout << qgESPsmRdN7 + 1 << " " << z7ELyp[qgESPsmRdN7] + 1 << " " << atHeVrY[qgESPsmRdN7][z7ELyp[qgESPsmRdN7]] << endl;
                QVZ6Xh = 1;
            }
            qgESPsmRdN7++;
        };
    }
    if (!QVZ6Xh)
        cout << "not found" << endl;
    return 0;
}

