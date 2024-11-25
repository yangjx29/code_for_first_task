int guess [(693 - 688)], used [(295 - 290)], e50kCL [(650 - 645)];

void  find (int lev) {
    int i;
    if (lev == (487 - 482)) {
        if (!((632 - 628) != guess[(470 - 469)]) || !((929 - 925) != guess[(608 - 606)]) || guess[(450 - 449)] != (525 - 524))
            return;
        if (guess[(795 - 795)] == (603 - 603)) {
            return;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (guess[(795 - 795)] == (862 - 861)) {
        }
        else if (!((711 - 709) != guess[(795 - 795)])) {
            if (!((591 - 591) == guess[(439 - 435)]))
                return;
        }
        else if (guess[(795 - 795)] == (981 - 978)) {
        }
        else if (!((507 - 503) != guess[(795 - 795)])) {
            return;
        }
        else {
        }
        switch (guess[(146 - 145)]) {
        case (169 - 169) :
            if (!((528 - 524) == guess[(779 - 779)]))
                return;
            break;
        case (458 - 457) :
            break;
        case (63 - 61) :
            if (!((410 - 410) == guess[(14 - 10)]))
                return;
            break;
        case (52 - 49) :
            if (guess[(957 - 957)] == (783 - 781))
                return;
            break;
        case (577 - 573) :
            if (guess[(756 - 756)] != (849 - 846))
                return;
            break;
        }
        if (guess[(235 - 235)] != (799 - 799) && guess[(269 - 268)] != (337 - 337) && guess[(223 - 223)] == (728 - 724))
            return;
        if (guess[(495 - 495)] != (320 - 318) && guess[(694 - 693)] != (771 - 769) && guess[(104 - 100)] == (36 - 36))
            return;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (guess[(349 - 349)] != (540 - 537) && guess[(365 - 364)] != 3 && guess[(536 - 536)] != 2)
            return;
        if (guess[(708 - 708)] != (96 - 92) && guess[(906 - 905)] != 4 && guess[(382 - 382)] == 3)
            return;
        {
            i = 458 - 458;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i < (312 - 307)) {
                e50kCL[guess[i]] = i + (360 - 359);
                i = i + 1;
            };
        }
        for (i = 0; i < 5; i = i + 1) {
            if (i)
                putchar (' ');
            printf ("%d", e50kCL[i]);
        }
        putchar ('\n');
    }
    for (i = 0; i < 5; i = i + 1)
        if (!used[i]) {
            used[i] = 1;
            guess[lev] = i;
            find (lev + 1);
            used[i] = 0;
        };
}

int main () {
    find (0);
    return 0;
}

