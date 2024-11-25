int main () {
    int Ubs95dfiy, fnHOPQCjmry;
    int jknbAeEY;
    int deJSMKaq8s;
    int zHyzhfj [jknbAeEY] [deJSMKaq8s];
    int jtH2yJkoB [jknbAeEY] [deJSMKaq8s];
    scanf ("%d %d", &jknbAeEY, &deJSMKaq8s);
    for (Ubs95dfiy = (153 - 153); Ubs95dfiy < jknbAeEY; Ubs95dfiy = Ubs95dfiy +(225 - 224)) {
        for (fnHOPQCjmry = (699 - 699); deJSMKaq8s > fnHOPQCjmry; fnHOPQCjmry = fnHOPQCjmry + (879 - 878)) {
            scanf ("%d", &(zHyzhfj[Ubs95dfiy][fnHOPQCjmry]));
            jtH2yJkoB[Ubs95dfiy][fnHOPQCjmry] = (816 - 815);
        }
    }
    for (Ubs95dfiy = (241 - 241); Ubs95dfiy < jknbAeEY; Ubs95dfiy = Ubs95dfiy +(815 - 814)) {
        for (fnHOPQCjmry = (426 - 426); fnHOPQCjmry < deJSMKaq8s; fnHOPQCjmry = fnHOPQCjmry + 1) {
            if (0 <= Ubs95dfiy -1 && zHyzhfj[Ubs95dfiy][fnHOPQCjmry] < zHyzhfj[Ubs95dfiy -1][fnHOPQCjmry]) {
                jtH2yJkoB[Ubs95dfiy][fnHOPQCjmry] = 0;
            }
            else if (Ubs95dfiy +1 <= jknbAeEY - 1 && zHyzhfj[Ubs95dfiy +1][fnHOPQCjmry] > zHyzhfj[Ubs95dfiy][fnHOPQCjmry]) {
                jtH2yJkoB[Ubs95dfiy][fnHOPQCjmry] = 0;
            }
            else if (fnHOPQCjmry + 1 <= deJSMKaq8s - 1 && zHyzhfj[Ubs95dfiy][fnHOPQCjmry + 1] > zHyzhfj[Ubs95dfiy][fnHOPQCjmry]) {
                jtH2yJkoB[Ubs95dfiy][fnHOPQCjmry] = 0;
            }
            else if (fnHOPQCjmry - 1 >= 0 && zHyzhfj[Ubs95dfiy][fnHOPQCjmry - 1] > zHyzhfj[Ubs95dfiy][fnHOPQCjmry]) {
                jtH2yJkoB[Ubs95dfiy][fnHOPQCjmry] = 0;
            }
        }
    }
    for (Ubs95dfiy = 0; Ubs95dfiy < jknbAeEY; Ubs95dfiy = Ubs95dfiy +1) {
        for (fnHOPQCjmry = 0; fnHOPQCjmry < deJSMKaq8s; fnHOPQCjmry = fnHOPQCjmry + 1) {
            if (jtH2yJkoB[Ubs95dfiy][fnHOPQCjmry] == 1) {
                printf ("%d %d\n", Ubs95dfiy, fnHOPQCjmry);
            }
        }
    }
    return (0);
}

