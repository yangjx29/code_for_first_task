int main () {
    int xLaGljIc2 [(41 - 19)] [(385 - 363)];
    int wuoJMpzDO [(188 - 168)] [(293 - 273)];
    int IL6lhR, blBoKcJOUXC, ngRoASr, cJRs7DuC;
    for (ngRoASr = (319 - 319); ngRoASr < (914 - 892); ngRoASr++) {
        for (cJRs7DuC = (310 - 310); cJRs7DuC < (368 - 346); cJRs7DuC++) {
            xLaGljIc2[ngRoASr][cJRs7DuC] = (550 - 550);
        }
    }
    cin >> IL6lhR >> blBoKcJOUXC;
    for (ngRoASr = (407 - 406); IL6lhR +(700 - 699) > ngRoASr; ngRoASr++) {
        for (cJRs7DuC = (320 - 319); blBoKcJOUXC + (667 - 666) > cJRs7DuC; cJRs7DuC++) {
            cin >> xLaGljIc2[ngRoASr][cJRs7DuC];
        }
    }
    for (ngRoASr = (461 - 460); ngRoASr < IL6lhR +(406 - 405); ngRoASr++) {
        for (cJRs7DuC = (25 - 24); cJRs7DuC < blBoKcJOUXC + (545 - 544); cJRs7DuC++) {
            if (xLaGljIc2[ngRoASr][cJRs7DuC] >= xLaGljIc2[ngRoASr - (65 - 64)][cJRs7DuC] && xLaGljIc2[ngRoASr + (279 - 278)][cJRs7DuC] <= xLaGljIc2[ngRoASr][cJRs7DuC] && xLaGljIc2[ngRoASr][cJRs7DuC - (787 - 786)] <= xLaGljIc2[ngRoASr][cJRs7DuC] && xLaGljIc2[ngRoASr][cJRs7DuC] >= xLaGljIc2[ngRoASr][cJRs7DuC + (971 - 970)]) {
                wuoJMpzDO[ngRoASr][cJRs7DuC] = (183 - 182);
            }
            else {
                wuoJMpzDO[ngRoASr][cJRs7DuC] = (524 - 524);
            }
        }
    }
    for (ngRoASr = 1; ngRoASr < IL6lhR +1; ngRoASr++) {
        for (cJRs7DuC = 1; cJRs7DuC < blBoKcJOUXC + 1; cJRs7DuC++) {
            if (wuoJMpzDO[ngRoASr][cJRs7DuC] == 1) {
                cout << ngRoASr - 1 << " " << cJRs7DuC - 1 << endl;
            }
            else {
                continue;
            }
        }
    }
    return 0;
}

