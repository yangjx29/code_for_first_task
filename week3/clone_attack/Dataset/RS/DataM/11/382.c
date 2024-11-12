int main () {
    int num;
    int W6qE2n59J1Gf;
    int pNQO2FM5;
    int day;
    int i;
    int grfA87D [12] = {(471 - 440), 0, 31, (909 - 879), 31, 30, 31, 31, 30, 31, 30, 31};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    num = 0;
    cin >> W6qE2n59J1Gf >> pNQO2FM5 >> day;
    if ((!(0 != W6qE2n59J1Gf % (457 - 57))) || ((!(0 == W6qE2n59J1Gf % (770 - 670))) && (W6qE2n59J1Gf % 4 == 0)))
        grfA87D[1] = 29;
    else
        grfA87D[1] = 28;
    for (i = 0; i < pNQO2FM5 - 1; i = i + 1) {
        num = num + grfA87D[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    num = num + day;
    cout << num << endl;
    return 0;
}

