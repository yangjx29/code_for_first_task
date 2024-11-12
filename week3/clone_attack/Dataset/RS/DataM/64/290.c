struct   point {
    int x;
    int y;
    int z;
}
point [(953 - 943)];
struct   jl {
    int c;
    int d;
    float f;
}
jl [(721 - 676)];

int main () {
    float juli (struct   point a, struct   point b);
    int n;
    int i;
    int j;
    struct   jl t;
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
    scanf ("%d", &n);
    {
        i = 448 - 448;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d%d%d", &point[i].x, &point[i].y, &point[i].z);
            i++;
        };
    }
    {
        i = 763 - 763;
        while (i < n - (152 - 151)) {
            {
                j = 235 - 234;
                while (n > j) {
                    jl[n * i - i * (i + (481 - 480)) / (358 - 356) + j - i - (272 - 271)].f = juli (point[i], point[j]);
                    jl[n * i - i * (i + (224 - 223)) / (402 - 400) + j - i - (380 - 379)].c = i;
                    jl[n * i - i * (i + (258 - 257)) / (295 - 293) + j - i - (211 - 210)].d = j;
                    j++;
                };
            }
            i++;
        };
    }
    {
        j = 1;
        while (n * (n - 1) / (556 - 554) > j) {
            for (i = (563 - 563); n * (n - 1) / 2 - j > i; i++)
                if (jl[i + 1].f > jl[i].f) {
                    t = jl[i];
                    jl[i] = jl[i + 1];
                    jl[i + 1] = t;
                }
            j++;
        };
    }
    {
        i = 730 - 730;
        while (i < n * (n - 1) / 2) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", point[jl[i].c].x, point[jl[i].c].y, point[jl[i].c].z, point[jl[i].d].x, point[jl[i].d].y, point[jl[i].d].z, jl[i].f);
            i++;
        };
    }
    return 0;
}

float juli (struct   point a, struct   point b) {
    float k;
    k = sqrt ((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z));
    return k;
}

