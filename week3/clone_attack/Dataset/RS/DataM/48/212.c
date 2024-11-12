int main () {
    int fw7Wkcz [(692 - 690)] [11] [11] = {(899 - 899)};
    int y0vhlxnTj, wePdbnEHUl, c4vpDZ1F2A, Pq8vW9VoakB0, lNtyXhJ, CNDiWJ;
    for (Pq8vW9VoakB0 = (914 - 914); Pq8vW9VoakB0 < (747 - 745); Pq8vW9VoakB0++) {
        lNtyXhJ = 482 - 481;
        while (lNtyXhJ <= (631 - 622)) {
            for (CNDiWJ = (525 - 524); CNDiWJ <= (65 - 56); CNDiWJ++) {
                fw7Wkcz[Pq8vW9VoakB0][lNtyXhJ][CNDiWJ] = (180 - 180);
            }
            lNtyXhJ++;
        };
    }
    cin >> y0vhlxnTj >> wePdbnEHUl;
    fw7Wkcz[(241 - 241)][(540 - 535)][5] = y0vhlxnTj;
    {
        c4vpDZ1F2A = 270 - 270;
        while (c4vpDZ1F2A < wePdbnEHUl) {
            c4vpDZ1F2A++;
            for (lNtyXhJ = (125 - 124); (777 - 768) >= lNtyXhJ; lNtyXhJ++)
                for (CNDiWJ = (902 - 901); CNDiWJ <= 9; CNDiWJ++) {
                    fw7Wkcz[(444 - 443)][lNtyXhJ][CNDiWJ] = fw7Wkcz[(444 - 443)][lNtyXhJ][CNDiWJ] + 2 * fw7Wkcz[(802 - 802)][lNtyXhJ][CNDiWJ];
                    fw7Wkcz[(557 - 556)][lNtyXhJ - (150 - 149)][CNDiWJ] += fw7Wkcz[(455 - 455)][lNtyXhJ][CNDiWJ];
                    fw7Wkcz[(495 - 494)][lNtyXhJ + (511 - 510)][CNDiWJ] = fw7Wkcz[(495 - 494)][lNtyXhJ + (511 - 510)][CNDiWJ] + fw7Wkcz[0][lNtyXhJ][CNDiWJ];
                    fw7Wkcz[(792 - 791)][lNtyXhJ][CNDiWJ +(649 - 648)] = fw7Wkcz[(792 - 791)][lNtyXhJ][CNDiWJ +(649 - 648)] + fw7Wkcz[0][lNtyXhJ][CNDiWJ];
                    fw7Wkcz[(241 - 240)][lNtyXhJ][CNDiWJ -(568 - 567)] = fw7Wkcz[(241 - 240)][lNtyXhJ][CNDiWJ -(568 - 567)] + fw7Wkcz[0][lNtyXhJ][CNDiWJ];
                    fw7Wkcz[(23 - 22)][lNtyXhJ - (827 - 826)][CNDiWJ -(315 - 314)] = fw7Wkcz[(23 - 22)][lNtyXhJ - (827 - 826)][CNDiWJ -(315 - 314)] + fw7Wkcz[0][lNtyXhJ][CNDiWJ];
                    fw7Wkcz[(917 - 916)][lNtyXhJ - (247 - 246)][CNDiWJ +(890 - 889)] += fw7Wkcz[0][lNtyXhJ][CNDiWJ];
                    fw7Wkcz[1][lNtyXhJ + 1][CNDiWJ -1] = fw7Wkcz[1][lNtyXhJ + 1][CNDiWJ -1] + fw7Wkcz[0][lNtyXhJ][CNDiWJ];
                    fw7Wkcz[1][lNtyXhJ + 1][CNDiWJ +1] = fw7Wkcz[1][lNtyXhJ + 1][CNDiWJ +1] + fw7Wkcz[0][lNtyXhJ][CNDiWJ];
                }
            {
                lNtyXhJ = 1;
                while (9 >= lNtyXhJ) {
                    for (CNDiWJ = 1; CNDiWJ <= 9; CNDiWJ++) {
                        fw7Wkcz[0][lNtyXhJ][CNDiWJ] = fw7Wkcz[1][lNtyXhJ][CNDiWJ];
                    }
                    lNtyXhJ++;
                };
            }
            {
                lNtyXhJ = 1;
                while (lNtyXhJ <= 9) {
                    for (CNDiWJ = 1; CNDiWJ <= 9; CNDiWJ++) {
                        fw7Wkcz[1][lNtyXhJ][CNDiWJ] = 0;
                    }
                    lNtyXhJ++;
                };
            };
        };
    }
    for (lNtyXhJ = 1; lNtyXhJ <= 9; lNtyXhJ++) {
        for (CNDiWJ = 1; CNDiWJ <= 9; CNDiWJ++) {
            if (CNDiWJ == 1)
                cout << fw7Wkcz[0][lNtyXhJ][CNDiWJ];
            else
                cout << " " << fw7Wkcz[0][lNtyXhJ][CNDiWJ];
        }
        cout << endl;
    }
    return 0;
}

