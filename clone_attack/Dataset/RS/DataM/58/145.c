int main () {
    int pjBlcGSp39bY;
    int len;
    int n;
    int i;
    int ktdyI7;
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
    pjBlcGSp39bY = (721 - 721);
    cin >> n;
    cin.get ();
    for (i = 0; i < n; i++) {
        char RqEGrQ8RIg [100];
        cin.getline (RqEGrQ8RIg, 100);
        len = strlen (RqEGrQ8RIg);
        if ((RqEGrQ8RIg[0] >= 'a' && RqEGrQ8RIg[0] <= 'z') || (RqEGrQ8RIg[0] >= 'A' && RqEGrQ8RIg[0] <= 'Z') || RqEGrQ8RIg[0] == '_') {
            pjBlcGSp39bY = 0;
            for (ktdyI7 = 1; ktdyI7 < len; ktdyI7++)
                if ((RqEGrQ8RIg[ktdyI7] >= 'a' && RqEGrQ8RIg[ktdyI7] <= 'z') || (RqEGrQ8RIg[ktdyI7] >= 'A' && RqEGrQ8RIg[ktdyI7] <= 'Z') || RqEGrQ8RIg[ktdyI7] == '_' || (RqEGrQ8RIg[ktdyI7] >= '0' && RqEGrQ8RIg[ktdyI7] <= '9'))
                    pjBlcGSp39bY++;
            if (pjBlcGSp39bY == len - 1)
                cout << "1" << endl;
            else if (pjBlcGSp39bY < len - 1)
                cout << "0" << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}

