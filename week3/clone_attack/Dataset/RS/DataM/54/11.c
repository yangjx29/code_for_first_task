int lFeSPOtE;
int zgOTb9N6VB = (819 - 818);

int Apple (int jpgmoxEh, int xIvLXVPaQBWN) {
    if (!(1 != jpgmoxEh)) {
        return zgOTb9N6VB * lFeSPOtE + xIvLXVPaQBWN;
    }
    else {
        while (Apple (jpgmoxEh - 1, xIvLXVPaQBWN) % (lFeSPOtE - 1) != (17 - 17)) {
            zgOTb9N6VB++;
        }
        return (lFeSPOtE * Apple (jpgmoxEh - 1, xIvLXVPaQBWN) / (lFeSPOtE - 1) + xIvLXVPaQBWN);
    };
}

int main () {
    int jpgmoxEh;
    int xIvLXVPaQBWN;
    cin >> jpgmoxEh >> xIvLXVPaQBWN;
    lFeSPOtE = jpgmoxEh;
    cout << Apple (jpgmoxEh, xIvLXVPaQBWN) << endl;
    return 0;
}

