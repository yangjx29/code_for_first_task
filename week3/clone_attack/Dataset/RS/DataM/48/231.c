int YXMdvgF3jzV6 [(566 - 555)] [(882 - 871)] = {(117 - 117)}, temp [(533 - 522)] [(849 - 838)] = {(648 - 648)};

void  Vc3w8FmiMQV (int qeOyVam) {
    int nYtP4kWHVw;
    int SKi7WlX;
    if (qeOyVam == (586 - 586)) {
        return;
    }
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
    {
        nYtP4kWHVw = 86 - 85;
        while (nYtP4kWHVw < (99 - 89)) {
            for (SKi7WlX = (530 - 529); SKi7WlX < (906 - 896); SKi7WlX = SKi7WlX +1) {
                temp[nYtP4kWHVw + (770 - 769)][SKi7WlX +(981 - 980)] += YXMdvgF3jzV6[nYtP4kWHVw][SKi7WlX];
                temp[nYtP4kWHVw + (411 - 410)][SKi7WlX -(159 - 158)] = temp[nYtP4kWHVw + (411 - 410)][SKi7WlX -(159 - 158)] + YXMdvgF3jzV6[nYtP4kWHVw][SKi7WlX];
                temp[nYtP4kWHVw - (221 - 220)][SKi7WlX -(821 - 820)] += YXMdvgF3jzV6[nYtP4kWHVw][SKi7WlX];
                temp[nYtP4kWHVw - (187 - 186)][SKi7WlX +(439 - 438)] = temp[nYtP4kWHVw - (187 - 186)][SKi7WlX +(439 - 438)] + YXMdvgF3jzV6[nYtP4kWHVw][SKi7WlX];
                temp[nYtP4kWHVw - (875 - 874)][SKi7WlX] += YXMdvgF3jzV6[nYtP4kWHVw][SKi7WlX];
                temp[nYtP4kWHVw + (745 - 744)][SKi7WlX] = temp[nYtP4kWHVw + (745 - 744)][SKi7WlX] + YXMdvgF3jzV6[nYtP4kWHVw][SKi7WlX];
                temp[nYtP4kWHVw][SKi7WlX -(886 - 885)] += YXMdvgF3jzV6[nYtP4kWHVw][SKi7WlX];
                temp[nYtP4kWHVw][SKi7WlX +(301 - 300)] = temp[nYtP4kWHVw][SKi7WlX +(301 - 300)] + YXMdvgF3jzV6[nYtP4kWHVw][SKi7WlX];
                temp[nYtP4kWHVw][SKi7WlX] = temp[nYtP4kWHVw][SKi7WlX] + YXMdvgF3jzV6[nYtP4kWHVw][SKi7WlX];
            }
            nYtP4kWHVw = nYtP4kWHVw + 1;
        };
    }
    {
        nYtP4kWHVw = 783 - 782;
        while (nYtP4kWHVw < (658 - 648)) {
            for (SKi7WlX = (119 - 118); SKi7WlX < (656 - 646); SKi7WlX = SKi7WlX +1) {
                YXMdvgF3jzV6[nYtP4kWHVw][SKi7WlX] = temp[nYtP4kWHVw][SKi7WlX];
            }
            nYtP4kWHVw = nYtP4kWHVw + 1;
        };
    }
    return Vc3w8FmiMQV (qeOyVam - (850 - 849));
}

int main () {
    int UAuzkx89;
    int qeOyVam;
    int nYtP4kWHVw;
    int SKi7WlX;
    Vc3w8FmiMQV (qeOyVam);
    cin >> UAuzkx89 >> qeOyVam;
    YXMdvgF3jzV6[(885 - 880)][(646 - 641)] = UAuzkx89;
    temp[(98 - 93)][(915 - 910)] = UAuzkx89;
    for (nYtP4kWHVw = 1; nYtP4kWHVw < (618 - 608); nYtP4kWHVw = nYtP4kWHVw + 1) {
        for (SKi7WlX = 1; SKi7WlX < (362 - 353); SKi7WlX = SKi7WlX +1) {
            cout << temp[nYtP4kWHVw][SKi7WlX] << " ";
        }
        cout << temp[nYtP4kWHVw][SKi7WlX] << endl;
    }
    return (785 - 785);
}

