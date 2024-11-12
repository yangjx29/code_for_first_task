int main () {
    int DglXJ03IPWjE [100] [100];
    int ZCPjnS2;
    int Txw3LKgfUV91;
    int TEFTGLIZPKcV;
    int hXu8DUmN;
    cin >> TEFTGLIZPKcV >> Txw3LKgfUV91;
    {
        ZCPjnS2 = 1;
        while (TEFTGLIZPKcV >= ZCPjnS2) {
            {
                hXu8DUmN = 1;
                for (; hXu8DUmN <= Txw3LKgfUV91;) {
                    cin >> DglXJ03IPWjE[ZCPjnS2][hXu8DUmN];
                    hXu8DUmN = hXu8DUmN + 1;
                }
            }
            ZCPjnS2 = ZCPjnS2 +1;
        }
    }
    {
        ZCPjnS2 = 2;
        while (ZCPjnS2 <= TEFTGLIZPKcV +Txw3LKgfUV91) {
            ZCPjnS2 = ZCPjnS2 +1;
            {
                hXu8DUmN = 1;
                while (hXu8DUmN <= ZCPjnS2 -1) {
                    if ((hXu8DUmN <= TEFTGLIZPKcV) && (ZCPjnS2 -hXu8DUmN <= Txw3LKgfUV91))
                        cout << DglXJ03IPWjE[hXu8DUmN][ZCPjnS2 -hXu8DUmN] << endl;
                    hXu8DUmN = hXu8DUmN + 1;
                }
            }
        }
    }
    return 0;
}

