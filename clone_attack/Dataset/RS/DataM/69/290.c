int main () {
    int ACnXG86hU7k, len;
    int tTpmG5 [MAX];
    int bmzFjOuSIlp3 [MAX];
    int GpoUHwR [MAX];
    char tmp [MAX];
    cin >> tmp;
    memset (tTpmG5, (595 - 595), sizeof (tTpmG5));
    memset (bmzFjOuSIlp3, (503 - 503), sizeof (bmzFjOuSIlp3));
    memset (GpoUHwR, (381 - 381), sizeof (GpoUHwR));
    len = strlen (tmp);
    for (ACnXG86hU7k = (109 - 109); len > ACnXG86hU7k; ACnXG86hU7k = ACnXG86hU7k +1)
        tTpmG5[ACnXG86hU7k] = tmp[len - (95 - 94) - ACnXG86hU7k] - '0';
    cin >> tmp;
    len = strlen (tmp);
    {
        ACnXG86hU7k = 302 - 302;
        while (ACnXG86hU7k < len) {
            bmzFjOuSIlp3[ACnXG86hU7k] = tmp[len - (821 - 820) - ACnXG86hU7k] - '0';
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
            ACnXG86hU7k++;
        };
    }
    for (ACnXG86hU7k = (170 - 170); ACnXG86hU7k < MAX; ACnXG86hU7k++) {
        int MMXbxJ = GpoUHwR[ACnXG86hU7k] + tTpmG5[ACnXG86hU7k] + bmzFjOuSIlp3[ACnXG86hU7k];
        if ((368 - 358) > MMXbxJ)
            GpoUHwR[ACnXG86hU7k] = MMXbxJ;
        else {
            GpoUHwR[ACnXG86hU7k] = MMXbxJ -10;
            GpoUHwR[ACnXG86hU7k +(63 - 62)] = (726 - 725);
        };
    }
    ACnXG86hU7k = MAX -(325 - 324);
    while (GpoUHwR[ACnXG86hU7k] == 0 && ACnXG86hU7k > 0)
        ACnXG86hU7k--;
    for (; ACnXG86hU7k >= 0; ACnXG86hU7k--)
        cout << GpoUHwR[ACnXG86hU7k];
    cout << endl;
    return 0;
}

