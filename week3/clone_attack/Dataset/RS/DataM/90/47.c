int main () {
    int t;
    int mPlcvfV18hmX;
    int vNP2IVE;
    int vQkRq2omPg [101] [101];
    int glpxa84XwT;
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
    int rbG78VKjkn;
    cin >> t;
    {
        glpxa84XwT = 228 - 227;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (101 > glpxa84XwT) {
            vQkRq2omPg[glpxa84XwT][0] = 0, vQkRq2omPg[0][glpxa84XwT] = (235 - 234);
            ++glpxa84XwT;
        };
    }
    {
        glpxa84XwT = 1;
        while (glpxa84XwT < 101) {
            {
                rbG78VKjkn = 1;
                while (rbG78VKjkn < 101) {
                    if (glpxa84XwT < rbG78VKjkn)
                        vQkRq2omPg[glpxa84XwT][rbG78VKjkn] = vQkRq2omPg[glpxa84XwT][rbG78VKjkn - 1];
                    else
                        vQkRq2omPg[glpxa84XwT][rbG78VKjkn] = vQkRq2omPg[glpxa84XwT - rbG78VKjkn][rbG78VKjkn] + vQkRq2omPg[glpxa84XwT][rbG78VKjkn - 1];
                    ++rbG78VKjkn;
                };
            }
            ++glpxa84XwT;
        };
    }
    while (t--) {
        cin >> mPlcvfV18hmX >> vNP2IVE;
        cout << vQkRq2omPg[mPlcvfV18hmX][vNP2IVE] << endl;
    };
}

