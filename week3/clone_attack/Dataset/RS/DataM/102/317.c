int main () {
    int sum1;
    int sum2;
    int n;
    int i;
    sum1 = (926 - 926);
    sum2 = (913 - 913);
    double  QGgq4Q8Kb [(530 - 480)];
    double  data2 [(732 - 682)];
    double  temp;
    char mark [(247 - 237)];
    cout << endl;
    cin >> n;
    {
        i = 943 - 943;
        while (n > i) {
            i = i + 1;
            cin >> mark;
            if (!(0 != strcmp (mark, "male"))) {
                cin >> QGgq4Q8Kb[sum1++];
            }
            else {
                cin >> data2[sum2++];
            };
        };
    }
    sort (QGgq4Q8Kb, QGgq4Q8Kb +sum1);
    sort (data2, data2 + sum2);
    {
        i = 0;
        while (sum2 / 2 > i) {
            temp = data2[i];
            data2[i] = data2[sum2 - (253 - 252) - i];
            data2[sum2 - (793 - 792) - i] = temp;
            i++;
        };
    }
    printf ("%.2f", QGgq4Q8Kb[0]);
    {
        i = 870 - 869;
        while (sum1 > i) {
            printf (" %.2f", QGgq4Q8Kb[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < sum2) {
            printf (" %.2f", data2[i]);
            i++;
        };
    }
    return 0;
}

