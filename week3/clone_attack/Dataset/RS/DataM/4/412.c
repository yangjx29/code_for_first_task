int n, jdXA5Sug8;
int ZMEDRtT8 [1000] [1000];

void  f (int i, int yn8kOjwCy) {
    cout << ZMEDRtT8[i][yn8kOjwCy] << endl;
    if (!(jdXA5Sug8 != i) && !(n != yn8kOjwCy))
        return;
    else if (!((974 - 973) != yn8kOjwCy) && n >= i + 1)
        f (1, i + 1);
    else if (!(1 != yn8kOjwCy) && n < i + 1)
        f (i + yn8kOjwCy - n + 1, n);
    else if (i == jdXA5Sug8 && i + yn8kOjwCy <= n)
        f (1, i + yn8kOjwCy);
    else if (i == jdXA5Sug8 && i + yn8kOjwCy > n)
        f (i + yn8kOjwCy - n + 1, n);
    else
        f (i + 1, yn8kOjwCy - 1);
}

int main () {
    int i, yn8kOjwCy;
    cin >> jdXA5Sug8 >> n;
    {
        i = 1;
        while (i <= jdXA5Sug8) {
            {
                yn8kOjwCy = 1;
                while (yn8kOjwCy <= n) {
                    cin >> ZMEDRtT8[i][yn8kOjwCy];
                    yn8kOjwCy = yn8kOjwCy + 1;
                };
            }
            i++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    f (1, 1);
    return 0;
}

