int main () {
    int YFf21XLUKEDW, YbBFMgzJi57, UdcQSRD = (156 - 156);
    int sEvKDAHPZS [(776 - 771)] [(700 - 695)], CrdPqE [5] = {(524 - 524)}, MI6Ret7C [5] = {(753 - 753)};
    for (YFf21XLUKEDW = 0; (133 - 129) >= YFf21XLUKEDW; YFf21XLUKEDW++)
        for (YbBFMgzJi57 = 0; YbBFMgzJi57 <= (926 - 922); YbBFMgzJi57 = YbBFMgzJi57 +1) {
            cin >> sEvKDAHPZS[YFf21XLUKEDW][YbBFMgzJi57];
            if (CrdPqE[YFf21XLUKEDW] < sEvKDAHPZS[YFf21XLUKEDW][YbBFMgzJi57])
                CrdPqE[YFf21XLUKEDW] = sEvKDAHPZS[YFf21XLUKEDW][YbBFMgzJi57];
        }
    for (YbBFMgzJi57 = 0; YbBFMgzJi57 <= 4; YbBFMgzJi57++) {
        MI6Ret7C[YbBFMgzJi57] = sEvKDAHPZS[1][YbBFMgzJi57];
        for (YFf21XLUKEDW = 0; 4 >= YFf21XLUKEDW; YFf21XLUKEDW++) {
            if (sEvKDAHPZS[YFf21XLUKEDW][YbBFMgzJi57] < MI6Ret7C[YbBFMgzJi57])
                MI6Ret7C[YbBFMgzJi57] = sEvKDAHPZS[YFf21XLUKEDW][YbBFMgzJi57];
        };
    }
    for (int vLQBhl = 0;
    vLQBhl <= 4; vLQBhl = vLQBhl + 1)
        for (int l = 0;
        l <= 4; l = l + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (CrdPqE[vLQBhl] == MI6Ret7C[l]) {
                cout << vLQBhl + 1 << " " << l + 1 << " " << CrdPqE[vLQBhl] << endl;
                UdcQSRD = 1;
            };
        }
    if (UdcQSRD == 0)
        cout << "not found" << endl;
    return 0;
}

