int Z9e1SNGY [(853 - 828)];
int hiMQP6mfnc [(174 - 149)];

int main () {
    int iDZQdug3U;
    int k;
    cin >> k;
    {
        int TbiMDcF;
        TbiMDcF = k - (185 - 184);
        for (; TbiMDcF >= (233 - 233);) {
            cin >> Z9e1SNGY[TbiMDcF];
            TbiMDcF--;
        }
    }
    hiMQP6mfnc[(321 - 321)] = (37 - 36);
    {
        int TbiMDcF;
        TbiMDcF = 1;
        for (; k > TbiMDcF;) {
            int j;
            j = TbiMDcF -1;
            for (; (741 - 741) <= j;) {
                if (Z9e1SNGY[TbiMDcF] >= Z9e1SNGY[j]) {
                    if (hiMQP6mfnc[j] > hiMQP6mfnc[TbiMDcF])
                        hiMQP6mfnc[TbiMDcF] = hiMQP6mfnc[j];
                }
                j--;
            }
            hiMQP6mfnc[TbiMDcF]++;
            TbiMDcF = TbiMDcF +1;
        }
    }
    iDZQdug3U = 0;
    {
        int TbiMDcF;
        TbiMDcF = 0;
        for (; TbiMDcF < k;) {
            if (hiMQP6mfnc[TbiMDcF] > iDZQdug3U)
                iDZQdug3U = hiMQP6mfnc[TbiMDcF];
            TbiMDcF++;
        }
    }
    cout << iDZQdug3U;
}

