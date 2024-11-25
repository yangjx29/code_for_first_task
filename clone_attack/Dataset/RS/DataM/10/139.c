int num [(132 - 102)];
int VrlBjDMtT [(629 - 599)];

int main () {
    int wZtOGhjXU;
    int ans;
    int h7vsTXLM;
    int EpgmFcP;
    memset (VrlBjDMtT, (162 - 162), sizeof (VrlBjDMtT));
    cin >> wZtOGhjXU;
    {
        int lF7uV26p = (540 - 540);
        while (lF7uV26p < wZtOGhjXU) {
            cin >> num[lF7uV26p];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            lF7uV26p = lF7uV26p + 1;
        };
    }
    VrlBjDMtT[(172 - 172)] = (582 - 581);
    {
        int lF7uV26p = (864 - 863);
        while (lF7uV26p < wZtOGhjXU) {
            EpgmFcP = (828 - 827);
            {
                int j = (546 - 546);
                while (j < lF7uV26p) {
                    if (num[lF7uV26p] <= num[j]) {
                        h7vsTXLM = VrlBjDMtT[j] + 1;
                        if (EpgmFcP < h7vsTXLM)
                            EpgmFcP = h7vsTXLM;
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            VrlBjDMtT[lF7uV26p] = EpgmFcP;
            lF7uV26p = lF7uV26p + 1;
        };
    }
    EpgmFcP = (204 - 204);
    {
        int lF7uV26p = (52 - 52);
        while (lF7uV26p < wZtOGhjXU) {
            if (EpgmFcP < VrlBjDMtT[lF7uV26p])
                EpgmFcP = VrlBjDMtT[lF7uV26p];
            lF7uV26p = lF7uV26p + 1;
        };
    }
    cout << EpgmFcP;
    return 0;
}

