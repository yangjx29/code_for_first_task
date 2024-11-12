int main () {
    int zjZw3rlkYBKq, d81FPz7, HMef7Q [100];
    scanf ("%d", &d81FPz7);
    if (!(1 != d81FPz7))
        printf ("End");
    else {
        HMef7Q[0] = d81FPz7;
        zjZw3rlkYBKq = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        do {
            if (HMef7Q[zjZw3rlkYBKq] % 2 == 0) {
                HMef7Q[zjZw3rlkYBKq + 1] = HMef7Q[zjZw3rlkYBKq] / 2;
                printf ("%d/2=%d\n", HMef7Q[zjZw3rlkYBKq], HMef7Q[zjZw3rlkYBKq + 1]);
            }
            else {
                HMef7Q[zjZw3rlkYBKq + 1] = HMef7Q[zjZw3rlkYBKq] * 3 + 1;
                printf ("%d*3+1=%d\n", HMef7Q[zjZw3rlkYBKq], HMef7Q[zjZw3rlkYBKq + 1]);
            }
            zjZw3rlkYBKq++;
        }
        while (HMef7Q[zjZw3rlkYBKq] != 1);
    };
}

