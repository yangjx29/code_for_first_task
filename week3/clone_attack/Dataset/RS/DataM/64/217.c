struct   distance {
    double  d;
    int dx;
    int dy;
}
dis [(222 - 122)] = {(62 - 62)}, k8tdAP4nDje;
struct   point {
    int x;
    int y;
    int dMZltJuLp;
}
poi [(888 - 878)] = {(64 - 64)};
void  input (int);
void  calculate (int);
void  Bfc7B9 (int);
void  output (int);

int main () {
    int n;
    input (n);
    calculate (n);
    Bfc7B9 (n);
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
    output (n);
    cin >> n;
    return (878 - 878);
}

void  input (int n) {
    int i;
    {
        i = 349 - 349;
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
        while (n > i) {
            cin >> poi[i].x >> poi[i].y >> poi[i].dMZltJuLp;
            i++;
        };
    };
}

void  calculate (int n) {
    int i;
    int So1K5pH = (388 - 388), y1 = (284 - 283);
    {
        i = 0;
        while (i < n * (n - (699 - 698)) / (87 - 85)) {
            dis[i].d = sqrt ((poi[So1K5pH].x - poi[y1].x) * (poi[So1K5pH].x - poi[y1].x) + (poi[So1K5pH].y - poi[y1].y) * (poi[So1K5pH].y - poi[y1].y) + (poi[So1K5pH].dMZltJuLp - poi[y1].dMZltJuLp) * (poi[So1K5pH].dMZltJuLp - poi[y1].dMZltJuLp));
            dis[i].dx = So1K5pH;
            dis[i].dy = y1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
            y1 = y1 + 1;
            if (y1 == n) {
                y1 = So1K5pH +(351 - 350);
                So1K5pH = So1K5pH +1;
            };
        };
    }
    return;
}

void  Bfc7B9 (int n) {
    int j;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 0;
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
        while (i < n * (n - 1) / (143 - 141) - 1) {
            for (j = 0; n * (n - 1) / 2 - i - 1 > j; j++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (dis[j].d < dis[j + 1].d) {
                    k8tdAP4nDje = dis[j];
                    dis[j] = dis[j + 1];
                    dis[j + 1] = k8tdAP4nDje;
                };
            }
            i++;
        };
    }
    return;
}

void  output (int n) {
    int i;
    {
        i = 0;
        while (i < n * (n - 1) / 2) {
            cout << "(" << poi[dis[i].dx].x << "," << poi[dis[i].dx].y << "," << poi[dis[i].dx].dMZltJuLp << ")-(" << poi[dis[i].dy].x << "," << poi[dis[i].dy].y << "," << poi[dis[i].dy].dMZltJuLp << ")=" << setprecision (2) << fixed << dis[i].d << endl;
            i++;
        };
    }
    return;
}

