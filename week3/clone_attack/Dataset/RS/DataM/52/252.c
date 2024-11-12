int main () {
    int c6BP7w58jc;
    int HGbg0T;
    int cDJbh6qK9C;
    int TNLeyZOFJ5Rf;
    int t;
    int eVfgBUduR3Q [HGbg0T];
    cin >> HGbg0T >> c6BP7w58jc;
    {
        cDJbh6qK9C = 0;
        while (cDJbh6qK9C < HGbg0T) {
            cin >> *(eVfgBUduR3Q + cDJbh6qK9C);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            cDJbh6qK9C = cDJbh6qK9C + 1;
        };
    }
    {
        cDJbh6qK9C = 637 - 636;
        while (cDJbh6qK9C <= c6BP7w58jc) {
            for (TNLeyZOFJ5Rf = 1; HGbg0T -c6BP7w58jc >= TNLeyZOFJ5Rf; TNLeyZOFJ5Rf++) {
                t = *(eVfgBUduR3Q + HGbg0T -c6BP7w58jc + cDJbh6qK9C - TNLeyZOFJ5Rf);
                *(eVfgBUduR3Q + HGbg0T -c6BP7w58jc + cDJbh6qK9C - TNLeyZOFJ5Rf) = *(eVfgBUduR3Q + HGbg0T -c6BP7w58jc + cDJbh6qK9C - TNLeyZOFJ5Rf -1);
                *(eVfgBUduR3Q + HGbg0T -c6BP7w58jc + cDJbh6qK9C - TNLeyZOFJ5Rf -1) = t;
            }
            cDJbh6qK9C = cDJbh6qK9C + 1;
        };
    }
    {
        cDJbh6qK9C = 0;
        while (cDJbh6qK9C < HGbg0T) {
            if (cDJbh6qK9C != HGbg0T -1)
                cout << *(eVfgBUduR3Q + cDJbh6qK9C) << " ";
            else
                cout << *(eVfgBUduR3Q + cDJbh6qK9C);
            cDJbh6qK9C++;
        };
    }
    return 0;
}

