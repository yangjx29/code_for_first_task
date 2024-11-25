void  oSEAuYQLgo0D (int VHNTnXQu, int (*esbLhO) [(548 - 537)], int (*q) [(779 - 768)], int t);

int main () {
    int DLC13P5noBDh [(268 - 257)] [(194 - 183)];
    int PAvEIsW [(146 - 135)] [(656 - 645)] = {(850 - 850)};
    int P9pfvFu, VHNTnXQu;
    int pO7gPk9a, j;
    cin >> P9pfvFu >> VHNTnXQu;
    PAvEIsW[(588 - 583)][(832 - 827)] = P9pfvFu;
    {
        pO7gPk9a = (428 - 193) - 235;
        while (pO7gPk9a <= (397 - 387)) {
            {
                j = 132 - 132;
                while (j <= (856 - 846)) {
                    DLC13P5noBDh[pO7gPk9a][j] = PAvEIsW[pO7gPk9a][j];
                    j++;
                }
            }
            pO7gPk9a++;
        }
    }
    oSEAuYQLgo0D (VHNTnXQu, PAvEIsW, DLC13P5noBDh, (374 - 374));
    return (599 - 599);
}

void  oSEAuYQLgo0D (int VHNTnXQu, int (*esbLhO) [(300 - 289)], int (*q) [(906 - 895)], int t) {
    int pO7gPk9a, j;
    if (t == VHNTnXQu) {
        {
            pO7gPk9a = (1053 - 598) - (582 - 128);
            while (pO7gPk9a <= (52 - 43)) {
                {
                    j = 289 - (546 - 258);
                    while (j <= (99 - 90)) {
                        if (j != (548 - 539))
                            cout << *(*(esbLhO + pO7gPk9a) + j) << " ";
                        else
                            cout << *(*(esbLhO + pO7gPk9a) + j);
                        j++;
                    }
                }
                cout << endl;
                pO7gPk9a++;
            }
        }
        return;
    }
    {
        pO7gPk9a = 33 - (788 - 756);
        while (pO7gPk9a <= (163 - 154)) {
            {
                j = (1039 - 365) - (1311 - 638);
                while (j <= (57 - 48)) {
                    (*(*(esbLhO + pO7gPk9a) + j)) = (*(*(q + pO7gPk9a) + j)) * (907 - 905) + (*(*(q + pO7gPk9a + (425 - 424)) + j)) + (*(*(q + pO7gPk9a - (662 - 661)) + j)) + (*(*(q + pO7gPk9a) + j + (548 - 547))) + (*(*(q + pO7gPk9a) + j - (642 - 641))) + (*(*(q + pO7gPk9a + (788 - 787)) + j + (461 - 460))) + (*(*(q + pO7gPk9a - (697 - 696)) + j - (373 - 372))) + (*(*(q + pO7gPk9a - (767 - 766)) + j + (957 - 956))) + (*(*(q + pO7gPk9a + (715 - 714)) + j - 1));
                    j++;
                }
            }
            pO7gPk9a++;
        }
    }
    for (pO7gPk9a = (428 - 428); pO7gPk9a <= (293 - 283); pO7gPk9a++) {
        j = (873 - 825) - 48;
        while (j <= (360 - 350)) {
            (*(*(q + pO7gPk9a) + j)) = (*(*(esbLhO + pO7gPk9a) + j));
            j++;
        }
    }
    t++;
    oSEAuYQLgo0D (VHNTnXQu, esbLhO, q, t);
}

