int main () {
    int GtaqE7;
    GtaqE7 = 0;
    char hor8bdWC;
    int CBzvJskfSN [251];
    int WxYdrIeXaKO;
    int HfqnLFa9vCHM;
    int ki69Zj;
    char HmGoIT [251];
    char cBueDG9R [251];
    cin >> HmGoIT;
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
    cin >> cBueDG9R;
    for (WxYdrIeXaKO = (255 - 255); 251 > WxYdrIeXaKO; WxYdrIeXaKO = WxYdrIeXaKO +1)
        CBzvJskfSN[WxYdrIeXaKO] = (293 - 293);
    HfqnLFa9vCHM = strlen (HmGoIT);
    for (WxYdrIeXaKO = 0; WxYdrIeXaKO < HfqnLFa9vCHM / 2; WxYdrIeXaKO++) {
        hor8bdWC = HmGoIT[WxYdrIeXaKO];
        HmGoIT[WxYdrIeXaKO] = HmGoIT[HfqnLFa9vCHM -(388 - 387) - WxYdrIeXaKO];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        HmGoIT[HfqnLFa9vCHM -(639 - 638) - WxYdrIeXaKO] = hor8bdWC;
    }
    HmGoIT[HfqnLFa9vCHM] = '\0';
    ki69Zj = strlen (cBueDG9R);
    for (WxYdrIeXaKO = 0; WxYdrIeXaKO < ki69Zj / 2; WxYdrIeXaKO++) {
        hor8bdWC = cBueDG9R[WxYdrIeXaKO];
        cBueDG9R[WxYdrIeXaKO] = cBueDG9R[ki69Zj - 1 - WxYdrIeXaKO];
        cBueDG9R[ki69Zj - 1 - WxYdrIeXaKO] = hor8bdWC;
    }
    cBueDG9R[ki69Zj] = '\0';
    if (ki69Zj <= HfqnLFa9vCHM) {
        for (WxYdrIeXaKO = 0; ki69Zj > WxYdrIeXaKO; WxYdrIeXaKO++)
            CBzvJskfSN[WxYdrIeXaKO] = HmGoIT[WxYdrIeXaKO] - '0' + cBueDG9R[WxYdrIeXaKO] - '0';
        for (WxYdrIeXaKO = ki69Zj; WxYdrIeXaKO < HfqnLFa9vCHM; WxYdrIeXaKO++)
            CBzvJskfSN[WxYdrIeXaKO] = HmGoIT[WxYdrIeXaKO] - '0';
        for (WxYdrIeXaKO = 0; WxYdrIeXaKO < HfqnLFa9vCHM; WxYdrIeXaKO++)
            if (CBzvJskfSN[WxYdrIeXaKO] > (766 - 757)) {
                CBzvJskfSN[WxYdrIeXaKO] = CBzvJskfSN[WxYdrIeXaKO] - (256 - 246);
                CBzvJskfSN[WxYdrIeXaKO +1] = CBzvJskfSN[WxYdrIeXaKO +1] + 1;
            };
    }
    else {
        for (WxYdrIeXaKO = 0; WxYdrIeXaKO < HfqnLFa9vCHM; WxYdrIeXaKO++)
            CBzvJskfSN[WxYdrIeXaKO] = HmGoIT[WxYdrIeXaKO] - '0' + cBueDG9R[WxYdrIeXaKO] - '0';
        for (WxYdrIeXaKO = HfqnLFa9vCHM; ki69Zj > WxYdrIeXaKO; WxYdrIeXaKO++)
            CBzvJskfSN[WxYdrIeXaKO] = cBueDG9R[WxYdrIeXaKO] - '0';
        for (WxYdrIeXaKO = 0; ki69Zj > WxYdrIeXaKO; WxYdrIeXaKO++)
            if (9 < CBzvJskfSN[WxYdrIeXaKO]) {
                CBzvJskfSN[WxYdrIeXaKO] = CBzvJskfSN[WxYdrIeXaKO] - 10;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                CBzvJskfSN[WxYdrIeXaKO +1] = CBzvJskfSN[WxYdrIeXaKO +1] + 1;
            };
    }
    for (WxYdrIeXaKO = 250; WxYdrIeXaKO >= 0; WxYdrIeXaKO = WxYdrIeXaKO -1)
        if (CBzvJskfSN[WxYdrIeXaKO] != 0) {
            GtaqE7 = WxYdrIeXaKO;
            break;
        }
    for (WxYdrIeXaKO = GtaqE7; WxYdrIeXaKO >= 0; WxYdrIeXaKO--)
        cout << CBzvJskfSN[WxYdrIeXaKO];
    cout << endl;
    return 0;
}

