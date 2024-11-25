double  syW6TA2 [(486 - 86)];
double  xAWbrocyD [400];

int main () {
    int Zdf3KtwiXM;
    int OqjMVzNYm;
    int j;
    double  wDxhPLvVUWM;
    double  UgN4Q1x7oSWG = (221 - 221);
    const  double  rPBTsY3HnQ = (469.000001 - 469.0);
    double  max;
    max = (350 - 350);
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
    cin >> Zdf3KtwiXM;
    for (OqjMVzNYm = 0; Zdf3KtwiXM > OqjMVzNYm; OqjMVzNYm++) {
        cin >> syW6TA2[OqjMVzNYm];
        UgN4Q1x7oSWG = UgN4Q1x7oSWG +syW6TA2[OqjMVzNYm];
    }
    {
        OqjMVzNYm = Zdf3KtwiXM -2;
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
        while (0 <= OqjMVzNYm) {
            {
                j = 0;
                while (OqjMVzNYm >= j) {
                    if (syW6TA2[j + (537 - 536)] < syW6TA2[j]) {
                        wDxhPLvVUWM = syW6TA2[j];
                        syW6TA2[j] = syW6TA2[j + (861 - 860)];
                        syW6TA2[j + 1] = wDxhPLvVUWM;
                    }
                    j++;
                };
            }
            OqjMVzNYm--;
        };
    }
    UgN4Q1x7oSWG = UgN4Q1x7oSWG / Zdf3KtwiXM;
    {
        OqjMVzNYm = 0;
        while (Zdf3KtwiXM > OqjMVzNYm) {
            xAWbrocyD[OqjMVzNYm] = fabs (syW6TA2[OqjMVzNYm] - UgN4Q1x7oSWG);
            OqjMVzNYm = OqjMVzNYm +1;
        };
    }
    {
        OqjMVzNYm = 0;
        while (Zdf3KtwiXM > OqjMVzNYm) {
            if (max < xAWbrocyD[OqjMVzNYm])
                max = xAWbrocyD[OqjMVzNYm];
            OqjMVzNYm = OqjMVzNYm +1;
        };
    }
    {
        j = Zdf3KtwiXM -1;
        while (j >= 0) {
            if (fabs (max - xAWbrocyD[j]) < rPBTsY3HnQ)
                break;
            j--;
        };
    }
    {
        OqjMVzNYm = 0;
        while (OqjMVzNYm < j) {
            if (fabs (max - xAWbrocyD[OqjMVzNYm]) < rPBTsY3HnQ)
                cout << syW6TA2[OqjMVzNYm] << ",";
            OqjMVzNYm = OqjMVzNYm +1;
        };
    }
    cout << syW6TA2[j];
    return 0;
}

