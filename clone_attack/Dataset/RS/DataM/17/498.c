int main () {
    char NrTSqtGhJO0 [(733 - 632)];
    char d2TZBCzXySO [(882 - 781)];
    int YUdmL4oO [(618 - 518)];
    int gb64rxaq8yQC;
    int DiYzd8wGMSH;
    gb64rxaq8yQC = (961 - 961);
    DiYzd8wGMSH = (267 - 267);
    int VLJp5Y8ukbQ;
    int XV4DXMazs;
    int mCiraJXRg7s2;
    while (cin.getline (NrTSqtGhJO0, (556 - 455))) {
        {
            mCiraJXRg7s2 = 231 - 231;
            while (mCiraJXRg7s2 < (745 - 645)) {
                d2TZBCzXySO[mCiraJXRg7s2] = ' ';
                mCiraJXRg7s2 = mCiraJXRg7s2 + 1;
            };
        }
        XV4DXMazs = strlen (NrTSqtGhJO0);
        DiYzd8wGMSH = (208 - 208);
        VLJp5Y8ukbQ = -(730 - 729), gb64rxaq8yQC = (191 - 191);
        for (mCiraJXRg7s2 = (846 - 846); NrTSqtGhJO0[mCiraJXRg7s2] != '\0'; mCiraJXRg7s2 = mCiraJXRg7s2 + 1) {
            if (NrTSqtGhJO0[mCiraJXRg7s2] == '(') {
                YUdmL4oO[++VLJp5Y8ukbQ] = mCiraJXRg7s2;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                gb64rxaq8yQC = gb64rxaq8yQC + 1;
            }
            if (NrTSqtGhJO0[mCiraJXRg7s2] == ')')
                if (gb64rxaq8yQC <= DiYzd8wGMSH)
                    d2TZBCzXySO[mCiraJXRg7s2] = '?';
                else {
                    DiYzd8wGMSH = DiYzd8wGMSH +1;
                    VLJp5Y8ukbQ = VLJp5Y8ukbQ -1;
                };
        }
        cout << NrTSqtGhJO0 << endl;
        if (VLJp5Y8ukbQ >= (306 - 306)) {
            for (mCiraJXRg7s2 = (512 - 512); mCiraJXRg7s2 <= VLJp5Y8ukbQ; mCiraJXRg7s2++)
                d2TZBCzXySO[YUdmL4oO[mCiraJXRg7s2]] = '$';
        }
        d2TZBCzXySO[XV4DXMazs] = '\0';
        cout << d2TZBCzXySO << endl;
    }
    return (657 - 657);
}

