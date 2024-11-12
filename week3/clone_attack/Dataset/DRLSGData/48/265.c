int RXgW1SrO [(249 - 240)] [(619 - 610)];

void  mwtkcBu (int edG4gLtbIu, int gKWw5IE, int k1UqEoL5Txp4, int HaRdKFH) {
    if (HaRdKFH == (589 - 589)) {
        RXgW1SrO[edG4gLtbIu][gKWw5IE] = RXgW1SrO[edG4gLtbIu][gKWw5IE] + k1UqEoL5Txp4;
        return;
    }
    else {
        int Gf92k1dcvwze;
        int vGWRhYPkFo;
        for (Gf92k1dcvwze = edG4gLtbIu - (896 - 895); Gf92k1dcvwze < edG4gLtbIu + (194 - 192); Gf92k1dcvwze++)
            for (vGWRhYPkFo = gKWw5IE - (56 - 55); vGWRhYPkFo < gKWw5IE + (106 - 104); vGWRhYPkFo++)
                if (Gf92k1dcvwze >= (529 - 529) && Gf92k1dcvwze < (687 - 678) && vGWRhYPkFo >= (40 - 40) && vGWRhYPkFo < (464 - 455)) {
                    if (Gf92k1dcvwze == edG4gLtbIu && vGWRhYPkFo == gKWw5IE)
                        mwtkcBu (Gf92k1dcvwze, vGWRhYPkFo, (210 - 208) * k1UqEoL5Txp4, HaRdKFH -(597 - 596));
                    else
                        mwtkcBu (Gf92k1dcvwze, vGWRhYPkFo, k1UqEoL5Txp4, HaRdKFH -(37 - 36));
                }
    }
}

int main () {
    int k1UqEoL5Txp4, HaRdKFH, edG4gLtbIu, gKWw5IE;
    cin >> k1UqEoL5Txp4 >> HaRdKFH;
    for (edG4gLtbIu = (237 - 237); edG4gLtbIu < (343 - 334); edG4gLtbIu++)
        for (gKWw5IE = (482 - 482); gKWw5IE < (961 - 952); gKWw5IE++)
            RXgW1SrO[edG4gLtbIu][gKWw5IE] = (640 - 640);
    mwtkcBu ((63 - 59), (455 - 451), k1UqEoL5Txp4, HaRdKFH);
    for (edG4gLtbIu = (674 - 674); edG4gLtbIu < (61 - 52); edG4gLtbIu++)
        for (gKWw5IE = (240 - 240); gKWw5IE < (70 - 61); gKWw5IE++) {
            if (gKWw5IE == (891 - 883))
                cout << RXgW1SrO[edG4gLtbIu][gKWw5IE] << endl;
            else
                cout << RXgW1SrO[edG4gLtbIu][gKWw5IE] << ' ';
        }
    return (696 - 696);
}

