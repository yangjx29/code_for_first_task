int main () {
    int ymiyYlcejC [102] [102], T38M0I [102] [102], z9xU6ua [102] [102] = {0}, l3g0aI, V2tRXI, F53sCd9Ip2R, gGmco5P2A94j, cvhPyjLHXe, aXvsDKoTqcfm, Td1gMjZpmcwa;
    cin >> l3g0aI >> V2tRXI;
    for (cvhPyjLHXe = 1; cvhPyjLHXe <= l3g0aI; cvhPyjLHXe++) {
        for (aXvsDKoTqcfm = 1; V2tRXI >= aXvsDKoTqcfm; aXvsDKoTqcfm++) {
            cin >> ymiyYlcejC[cvhPyjLHXe][aXvsDKoTqcfm];
        };
    }
    cin >> F53sCd9Ip2R >> gGmco5P2A94j;
    {
        cvhPyjLHXe = 1;
        while (cvhPyjLHXe <= F53sCd9Ip2R) {
            for (aXvsDKoTqcfm = 1; aXvsDKoTqcfm <= gGmco5P2A94j; aXvsDKoTqcfm++) {
                cin >> T38M0I[cvhPyjLHXe][aXvsDKoTqcfm];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cvhPyjLHXe = cvhPyjLHXe + 1;
        };
    }
    {
        cvhPyjLHXe = 1;
        while (cvhPyjLHXe <= l3g0aI) {
            for (aXvsDKoTqcfm = 1; aXvsDKoTqcfm <= gGmco5P2A94j; aXvsDKoTqcfm++) {
                Td1gMjZpmcwa = 1;
                while (Td1gMjZpmcwa <= V2tRXI) {
                    z9xU6ua[cvhPyjLHXe][aXvsDKoTqcfm] += ymiyYlcejC[cvhPyjLHXe][Td1gMjZpmcwa] * T38M0I[Td1gMjZpmcwa][aXvsDKoTqcfm];
                    Td1gMjZpmcwa++;
                }
                if (aXvsDKoTqcfm < gGmco5P2A94j)
                    cout << z9xU6ua[cvhPyjLHXe][aXvsDKoTqcfm] << " ";
                if (aXvsDKoTqcfm == gGmco5P2A94j)
                    cout << z9xU6ua[cvhPyjLHXe][aXvsDKoTqcfm] << endl;
            }
            cvhPyjLHXe++;
        };
    }
    return 0;
}

