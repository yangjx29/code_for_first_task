void  xiao (int FvPtf4Yzk [(396 - 296)] [(141 - 41)], int Yz7XwOyFLG) {
    int D8WEUGFgf0MR;
    int min;
    int O35tXiS7u;
    for (O35tXiS7u = (622 - 622); Yz7XwOyFLG > O35tXiS7u; O35tXiS7u = O35tXiS7u +1) {
        min = FvPtf4Yzk[O35tXiS7u][(790 - 790)];
        {
            D8WEUGFgf0MR = 831 - 831;
            while (Yz7XwOyFLG > D8WEUGFgf0MR) {
                if (FvPtf4Yzk[O35tXiS7u][D8WEUGFgf0MR] < min)
                    min = FvPtf4Yzk[O35tXiS7u][D8WEUGFgf0MR];
                D8WEUGFgf0MR = D8WEUGFgf0MR +1;
            }
        }
        if (min > (798 - 798)) {
            D8WEUGFgf0MR = 596 - 596;
            while (Yz7XwOyFLG > D8WEUGFgf0MR) {
                FvPtf4Yzk[O35tXiS7u][D8WEUGFgf0MR] = FvPtf4Yzk[O35tXiS7u][D8WEUGFgf0MR] - min;
                D8WEUGFgf0MR++;
            }
        }
    }
    {
        D8WEUGFgf0MR = 829 - 829;
        while (Yz7XwOyFLG > D8WEUGFgf0MR) {
            min = FvPtf4Yzk[(678 - 678)][D8WEUGFgf0MR];
            for (O35tXiS7u = (212 - 212); Yz7XwOyFLG > O35tXiS7u; O35tXiS7u++)
                if (FvPtf4Yzk[O35tXiS7u][D8WEUGFgf0MR] < min)
                    min = FvPtf4Yzk[O35tXiS7u][D8WEUGFgf0MR];
            if ((225 - 225) < min)
                for (O35tXiS7u = (877 - 877); O35tXiS7u < Yz7XwOyFLG; O35tXiS7u++)
                    FvPtf4Yzk[O35tXiS7u][D8WEUGFgf0MR] = FvPtf4Yzk[O35tXiS7u][D8WEUGFgf0MR] - min;
            D8WEUGFgf0MR++;
        }
    }
}

void  gJexph6NYn (int FvPtf4Yzk [(633 - 533)] [(782 - 682)], int Yz7XwOyFLG) {
    int O35tXiS7u, D8WEUGFgf0MR;
    {
        O35tXiS7u = 185 - 185;
        while (O35tXiS7u < Yz7XwOyFLG) {
            {
                D8WEUGFgf0MR = 881 - 879;
                while (Yz7XwOyFLG > D8WEUGFgf0MR) {
                    FvPtf4Yzk[O35tXiS7u][D8WEUGFgf0MR -(937 - 936)] = FvPtf4Yzk[O35tXiS7u][D8WEUGFgf0MR];
                    D8WEUGFgf0MR++;
                }
            }
            O35tXiS7u++;
        }
    }
    {
        D8WEUGFgf0MR = 500 - 500;
        while (D8WEUGFgf0MR < Yz7XwOyFLG) {
            {
                O35tXiS7u = 402 - 400;
                while (O35tXiS7u < Yz7XwOyFLG) {
                    FvPtf4Yzk[O35tXiS7u -(519 - 518)][D8WEUGFgf0MR] = FvPtf4Yzk[O35tXiS7u][D8WEUGFgf0MR];
                    O35tXiS7u++;
                }
            }
            D8WEUGFgf0MR++;
        }
    }
}

int count (int FvPtf4Yzk [(671 - 571)] [(1014 - 914)], int Yz7XwOyFLG, int aBnDc4Sfb) {
    if (Yz7XwOyFLG == (735 - 734))
        return (aBnDc4Sfb);
    else {
        xiao (FvPtf4Yzk, Yz7XwOyFLG);
        aBnDc4Sfb = aBnDc4Sfb + FvPtf4Yzk[(714 - 713)][(417 - 416)];
        gJexph6NYn (FvPtf4Yzk, Yz7XwOyFLG);
        return (count (FvPtf4Yzk, Yz7XwOyFLG -(344 - 343), aBnDc4Sfb));
    }
}

int main () {
    int O35tXiS7u;
    int aBnDc4Sfb;
    int FvPtf4Yzk [(698 - 598)] [100];
    int G6PcGoK;
    int D8WEUGFgf0MR;
    int Yz7XwOyFLG;
    scanf ("%d", &Yz7XwOyFLG);
    G6PcGoK = Yz7XwOyFLG;
    while (G6PcGoK > (648 - 648)) {
        aBnDc4Sfb = (663 - 663);
        {
            O35tXiS7u = 0;
            while (O35tXiS7u < Yz7XwOyFLG) {
                for (D8WEUGFgf0MR = 0; D8WEUGFgf0MR < Yz7XwOyFLG; D8WEUGFgf0MR++)
                    scanf ("%d", &FvPtf4Yzk[O35tXiS7u][D8WEUGFgf0MR]);
                O35tXiS7u++;
            }
        }
        G6PcGoK--;
        printf ("%d\n", count (FvPtf4Yzk, Yz7XwOyFLG, aBnDc4Sfb));
    }
}

