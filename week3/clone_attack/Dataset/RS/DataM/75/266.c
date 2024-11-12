int main () {
    int p;
    int YDZTRpCJce;
    int QRVLNX104;
    int jMUvbAkG;
    int v2tzxEbyjI;
    p = 0;
    YDZTRpCJce = 0;
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
    int lOEjJRQ [1000];
    int pDWoCEUbIh5 [1000];
    {
        QRVLNX104 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            cin >> lOEjJRQ[QRVLNX104];
            if (cin.get () == '\n')
                break;
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
            QRVLNX104 = QRVLNX104 +1;
        };
    }
    {
        QRVLNX104 = 0;
        while (1) {
            cin >> pDWoCEUbIh5[QRVLNX104];
            if (cin.get () == '\n')
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            QRVLNX104++;
        };
    }
    {
        jMUvbAkG = 0;
        while (jMUvbAkG <= 1000) {
            for (v2tzxEbyjI = 0; v2tzxEbyjI <= QRVLNX104 +1; v2tzxEbyjI++) {
                if (lOEjJRQ[v2tzxEbyjI] <= jMUvbAkG && pDWoCEUbIh5[v2tzxEbyjI] >= jMUvbAkG + 1)
                    p = p + 1;
            }
            jMUvbAkG = jMUvbAkG + 1;
            if (YDZTRpCJce <= p)
                YDZTRpCJce = p;
            p = 0;
        };
    }
    cout << QRVLNX104 +1 << " " << YDZTRpCJce << endl;
    return 0;
}

