int main () {
    int i;
    int OKC1Trv6R;
    int AGmrJI;
    int SvtSP2cnzsN;
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
    char maCj47s8G [(1316 - 316)] [(1097 - 97)];
    scanf ("%d", &AGmrJI);
    for (i = (833 - 833); i < AGmrJI; i = i + 1) {
        scanf ("%s", maCj47s8G[i]);
        SvtSP2cnzsN = strlen (maCj47s8G[i]);
        OKC1Trv6R = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (OKC1Trv6R = 0; OKC1Trv6R < SvtSP2cnzsN; OKC1Trv6R++) {
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
            if (maCj47s8G[i][OKC1Trv6R] == 'A') {
                maCj47s8G[i][OKC1Trv6R] = 'T';
            }
            else if (maCj47s8G[i][OKC1Trv6R] == 'T') {
                maCj47s8G[i][OKC1Trv6R] = 'A';
            }
            else if (maCj47s8G[i][OKC1Trv6R] == 'C') {
                maCj47s8G[i][OKC1Trv6R] = 'G';
            }
            else if (maCj47s8G[i][OKC1Trv6R] == 'G') {
                maCj47s8G[i][OKC1Trv6R] = 'C';
            }
            else {
            };
        }
        printf ("%s\n", maCj47s8G[i]);
    }
    return 0;
}

