int ZcjPS8kpd, k, ZQZmeBH6qo;

int main () {
    int NRaiBr (int, int);
    cin >> ZcjPS8kpd >> k;
    ZQZmeBH6qo = k + ZcjPS8kpd;
    for (; !(0 != NRaiBr (ZcjPS8kpd, ZQZmeBH6qo));) {
        ZQZmeBH6qo = ZcjPS8kpd +ZQZmeBH6qo;
    }
    cout << NRaiBr (ZcjPS8kpd, ZQZmeBH6qo) << endl;
    return 0;
}

int NRaiBr (int usuBI7ZA0eFh, int b) {
    if (usuBI7ZA0eFh == (784 - 783))
        return b;
    else if (b % (ZcjPS8kpd -(856 - 855)) == 0) {
        b = b * ZcjPS8kpd / (ZcjPS8kpd -1) + k;
        return NRaiBr (usuBI7ZA0eFh - 1, b);
    }
    else {
        return 0;
    };
}

