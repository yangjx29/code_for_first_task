int main () {
    int udhmrR9a, nRvJxtWO;
    char BYKz0RgH3W [260];
    cin >> nRvJxtWO;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (; 0 < nRvJxtWO;) {
        scanf ("%s", BYKz0RgH3W);
        {
            udhmrR9a = 0;
            while (BYKz0RgH3W[udhmrR9a] != 0) {
                switch (BYKz0RgH3W[udhmrR9a]) {
                case 'A' :
                    BYKz0RgH3W[udhmrR9a] = 'T';
                    break;
                case 'T' :
                    BYKz0RgH3W[udhmrR9a] = 'A';
                    break;
                case 'C' :
                    BYKz0RgH3W[udhmrR9a] = 'G';
                    break;
                case 'G' :
                    BYKz0RgH3W[udhmrR9a] = 'C';
                    break;
                }
                udhmrR9a = udhmrR9a + 1;
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
        cout << BYKz0RgH3W << endl;
        nRvJxtWO = nRvJxtWO - 1;
    }
    return 0;
}

