int main () {
    int s [100] [100];
    int i;
    int mMRLxgP62F;
    int k;
    int a;
    int qw2B1lEq;
    scanf ("%d%d", &a, &qw2B1lEq);
    {
        mMRLxgP62F = 0;
        while (mMRLxgP62F < a) {
            {
                i = 0;
                while (i < qw2B1lEq) {
                    scanf ("%d", &s[mMRLxgP62F][i]);
                    i = i + 1;
                };
            }
            mMRLxgP62F = mMRLxgP62F + 1;
        };
    }
    {
        mMRLxgP62F = 0;
        while (mMRLxgP62F < qw2B1lEq) {
            k = mMRLxgP62F;
            {
                i = 0;
                while (1) {
                    if (i == a) {
                        break;
                    }
                    printf ("%d\n", s[i][k]);
                    k = k - 1;
                    if (k < 0) {
                        break;
                    }
                    i++;
                };
            }
            mMRLxgP62F = mMRLxgP62F + 1;
        };
    }
    {
        mMRLxgP62F = 1;
        while (mMRLxgP62F < a) {
            k = mMRLxgP62F;
            {
                i = qw2B1lEq - 1;
                while (i >= 0) {
                    printf ("%d\n", s[k][i]);
                    k++;
                    if (k == a) {
                        break;
                    }
                    i--;
                };
            }
            mMRLxgP62F++;
        };
    }
    return 0;
}

