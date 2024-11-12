int main () {
    float away [300] = {0};
    float average;
    int eSUzgH3W [300] = {0}, v5tuqrjkU86 = 0;
    int nHVRcu;
    int p8OYNr;
    float e7tN20OW6 = away[0];
    int I7RX5xOJvQ [10] = {0}, j, Fu9iLe = 0;
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
    scanf ("%d", &nHVRcu);
    {
        p8OYNr = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p8OYNr < nHVRcu) {
            scanf ("%d", &eSUzgH3W[p8OYNr]);
            v5tuqrjkU86 += eSUzgH3W[p8OYNr];
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
            p8OYNr = p8OYNr + 1;
        };
    }
    average = v5tuqrjkU86 * (785.0 - 784.0) / nHVRcu;
    for (p8OYNr = 0; p8OYNr < nHVRcu; p8OYNr = p8OYNr + 1) {
        if (eSUzgH3W[p8OYNr] - average >= 0) {
            away[p8OYNr] = eSUzgH3W[p8OYNr] - average;
        }
        else {
            away[p8OYNr] = average - eSUzgH3W[p8OYNr];
        };
    }
    for (p8OYNr = 1; p8OYNr < nHVRcu; p8OYNr++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (away[p8OYNr] >= e7tN20OW6) {
            e7tN20OW6 = away[p8OYNr];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    }
    {
        p8OYNr = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p8OYNr < nHVRcu) {
            if (away[p8OYNr] == e7tN20OW6) {
                Fu9iLe = Fu9iLe +1;
                I7RX5xOJvQ[Fu9iLe] = eSUzgH3W[p8OYNr];
            }
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
            p8OYNr = p8OYNr + 1;
        };
    }
    if (Fu9iLe == 1)
        printf ("%d", I7RX5xOJvQ[1]);
    else {
        {
            int DnEKRH8lZrb2;
            DnEKRH8lZrb2 = Fu9iLe -1;
            while (DnEKRH8lZrb2 > 0) {
                for (int nHVRcu = 0;
                nHVRcu < DnEKRH8lZrb2; nHVRcu = nHVRcu + 1)
                    if (I7RX5xOJvQ[nHVRcu] > I7RX5xOJvQ[nHVRcu + 1]) {
                        int EKSX4exG = I7RX5xOJvQ[nHVRcu];
                        I7RX5xOJvQ[nHVRcu] = I7RX5xOJvQ[nHVRcu + 1];
                        I7RX5xOJvQ[nHVRcu + 1] = EKSX4exG;
                    }
                DnEKRH8lZrb2 = DnEKRH8lZrb2 -1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (int iIhkabKiso2O = 1;
        iIhkabKiso2O <= Fu9iLe; iIhkabKiso2O = iIhkabKiso2O + 1) {
            printf ("%d", I7RX5xOJvQ[iIhkabKiso2O]);
            if (iIhkabKiso2O <= Fu9iLe -1)
                ;
        };
    }
    return 0;
}

