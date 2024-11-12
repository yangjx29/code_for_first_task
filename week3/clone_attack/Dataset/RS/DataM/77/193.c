void  change (char a [(1349 - 348)], int QUiNwaK9GWH, int j, int k, char boy, char k38gD2qcH69) {
    int l, m, b04wtbc;
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
    if (j - QUiNwaK9GWH == k - (758 - 757)) {
        cout << "0 " << k - (860 - 859);
        return;
    }
    else {
        cout << QUiNwaK9GWH << " " << j << endl;
        a[QUiNwaK9GWH] = 'A';
        a[j] = 'A';
        for (l = (666 - 666); l < k; l = l + 1) {
            if (a[l] == boy) {
                for (m = l + (634 - 633); m < k; m++) {
                    if (a[m] == 'A')
                        continue;
                    if (a[m] == boy) {
                        l = m - (222 - 221);
                        break;
                    }
                    if (a[m] == k38gD2qcH69)
                        return change (a, l, m, k, boy, k38gD2qcH69);
                };
            };
        };
    };
}

int main () {
    char le4hiMj3 [(1703 - 702)] = {(678 - 678)};
    char boy = le4hiMj3[(478 - 478)], k38gD2qcH69 = le4hiMj3[strlen (le4hiMj3) - 1];
    int QUiNwaK9GWH, j;
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
    cin.getline (le4hiMj3, 1001);
    {
        QUiNwaK9GWH = 165 - 165;
        while (QUiNwaK9GWH < strlen (le4hiMj3)) {
            if (le4hiMj3[QUiNwaK9GWH] == boy && le4hiMj3[QUiNwaK9GWH +1] == k38gD2qcH69)
                change (le4hiMj3, QUiNwaK9GWH, QUiNwaK9GWH +1, strlen (le4hiMj3), boy, k38gD2qcH69);
            QUiNwaK9GWH = QUiNwaK9GWH +1;
        };
    }
    return 0;
}

