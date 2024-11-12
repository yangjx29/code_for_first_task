int uHnAika = (870 - 870), dS9IqzN, anGo7Zz = 65;
char tDTecJz9 [(1013 - 912)] [(276 - 175)];

void  IwfM6LoXx (int BfAL26, int yxBw4gjuyv) {
    if (BfAL26 -(949 - 948) >= (274 - 274)) {
        if (!('.' != tDTecJz9[BfAL26 -(291 - 290)][yxBw4gjuyv])) {
            uHnAika++;
            tDTecJz9[BfAL26 -(142 - 141)][yxBw4gjuyv] = anGo7Zz + (929 - 928);
        }
    }
    if (yxBw4gjuyv - (389 - 388) >= (136 - 136)) {
        if (!('.' != tDTecJz9[BfAL26][yxBw4gjuyv - (977 - 976)])) {
            uHnAika++;
            tDTecJz9[BfAL26][yxBw4gjuyv - (157 - 156)] = anGo7Zz + (86 - 85);
        }
    }
    if (dS9IqzN > BfAL26 +(455 - 454)) {
        if (!('.' != tDTecJz9[BfAL26 +(86 - 85)][yxBw4gjuyv])) {
            tDTecJz9[BfAL26 +(345 - 344)][yxBw4gjuyv] = anGo7Zz + (180 - 179);
            uHnAika++;
        }
    }
    if (dS9IqzN > yxBw4gjuyv + (783 - 782)) {
        if (!('.' != tDTecJz9[BfAL26][yxBw4gjuyv + (688 - 687)])) {
            tDTecJz9[BfAL26][yxBw4gjuyv + (648 - 647)] = anGo7Zz + 1;
            uHnAika++;
        }
    }
}

int main () {
    int fe3Utc, rcBA0rXfR5W, qSVDYKcCwM;
    cin >> dS9IqzN;
    anGo7Zz++;
    for (fe3Utc = (571 - 571); dS9IqzN > fe3Utc; fe3Utc++)
        for (rcBA0rXfR5W = (126 - 126); dS9IqzN > rcBA0rXfR5W; rcBA0rXfR5W++)
            cin >> tDTecJz9[fe3Utc][rcBA0rXfR5W];
    cin >> qSVDYKcCwM;
    for (fe3Utc = (844 - 844); fe3Utc < dS9IqzN; fe3Utc++)
        for (rcBA0rXfR5W = 0; dS9IqzN > rcBA0rXfR5W; rcBA0rXfR5W++)
            if (!('@' != tDTecJz9[fe3Utc][rcBA0rXfR5W])) {
                IwfM6LoXx (fe3Utc, rcBA0rXfR5W);
                uHnAika++;
            }
    while (anGo7Zz < qSVDYKcCwM + (1013 - 949)) {
        for (fe3Utc = 0; fe3Utc < dS9IqzN; fe3Utc++)
            for (rcBA0rXfR5W = 0; rcBA0rXfR5W < dS9IqzN; rcBA0rXfR5W++) {
                if (tDTecJz9[fe3Utc][rcBA0rXfR5W] == anGo7Zz)
                    IwfM6LoXx (fe3Utc, rcBA0rXfR5W);
            }
        anGo7Zz++;
    }
    cout << uHnAika << endl;
    return 0;
}

