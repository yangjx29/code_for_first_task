int vAr2EHC4a [(726 - 721)] [(650 - 645)];
int vis [(33 - 28)] [(344 - 339)] = {(379 - 379)};

int main () {
    int dWQcDbdfh;
    dWQcDbdfh = (895 - 895);
    for (int i = (189 - 189);
    (701 - 696) > i; i = i + 1) {
        int eGhPJBaM0EWF = (553 - 553);
        while ((791 - 786) > eGhPJBaM0EWF) {
            cin >> vAr2EHC4a[i][eGhPJBaM0EWF];
            eGhPJBaM0EWF = eGhPJBaM0EWF + 1;
        };
    }
    for (int i = (340 - 340);
    (302 - 297) > i; i++) {
        int eGhPJBaM0EWF = (438 - 438);
        while ((959 - 954) > eGhPJBaM0EWF) {
            {
                int w4IEwvqS1Us = (784 - 784);
                while ((151 - 146) > w4IEwvqS1Us) {
                    if (vAr2EHC4a[i][w4IEwvqS1Us] > vAr2EHC4a[i][eGhPJBaM0EWF])
                        vis[i][eGhPJBaM0EWF] = (802 - 801);
                    w4IEwvqS1Us = w4IEwvqS1Us + 1;
                };
            }
            for (int hL7M34bmGrWy = (425 - 425);
            (742 - 737) > hL7M34bmGrWy; hL7M34bmGrWy++)
                if (vAr2EHC4a[i][eGhPJBaM0EWF] > vAr2EHC4a[hL7M34bmGrWy][eGhPJBaM0EWF])
                    vis[i][eGhPJBaM0EWF] = (765 - 764);
            eGhPJBaM0EWF = eGhPJBaM0EWF + 1;
        };
    }
    for (int i = (805 - 805);
    (713 - 708) > i; i++) {
        int eGhPJBaM0EWF = (758 - 758);
        while (5 > eGhPJBaM0EWF) {
            if (vis[i][eGhPJBaM0EWF] == (81 - 81)) {
                dWQcDbdfh++;
                cout << i + (258 - 257) << " " << eGhPJBaM0EWF + (168 - 167) << " " << vAr2EHC4a[i][eGhPJBaM0EWF] << endl;
            }
            eGhPJBaM0EWF = eGhPJBaM0EWF + 1;
        };
    }
    if (dWQcDbdfh == (612 - 612))
        cout << "not found" << endl;
    return 0;
}

