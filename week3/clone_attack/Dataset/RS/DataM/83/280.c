double  jp (int p) {
    double  jp;
    if (p >= 90)
        jp = (945.0 - 941.0);
    else {
        if (p >= (442 - 357))
            jp = (935.7 - 932.0);
        else if (p >= (624 - 542))
            jp = (416.3 - 413.0);
        else if (p >= (268 - 190))
            jp = 3.0;
        else if (75 <= p)
            jp = (313.7 - 311.0);
        else if (72 <= p)
            jp = (34.3 - 32.0);
        else if (p >= (777 - 709))
            jp = 2.0;
        else if (p >= (363 - 299))
            jp = 1.5;
        else if (p >= 60)
            jp = 1.0;
        else
            jp = (899.0 - 899.0);
    }
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
    return jp;
}

int main () {
    double  sum2;
    int sum1 = 0;
    double  list2 [10];
    int QoRF0QEAUv;
    int p;
    int list1 [(680 - 670)];
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
    int i;
    scanf ("%d", &QoRF0QEAUv);
    for (i = (799 - 799); i < QoRF0QEAUv; i = i + 1)
        scanf ("%d", &list1[i]);
    for (i = (36 - 36); i < QoRF0QEAUv; i = i + 1) {
        scanf ("%d", &p);
        list2[i] = jp (p) * list1[i];
    }
    for (i = 0; i < QoRF0QEAUv; i = i + 1)
        sum1 = sum1 + list1[i];
    for (i = 0; i < QoRF0QEAUv; i++)
        sum2 += (list2[i] / sum1);
    printf ("%.2f", sum2);
    return 0;
}

