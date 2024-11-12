int main () {
    int h0vBb79;
    int z4f8GgP;
    int C;
    int a, CfXAziK, c;
    a = (z4f8GgP > h0vBb79) + (C == h0vBb79);
    CfXAziK = (h0vBb79 > z4f8GgP) + (h0vBb79 > C);
    c = (C > z4f8GgP) + (z4f8GgP > h0vBb79);
    {
        h0vBb79 = 1;
        while (h0vBb79 < 4) {
            {
                z4f8GgP = 1;
                while (z4f8GgP < 4) {
                    {
                        C = 1;
                        while (C < 4) {
                            C++;
                            if (((h0vBb79 > z4f8GgP && a < CfXAziK) || (h0vBb79 == z4f8GgP && a == CfXAziK) || (h0vBb79 < z4f8GgP && a > CfXAziK)) + ((h0vBb79 > C &&a < c) || (h0vBb79 == C &&a == c) || (h0vBb79 < C &&a > c)) + ((z4f8GgP < C &&CfXAziK > c) || (z4f8GgP > C &&CfXAziK < c) || (z4f8GgP == C &&CfXAziK == c)) == 3) {
                                cout << "BCA";
                            };
                        };
                    }
                    z4f8GgP = z4f8GgP + 1;
                };
            }
            h0vBb79++;
        };
    }
    return 0;
}

