struct   student {
    int num;
    int chinese;
    int math;
};
struct   student NMY4ZdV [100000];
int sum [100000];

int main (int argc, char *argv []) {
    int huktfZw;
    int n;
    int a;
    int b;
    int c;
    int num1;
    int num2;
    int num3;
    scanf ("%d", &n);
    for (huktfZw = 0; n > huktfZw; huktfZw = huktfZw + 1) {
        scanf ("%d%d%d", &NMY4ZdV[huktfZw].num, &NMY4ZdV[huktfZw].chinese, &NMY4ZdV[huktfZw].math);
    }
    for (huktfZw = 0; huktfZw < n; huktfZw = huktfZw + 1) {
        sum[huktfZw] = NMY4ZdV[huktfZw].chinese + NMY4ZdV[huktfZw].math;
    }
    a = sum[0];
    num1 = 1;
    if (sum[1] > a) {
        b = a;
        a = sum[1];
        num2 = num1;
        num1 = 2;
    }
    else {
        b = sum[1];
        num2 = 2;
    }
    c = 0;
    for (huktfZw = 2; huktfZw < n; huktfZw = huktfZw + 1) {
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
        if (a < sum[huktfZw]) {
            c = b;
            b = a;
            num3 = num2;
            num2 = num1;
            a = sum[huktfZw];
            num1 = huktfZw + 1;
        }
        else if (sum[huktfZw] > b) {
            num3 = num2;
            c = b;
            b = sum[huktfZw];
            num2 = huktfZw + 1;
        }
        else if (c < sum[huktfZw]) {
            c = sum[huktfZw];
            num3 = huktfZw + 1;
        };
    }
    printf ("%d %d\n", num1, a);
    printf ("%d %d\n", num2, b);
    printf ("%d %d\n", num3, c);
    return 0;
}

