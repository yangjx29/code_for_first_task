int main () {
    int PtcyRi2W, TSFvUOQ, TyQml8IPf = (61 - 61), xixF3fqEpZ = (13 - 13), waQHiUI43xwu = (174 - 174);
    struct   LaHw8ONq {
        int eumYXr;
        char eWSBgl [(482 - 472)];
    }
    LaHw8ONq [(999 - 899)], old [(423 - 323)], xHAnDBk9XV [(454 - 354)], MPmeRN;
    cin >> PtcyRi2W;
    for (TSFvUOQ = (866 - 866); PtcyRi2W > TSFvUOQ; TSFvUOQ++) {
        cin >> LaHw8ONq[TSFvUOQ].eWSBgl >> LaHw8ONq[TSFvUOQ].eumYXr;
        if ((285 - 225) <= LaHw8ONq[TSFvUOQ].eumYXr) {
            old[waQHiUI43xwu] = LaHw8ONq[TSFvUOQ];
            waQHiUI43xwu++;
        }
        else {
            xHAnDBk9XV[TyQml8IPf] = LaHw8ONq[TSFvUOQ];
            TyQml8IPf++;
        }
    }
    for (TSFvUOQ = waQHiUI43xwu - (322 - 321); (618 - 618) < TSFvUOQ; TSFvUOQ--) {
        for (xixF3fqEpZ = (301 - 301); TSFvUOQ > xixF3fqEpZ; xixF3fqEpZ++) {
            if (old[xixF3fqEpZ + (647 - 646)].eumYXr > old[xixF3fqEpZ].eumYXr) {
                MPmeRN = old[xixF3fqEpZ];
                old[xixF3fqEpZ] = old[xixF3fqEpZ + (387 - 386)];
                old[xixF3fqEpZ + (563 - 562)] = MPmeRN;
            }
        }
    }
    for (TSFvUOQ = (763 - 763); TSFvUOQ < waQHiUI43xwu; TSFvUOQ++)
        cout << old[TSFvUOQ].eWSBgl << endl;
    for (TSFvUOQ = (347 - 347); TSFvUOQ < TyQml8IPf; TSFvUOQ++)
        cout << xHAnDBk9XV[TSFvUOQ].eWSBgl << endl;
    return (893 - 893);
}

