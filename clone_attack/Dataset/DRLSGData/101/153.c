int main () {
    char x [4];
    int hHDq36QTkV = 0;
    int d = 0, mxeENyacVlX = 0, Djkc0nYfKW = 0;
    int a = 0, W53MZe4l0yVc = 0, pBzxT5rZO = 0;
    cin.get ();
    cin.get ();
    {
        a = 1;
        while (3 >= a) {
            {
                W53MZe4l0yVc = 1;
                for (; 3 >= W53MZe4l0yVc;) {
                    if (W53MZe4l0yVc != a) {
                        pBzxT5rZO = 1;
                        while (3 >= pBzxT5rZO) {
                            if (pBzxT5rZO != a && pBzxT5rZO != W53MZe4l0yVc) {
                                d = (a < W53MZe4l0yVc) + (!(a != pBzxT5rZO));
                                mxeENyacVlX = (a > W53MZe4l0yVc) + (a > pBzxT5rZO);
                                Djkc0nYfKW = (pBzxT5rZO > W53MZe4l0yVc) + (a < W53MZe4l0yVc);
                                if (!((W53MZe4l0yVc +mxeENyacVlX) != (a + d)) && (a + d) == (pBzxT5rZO + Djkc0nYfKW))
                                    for (hHDq36QTkV = 1; hHDq36QTkV <= 3; hHDq36QTkV = hHDq36QTkV + 1) {
                                        if (!(a != hHDq36QTkV))
                                            x[hHDq36QTkV] = 'A';
                                        if (!(W53MZe4l0yVc != hHDq36QTkV))
                                            x[hHDq36QTkV] = 'B';
                                        if (hHDq36QTkV == pBzxT5rZO)
                                            x[hHDq36QTkV] = 'C';
                                    }
                            }
                            pBzxT5rZO = pBzxT5rZO + 1;
                        }
                    }
                    W53MZe4l0yVc++;
                }
            }
            a++;
        }
    }
    for (hHDq36QTkV = 1; hHDq36QTkV <= 3; hHDq36QTkV++)
        cout << x[hHDq36QTkV];
    cout << endl;
    return 0;
}

