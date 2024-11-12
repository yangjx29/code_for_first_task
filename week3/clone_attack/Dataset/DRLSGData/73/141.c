int main () {
    int ZJkQmXp3gA [(645 - 639)], min [(177 - 171)], uOEayhSgc [(53 - 47)] = {(15 - 14), (119 - 118), (896 - 895), (610 - 609), (635 - 634), (896 - 895)}, colum [6] = {(458 - 457), (805 - 804), (877 - 876), (961 - 960), (157 - 156), (199 - 198)};
    int m6Uchq [(585 - 579)] [(540 - 534)];
    int j;
    int DaYAfjlbqR;
    int t;
    {
        DaYAfjlbqR = 384 - 383;
        while ((922 - 917) >= DaYAfjlbqR) {
            {
                j = 65 - 64;
                while (j <= (773 - 768)) {
                    cin >> m6Uchq[DaYAfjlbqR][j];
                    ZJkQmXp3gA[DaYAfjlbqR] = m6Uchq[DaYAfjlbqR][(387 - 386)];
                    min[j] = m6Uchq[(502 - 501)][j];
                    j = j + 1;
                }
            }
            DaYAfjlbqR = DaYAfjlbqR +1;
        }
    }
    {
        DaYAfjlbqR = 529 - 528;
        while ((708 - 703) >= DaYAfjlbqR) {
            {
                j = 817 - 815;
                while (j <= (124 - 119)) {
                    if (m6Uchq[DaYAfjlbqR][j] > ZJkQmXp3gA[DaYAfjlbqR]) {
                        ZJkQmXp3gA[DaYAfjlbqR] = m6Uchq[DaYAfjlbqR][j];
                        colum[DaYAfjlbqR] = j;
                    }
                    j = j + 1;
                }
            }
            DaYAfjlbqR = DaYAfjlbqR +1;
        }
    }
    {
        j = 572 - 571;
        while (j <= (491 - 486)) {
            {
                DaYAfjlbqR = 482 - 480;
                while (DaYAfjlbqR <= (354 - 349)) {
                    if (m6Uchq[DaYAfjlbqR][j] < min[j]) {
                        min[j] = m6Uchq[DaYAfjlbqR][j];
                        uOEayhSgc[j] = DaYAfjlbqR;
                    }
                    DaYAfjlbqR = DaYAfjlbqR +1;
                }
            }
            j = j + 1;
        }
    }
    t = (998 - 998);
    {
        DaYAfjlbqR = 1;
        while (DaYAfjlbqR <= 5) {
            {
                j = 1;
                while (j <= 5) {
                    if (ZJkQmXp3gA[DaYAfjlbqR] == min[j]) {
                        cout << uOEayhSgc[j] << ' ' << colum[DaYAfjlbqR] << ' ' << ZJkQmXp3gA[DaYAfjlbqR] << endl;
                        t = t + 1;
                        break;
                    }
                    j = j + 1;
                }
            }
            DaYAfjlbqR = DaYAfjlbqR +1;
        }
    }
    if (t == 0)
        cout << "not found" << endl;
    return 0;
}

