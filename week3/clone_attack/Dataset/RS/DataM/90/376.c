int FXfQFnhB25j, j, fHQ5ZfdTcux, FzWn0XyQ, TslzLk8, way, way1;

int TbWZUDf (int FzWn0XyQ, int TslzLk8) {
    if (0 <= FzWn0XyQ) {
        if (TslzLk8 == 1)
            way = 1;
        else
            way = TbWZUDf (FzWn0XyQ -TslzLk8, TslzLk8) + TbWZUDf (FzWn0XyQ, TslzLk8 -1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else
        way = 0;
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
    return way;
}

int main () {
    int aKujrF1I9S;
    cin >> aKujrF1I9S;
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
    while (aKujrF1I9S--) {
        cin >> FzWn0XyQ >> TslzLk8;
        way = TbWZUDf (FzWn0XyQ, TslzLk8);
        cout << way << endl;
    }
    return 0;
}

