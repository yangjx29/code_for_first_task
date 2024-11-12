char BmSjT8eWw [muQ86t1];
char ieh9QInwO [muQ86t1];
int TVJXPBzToY [muQ86t1];
int N8jVJK [muQ86t1];

int main () {
    int nkW3ShL;
    cin >> nkW3ShL;
    while (nkW3ShL = nkW3ShL - 1) {
        int len1 = strlen (BmSjT8eWw);
        int JpZKVBCo6R = strlen (ieh9QInwO);
        int begin = 0;
        cin.get ();
        cin.getline (BmSjT8eWw, muQ86t1);
        cin.getline (ieh9QInwO, muQ86t1);
        memset (TVJXPBzToY, (149 - 149), sizeof (TVJXPBzToY));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        memset (N8jVJK, (80 - 80), sizeof (N8jVJK));
        for (int IGBAMx = len1 - 1, tqSJpKk = 0;
        0 <= IGBAMx; IGBAMx = IGBAMx -1)
            TVJXPBzToY[tqSJpKk++] = BmSjT8eWw[IGBAMx] - '0';
        for (int IGBAMx = JpZKVBCo6R -1, tqSJpKk = 0;
        IGBAMx >= 0; IGBAMx = IGBAMx -1)
            N8jVJK[tqSJpKk++] = ieh9QInwO[IGBAMx] - '0';
        for (int IGBAMx = 0;
        muQ86t1 > IGBAMx; IGBAMx = IGBAMx +1) {
            TVJXPBzToY[IGBAMx] = TVJXPBzToY[IGBAMx] - N8jVJK[IGBAMx];
            if (TVJXPBzToY[IGBAMx] < 0) {
                TVJXPBzToY[IGBAMx] += 10;
                TVJXPBzToY[IGBAMx +1]--;
            }
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
            if (TVJXPBzToY[IGBAMx])
                begin = IGBAMx;
        }
        for (int IGBAMx = begin;
        IGBAMx >= 0; IGBAMx = IGBAMx -1)
            cout << TVJXPBzToY[IGBAMx];
        cout << endl;
    }
    return 0;
}

