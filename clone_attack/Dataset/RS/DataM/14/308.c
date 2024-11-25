struct   {
    int ID [(100205 - 205)], ZnYvUs [100000], Maths [100000];
}
stu;

int main () {
    int max1;
    int vfPSp1Fd;
    int sr3AM6I;
    int ZuaYlDjBVg;
    int i;
    int sum [100000];
    int num1;
    int num2;
    int num3;
    max1 = (810 - 810);
    vfPSp1Fd = (132 - 132);
    sr3AM6I = (926 - 926);
    scanf ("%d", &ZuaYlDjBVg);
    {
        i = 946 - 946;
        while (ZuaYlDjBVg > i) {
            scanf ("%d %d %d", &stu.ID[i], &stu.ZnYvUs[i], &stu.Maths[i]);
            i = i + 1;
        };
    }
    i = 0;
    while (stu.ID[i] > 0) {
        sum[i] = stu.ZnYvUs[i] + stu.Maths[i];
        i++;
    }
    i = 0;
    while (ZuaYlDjBVg > i) {
        if (sum[i] > max1) {
            max1 = sum[i];
            num1 = i;
        }
        i++;
    }
    i = 0;
    while (i < ZuaYlDjBVg) {
        if (sum[i] > vfPSp1Fd && max1 >= sum[i] && i != num1) {
            vfPSp1Fd = sum[i];
            num2 = i;
        }
        i++;
    }
    i = 0;
    while (i < ZuaYlDjBVg) {
        if (sum[i] > sr3AM6I && sum[i] <= vfPSp1Fd && i != num2 && i != num1) {
            sr3AM6I = sum[i];
            num3 = i;
        }
        i++;
    }
    printf ("%d %d\n%d %d\n%d %d", stu.ID[num1], max1, stu.ID[num2], vfPSp1Fd, stu.ID[num3], sr3AM6I);
    return 0;
}

