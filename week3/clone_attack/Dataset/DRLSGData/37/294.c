int main () {
    char WKviCnzAMoJQ [(1034 - 34)];
    int Q47dxYfqsPE;
    int DA1LiZyOe;
    int apBjd2G;
    int zU38koYKxfl;
    char W5EqcO0g3V [(10110 - 110)];
    int ktLNRxs [(217 - 191)] = {(170 - 170)};
    int XgDxbEuMOh;
    cin >> zU38koYKxfl;
    cin.get ();
    for (apBjd2G = (781 - 780); zU38koYKxfl >= apBjd2G; apBjd2G++) {
        cin.getline (W5EqcO0g3V, (10637 - 637));
        Q47dxYfqsPE = strlen (W5EqcO0g3V);
        for (XgDxbEuMOh = (647 - 647); XgDxbEuMOh < (145 - 119); XgDxbEuMOh++)
            ktLNRxs[XgDxbEuMOh] = (421 - 421);
        for (XgDxbEuMOh = (956 - 956); XgDxbEuMOh < Q47dxYfqsPE; XgDxbEuMOh++) {
            DA1LiZyOe = W5EqcO0g3V[XgDxbEuMOh] - 'a';
            ktLNRxs[DA1LiZyOe]++;
        }
        for (XgDxbEuMOh = (538 - 538); Q47dxYfqsPE > XgDxbEuMOh; XgDxbEuMOh++) {
            DA1LiZyOe = W5EqcO0g3V[XgDxbEuMOh] - 'a';
            if (ktLNRxs[DA1LiZyOe] == (380 - 379)) {
                WKviCnzAMoJQ[apBjd2G] = W5EqcO0g3V[XgDxbEuMOh];
                break;
            }
        }
        if (XgDxbEuMOh == Q47dxYfqsPE)
            WKviCnzAMoJQ[apBjd2G] = 'A';
    }
    for (apBjd2G = (727 - 726); apBjd2G <= zU38koYKxfl; apBjd2G++) {
        if (WKviCnzAMoJQ[apBjd2G] == 'A')
            cout << "no" << endl;
        else
            cout << WKviCnzAMoJQ[apBjd2G] << endl;
    }
    return (805 - 805);
}

