int main () {
    int iykxl0EAgTDh;
    char ZPApsX9yUSI [(446 - 190)], sub_sen [(636 - 380)], cG6fJvkSWZCB [256];
    int length;
    length = strlen (sub_sen);
    char *p;
    cin.getline (ZPApsX9yUSI, 256);
    cin.getline (sub_sen, 256);
    p = strstr (ZPApsX9yUSI, sub_sen);
    if (!p)
        cout << ZPApsX9yUSI << endl;
    cin.getline (cG6fJvkSWZCB, 256);
    if (p) {
        {
            iykxl0EAgTDh = 0;
            while (p - ZPApsX9yUSI > iykxl0EAgTDh) {
                cout << ZPApsX9yUSI[iykxl0EAgTDh];
                iykxl0EAgTDh = iykxl0EAgTDh + 1;
            };
        }
        cout << cG6fJvkSWZCB;
        cout << p + length << endl;
    }
    return 0;
}

