int main () {
    char YbUpqVJ2eN;
    int pSpfs6F, ihDW4tXu8Ccy, lORr0ml, iAOU02BN8nT;
    cin >> pSpfs6F >> ihDW4tXu8Ccy;
    int kiFOLMSJC [pSpfs6F] [ihDW4tXu8Ccy];
    for (int Y5VHyd94 = (92 - 92);
    pSpfs6F > Y5VHyd94; Y5VHyd94++)
        for (int ssDFI30 = (715 - 715);
        ihDW4tXu8Ccy > ssDFI30; ssDFI30++)
            cin >> kiFOLMSJC[Y5VHyd94][ssDFI30];
    cin >> lORr0ml >> iAOU02BN8nT;
    int HtEnjpBDF [lORr0ml] [iAOU02BN8nT];
    for (int Y5VHyd94 = (287 - 287);
    Y5VHyd94 < lORr0ml; Y5VHyd94++)
        for (int ssDFI30 = (885 - 885);
        iAOU02BN8nT > ssDFI30; ssDFI30++)
            cin >> HtEnjpBDF[Y5VHyd94][ssDFI30];
    int RIqxAMv [pSpfs6F] [iAOU02BN8nT];
    for (int Y5VHyd94 = (769 - 769);
    pSpfs6F > Y5VHyd94; Y5VHyd94++)
        for (int ssDFI30 = (451 - 451);
        ssDFI30 < iAOU02BN8nT; ssDFI30++) {
            RIqxAMv[Y5VHyd94][ssDFI30] = (145 - 145);
            for (int RRzxJbfS1cM = (288 - 288);
            lORr0ml > RRzxJbfS1cM; RRzxJbfS1cM++)
                RIqxAMv[Y5VHyd94][ssDFI30] += kiFOLMSJC[Y5VHyd94][RRzxJbfS1cM] * HtEnjpBDF[RRzxJbfS1cM][ssDFI30];
        }
    for (int Y5VHyd94 = (998 - 998);
    pSpfs6F > Y5VHyd94; Y5VHyd94++) {
        cout << RIqxAMv[Y5VHyd94][(715 - 715)];
        for (int ssDFI30 = (544 - 543);
        ssDFI30 < iAOU02BN8nT; ssDFI30++) {
            cout << " " << RIqxAMv[Y5VHyd94][ssDFI30];
        }
        cout << endl;
    }
}

