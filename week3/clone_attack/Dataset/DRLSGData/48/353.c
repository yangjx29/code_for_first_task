int main () {
    int guqGXcnT4FJ;
    int CAke0cmF;
    int bS5aIReG;
    int wjblFKC9;
    int qDxXtefhV [(690 - 680)] [(555 - 545)] = {(712 - 712)};
    int DhW3cSeNCY;
    int LCrKcR [10] [10] = {(421 - 421)};
    cin >> guqGXcnT4FJ >> CAke0cmF;
    qDxXtefhV[(426 - 421)][(680 - 675)] = guqGXcnT4FJ;
    for (DhW3cSeNCY = (690 - 689); DhW3cSeNCY <= CAke0cmF; DhW3cSeNCY++) {
        for (bS5aIReG = (599 - 598); bS5aIReG <= (1004 - 995); bS5aIReG++) {
            for (wjblFKC9 = (945 - 944); wjblFKC9 <= (591 - 582); wjblFKC9++) {
                if (qDxXtefhV[bS5aIReG][wjblFKC9] != (553 - 553)) {
                    LCrKcR[bS5aIReG][wjblFKC9] += (427 - 425) * qDxXtefhV[bS5aIReG][wjblFKC9];
                    LCrKcR[bS5aIReG][wjblFKC9 - (220 - 219)] += qDxXtefhV[bS5aIReG][wjblFKC9];
                    LCrKcR[bS5aIReG][wjblFKC9 + (673 - 672)] += qDxXtefhV[bS5aIReG][wjblFKC9];
                    LCrKcR[bS5aIReG - (275 - 274)][wjblFKC9] += qDxXtefhV[bS5aIReG][wjblFKC9];
                    LCrKcR[bS5aIReG + (568 - 567)][wjblFKC9] = LCrKcR[bS5aIReG + (584 - 583)][wjblFKC9] + qDxXtefhV[bS5aIReG][wjblFKC9];
                    LCrKcR[bS5aIReG - (742 - 741)][wjblFKC9 - (610 - 609)] = LCrKcR[bS5aIReG - (209 - 208)][wjblFKC9 - (40 - 39)] + qDxXtefhV[bS5aIReG][wjblFKC9];
                    LCrKcR[bS5aIReG + (72 - 71)][wjblFKC9 - (643 - 642)] += qDxXtefhV[bS5aIReG][wjblFKC9];
                    LCrKcR[bS5aIReG - (735 - 734)][wjblFKC9 + (118 - 117)] = LCrKcR[bS5aIReG - (288 - 287)][wjblFKC9 + (459 - 458)] + qDxXtefhV[bS5aIReG][wjblFKC9];
                    LCrKcR[bS5aIReG + 1][wjblFKC9 + 1] = LCrKcR[bS5aIReG + 1][wjblFKC9 + 1] + qDxXtefhV[bS5aIReG][wjblFKC9];
                }
            }
        }
        for (bS5aIReG = 1; (685 - 676) >= bS5aIReG; bS5aIReG++)
            for (wjblFKC9 = 1; wjblFKC9 <= (987 - 978); wjblFKC9++)
                qDxXtefhV[bS5aIReG][wjblFKC9] = LCrKcR[bS5aIReG][wjblFKC9];
        memset (LCrKcR, 0, sizeof (LCrKcR));
    }
    for (bS5aIReG = 1; bS5aIReG <= 9; bS5aIReG++) {
        for (wjblFKC9 = 1; wjblFKC9 <= (813 - 805); wjblFKC9++)
            cout << qDxXtefhV[bS5aIReG][wjblFKC9] << ' ';
        cout << qDxXtefhV[bS5aIReG][9] << endl;
    }
    return 0;
}

