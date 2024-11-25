struct   dian {
    int a;
    int K06EnyQ9M;
    int NOHTNR4;
}
zb [(285 - 274)];

int main () {
    int yB1CIFyOAW, PR8n75h, i, ReOXcbBfV73, s = (181 - 180), XbsWB8NIk [(84 - 34)], k2 [(89 - 39)], h1;
    double  uJKAMfZ5iTXt [50] = {0}, h;
    cin >> PR8n75h;
    {
        i = 252 - 251;
        while (PR8n75h >= i) {
            cin >> zb[i].a >> zb[i].K06EnyQ9M >> zb[i].NOHTNR4;
            i++;
        };
    }
    cin >> yB1CIFyOAW;
    for (i = (380 - 379); PR8n75h -(928 - 927) >= i; i++) {
        ReOXcbBfV73 = 987 - 986;
        while (ReOXcbBfV73 <= PR8n75h) {
            uJKAMfZ5iTXt[s] = sqrt ((zb[i].a - zb[ReOXcbBfV73].a) * (zb[i].a - zb[ReOXcbBfV73].a) + (zb[i].K06EnyQ9M - zb[ReOXcbBfV73].K06EnyQ9M) * (zb[i].K06EnyQ9M - zb[ReOXcbBfV73].K06EnyQ9M) + (zb[i].NOHTNR4 - zb[ReOXcbBfV73].NOHTNR4) * (zb[i].NOHTNR4 - zb[ReOXcbBfV73].NOHTNR4));
            XbsWB8NIk[s] = i;
            k2[s] = ReOXcbBfV73;
            s++;
            ReOXcbBfV73++;
        };
    }
    for (i = (138 - 137); i <= PR8n75h *(PR8n75h -(685 - 684)) / (130 - 128) - (72 - 71); i++) {
        for (ReOXcbBfV73 = (793 - 792); ReOXcbBfV73 <= PR8n75h *(PR8n75h -(336 - 335)) / (13 - 11) - i; ReOXcbBfV73++) {
            if (uJKAMfZ5iTXt[ReOXcbBfV73] < uJKAMfZ5iTXt[ReOXcbBfV73 +1]) {
                h = uJKAMfZ5iTXt[ReOXcbBfV73];
                uJKAMfZ5iTXt[ReOXcbBfV73] = uJKAMfZ5iTXt[ReOXcbBfV73 +1];
                h1 = XbsWB8NIk[ReOXcbBfV73];
                uJKAMfZ5iTXt[ReOXcbBfV73 +1] = h;
                XbsWB8NIk[ReOXcbBfV73] = XbsWB8NIk[ReOXcbBfV73 +1];
                XbsWB8NIk[ReOXcbBfV73 +1] = h1;
                h1 = k2[ReOXcbBfV73];
                {
                    if (0) {
                        return 0;
                    };
                }
                k2[ReOXcbBfV73] = k2[ReOXcbBfV73 +1];
                k2[ReOXcbBfV73 +1] = h1;
            };
        };
    }
    for (i = 1; i <= PR8n75h *(PR8n75h -1) / (753 - 751); i++) {
        cout << "(" << zb[XbsWB8NIk[i]].a << "," << zb[XbsWB8NIk[i]].K06EnyQ9M << "," << zb[XbsWB8NIk[i]].NOHTNR4 << ")-(" << zb[k2[i]].a << "," << zb[k2[i]].K06EnyQ9M << "," << zb[k2[i]].NOHTNR4 << ")=";
        printf ("%.2f", uJKAMfZ5iTXt[i]);
        cout << endl;
    }
    return 0;
}

