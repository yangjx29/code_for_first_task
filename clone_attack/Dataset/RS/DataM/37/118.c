int main () {
    char sentence [(100572 - 572)];
    int vMBIOEN18cRa;
    int tbRzPI;
    int DO9dbyV;
    int tvjVz0p2FRb [(600 - 574)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> vMBIOEN18cRa;
    while (vMBIOEN18cRa = vMBIOEN18cRa - 1) {
        cin >> sentence;
        DO9dbyV = strlen (sentence);
        {
            tbRzPI = 0;
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
            while (tbRzPI <= (244 - 219)) {
                tvjVz0p2FRb[tbRzPI] = 0;
                tbRzPI = tbRzPI + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (tbRzPI = 0; tbRzPI <= DO9dbyV -(861 - 860); tbRzPI = tbRzPI + 1)
            tvjVz0p2FRb[(int) (sentence[tbRzPI] - 'a')]++;
        for (tbRzPI = 0; tbRzPI <= DO9dbyV -1; tbRzPI = tbRzPI + 1) {
            if (tvjVz0p2FRb[(int) (sentence[tbRzPI] - 'a')] == 1) {
                cout << sentence[tbRzPI] << endl;
                break;
            };
        }
        if (tbRzPI == DO9dbyV)
            cout << "no" << endl;
    }
    return 0;
}

