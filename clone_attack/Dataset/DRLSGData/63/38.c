int main () {
    int BSDM7uCJv;
    int InX40b3lWivY;
    int QysUX2a6EuH;
    int XuXw56EhbLI;
    int i3QhiTL;
    int MWEhjlBX;
    int NYHZvhBEJ;
    int qa0PNGnJer [100] [100];
    int KhwYL3Qu [100] [100];
    int c [100] [100];
    cin >> BSDM7uCJv >> InX40b3lWivY;
    {
        i3QhiTL = 0;
        while (i3QhiTL <= BSDM7uCJv -1) {
            MWEhjlBX = 0;
            while (InX40b3lWivY -1 >= MWEhjlBX) {
                cin >> qa0PNGnJer[i3QhiTL][MWEhjlBX];
                MWEhjlBX = MWEhjlBX +1;
            }
            i3QhiTL = i3QhiTL + 1;
        }
    }
    cin >> QysUX2a6EuH >> XuXw56EhbLI;
    {
        i3QhiTL = 0;
        while (i3QhiTL <= QysUX2a6EuH -1) {
            {
                MWEhjlBX = 0;
                while (MWEhjlBX <= XuXw56EhbLI -1) {
                    cin >> KhwYL3Qu[i3QhiTL][MWEhjlBX];
                    MWEhjlBX++;
                }
            }
            i3QhiTL = i3QhiTL + 1;
        }
    }
    for (i3QhiTL = 0; i3QhiTL <= BSDM7uCJv -1; i3QhiTL = i3QhiTL + 1) {
        {
            MWEhjlBX = 0;
            while (MWEhjlBX <= XuXw56EhbLI -1) {
                c[i3QhiTL][MWEhjlBX] = 0;
                for (NYHZvhBEJ = 0; NYHZvhBEJ <= InX40b3lWivY -1; NYHZvhBEJ++) {
                    c[i3QhiTL][MWEhjlBX] = c[i3QhiTL][MWEhjlBX] + qa0PNGnJer[i3QhiTL][NYHZvhBEJ] * KhwYL3Qu[NYHZvhBEJ][MWEhjlBX];
                }
                if (MWEhjlBX != XuXw56EhbLI -1) {
                    cout << c[i3QhiTL][MWEhjlBX] << " ";
                }
                else {
                    if (MWEhjlBX == XuXw56EhbLI -1) {
                        cout << c[i3QhiTL][MWEhjlBX];
                    }
                    else
                        ;
                }
                MWEhjlBX++;
            }
        }
        cout << endl;
    }
    return 0;
}

