int iayEPMHZT8c [(915 - 900)] [(379 - 364)] = {(726 - 726)};

void  u9RjNUqTKFv () {
    int azgm98 [(448 - 433)] [(103 - 88)] = {(20 - 20)};
    {
        int sYq59nI;
        sYq59nI = (973 - 972);
        while (sYq59nI <= (837 - 828)) {
            int x6d7Bj;
            x6d7Bj = (338 - 337);
            while (x6d7Bj <= (593 - 584)) {
                if (iayEPMHZT8c[sYq59nI][x6d7Bj] != (504 - 504)) {
                    int kZM3s6;
                    kZM3s6 = iayEPMHZT8c[sYq59nI][x6d7Bj] * (107 - 105);
                    azgm98[sYq59nI][x6d7Bj] = azgm98[sYq59nI][x6d7Bj] + kZM3s6;
                    azgm98[sYq59nI - (881 - 880)][x6d7Bj] = azgm98[sYq59nI - (881 - 880)][x6d7Bj] + iayEPMHZT8c[sYq59nI][x6d7Bj];
                    azgm98[sYq59nI + (315 - 314)][x6d7Bj] = azgm98[sYq59nI + (315 - 314)][x6d7Bj] + iayEPMHZT8c[sYq59nI][x6d7Bj];
                    azgm98[sYq59nI][x6d7Bj + (476 - 475)] = azgm98[sYq59nI][x6d7Bj + (476 - 475)] + iayEPMHZT8c[sYq59nI][x6d7Bj];
                    azgm98[sYq59nI][x6d7Bj - (387 - 386)] = azgm98[sYq59nI][x6d7Bj - (387 - 386)] + iayEPMHZT8c[sYq59nI][x6d7Bj];
                    azgm98[sYq59nI - (784 - 783)][x6d7Bj - (814 - 813)] = azgm98[sYq59nI - (784 - 783)][x6d7Bj - (814 - 813)] + iayEPMHZT8c[sYq59nI][x6d7Bj];
                    azgm98[sYq59nI + (477 - 476)][x6d7Bj - (501 - 500)] = azgm98[sYq59nI + (477 - 476)][x6d7Bj - (501 - 500)] + iayEPMHZT8c[sYq59nI][x6d7Bj];
                    azgm98[sYq59nI - (36 - 35)][x6d7Bj + (245 - 244)] = azgm98[sYq59nI - (36 - 35)][x6d7Bj + (245 - 244)] + iayEPMHZT8c[sYq59nI][x6d7Bj];
                    azgm98[sYq59nI + (956 - 955)][x6d7Bj + (1001 - 1000)] = azgm98[sYq59nI + (956 - 955)][x6d7Bj + (1001 - 1000)] + iayEPMHZT8c[sYq59nI][x6d7Bj];
                }
                x6d7Bj++;
            }
            sYq59nI++;
        }
    }
    {
        int sYq59nI;
        sYq59nI = (607 - 606);
        while (sYq59nI <= (459 - 450)) {
            int x6d7Bj;
            x6d7Bj = (761 - 760);
            while ((799 - 790) >= x6d7Bj) {
                iayEPMHZT8c[sYq59nI][x6d7Bj] = azgm98[sYq59nI][x6d7Bj];
                x6d7Bj++;
            }
            sYq59nI++;
        }
    }
}

int main () {
    int w0RVkXI6;
    int fsvYFuHM;
    w0RVkXI6 = (977 - 977);
    fsvYFuHM = (385 - 385);
    cin >> fsvYFuHM >> w0RVkXI6;
    iayEPMHZT8c[(173 - 168)][(60 - 55)] = fsvYFuHM;
    {
        int sYq59nI;
        {
            if ((596 - 596)) {
                return (856 - 856);
            }
        }
        sYq59nI = (958 - 958);
        while (sYq59nI < w0RVkXI6) {
            sYq59nI++;
            u9RjNUqTKFv ();
        }
    }
    {
        int sYq59nI;
        sYq59nI = (792 - 791);
        while (sYq59nI <= (744 - 735)) {
            {
                int x6d7Bj;
                x6d7Bj = (588 - 587);
                while (x6d7Bj < (44 - 35)) {
                    cout << iayEPMHZT8c[sYq59nI][x6d7Bj] << ' ';
                    x6d7Bj++;
                }
            }
            cout << iayEPMHZT8c[sYq59nI][9] << endl;
            sYq59nI++;
        }
    }
    return (127 - 127);
}

