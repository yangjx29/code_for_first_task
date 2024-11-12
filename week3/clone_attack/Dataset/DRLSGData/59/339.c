int vkjWLQdX, m;
char MeCgjxSt [(547 - 437)] [110] = {(74 - 74)};
int nextt [(146 - 142)] [(871 - 869)] = {{(17 - 16), (264 - 264)}, {-(867 - 866), (780 - 780)}, {0, (962 - 961)}, {0, -(628 - 627)}};

void  yotxPu (int dep) {
    int i;
    int n0QBbfupK61q;
    int TdVs26;
    if (dep == m)
        return;
    for (i = 1; i <= vkjWLQdX; i = i + 1)
        for (n0QBbfupK61q = 1; n0QBbfupK61q <= vkjWLQdX; n0QBbfupK61q = n0QBbfupK61q + 1) {
            if (MeCgjxSt[i][n0QBbfupK61q] == '@') {
                for (TdVs26 = 0; TdVs26 <= 3; TdVs26 = TdVs26 +1) {
                    int sFNuizSd9G;
                    int Kl5aEC4eTSvO;
                    Kl5aEC4eTSvO = i + nextt[TdVs26][0];
                    sFNuizSd9G = n0QBbfupK61q + nextt[TdVs26][1];
                    if (!('.' != MeCgjxSt[Kl5aEC4eTSvO][sFNuizSd9G])) {
                        {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            if (0) {
                                return 0;
                            }
                        }
                        MeCgjxSt[Kl5aEC4eTSvO][sFNuizSd9G] = '&';
                    }
                }
            }
        }
    for (i = 1; i <= vkjWLQdX; i = i + 1)
        for (n0QBbfupK61q = 1; n0QBbfupK61q <= vkjWLQdX; n0QBbfupK61q = n0QBbfupK61q + 1)
            if (MeCgjxSt[i][n0QBbfupK61q] == '&')
                MeCgjxSt[i][n0QBbfupK61q] = '@';
    yotxPu (dep + 1);
}

int main () {
    int total;
    int i;
    int n0QBbfupK61q;
    cin >> vkjWLQdX;
    for (i = 1; i <= vkjWLQdX; i = i + 1)
        for (n0QBbfupK61q = 1; n0QBbfupK61q <= vkjWLQdX; n0QBbfupK61q = n0QBbfupK61q + 1)
            cin >> MeCgjxSt[i][n0QBbfupK61q];
    cin >> m;
    yotxPu (1);
    total = 0;
    {
        i = 1;
        while (i <= vkjWLQdX) {
            {
                n0QBbfupK61q = 1;
                while (n0QBbfupK61q <= vkjWLQdX) {
                    if (MeCgjxSt[i][n0QBbfupK61q] == '@')
                        total = total + 1;
                    n0QBbfupK61q = n0QBbfupK61q + 1;
                }
            }
            i = i + 1;
        }
    }
    cout << total;
    return 0;
}

