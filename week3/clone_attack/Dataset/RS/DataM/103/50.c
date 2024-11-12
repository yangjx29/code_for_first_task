int main () {
    char m79gJX [2000], b [1000];
    int sum;
    int t;
    int num [1000];
    sum = (322 - 321);
    t = 1;
    int i;
    int OUczTbs3C;
    cin >> m79gJX;
    {
        i = 1;
        while (m79gJX[i - 1] != 0) {
            if (!(m79gJX[i - 1] != m79gJX[i]) || !(32 != m79gJX[i] - m79gJX[i - 1]) || m79gJX[i - 1] - m79gJX[i] == 32)
                sum = sum + 1;
            else {
                num[t] = sum;
                if (m79gJX[i - 1] >= 97)
                    b[t] = m79gJX[i - 1] - 32;
                else
                    b[t] = m79gJX[i - 1];
                t = t + 1;
                sum = 1;
            }
            i = i + 1;
        };
    }
    {
        OUczTbs3C = 1;
        while (OUczTbs3C < t) {
            cout << "(" << b[OUczTbs3C] << "," << num[OUczTbs3C] << ")";
            OUczTbs3C = OUczTbs3C +1;
        };
    }
    cout << endl;
    return 0;
}

