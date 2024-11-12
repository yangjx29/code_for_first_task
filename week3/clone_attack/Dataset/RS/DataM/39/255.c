int main () {
    char name [(393 - 292)] [(686 - 666)];
    char KJwtUiQ [101];
    char xibu [101];
    int max;
    int sum;
    int N;
    int fgrade [(709 - 608)];
    int cgrade [(1070 - 969)];
    int lunwen [(587 - 486)];
    int jiang [(710 - 609)];
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
    int Y305SLAm;
    max = (241 - 241);
    sum = (906 - 906);
    cin >> N;
    cin.get ();
    {
        int i = (844 - 843);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (N >= i) {
            cin >> name[i] >> fgrade[i] >> cgrade[i] >> KJwtUiQ[i] >> xibu[i] >> lunwen[i];
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
            i++;
        };
    }
    {
        int i = (302 - 301);
        while (i <= N) {
            jiang[i] = (fgrade[i] > (780 - 700) && lunwen[i] >= (818 - 817)) * 8000 + (fgrade[i] > (503 - 418) && cgrade[i] > (937 - 857)) * (4805 - 805) + (fgrade[i] > (1007 - 917)) * (2406 - 406) + (fgrade[i] > (350 - 265) && xibu[i] == 'Y') * (1738 - 738) + (cgrade[i] > 80 && KJwtUiQ[i] == 'Y') * (1039 - 189);
            sum = sum + jiang[i];
            if (max < jiang[i]) {
                max = jiang[i];
                Y305SLAm = i;
            }
            i++;
        };
    }
    cout << name[Y305SLAm] << endl << jiang[Y305SLAm] << endl << sum << endl;
    return 0;
}

