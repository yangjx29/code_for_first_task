struct   person {
    char HvObp5qG9E [6];
    int nhkRn3Er;
    int math;
    int OnS7Cb;
}
ntYlV37Ri [100000];

int main () {
    int YQopK2w;
    int n7C2M3z;
    int n;
    int i;
    int Hokh6Md95WL;
    int j;
    int k;
    YQopK2w = 0;
    n7C2M3z = 0;
    cin >> n;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin >> ntYlV37Ri[i].HvObp5qG9E;
            cin >> ntYlV37Ri[i].nhkRn3Er;
            cin >> ntYlV37Ri[i].math;
            ntYlV37Ri[i].OnS7Cb = ntYlV37Ri[i].math + ntYlV37Ri[i].nhkRn3Er;
            i = i + 1;
        };
    }
    {
        j = 0;
        while (3 > j) {
            j = j + 1;
            Hokh6Md95WL = 0;
            for (i = 0; n > i; i = i + 1) {
                if (ntYlV37Ri[i].OnS7Cb > Hokh6Md95WL) {
                    Hokh6Md95WL = ntYlV37Ri[i].OnS7Cb;
                    k = i;
                };
            }
            cout << ntYlV37Ri[k].HvObp5qG9E << " " << ntYlV37Ri[k].OnS7Cb << endl;
            ntYlV37Ri[k].OnS7Cb = 0;
        };
    }
    return 0;
}

