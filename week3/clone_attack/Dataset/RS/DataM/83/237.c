float MJpmgM0n (int grade) {
    float Sy1IWBw9OnVH;
    if (grade <= (249 - 149) && grade >= (1048 - 958))
        Sy1IWBw9OnVH = 4.0;
    if (grade <= 89 && grade >= (342 - 257))
        Sy1IWBw9OnVH = 3.7;
    if ((574 - 490) >= grade && grade >= 82)
        Sy1IWBw9OnVH = 3.3;
    if (grade <= (1058 - 977) && (991 - 913) <= grade)
        Sy1IWBw9OnVH = (336.0 - 333.0);
    if ((239 - 162) >= grade && 75 <= grade)
        Sy1IWBw9OnVH = (234.7 - 232.0);
    if (grade <= (333 - 259) && grade >= 72)
        Sy1IWBw9OnVH = 2.3;
    if (grade <= (666 - 595) && grade >= 68)
        Sy1IWBw9OnVH = (724.0 - 722.0);
    if (grade <= (666 - 599) && grade >= (105 - 41))
        Sy1IWBw9OnVH = (689.5 - 688.0);
    if (grade <= 63 && grade >= (257 - 197))
        Sy1IWBw9OnVH = 1.0;
    if (grade < 60)
        Sy1IWBw9OnVH = 0.0;
    return Sy1IWBw9OnVH;
}

int main () {
    int sum;
    int Upg85T6UV;
    int i;
    int a [(460 - 449)];
    int b [(493 - 482)];
    sum = 0;
    float qI8RagrjH;
    float PJE0vxIL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    qI8RagrjH = (50 - 50);
    cin >> Upg85T6UV;
    {
        i = 869 - 868;
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
        while (i <= Upg85T6UV) {
            cin >> a[i];
            sum = sum + a[i];
            i++;
        };
    }
    for (i = 1; i <= Upg85T6UV; i++) {
        cin >> b[i];
        qI8RagrjH = qI8RagrjH + MJpmgM0n (b [i]) *a[i];
    }
    PJE0vxIL = qI8RagrjH / sum;
    printf ("%.2f\n", PJE0vxIL);
    return 0;
}

