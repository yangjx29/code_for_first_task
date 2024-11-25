int main () {
    int hxBzaIHW = 0, xj0LMa9 = 0;
    char B9CSufANFUh;
    int u3hTD5KuW94R;
    int UEg2qpmdMFB [1001] = {0};
    int N7DlkYiU, cnt = 0;
    for (; 1;) {
        cnt = cnt + 1;
        cin >> N7DlkYiU;
        if (!(',' == cin.get ()))
            break;
        UEg2qpmdMFB[N7DlkYiU]++;
    }
    for (u3hTD5KuW94R = 0; cnt > u3hTD5KuW94R; u3hTD5KuW94R++) {
        cin >> N7DlkYiU >> B9CSufANFUh;
        UEg2qpmdMFB[N7DlkYiU]--;
    }
    for (u3hTD5KuW94R = 0; u3hTD5KuW94R < 1001; ++u3hTD5KuW94R) {
        hxBzaIHW = hxBzaIHW + UEg2qpmdMFB[u3hTD5KuW94R];
        if (hxBzaIHW > xj0LMa9)
            xj0LMa9 = hxBzaIHW;
    }
    cout << cnt << ' ' << xj0LMa9 << endl;
    return 0;
}

