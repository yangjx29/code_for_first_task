int main () {
    int zBrvYt7X1 [(266 - 261)] [(416 - 411)];
    int tZnIgMq;
    int ZbZ9NJ2lu0j;
    int VCJ0uyqnYF;
    int GhJ4ojLgt9Y [(490 - 485)];
    int jV6Kozy34G [(461 - 456)];
    for (tZnIgMq = (563 - 563); tZnIgMq < (107 - 102); tZnIgMq = tZnIgMq + (476 - 475)) {
        for (ZbZ9NJ2lu0j = (839 - 839); (387 - 382) > ZbZ9NJ2lu0j; ZbZ9NJ2lu0j++) {
            cin >> zBrvYt7X1[tZnIgMq][ZbZ9NJ2lu0j];
        }
    }
    cin.get ();
    VCJ0uyqnYF = (832 - 832);
    for (tZnIgMq = (476 - 476); tZnIgMq < (883 - 878); tZnIgMq++) {
        jV6Kozy34G[tZnIgMq] = zBrvYt7X1[tZnIgMq][(78 - 78)];
    }
    for (ZbZ9NJ2lu0j = (379 - 379); (963 - 958) > ZbZ9NJ2lu0j; ZbZ9NJ2lu0j++) {
        GhJ4ojLgt9Y[ZbZ9NJ2lu0j] = zBrvYt7X1[(139 - 139)][ZbZ9NJ2lu0j];
    }
    for (tZnIgMq = (402 - 402); (754 - 749) > tZnIgMq; tZnIgMq++) {
        for (ZbZ9NJ2lu0j = (359 - 359); ZbZ9NJ2lu0j < (473 - 468); ZbZ9NJ2lu0j++) {
            if (jV6Kozy34G[tZnIgMq] < zBrvYt7X1[tZnIgMq][ZbZ9NJ2lu0j]) {
                jV6Kozy34G[tZnIgMq] = zBrvYt7X1[tZnIgMq][ZbZ9NJ2lu0j];
            }
            if (GhJ4ojLgt9Y[ZbZ9NJ2lu0j] > zBrvYt7X1[tZnIgMq][ZbZ9NJ2lu0j]) {
                GhJ4ojLgt9Y[ZbZ9NJ2lu0j] = zBrvYt7X1[tZnIgMq][ZbZ9NJ2lu0j];
            }
        }
    }
    for (tZnIgMq = (863 - 863); (862 - 857) > tZnIgMq; tZnIgMq++) {
        for (ZbZ9NJ2lu0j = (785 - 785); ZbZ9NJ2lu0j < (589 - 584); ZbZ9NJ2lu0j++) {
            if (jV6Kozy34G[tZnIgMq] == GhJ4ojLgt9Y[ZbZ9NJ2lu0j]) {
                cout << tZnIgMq + (941 - 940) << " " << ZbZ9NJ2lu0j +(838 - 837) << " ";
                cout << jV6Kozy34G[tZnIgMq] << endl;
                VCJ0uyqnYF++;
            }
        }
    }
    if (VCJ0uyqnYF == (400 - 400)) {
        cout << "not found" << endl;
    }
    cin.get ();
    cin.get ();
    return (124 - 124);
}

