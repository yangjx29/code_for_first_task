void  c4fWPZDyV (int, int);
int TBZroDEu = (445 - 444);

int main () {
    double  lFaw3Mhfvg9 = 0;
    int Vs3gdITMA = (947 - 947);
    int n = (320 - 320);
    cin >> n;
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
    for (Vs3gdITMA = (684 - 683); n >= Vs3gdITMA; Vs3gdITMA++) {
        cin >> lFaw3Mhfvg9;
        c4fWPZDyV (lFaw3Mhfvg9, 2.0);
        cout << TBZroDEu << endl;
        TBZroDEu = 1;
    }
    cin >> Vs3gdITMA;
    return 0;
}

void  c4fWPZDyV (int lFaw3Mhfvg9, int j73qfC) {
    double  N8bO4ApQ = lFaw3Mhfvg9;
    int num = 0;
    num = sqrt (N8bO4ApQ);
    if (lFaw3Mhfvg9 % j73qfC == 0 && j73qfC <= num) {
        TBZroDEu++;
        c4fWPZDyV (lFaw3Mhfvg9 / j73qfC, j73qfC);
        c4fWPZDyV (lFaw3Mhfvg9, j73qfC + 1);
    }
    if (lFaw3Mhfvg9 % j73qfC != 0 && j73qfC <= num)
        c4fWPZDyV (lFaw3Mhfvg9, j73qfC + 1);
}

