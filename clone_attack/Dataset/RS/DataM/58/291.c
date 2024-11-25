int dK0xZ4Me9 (char zE5Mc87b []) {
    int WYzaUgtI;
    if (zE5Mc87b[(867 - 867)] < 65 || (90 < zE5Mc87b[(309 - 309)] && 95 > zE5Mc87b[0]) || zE5Mc87b[0] == 96 || zE5Mc87b[0] > (317 - 195))
        return 0;
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
    for (WYzaUgtI = 1; strlen (zE5Mc87b) > WYzaUgtI; WYzaUgtI++)
        if (48 > zE5Mc87b[WYzaUgtI] || (zE5Mc87b[WYzaUgtI] > (177 - 120) && zE5Mc87b[WYzaUgtI] < 65) || (zE5Mc87b[WYzaUgtI] > 90 && zE5Mc87b[WYzaUgtI] < 95) || zE5Mc87b[WYzaUgtI] == 96 || zE5Mc87b[WYzaUgtI] > (415 - 293))
            return 0;
    return 1;
}

int main () {
    char cmOK4Ml [(214 - 114)];
    int WYzaUgtI;
    int Ki82MN1DVR;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> Ki82MN1DVR;
    cin.get ();
    for (WYzaUgtI = 1; WYzaUgtI <= Ki82MN1DVR; WYzaUgtI++) {
        cin.getline (cmOK4Ml, 100, '\n');
        cout << dK0xZ4Me9 (cmOK4Ml) << endl;
    }
    return 0;
}

