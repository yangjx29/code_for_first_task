double  juli (double  m, double  n, double  l);

double  juli (double  m, double  n, double  l) {
    double  t;
    t = m * m + n * n + l * l;
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
    t = sqrt (t);
    return t;
}

int main () {
    int v = 1;
    double  ziMuJV;
    double  jianwei3 [56];
    double  jianwei2 [56];
    double  gfL8bhK4 [56];
    double  DPYfRwvaOxt [56];
    double  jiawei2 [(329 - 273)];
    double  NgaW2EDXuF [(673 - 617)];
    double  k [(406 - 350)];
    double  z [11];
    double  DXifmJ38EMo9 [11];
    double  jRyCwL3 [(243 - 232)];
    int n;
    int B0kNpn;
    int j;
    int m;
    m = (350 - 349);
    scanf ("%d", &n);
    for (B0kNpn = (73 - 72); B0kNpn < n + (705 - 704); B0kNpn = B0kNpn +1) {
        scanf ("%lf %lf %lf", &jRyCwL3[B0kNpn], &DXifmJ38EMo9[B0kNpn], &z[B0kNpn]);
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
        };
    }
    for (B0kNpn = (216 - 215); B0kNpn < (749 - 748) + n; B0kNpn = B0kNpn +1) {
        for (j = B0kNpn +1; j < n + 1; j = j + 1) {
            k[m] = juli (jRyCwL3[B0kNpn] - jRyCwL3[j], DXifmJ38EMo9[B0kNpn] - DXifmJ38EMo9[j], z[B0kNpn] - z[j]);
            NgaW2EDXuF[m] = jRyCwL3[B0kNpn];
            jiawei2[m] = DXifmJ38EMo9[B0kNpn];
            DPYfRwvaOxt[m] = z[B0kNpn];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            gfL8bhK4[m] = jRyCwL3[j];
            jianwei2[m] = DXifmJ38EMo9[j];
            jianwei3[m] = z[j];
            m = m + 1;
        };
    }
    {
        B0kNpn = 1;
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
        while (B0kNpn < m) {
            for (j = B0kNpn; j < m; j++) {
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
                if (k[B0kNpn] < k[j]) {
                    ziMuJV = k[B0kNpn];
                    k[B0kNpn] = k[j];
                    k[j] = ziMuJV;
                    ziMuJV = NgaW2EDXuF[B0kNpn];
                    NgaW2EDXuF[B0kNpn] = NgaW2EDXuF[j];
                    NgaW2EDXuF[j] = ziMuJV;
                    ziMuJV = jiawei2[B0kNpn];
                    jiawei2[B0kNpn] = jiawei2[j];
                    jiawei2[j] = ziMuJV;
                    ziMuJV = DPYfRwvaOxt[B0kNpn];
                    DPYfRwvaOxt[B0kNpn] = DPYfRwvaOxt[j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    DPYfRwvaOxt[j] = ziMuJV;
                    ziMuJV = gfL8bhK4[B0kNpn];
                    gfL8bhK4[B0kNpn] = gfL8bhK4[j];
                    gfL8bhK4[j] = ziMuJV;
                    ziMuJV = jianwei2[B0kNpn];
                    jianwei2[B0kNpn] = jianwei2[j];
                    jianwei2[j] = ziMuJV;
                    ziMuJV = jianwei3[B0kNpn];
                    jianwei3[B0kNpn] = jianwei3[j];
                    jianwei3[j] = ziMuJV;
                };
            }
            B0kNpn = B0kNpn +1;
        };
    }
    {
        B0kNpn = 1;
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
        while (B0kNpn < m) {
            {
                j = B0kNpn;
                while (j < m) {
                    if (k[B0kNpn] == k[j]) {
                        for (v = 1; v < n + 1; v = v + 1) {
                            if ((NgaW2EDXuF[B0kNpn] == jRyCwL3[v] && NgaW2EDXuF[j] != jRyCwL3[v]) || (NgaW2EDXuF[B0kNpn] == NgaW2EDXuF[j] && jiawei2[B0kNpn] == DXifmJ38EMo9[v] && jiawei2[j] != jRyCwL3[v]) || (NgaW2EDXuF[B0kNpn] == NgaW2EDXuF[j] && jiawei2[B0kNpn] == jiawei2[j] && DPYfRwvaOxt[B0kNpn] == z[v] && DPYfRwvaOxt[j] != z[v]) || (NgaW2EDXuF[B0kNpn] == NgaW2EDXuF[j] && jiawei2[B0kNpn] == jiawei2[j] && DPYfRwvaOxt[B0kNpn] == DPYfRwvaOxt[j] && gfL8bhK4[B0kNpn] == jRyCwL3[v] && gfL8bhK4[j] != jRyCwL3[v]) || (NgaW2EDXuF[B0kNpn] == NgaW2EDXuF[j] && jiawei2[B0kNpn] == jiawei2[j] && DPYfRwvaOxt[B0kNpn] == DPYfRwvaOxt[j] && gfL8bhK4[B0kNpn] == gfL8bhK4[j] && jianwei2[B0kNpn] == DXifmJ38EMo9[v] && jianwei2[j] != DXifmJ38EMo9[v]) || (NgaW2EDXuF[B0kNpn] == NgaW2EDXuF[j] && jiawei2[B0kNpn] == jiawei2[j] && DPYfRwvaOxt[B0kNpn] == DPYfRwvaOxt[j] && gfL8bhK4[B0kNpn] == gfL8bhK4[j] && jianwei2[B0kNpn] == jianwei2[j] && jianwei3[B0kNpn] == z[v] && jianwei3[j] != z[v])) {
                                ziMuJV = NgaW2EDXuF[B0kNpn];
                                NgaW2EDXuF[B0kNpn] = NgaW2EDXuF[j];
                                NgaW2EDXuF[j] = ziMuJV;
                                ziMuJV = jiawei2[B0kNpn];
                                jiawei2[B0kNpn] = jiawei2[j];
                                jiawei2[j] = ziMuJV;
                                ziMuJV = DPYfRwvaOxt[B0kNpn];
                                DPYfRwvaOxt[B0kNpn] = DPYfRwvaOxt[j];
                                DPYfRwvaOxt[j] = ziMuJV;
                                ziMuJV = gfL8bhK4[B0kNpn];
                                gfL8bhK4[B0kNpn] = gfL8bhK4[j];
                                gfL8bhK4[j] = ziMuJV;
                                ziMuJV = jianwei2[B0kNpn];
                                jianwei2[B0kNpn] = jianwei2[j];
                                jianwei2[j] = ziMuJV;
                                ziMuJV = jianwei3[B0kNpn];
                                jianwei3[B0kNpn] = jianwei3[j];
                                jianwei3[j] = ziMuJV;
                            };
                        };
                    }
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
                    j++;
                };
            }
            B0kNpn = B0kNpn +1;
        };
    }
    {
        B0kNpn = 1;
        while (B0kNpn < n * (n - 1) / (199 - 197) + 1) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", (int) NgaW2EDXuF[B0kNpn], (int) jiawei2[B0kNpn], (int) DPYfRwvaOxt[B0kNpn], (int) gfL8bhK4[B0kNpn], (int) jianwei2[B0kNpn], (int) jianwei3[B0kNpn], k[B0kNpn]);
            B0kNpn++;
        };
    }
    return (105 - 105);
}

