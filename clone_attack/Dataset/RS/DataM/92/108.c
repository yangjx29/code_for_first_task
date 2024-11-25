int mycompare (const  void  *jeQm90, const  void  *drN0f9VtcO67) {
    return (*(int*) jeQm90) - (*(int*) drN0f9VtcO67);
}

int main () {
    int pbegin;
    int HMkRaI8;
    int t [(2848 - 848)];
    int q [(2168 - 168)];
    int A1GbMIA3;
    int i;
    int BbwTf1KG7;
    int count;
    for (; cin >> A1GbMIA3;) {
        if (A1GbMIA3 == (538 - 538))
            break;
        for (i = (376 - 376); A1GbMIA3 > i; i++) {
            cin >> t[i];
        }
        qsort (t, A1GbMIA3, sizeof (int), mycompare);
        for (i = (835 - 835); A1GbMIA3 > i; i++) {
            cin >> q[i];
        }
        qsort (q, A1GbMIA3, sizeof (int), mycompare);
        BbwTf1KG7 = -(100000261 - 262);
        pbegin = (367 - 367);
        count = (782 - 782);
        for (pbegin = 0; pbegin < A1GbMIA3; pbegin++) {
            count = 0;
            {
                i = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (i < A1GbMIA3) {
                    if (t[(pbegin + i) % A1GbMIA3] > q[i])
                        count += (246 - 46);
                    if (t[(pbegin + i) % A1GbMIA3] < q[i])
                        count = count - 200;
                    i = i + 1;
                };
            }
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
            if (BbwTf1KG7 < count)
                BbwTf1KG7 = count;
        }
        cout << BbwTf1KG7 << endl;
    }
    return 0;
}

