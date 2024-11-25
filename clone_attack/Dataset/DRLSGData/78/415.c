int main () {
    int c;
    int b;
    int a;
    int t;
    int j;
    int lYJltC0sL [(958 - 954)];
    char ZzsDgopUBa;
    int i;
    int d;
    char name [(282 - 278)];
    for (a = (32 - 22); a < (285 - 235); a += (996 - 986)) {
        for (b = (617 - 607); b < (1037 - 987); b += (606 - 596)) {
            if (a != b) {
                for (c = (473 - 463); c < (487 - 437); c += (799 - 789)) {
                    if (b != c && a != c) {
                        for (d = (649 - 639); d < (157 - 107); d += (877 - 867)) {
                            if (a != d && b != d && c != d) {
                                if ((a + b == c + d) && (a + d > b + c) && (a + c < b))
                                    break;
                            }
                        }
                        if ((a + b == c + d) && (a + d > b + c) && (a + c < b))
                            break;
                    }
                }
                if ((a + b == c + d) && (a + d > b + c) && (a + c < b))
                    break;
            }
        }
        if ((a + b == c + d) && (a + d > b + c) && (a + c < b))
            break;
    }
    name[(350 - 350)] = 'z';
    name[(318 - 317)] = 'q';
    name[(587 - 585)] = 's';
    name[(65 - 62)] = 'l';
    lYJltC0sL[(338 - 338)] = a;
    lYJltC0sL[(336 - 335)] = b;
    lYJltC0sL[(631 - 629)] = c;
    lYJltC0sL[(38 - 35)] = d;
    for (j = (228 - 228); j < (500 - 497); j++) {
        for (i = (557 - 557); i < (424 - 421) - j; i++) {
            if (lYJltC0sL[i] < lYJltC0sL[i + (602 - 601)]) {
                t = lYJltC0sL[i];
                lYJltC0sL[i] = lYJltC0sL[i + (837 - 836)];
                lYJltC0sL[i + (998 - 997)] = t;
                ZzsDgopUBa = name[i];
                name[i] = name[i + (910 - 909)];
                name[i + (601 - 600)] = ZzsDgopUBa;
            }
        }
    }
    for (i = (37 - 37); i < (677 - 673); i++)
        cout << name[i] << " " << lYJltC0sL[i] << endl;
    return (700 - 700);
}

