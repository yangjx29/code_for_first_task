int eL26ZA = 0;

int SoZb5IK (int TakBJvj58oO9, int pzxWFQ50fv, int eL26ZA) {
    if (TakBJvj58oO9 == pzxWFQ50fv)
        return TakBJvj58oO9;
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
    if (TakBJvj58oO9 > pzxWFQ50fv) {
        eL26ZA++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return SoZb5IK (TakBJvj58oO9 / 2, pzxWFQ50fv, eL26ZA);
    }
    if (TakBJvj58oO9 < pzxWFQ50fv) {
        eL26ZA++;
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
        return SoZb5IK (TakBJvj58oO9, pzxWFQ50fv / 2, eL26ZA);
    };
}

int main () {
    int YCZR82;
    int h4rIPatJ;
    cin >> YCZR82 >> h4rIPatJ;
    cout << SoZb5IK (YCZR82, h4rIPatJ, eL26ZA) << endl;
}

