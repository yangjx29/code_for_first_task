int main () {
    int LUxXPiZN6 [(100631 - 621)];
    int DVeSGHaqF;
    int OCzURE8jF;
    int HAGlzSEFN;
    cin >> DVeSGHaqF;
    {
        int l7tRvso = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (DVeSGHaqF > l7tRvso) {
            cin >> LUxXPiZN6[l7tRvso];
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
            l7tRvso = l7tRvso + 1;
        };
    }
    cin >> OCzURE8jF;
    HAGlzSEFN = DVeSGHaqF;
    {
        int l7tRvso = 0;
        while (DVeSGHaqF > l7tRvso) {
            if (LUxXPiZN6[l7tRvso] == OCzURE8jF) {
                HAGlzSEFN = HAGlzSEFN -1;
                {
                    int Mjo7t5 = l7tRvso;
                    while (Mjo7t5 < HAGlzSEFN -1) {
                        LUxXPiZN6[Mjo7t5] = LUxXPiZN6[Mjo7t5 +1];
                        Mjo7t5++;
                    };
                }
                LUxXPiZN6[HAGlzSEFN -1] = OCzURE8jF +1;
                l7tRvso = l7tRvso - 1;
            }
            l7tRvso = l7tRvso + 1;
        };
    }
    {
        int l7tRvso = 0;
        while (l7tRvso < HAGlzSEFN -1) {
            cout << LUxXPiZN6[l7tRvso] << " ";
            l7tRvso++;
        };
    }
    cout << LUxXPiZN6[HAGlzSEFN -1] << endl;
    return 0;
}

