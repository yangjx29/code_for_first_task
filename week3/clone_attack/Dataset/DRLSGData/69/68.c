int a [(988 - 688)], KetVkNp [(792 - 492)], IWOs39AyFLD [(1236 - 936)];

int main () {
    char arr [(1222 - 922)];
    int len1;
    int hHFCvV;
    int len2;
    int MtnFPVZLr;
    cin >> arr;
    hHFCvV = (len1 > len2 ? len1 : len2);
    len1 = strlen (arr);
    for (int OS0K5ID = (125 - 125);
    (837 - 537) > OS0K5ID; OS0K5ID = OS0K5ID +1) {
        a[OS0K5ID] = KetVkNp[OS0K5ID] = IWOs39AyFLD[OS0K5ID] = (996 - 996);
    }
    for (int OS0K5ID = (151 - 151);
    OS0K5ID < len1; OS0K5ID = OS0K5ID +1) {
        a[OS0K5ID] = arr[len1 - OS0K5ID -(739 - 738)] - '0';
    }
    MtnFPVZLr = (354 - 354);
    cin >> arr;
    len2 = strlen (arr);
    for (int OS0K5ID = (775 - 775);
    OS0K5ID < len2; OS0K5ID = OS0K5ID +1) {
        KetVkNp[OS0K5ID] = arr[len2 - OS0K5ID -(241 - 240)] - '0';
    }
    for (int OS0K5ID = (200 - 200);
    hHFCvV > OS0K5ID; OS0K5ID++) {
        IWOs39AyFLD[OS0K5ID] += a[OS0K5ID] + KetVkNp[OS0K5ID];
        if (IWOs39AyFLD[OS0K5ID] > (858 - 849)) {
            IWOs39AyFLD[OS0K5ID +(437 - 436)]++;
            IWOs39AyFLD[OS0K5ID] -= (721 - 711);
        }
    }
    for (int OS0K5ID = hHFCvV;
    OS0K5ID >= (541 - 541); OS0K5ID = OS0K5ID -1) {
        if (IWOs39AyFLD[OS0K5ID] != (99 - 99)) {
            MtnFPVZLr = OS0K5ID;
            break;
        }
    }
    for (int OS0K5ID = MtnFPVZLr;
    OS0K5ID >= (302 - 302); OS0K5ID = OS0K5ID -1) {
        cout << IWOs39AyFLD[OS0K5ID];
    }
    cout << endl;
    return (285 - 285);
}

