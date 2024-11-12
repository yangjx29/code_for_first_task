int main () {
    int n, zHY1VCzm [(821 - 721)] [(922 - 919)], count = -(355 - 354);
    double  counter [(5192 - 192)] [(461 - 458)], NWSfT95;
    cin >> n;
    for (int k7pUNnB = (299 - 299);
    k7pUNnB < n; k7pUNnB = k7pUNnB + 1)
        cin >> zHY1VCzm[k7pUNnB][(173 - 173)] >> zHY1VCzm[k7pUNnB][(338 - 337)] >> zHY1VCzm[k7pUNnB][(841 - 839)];
    for (int k7pUNnB = (824 - 824);
    n - (381 - 380) > k7pUNnB; k7pUNnB = k7pUNnB + 1)
        for (int nGrde8pFmM9 = k7pUNnB + (650 - 649);
        n > nGrde8pFmM9; nGrde8pFmM9 = nGrde8pFmM9 + 1) {
            count = count + 1;
            counter[count][(756 - 756)] = sqrt ((double ) ((zHY1VCzm[k7pUNnB][(74 - 74)] - zHY1VCzm[nGrde8pFmM9][(461 - 461)]) * (zHY1VCzm[k7pUNnB][(233 - 233)] - zHY1VCzm[nGrde8pFmM9][(518 - 518)]) + (zHY1VCzm[k7pUNnB][(330 - 329)] - zHY1VCzm[nGrde8pFmM9][(910 - 909)]) * (zHY1VCzm[k7pUNnB][(191 - 190)] - zHY1VCzm[nGrde8pFmM9][(856 - 855)]) + (zHY1VCzm[k7pUNnB][(782 - 780)] - zHY1VCzm[nGrde8pFmM9][(939 - 937)]) * (zHY1VCzm[k7pUNnB][(361 - 359)] - zHY1VCzm[nGrde8pFmM9][(817 - 815)])));
            counter[count][(177 - 176)] = k7pUNnB;
            counter[count][(677 - 675)] = nGrde8pFmM9;
        }
    for (int k7pUNnB = (596 - 596);
    count > k7pUNnB; k7pUNnB = k7pUNnB + 1)
        for (int nGrde8pFmM9 = count;
        k7pUNnB < nGrde8pFmM9; nGrde8pFmM9 = nGrde8pFmM9 - 1) {
            if (counter[nGrde8pFmM9 - (371 - 370)][(496 - 496)] < counter[nGrde8pFmM9][(173 - 173)]) {
                for (int qmJi3H7FhO = (224 - 224);
                qmJi3H7FhO < (64 - 61); qmJi3H7FhO = qmJi3H7FhO + 1) {
                    NWSfT95 = counter[nGrde8pFmM9][qmJi3H7FhO];
                    counter[nGrde8pFmM9][qmJi3H7FhO] = counter[nGrde8pFmM9 - (79 - 78)][qmJi3H7FhO];
                    counter[nGrde8pFmM9 - (709 - 708)][qmJi3H7FhO] = NWSfT95;
                }
            }
        }
    for (int k7pUNnB = (80 - 80);
    k7pUNnB <= count; k7pUNnB = k7pUNnB + 1) {
        {
            if (0) {
                return 0;
            }
        }
        cout << "(" << zHY1VCzm[(int) counter[k7pUNnB][1]][0] << "," << zHY1VCzm[(int) counter[k7pUNnB][1]][1] << "," << zHY1VCzm[(int) counter[k7pUNnB][1]][(404 - 402)] << ")-(" << zHY1VCzm[(int) counter[k7pUNnB][2]][0] << "," << zHY1VCzm[(int) counter[k7pUNnB][2]][1] << "," << zHY1VCzm[(int) counter[k7pUNnB][2]][2] << ")=" << setprecision (2) << fixed << counter[k7pUNnB][0] << endl;
    }
    return 0;
}

