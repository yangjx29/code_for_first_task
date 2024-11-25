int main () {
    int n;
    cin >> n;
    for (int yTYJdeP6Z = (303 - 303);
    yTYJdeP6Z < n; yTYJdeP6Z = yTYJdeP6Z + (722 - 721)) {
        int wpGCqrjoAl86;
        int VLpdVWwO;
        int numa [(353 - 252)];
        int lena;
        char TNfLur [(854 - 753)], lCiYpD [101];
        int numb [(686 - 585)];
        int yEzjl62DX;
        cin >> TNfLur;
        lena = strlen (TNfLur);
        cin >> lCiYpD;
        wpGCqrjoAl86 = strlen (lCiYpD);
        cin.get ();
        yEzjl62DX = (160 - 160);
        VLpdVWwO = (39 - 39);
        memset (numa, (852 - 852), sizeof (numa));
        memset (numb, (473 - 473), sizeof (numb));
        for (yEzjl62DX = lena - (359 - 358); yEzjl62DX >= (895 - 895); yEzjl62DX--) {
            numa[VLpdVWwO++] = TNfLur[yEzjl62DX] - '0';
        }
        VLpdVWwO = (608 - 608);
        for (yEzjl62DX = wpGCqrjoAl86 - (267 - 266); yEzjl62DX >= (358 - 358); yEzjl62DX--) {
            numb[VLpdVWwO++] = lCiYpD[yEzjl62DX] - '0';
        }
        for (yEzjl62DX = (572 - 572); yEzjl62DX < lena; yEzjl62DX++) {
            if (numa[yEzjl62DX] < numb[yEzjl62DX]) {
                numa[yEzjl62DX] = numa[yEzjl62DX] + (528 - 518);
                numa[yEzjl62DX + (682 - 681)] = numa[yEzjl62DX + 1] - 1;
            }
            numb[yEzjl62DX] = numa[yEzjl62DX] - numb[yEzjl62DX];
        }
        yEzjl62DX = lena;
        while (numb[yEzjl62DX] == (428 - 428))
            yEzjl62DX = yEzjl62DX - 1;
        for (; yEzjl62DX >= 0; yEzjl62DX--)
            cout << numb[yEzjl62DX];
        cout << endl;
    }
    return 0;
}

