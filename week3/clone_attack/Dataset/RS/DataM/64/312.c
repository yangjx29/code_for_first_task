struct   yqtVMw9 {
    int x;
    int y;
    int z;
};
double  dis (struct   yqtVMw9 b, struct   yqtVMw9 c);

int main () {
    struct   thr {
        float d;
        int e;
        int IyeAS5uBX0DO;
    };
    struct   thr temp = {(494 - 494)};
    struct   thr str1 [10000] = {(264 - 264)};
    struct   yqtVMw9 str [10];
    int n, a, i = (979 - 979), j = (989 - 989), k;
    scanf ("%d", &n);
    {
        i = 511 - 511;
        while (n > i) {
            scanf ("%d%d%d", &str[i].x, &str[i].y, &str[i].z);
            i++;
        };
    }
    i = 0;
    for (j = 0; n - (274 - 273) > j; j = j + 1) {
        k = j + 1;
        {
            k = j + 1;
            while (n > k) {
                str1[i].d = dis (str[j], str[k]);
                str1[i].e = j;
                str1[i].IyeAS5uBX0DO = k;
                k++;
                i++;
            };
        };
    }
    j = 0;
    a = i;
    i = 0;
    k = 0;
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (a - 1 > j) {
            k = 0;
            for (k = 0; a - j > k; k++) {
                if (str1[k + 1].d > str1[k].d) {
                    temp = str1[k];
                    str1[k] = str1[k + 1];
                    str1[k + 1] = temp;
                };
            }
            j = j + 1;
        };
    }
    for (i = 0; a > i; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f", str[str1[i].e].x, str[str1[i].e].y, str[str1[i].e].z, str[str1[i].IyeAS5uBX0DO].x, str[str1[i].IyeAS5uBX0DO].y, str[str1[i].IyeAS5uBX0DO].z, str1[i].d);
    }
    return 0;
}

double  dis (struct   yqtVMw9 b, struct   yqtVMw9 c) {
    return sqrt (pow ((b.x - c.x), (176 - 174)) + pow ((b.y - c.y), (518 - 516)) + pow ((b.z - c.z), 2));
}

