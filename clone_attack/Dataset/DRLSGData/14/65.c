struct   student {
    int ryzrWhNDw;
    int smMzsf2rI;
    int vhFtopu;
    int hKe97Bgr1i;
};
int main () {
    int l95gE3vWw [2] [3] = {{(422 - 422), (589 - 589), (420 - 420)}, {(809 - 809), 0, 0}};
    int q9mlTzg5;
    int Ne6NPAvLS1;
    struct   student eqxnLX [100001];
    cin >> Ne6NPAvLS1;
    {
        q9mlTzg5 = 265 - 264;
        while (Ne6NPAvLS1 >= q9mlTzg5) {
            cin >> eqxnLX[q9mlTzg5].ryzrWhNDw >> eqxnLX[q9mlTzg5].smMzsf2rI >> eqxnLX[q9mlTzg5].vhFtopu;
            eqxnLX[q9mlTzg5].hKe97Bgr1i = eqxnLX[q9mlTzg5].smMzsf2rI + eqxnLX[q9mlTzg5].vhFtopu;
            q9mlTzg5 = q9mlTzg5 + 1;
        };
    }
    {
        q9mlTzg5 = 251 - 250;
        while (Ne6NPAvLS1 >= q9mlTzg5) {
            if (l95gE3vWw[(137 - 136)][0] < eqxnLX[q9mlTzg5].hKe97Bgr1i) {
                l95gE3vWw[0][2] = l95gE3vWw[0][1];
                l95gE3vWw[0][1] = l95gE3vWw[0][0];
                l95gE3vWw[0][0] = eqxnLX[q9mlTzg5].ryzrWhNDw;
                l95gE3vWw[1][2] = l95gE3vWw[1][1];
                l95gE3vWw[1][1] = l95gE3vWw[1][0];
                l95gE3vWw[1][0] = eqxnLX[q9mlTzg5].hKe97Bgr1i;
            }
            else if (l95gE3vWw[1][0] >= eqxnLX[q9mlTzg5].hKe97Bgr1i && eqxnLX[q9mlTzg5].hKe97Bgr1i > l95gE3vWw[1][1]) {
                l95gE3vWw[0][2] = l95gE3vWw[0][1];
                l95gE3vWw[0][1] = eqxnLX[q9mlTzg5].ryzrWhNDw;
                l95gE3vWw[1][2] = l95gE3vWw[1][1];
                l95gE3vWw[1][1] = eqxnLX[q9mlTzg5].hKe97Bgr1i;
            }
            else if (eqxnLX[q9mlTzg5].hKe97Bgr1i <= l95gE3vWw[1][1] && eqxnLX[q9mlTzg5].hKe97Bgr1i > l95gE3vWw[1][2]) {
                l95gE3vWw[0][2] = eqxnLX[q9mlTzg5].ryzrWhNDw;
                l95gE3vWw[1][2] = eqxnLX[q9mlTzg5].hKe97Bgr1i;
            }
            q9mlTzg5 = q9mlTzg5 + 1;
        };
    }
    {
        q9mlTzg5 = 0;
        while (q9mlTzg5 < 3) {
            cout << l95gE3vWw[0][q9mlTzg5] << ' ' << l95gE3vWw[1][q9mlTzg5] << endl;
            q9mlTzg5 = q9mlTzg5 + 1;
        };
    }
    return 0;
}

