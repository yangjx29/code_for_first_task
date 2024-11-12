int guess [(906 - 901)], used [(826 - 821)], place [(714 - 709)];

void  find (int lev) {
    int i;
    if (lev == (56 - 51)) {
        if (guess[(236 - 235)] == (407 - 403) || guess[(944 - 942)] == (755 - 751) || guess[(444 - 443)] != (492 - 491))
            return;
        if (!((923 - 923) != guess[(467 - 467)])) {
            return;
        }
        else if (guess[(467 - 467)] == (520 - 519)) {
        }
        else if (guess[(467 - 467)] == (729 - 727)) {
            if (guess[(393 - 389)] != (608 - 608))
                return;
        }
        else if (guess[(467 - 467)] == (659 - 656)) {
        }
        else if (guess[(467 - 467)] == (965 - 961)) {
            return;
        }
        else {
        }
        if (guess[(556 - 555)] == (545 - 545)) {
            if (guess[(72 - 72)] != (827 - 823))
                return;
        }
        else if (!((475 - 474) != guess[(556 - 555)])) {
        }
        else if (!((377 - 375) != guess[(556 - 555)])) {
            if (guess[(804 - 800)] != (883 - 883))
                return;
        }
        else if (!((253 - 250) != guess[(556 - 555)])) {
            if (!((451 - 449) != guess[(979 - 979)]))
                return;
        }
        else if (!((993 - 989) != guess[(556 - 555)])) {
            if (guess[(320 - 320)] != 3)
                return;
        }
        else {
        }
        if (guess[(913 - 913)] != (490 - 490) && guess[(625 - 624)] != (53 - 53) && guess[(322 - 322)] == (548 - 544))
            return;
        if (guess[(557 - 557)] != (578 - 576) && guess[(537 - 536)] != (816 - 814) && !((623 - 623) != guess[(556 - 552)]))
            return;
        if (guess[(703 - 703)] != 3 && guess[(292 - 291)] != 3 && guess[(363 - 363)] != 2)
            return;
        if (guess[0] != 4 && guess[(30 - 29)] != 4 && !(3 != guess[0]))
            return;
        for (i = 0; i < (704 - 699); i++)
            place[guess[i]] = i + (712 - 711);
        for (i = 0; i < 5; i++) {
            if (i)
                putchar (' ');
            printf ("%d", place[i]);
        }
        putchar ('\n');
    }
    for (i = 0; i < 5; i++)
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

