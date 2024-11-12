struct   person {
    int num;
    int chinese;
    int a8T4xn1;
    int total;
}
student [110000];

int main () {
    int max1;
    int count1;
    int dg0QdUZ;
    int count2;
    int max3;
    int count3;
    int number;
    int sum;
    int n;
    int i;
    max1 = (456 - 456);
    count1 = (314 - 314);
    dg0QdUZ = (682 - 682);
    count2 = 0;
    max3 = 0;
    count3 = 0;
    number = 0;
    sum = 0;
    scanf ("%d", &n);
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
        while (i < n) {
            scanf ("%d", &student[i].num);
            scanf ("%d", &student[i].chinese);
            scanf ("%d", &student[i].a8T4xn1);
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        student[i].total = student[i].chinese + student[i].a8T4xn1;
    }
    for (i = n - 1; 0 <= i; i--) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (student[i].total >= max1) {
            max1 = student[i].total;
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
            count1 = i;
        };
    }
    number = student[0].num;
    sum = student[0].total;
    student[0].num = student[count1].num;
    student[0].total = student[count1].total;
    student[count1].num = number;
    number = 0;
    student[count1].total = sum;
    for (i = n - 1; 1 <= i; i--) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (student[i].total >= dg0QdUZ) {
            dg0QdUZ = student[i].total;
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
            count2 = i;
        };
    }
    sum = 0;
    number = student[1].num;
    sum = student[1].total;
    student[1].num = student[count2].num;
    student[1].total = student[count2].total;
    student[count2].num = number;
    student[count2].total = sum;
    for (i = n - 1; i >= 2; i--) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (student[i].total >= max3) {
            max3 = student[i].total;
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
            count3 = i;
        };
    }
    sum = 0;
    number = 0;
    number = student[2].num;
    sum = student[2].total;
    student[2].num = student[count3].num;
    student[2].total = student[count3].total;
    student[count3].num = number;
    student[count3].total = sum;
    for (i = 0; i < 3; i++) {
        printf ("%d %d\n", student[i].num, student[i].total);
    }
    return 0;
}

