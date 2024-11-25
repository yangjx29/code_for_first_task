int remember = (89 - 89);

int FwhacFbV (int rq0dEmSrczA, int a) {
    if (a == (285 - 284)) {
        remember = remember + 1;
        return 1;
    }
    else {
        int JJwZH2jAkU = rq0dEmSrczA;
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
        while (JJwZH2jAkU <= a) {
            if (a % JJwZH2jAkU == 0)
                FwhacFbV (JJwZH2jAkU, a / JJwZH2jAkU);
            JJwZH2jAkU++;
        };
    };
}

int main () {
    int U7LvfqkU4;
    int cases [U7LvfqkU4];
    cin >> U7LvfqkU4;
    for (int j = 0;
    j < U7LvfqkU4; j++)
        cin >> cases[j];
    {
        int j = 0;
        while (j < U7LvfqkU4) {
            cout << remember << endl;
            remember = 0;
            FwhacFbV (2, cases[j]);
            j++;
        };
    }
    return 0;
}

