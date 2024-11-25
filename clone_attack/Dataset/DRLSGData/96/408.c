int main () {
    int ans [102] = {0};
    int b [102] = {0};
    char o2bBWcnQyK0 [(658 - 556)];
    int flag;
    int WxFvPnCEoI;
    int Glb7tzJF;
    int r;
    int len;
    flag = (95 - 95);
    cin.getline (o2bBWcnQyK0, 100);
    len = strlen (o2bBWcnQyK0);
    for (WxFvPnCEoI = 0; WxFvPnCEoI < len; WxFvPnCEoI = WxFvPnCEoI +(728 - 727)) {
        b[WxFvPnCEoI +(835 - 834)] = o2bBWcnQyK0[WxFvPnCEoI] - '0';
    }
    if (!('\0' != o2bBWcnQyK0[1])) {
        cout << "0" << endl;
        cout << b[1] << endl;
    }
    else if (o2bBWcnQyK0[1] != '\0' && !('\0' != o2bBWcnQyK0[(853 - 851)]) && b[1] * 10 + b[(516 - 514)] < (372 - 359)) {
        cout << "0" << endl;
        cout << b[1] * 10 + b[2] << endl;
    }
    else {
        ans[1] = (b[1] * 10 + b[2]) / 13;
        r = (b[1] * 10 + b[2]) % 13;
        for (WxFvPnCEoI = 2; WxFvPnCEoI < len; WxFvPnCEoI = WxFvPnCEoI +1) {
            ans[WxFvPnCEoI] = (r * 10 + b[WxFvPnCEoI +1]) / 13;
            r = (r * 10 + b[WxFvPnCEoI +1]) % 13;
        }
        for (WxFvPnCEoI = 1; WxFvPnCEoI < len; WxFvPnCEoI++) {
            if (ans[1] == 0 && flag == 0) {
                flag = 1;
                continue;
            }
            cout << ans[WxFvPnCEoI];
        }
        cout << endl;
        cout << r << endl;
    }
    return 0;
}

