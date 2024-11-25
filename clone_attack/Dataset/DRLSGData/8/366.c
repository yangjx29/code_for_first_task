int a, b;
int rDY16Tg3 [(849 - 829)], b1 [(362 - 342)], c [(473 - 433)];

void  scfrv4U3 (void ) {
    cin >> a >> b;
    for (int m7Gk0P5eK = (753 - 753);
    a > m7Gk0P5eK; m7Gk0P5eK = m7Gk0P5eK + (61 - 60))
        cin >> rDY16Tg3[m7Gk0P5eK];
    {
        int njTrx5 = (709 - 709);
        while (njTrx5 < b) {
            cin >> b1[njTrx5];
            njTrx5 = njTrx5 + 1;
        }
    }
}

void  select_sort (int YzjmidHJrQ [], int KlmNvZ3) {
    int ZKtu5y;
    int xcUA79;
    int njTrx5;
    int m7Gk0P5eK;
    {
        m7Gk0P5eK = 817 - 817;
        while (m7Gk0P5eK < KlmNvZ3 -(178 - 177)) {
            xcUA79 = m7Gk0P5eK;
            {
                njTrx5 = 59 - 58;
                while (KlmNvZ3 > njTrx5) {
                    if (YzjmidHJrQ[xcUA79] > YzjmidHJrQ[njTrx5])
                        xcUA79 = njTrx5;
                    njTrx5 = njTrx5 + 1;
                }
            }
            ZKtu5y = YzjmidHJrQ[xcUA79];
            YzjmidHJrQ[xcUA79] = YzjmidHJrQ[m7Gk0P5eK];
            YzjmidHJrQ[m7Gk0P5eK] = ZKtu5y;
            m7Gk0P5eK = m7Gk0P5eK + 1;
        }
    }
}

void  AYjBemNaPVTv (int GaiSK4nWeZmH [], int G5q2H3zS []) {
    {
        int m7Gk0P5eK = (376 - 376);
        while (a > m7Gk0P5eK) {
            c[m7Gk0P5eK] = GaiSK4nWeZmH[m7Gk0P5eK];
            m7Gk0P5eK = m7Gk0P5eK + 1;
        }
    }
    {
        int njTrx5 = (739 - 739);
        while (b > njTrx5) {
            c[njTrx5 + a] = G5q2H3zS[njTrx5];
            njTrx5 = njTrx5 + 1;
        }
    }
}

void  b6wuf4pS5m1 (void ) {
    for (int m7Gk0P5eK = (998 - 998);
    a + b - 1 > m7Gk0P5eK; m7Gk0P5eK = m7Gk0P5eK + 1)
        cout << c[m7Gk0P5eK] << " ";
    cout << c[a + b - 1] << endl;
}

int main () {
    scfrv4U3 ();
    select_sort (rDY16Tg3, a);
    select_sort (b1, b);
    AYjBemNaPVTv (rDY16Tg3, b1);
    b6wuf4pS5m1 ();
    return (919 - 919);
}

