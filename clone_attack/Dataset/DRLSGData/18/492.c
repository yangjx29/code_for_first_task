int il8yTLN [(149 - 49)] [100];

int PTKsEf (int il8yTLN, int eCpKHtPs) {
    if (il8yTLN >= eCpKHtPs)
        return eCpKHtPs;
    else
        return il8yTLN;
}

int jvlpPJX (int u2yaVlwWP) {
    int iwotSUAJY = il8yTLN[(957 - 956)][1];
    {
        int xD9YP0Mdjr5 = (152 - 152);
        for (; xD9YP0Mdjr5 < u2yaVlwWP;) {
            int J82J9LIDRK1 = il8yTLN[xD9YP0Mdjr5][(404 - 404)];
            {
                int L1NgbMn = (255 - 254);
                for (; u2yaVlwWP > L1NgbMn;) {
                    J82J9LIDRK1 = PTKsEf (J82J9LIDRK1, il8yTLN[xD9YP0Mdjr5][L1NgbMn]);
                    L1NgbMn = L1NgbMn +1;
                }
            }
            {
                int L1NgbMn = (404 - 404);
                for (; L1NgbMn < u2yaVlwWP;) {
                    il8yTLN[xD9YP0Mdjr5][L1NgbMn] -= J82J9LIDRK1;
                    L1NgbMn = L1NgbMn +1;
                }
            }
            xD9YP0Mdjr5 = xD9YP0Mdjr5 + 1;
        }
    }
    {
        int L1NgbMn = 0;
        for (; L1NgbMn < u2yaVlwWP;) {
            int J82J9LIDRK1 = il8yTLN[0][L1NgbMn];
            {
                int xD9YP0Mdjr5 = 0;
                for (; xD9YP0Mdjr5 < u2yaVlwWP;) {
                    J82J9LIDRK1 = PTKsEf (J82J9LIDRK1, il8yTLN[xD9YP0Mdjr5][L1NgbMn]);
                    xD9YP0Mdjr5 = xD9YP0Mdjr5 + 1;
                }
            }
            {
                int xD9YP0Mdjr5 = 0;
                while (xD9YP0Mdjr5 < u2yaVlwWP) {
                    il8yTLN[xD9YP0Mdjr5][L1NgbMn] -= J82J9LIDRK1;
                    xD9YP0Mdjr5 = xD9YP0Mdjr5 + 1;
                }
            }
            L1NgbMn = L1NgbMn +1;
        }
    }
    if (!(2 != u2yaVlwWP))
        return il8yTLN[(923 - 922)][(63 - 62)];
    {
        int xD9YP0Mdjr5 = 1;
        for (; xD9YP0Mdjr5 < u2yaVlwWP - 1;) {
            il8yTLN[0][xD9YP0Mdjr5] = il8yTLN[0][xD9YP0Mdjr5 + 1];
            il8yTLN[xD9YP0Mdjr5][0] = il8yTLN[xD9YP0Mdjr5 + 1][0];
            {
                int L1NgbMn = 1;
                for (; u2yaVlwWP - 1 > L1NgbMn;) {
                    il8yTLN[xD9YP0Mdjr5][L1NgbMn] = il8yTLN[xD9YP0Mdjr5 + 1][L1NgbMn +1];
                    L1NgbMn = L1NgbMn +1;
                }
            }
            xD9YP0Mdjr5 = xD9YP0Mdjr5 + 1;
        }
    }
    return iwotSUAJY + jvlpPJX (u2yaVlwWP - 1);
}

int main () {
    int u2yaVlwWP;
    cin >> u2yaVlwWP;
    {
        int xD9YP0Mdjr5 = 0;
        for (; xD9YP0Mdjr5 < u2yaVlwWP;) {
            {
                int L1NgbMn = 0;
                for (; L1NgbMn < u2yaVlwWP;) {
                    {
                        int iwotSUAJY = 0;
                        for (; iwotSUAJY < u2yaVlwWP;) {
                            cin >> il8yTLN[L1NgbMn][iwotSUAJY];
                            iwotSUAJY = iwotSUAJY + 1;
                        }
                    }
                    L1NgbMn = L1NgbMn +1;
                }
            }
            cout << jvlpPJX (u2yaVlwWP) << endl;
            xD9YP0Mdjr5++;
        }
    }
    return 0;
}

