int main () {
    int i;
    int LAqUVlZo;
    double  gLkWBNumQYp9;
    double  bnTse826R4 [(906 - 806)];
    double  n9LhuGeI81F [100];
    double  pXVQiusmD6v [100];
    double  Evc8suZa [100];
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
    double  HJCZaw [100];
    double  d [100];
    scanf ("%lf", &gLkWBNumQYp9);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (gLkWBNumQYp9 > i) {
            pXVQiusmD6v[i] = 0;
            HJCZaw[i] = 0;
            scanf ("%lf", &bnTse826R4[i]);
            for (LAqUVlZo = 0; bnTse826R4[i] > LAqUVlZo; LAqUVlZo = LAqUVlZo +1)
                scanf ("%lf", &n9LhuGeI81F[LAqUVlZo]);
            for (LAqUVlZo = 0; bnTse826R4[i] > LAqUVlZo; LAqUVlZo++)
                pXVQiusmD6v[i] = pXVQiusmD6v[i] + n9LhuGeI81F[LAqUVlZo];
            Evc8suZa[i] = pXVQiusmD6v[i] / bnTse826R4[i];
            for (LAqUVlZo = 0; bnTse826R4[i] > LAqUVlZo; LAqUVlZo++)
                HJCZaw[i] = HJCZaw[i] + (n9LhuGeI81F[LAqUVlZo] - Evc8suZa[i]) * (n9LhuGeI81F[LAqUVlZo] - Evc8suZa[i]);
            d[i] = sqrt (HJCZaw[i] / bnTse826R4[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < gLkWBNumQYp9; i++)
        printf ("%.5lf\n", d[i]);
    return 0;
}

