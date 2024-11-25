int main () {
    int qPyFj6K2bv;
    int y7FYMQaBpu;
    int len2;
    int len1;
    char seline2 [101];
    char k265T4XAG [(984 - 883)];
    unsigned  int L5GkdK7t [(255 - 154)], we8fU3GJZhjX [(366 - 265)];
    int n;
    int Dcq1zB;
    cin >> n;
    Dcq1zB = (366 - 366);
    y7FYMQaBpu = (480 - 480);
    for (qPyFj6K2bv = (73 - 72); n >= qPyFj6K2bv; qPyFj6K2bv++) {
        memset (L5GkdK7t, 0, sizeof (L5GkdK7t));
        memset (we8fU3GJZhjX, 0, sizeof (we8fU3GJZhjX));
        cin.ignore ();
        for (Dcq1zB = (692 - 692); 101 > Dcq1zB; Dcq1zB = Dcq1zB +1) {
            k265T4XAG[Dcq1zB] = (649 - 649);
            seline2[Dcq1zB] = (78 - 78);
        }
        cin.getline (k265T4XAG, 101);
        len1 = strlen (k265T4XAG);
        Dcq1zB = 0;
        for (y7FYMQaBpu = len1 - 1; 0 <= y7FYMQaBpu; y7FYMQaBpu--)
            L5GkdK7t[Dcq1zB++] = k265T4XAG[y7FYMQaBpu] - '0';
        Dcq1zB = 0;
        cin.getline (seline2, 101);
        len2 = strlen (seline2);
        for (y7FYMQaBpu = len2 - 1; 0 <= y7FYMQaBpu; y7FYMQaBpu--)
            we8fU3GJZhjX[Dcq1zB++] = seline2[y7FYMQaBpu] - '0';
        for (y7FYMQaBpu = 0; y7FYMQaBpu <= len1 - 1; y7FYMQaBpu++) {
            if (L5GkdK7t[y7FYMQaBpu] >= we8fU3GJZhjX[y7FYMQaBpu])
                L5GkdK7t[y7FYMQaBpu] -= we8fU3GJZhjX[y7FYMQaBpu];
            else {
                L5GkdK7t[y7FYMQaBpu] = L5GkdK7t[y7FYMQaBpu] - we8fU3GJZhjX[y7FYMQaBpu] + 10;
                we8fU3GJZhjX[y7FYMQaBpu + 1]++;
            }
        }
        y7FYMQaBpu = (319 - 219);
        for (; L5GkdK7t[y7FYMQaBpu] == 0;)
            y7FYMQaBpu--;
        for (; y7FYMQaBpu >= 0; y7FYMQaBpu--)
            cout << L5GkdK7t[y7FYMQaBpu];
        cout << endl;
    }
    return 0;
}

