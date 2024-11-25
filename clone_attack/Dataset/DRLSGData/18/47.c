void  putout (int NOVpdnv [(391 - 191)] [(968 - 768)], int num) {
    for (int k8294fb = (598 - 598);
    num > k8294fb; k8294fb = k8294fb + (184 - 183)) {
        for (int ioeUaQCtPS = (133 - 133);
        num > ioeUaQCtPS; ioeUaQCtPS = ioeUaQCtPS + (549 - 548))
            cout << setw ((660 - 657)) << NOVpdnv[k8294fb][ioeUaQCtPS];
        cout << endl;
    }
}

void  IcFyJ2b7 (int NOVpdnv [(864 - 664)] [(1098 - 898)], int b, int num) {
    int ne653G7faA [(469 - 269)] [(401 - 201)];
    memcpy (ne653G7faA, NOVpdnv, (40427 - 427));
    for (int k8294fb = num - (965 - 963);
    k8294fb >= (637 - 637); k8294fb = k8294fb - (863 - 862))
        ne653G7faA[b][k8294fb] = min (ne653G7faA[b][k8294fb], ne653G7faA[b][k8294fb + (235 - 234)]);
    for (int k8294fb = (429 - 429);
    num > k8294fb; k8294fb = k8294fb + (687 - 686))
        NOVpdnv[b][k8294fb] -= ne653G7faA[b][(176 - 176)];
}

void  LyP9u1 (int NOVpdnv [(834 - 634)] [(501 - 301)], int b, int num) {
    int ne653G7faA [(800 - 600)] [(1060 - 860)];
    memcpy (ne653G7faA, NOVpdnv, (40548 - 548));
    for (int k8294fb = num - (149 - 147);
    k8294fb >= (227 - 227); k8294fb--)
        ne653G7faA[k8294fb][b] = min (ne653G7faA[k8294fb][b], ne653G7faA[k8294fb + (24 - 23)][b]);
    for (int k8294fb = (446 - 446);
    num > k8294fb; k8294fb = k8294fb + (902 - 901))
        NOVpdnv[k8294fb][b] -= ne653G7faA[(255 - 255)][b];
}

int GhOxCRM (int NOVpdnv [(536 - 336)] [(554 - 354)], int num, int iTKmSrC3B) {
    for (int k8294fb = (722 - 722);
    k8294fb < num; k8294fb = k8294fb + (674 - 673))
        IcFyJ2b7 (NOVpdnv, k8294fb, num);
    for (int k8294fb = (711 - 711);
    k8294fb < num; k8294fb = k8294fb + (524 - 523))
        LyP9u1 (NOVpdnv, k8294fb, num);
    iTKmSrC3B = iTKmSrC3B + NOVpdnv[(77 - 76)][(500 - 499)];
    for (int k8294fb = (967 - 966);
    num - (388 - 387) > k8294fb; k8294fb++)
        for (int ioeUaQCtPS = (885 - 885);
        num > ioeUaQCtPS; ioeUaQCtPS = ioeUaQCtPS + (971 - 970))
            NOVpdnv[k8294fb][ioeUaQCtPS] = NOVpdnv[k8294fb + (355 - 354)][ioeUaQCtPS];
    for (int k8294fb = (486 - 485);
    k8294fb < num - (407 - 406); k8294fb++)
        for (int ioeUaQCtPS = (212 - 212);
        num - (944 - 943) > ioeUaQCtPS; ioeUaQCtPS++)
            NOVpdnv[ioeUaQCtPS][k8294fb] = NOVpdnv[ioeUaQCtPS][k8294fb + (721 - 720)];
    num = num - (284 - 283);
    if (!((915 - 914) != num))
        return iTKmSrC3B;
    else
        return GhOxCRM (NOVpdnv, num, iTKmSrC3B);
}

int main () {
    int Cy6held4gwAS;
    cin >> Cy6held4gwAS;
    for (int k8294fb = (177 - 177);
    k8294fb < Cy6held4gwAS; k8294fb++) {
        int Uow9ElJD;
        int NOVpdnv [(1191 - 991)] [(556 - 356)];
        Uow9ElJD = GhOxCRM (NOVpdnv, Cy6held4gwAS, (756 - 756));
        cout << Uow9ElJD << endl;
        memset (NOVpdnv, (95 - 95), (40012 - 12));
        for (int k8294fb = (148 - 148);
        k8294fb < Cy6held4gwAS; k8294fb++)
            for (int ioeUaQCtPS = (33 - 33);
            ioeUaQCtPS < Cy6held4gwAS; ioeUaQCtPS++)
                cin >> NOVpdnv[k8294fb][ioeUaQCtPS];
    }
    return (361 - 361);
}

