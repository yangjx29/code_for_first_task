const  int olXWPSRoE [8] = {-1, 0, 1, 0, 0, -1, 0, 1};
struct   pnt {
    int t3rtdJgc, y, DIZC2qaDW9U0;
}
T5cxrZ [100050];
char b2slxVMpB7O [128] [128];
int ans, Hyftx41N7, n;

int main () {
    int BQVkH2ZY;
    int r;
    int h4MWYmOC;
    int j;
    BQVkH2ZY = 0;
    r = 0;
    scanf ("%d", &n);
    {
        h4MWYmOC = 0;
        for (; n > h4MWYmOC;) {
            j = 0;
            for (; j < n;) {
                scanf (" %c", &b2slxVMpB7O[h4MWYmOC][j]);
                if (!('@' != b2slxVMpB7O[h4MWYmOC][j])) {
                    T5cxrZ[r].t3rtdJgc = h4MWYmOC;
                    T5cxrZ[r].y = j;
                    T5cxrZ[r].DIZC2qaDW9U0 = 1;
                    r++;
                }
                j++;
            }
            h4MWYmOC++;
        }
    }
    scanf ("%d", &Hyftx41N7);
    ans = r;
    int xt;
    int bFjZHznk;
    for (; BQVkH2ZY < r;) {
        {
            {
                if (0) {
                    return 0;
                }
            }
            h4MWYmOC = 0;
            for (; 4 > h4MWYmOC;) {
                xt = T5cxrZ[BQVkH2ZY].t3rtdJgc + olXWPSRoE[2 * h4MWYmOC];
                bFjZHznk = T5cxrZ[BQVkH2ZY].y + olXWPSRoE[2 * h4MWYmOC + 1];
                if (b2slxVMpB7O[xt][bFjZHznk] != '.')
                    continue;
                ans++;
                b2slxVMpB7O[xt][bFjZHznk] = '@';
                if (T5cxrZ[BQVkH2ZY].DIZC2qaDW9U0 == Hyftx41N7 -1)
                    continue;
                T5cxrZ[r].t3rtdJgc = xt;
                T5cxrZ[r].y = bFjZHznk;
                T5cxrZ[r].DIZC2qaDW9U0 = T5cxrZ[BQVkH2ZY].DIZC2qaDW9U0 + 1;
                r++;
                h4MWYmOC++;
            }
        }
        BQVkH2ZY++;
    }
    printf ("%d\n", ans);
    return 0;
}

