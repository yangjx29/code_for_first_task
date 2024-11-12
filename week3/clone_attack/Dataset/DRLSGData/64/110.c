int hDHxBAWEuvKc [1001] [1001], wWXtNGLMb [1001] [1001], pxwPmh6l0 [1001] [1001];
double  s [1000001] [3];
struct   {
    double  x, t5CSQyXYLF, z;
}
point [10001];

double  cfIwpq5i7C (int GTunDFv, int j) {
    return sqrt ((point[GTunDFv].x - point[j].x) * (point[GTunDFv].x - point[j].x) + (point[GTunDFv].t5CSQyXYLF - point[j].t5CSQyXYLF) * (point[GTunDFv].t5CSQyXYLF - point[j].t5CSQyXYLF) + (point[GTunDFv].z - point[j].z) * (point[GTunDFv].z - point[j].z));
}

void  change (int n) {
    double  temp;
    temp = s[n][0];
    s[n][0] = s[n + 1][0];
    s[n + 1][0] = temp;
    temp = s[n][1];
    s[n][1] = s[n + 1][1];
    s[n + 1][1] = temp;
    temp = s[n][2];
    s[n][2] = s[n + 1][2];
    s[n + 1][2] = temp;
}

void  print (int n) {
    int EK1Xv2OJ;
    int rt;
    EK1Xv2OJ = (int) (s[n][1]);
    cout << "(" << point[EK1Xv2OJ].x << ',' << point[EK1Xv2OJ].t5CSQyXYLF << ',' << point[EK1Xv2OJ].z << ")";
    cout << '-';
    rt = (int) (s[n][2]);
    printf ("%.2f\n", s[n][0]);
    cout << "(" << point[rt].x << ',' << point[rt].t5CSQyXYLF << ',' << point[rt].z << ")";
    cout << '=';
}

void  rNJQhe (int LGTrVNe) {
    int GTunDFv, j;
    for (GTunDFv = 1; GTunDFv < LGTrVNe; GTunDFv = GTunDFv +1)
        for (j = 1; j <= LGTrVNe -GTunDFv; j = j + 1)
            if (s[j][0] < s[j + 1][0])
                change (j);
}

int main () {
    int n, cf9IrS;
    int GTunDFv, j, LGTrVNe;
    rNJQhe (LGTrVNe);
    cin >> n;
    LGTrVNe = 1;
    for (GTunDFv = 1; n >= GTunDFv; GTunDFv = GTunDFv +1)
        cin >> point[GTunDFv].x >> point[GTunDFv].t5CSQyXYLF >> point[GTunDFv].z;
    for (GTunDFv = 1; GTunDFv <= n; GTunDFv = GTunDFv +1)
        for (j = GTunDFv +1; j <= n; j++) {
            s[LGTrVNe][0] = cfIwpq5i7C (GTunDFv, j);
            s[LGTrVNe][1] = GTunDFv;
            s[LGTrVNe][2] = j;
            LGTrVNe = LGTrVNe +1;
        }
    LGTrVNe--;
    for (GTunDFv = 1; GTunDFv <= LGTrVNe; GTunDFv++)
        print (GTunDFv);
    return 0;
}

