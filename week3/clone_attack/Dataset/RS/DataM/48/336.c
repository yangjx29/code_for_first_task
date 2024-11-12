void  fanzhi ();
int jIOvtF [9] [9] = {0};
int zhen [9] [9] = {0};

int main () {
    int i;
    int j;
    int n;
    int m;
    cin >> m;
    jIOvtF[(655 - 651)][4] = m;
    cin >> n;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            i = i + 1;
            fanzhi ();
        };
    }
    {
        i = 0;
        while ((972 - 964) >= i) {
            for (j = 0; 7 >= j; j = j + 1)
                cout << jIOvtF[i][j] << " ";
            cout << jIOvtF[i][8];
            i++;
            cout << endl;
        };
    }
    return 0;
}

void  fanzhi () {
    int i;
    int j;
    memset (zhen, 0, sizeof (zhen));
    for (i = 0; i <= 8; i++)
        for (j = 0; j <= 8; j++) {
            zhen[i + 1][j] = zhen[i + 1][j] + jIOvtF[i][j];
            zhen[i][j] += jIOvtF[i][j] * 2;
            zhen[i - 1][j] = zhen[i - 1][j] + jIOvtF[i][j];
            zhen[i][j - 1] = zhen[i][j - 1] + jIOvtF[i][j];
            zhen[i][j + 1] = zhen[i][j + 1] + jIOvtF[i][j];
            zhen[i + 1][j + 1] = zhen[i + 1][j + 1] + jIOvtF[i][j];
            zhen[i - 1][j + 1] = zhen[i - 1][j + 1] + jIOvtF[i][j];
            zhen[i + 1][j - 1] = zhen[i + 1][j - 1] + jIOvtF[i][j];
            zhen[i - 1][j - 1] = zhen[i - 1][j - 1] + jIOvtF[i][j];
        }
    {
        i = 0;
        while (i <= 8) {
            for (j = 0; j <= 8; j++) {
                jIOvtF[i][j] = zhen[i][j];
            }
            i++;
        };
    };
}

