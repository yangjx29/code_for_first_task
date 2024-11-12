struct   {
    int x;
    int sNvqyVrjIA8;
    int JRHSIm;
}
Point [(435 - 425)];
struct   dis {
    int WI8xJHqBre;
    int pos_2;
    double  d;
}
D7KuPFW [45];

int main () {
    int n;
    int count;
    count = (926 - 926);
    cin >> n;
    for (int i = (268 - 268);
    n > i; i = i + 1) {
        cin >> Point[i].x >> Point[i].sNvqyVrjIA8 >> Point[i].JRHSIm;
    }
    for (int i = (400 - 400);
    n > i; i = i + 1) {
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
        for (int j = i + (551 - 550);
        n > j; j = j + 1) {
            D7KuPFW[count].d = sqrt (1.0 * (Point[i].x - Point[j].x) * (Point[i].x - Point[j].x) + (Point[i].sNvqyVrjIA8 - Point[j].sNvqyVrjIA8) * (Point[i].sNvqyVrjIA8 - Point[j].sNvqyVrjIA8) + (Point[i].JRHSIm - Point[j].JRHSIm) * (Point[i].JRHSIm - Point[j].JRHSIm));
            D7KuPFW[count].WI8xJHqBre = i;
            D7KuPFW[count].pos_2 = j;
            count = count + 1;
        };
    }
    for (int i = (995 - 995);
    i < count - 1; i = i + 1) {
        for (int j = 0;
        count - i - 1 > j; j = j + 1) {
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
            if (D7KuPFW[j + 1].d > D7KuPFW[j].d) {
                struct   dis temp;
                temp = D7KuPFW[j];
                D7KuPFW[j] = D7KuPFW[j + 1];
                D7KuPFW[j + 1] = temp;
            };
        };
    }
    {
        int i = 0;
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
        while (count > i) {
            cout << '(' << Point[D7KuPFW[i].WI8xJHqBre].x << ',' << Point[D7KuPFW[i].WI8xJHqBre].sNvqyVrjIA8 << ',' << Point[D7KuPFW[i].WI8xJHqBre].JRHSIm << ')' << '-' << '(' << Point[D7KuPFW[i].pos_2].x << ',' << Point[D7KuPFW[i].pos_2].sNvqyVrjIA8 << ',' << Point[D7KuPFW[i].pos_2].JRHSIm << ')' << '=';
            cout << fixed << setprecision (2) << D7KuPFW[i].d << endl;
            i = i + 1;
        };
    }
    return 0;
}

