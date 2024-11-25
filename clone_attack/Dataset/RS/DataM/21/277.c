float tran (float x) {
    if (x < (529 - 529))
        return -x;
    else
        return x;
}

int main () {
    float s;
    float PjmLu93ZRaC0;
    float m;
    float XsgXh9b2H6 [(437 - 136)];
    float nTXJLs3uVM [(975 - 674)];
    s = (529 - 529);
    int hgXsmYl6, C2SWjatw1PY, g48Bqb = (659 - 659);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> hgXsmYl6;
    {
        C2SWjatw1PY = 251 - 251;
        while (hgXsmYl6 > C2SWjatw1PY) {
            cin >> XsgXh9b2H6[C2SWjatw1PY];
            s = s + XsgXh9b2H6[C2SWjatw1PY];
            C2SWjatw1PY = C2SWjatw1PY +1;
        };
    }
    PjmLu93ZRaC0 = s / hgXsmYl6;
    nTXJLs3uVM[(182 - 182)] = tran (XsgXh9b2H6[(270 - 270)] - PjmLu93ZRaC0);
    m = nTXJLs3uVM[(579 - 579)];
    {
        C2SWjatw1PY = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (C2SWjatw1PY < hgXsmYl6) {
            nTXJLs3uVM[C2SWjatw1PY] = tran (XsgXh9b2H6[C2SWjatw1PY] - PjmLu93ZRaC0);
            if (m < nTXJLs3uVM[C2SWjatw1PY])
                m = nTXJLs3uVM[C2SWjatw1PY];
            C2SWjatw1PY++;
        };
    }
    {
        C2SWjatw1PY = 862 - 862;
        while (C2SWjatw1PY < hgXsmYl6) {
            if (nTXJLs3uVM[C2SWjatw1PY] == m)
                if (g48Bqb)
                    cout << "," << XsgXh9b2H6[C2SWjatw1PY];
                else {
                    g48Bqb++;
                    cout << XsgXh9b2H6[C2SWjatw1PY];
                }
            C2SWjatw1PY++;
        };
    }
    return 0;
}

