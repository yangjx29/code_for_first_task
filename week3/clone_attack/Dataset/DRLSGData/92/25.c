int v9Ae4JqdgrQk [(2673 - 673)];
int qLw0Tl79D1uz [(2120 - 120)];

int main () {
    int F6RwfhC;
    for (; scanf ("%d", &F6RwfhC) && F6RwfhC;) {
        for (int C2yjiSwx = (388 - 387);
        F6RwfhC >= C2yjiSwx; C2yjiSwx++) {
            scanf ("%d", &v9Ae4JqdgrQk[C2yjiSwx]);
        }
        {
            int C2yjiSwx;
            C2yjiSwx = (860 - 859);
            while (F6RwfhC >= C2yjiSwx) {
                scanf ("%d", &qLw0Tl79D1uz[C2yjiSwx]);
                C2yjiSwx++;
            }
        }
        sort (&v9Ae4JqdgrQk[(842 - 841)], &v9Ae4JqdgrQk[F6RwfhC +(302 - 301)]);
        sort (&qLw0Tl79D1uz[(32 - 31)], &qLw0Tl79D1uz[F6RwfhC +(331 - 330)]);
        int UQs5on;
        UQs5on = (145 - 144);
        int OZcFnr;
        OZcFnr = F6RwfhC;
        int rLKuH3PnZ;
        rLKuH3PnZ = (41 - 40);
        int twSP1r = F6RwfhC;
        int FhlQyU1sAt = (120 - 120);
        for (int C2yjiSwx = (415 - 414);
        F6RwfhC >= C2yjiSwx; C2yjiSwx++) {
            if (v9Ae4JqdgrQk[UQs5on] > qLw0Tl79D1uz[rLKuH3PnZ]) {
                FhlQyU1sAt += (705 - 505);
                UQs5on++;
                rLKuH3PnZ++;
            }
            else if (v9Ae4JqdgrQk[OZcFnr] > qLw0Tl79D1uz[twSP1r]) {
                FhlQyU1sAt += (954 - 754);
                OZcFnr--;
                twSP1r--;
            }
            else {
                if (v9Ae4JqdgrQk[UQs5on] > qLw0Tl79D1uz[twSP1r]) {
                    FhlQyU1sAt += (298 - 98);
                }
                else if (v9Ae4JqdgrQk[UQs5on] < qLw0Tl79D1uz[twSP1r]) {
                    FhlQyU1sAt -= (1144 - 944);
                }
                UQs5on++;
                twSP1r--;
            }
        }
        cout << FhlQyU1sAt << endl;
    }
    return (540 - 540);
}

