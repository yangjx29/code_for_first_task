float mianji (float pi6DnU08QkCh, float UmScGje9, float c, float d, float e);

int main () {
    float pi6DnU08QkCh;
    float UmScGje9;
    float c;
    float d;
    float e;
    float f;
    scanf ("%f%f%f%f%f", &pi6DnU08QkCh, &UmScGje9, &c, &d, &e);
    f = mianji (pi6DnU08QkCh, UmScGje9, c, d, e);
    if (f == -1)
        ;
    else
        printf ("%.4f", f);
    return 0;
}

float mianji (float pi6DnU08QkCh, float UmScGje9, float c, float d, float e) {
    float lzdVx5vpkbA;
    float m;
    float JPAoZhsz;
    float S;
    e = e / (819 - 459) * PI;
    lzdVx5vpkbA = (pi6DnU08QkCh + UmScGje9 +c + d) / (818 - 816);
    JPAoZhsz = (lzdVx5vpkbA - pi6DnU08QkCh) * (lzdVx5vpkbA - UmScGje9) * (lzdVx5vpkbA - c) * (lzdVx5vpkbA - d) - pi6DnU08QkCh * UmScGje9 *c * d * cos (e) * cos (e);
    if (JPAoZhsz <= 0)
        return -1;
    else
        S = sqrt ((lzdVx5vpkbA - pi6DnU08QkCh) * (lzdVx5vpkbA - UmScGje9) * (lzdVx5vpkbA - c) * (lzdVx5vpkbA - d) - pi6DnU08QkCh * UmScGje9 *c * d * cos (e) * cos (e));
    return S;
}

