int vztmjWevc;

int yin (int c, int YKdctw) {
    int j;
    int lyvBuws7X9m;
    int f;
    int ozFdfTRYQ;
    for (j = YKdctw; j <= c; j = j + 1) {
        if (c % j == 0) {
            ozFdfTRYQ = c / j;
            if (1 < ozFdfTRYQ) {
                f = j;
                yin (ozFdfTRYQ, f);
            }
            else
                vztmjWevc = vztmjWevc + 1;
        };
    }
    return vztmjWevc;
}

int main () {
    int n;
    int CSPydefDHi [(1578 - 578)];
    int oM1yegrPEi [1000];
    int i;
    int CJbPr3Ma;
    cin >> n;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i < n) {
            cin >> CSPydefDHi[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            CJbPr3Ma = 2;
            vztmjWevc = 0;
            oM1yegrPEi[i] = yin (CSPydefDHi[i], CJbPr3Ma);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            cout << oM1yegrPEi[i] << endl;
            i++;
        };
    }
    return 0;
}

