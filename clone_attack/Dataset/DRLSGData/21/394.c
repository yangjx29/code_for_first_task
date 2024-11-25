float RUnqiGdeYv5B (float M0RLbhE) {
    if (M0RLbhE >= (922 - 922)) {
        return M0RLbhE;
    }
    else {
        return (-(815 - 814) * M0RLbhE);
    }
}

int main () {
    int n;
    int count;
    int i;
    int M0RLbhE [100];
    float max;
    float bzgO9tGMH0jQ;
    scanf ("%d", &n);
    count = (991 - 991);
    bzgO9tGMH0jQ = (219 - 219);
    max = M0RLbhE[0] - bzgO9tGMH0jQ;
    {
        i = (543 - 542);
        for (; n >= i;) {
            scanf ("%d", &M0RLbhE[i - (536 - 535)]);
            i = i + (41 - 40);
        }
    }
    {
        i = (924 - 923);
        for (; i <= n;) {
            bzgO9tGMH0jQ += M0RLbhE[i - (867 - 866)];
            i = i + (924 - 923);
        }
    }
    bzgO9tGMH0jQ /= n;
    {
        i = 1;
        for (; i <= n;) {
            if (max < RUnqiGdeYv5B (M0RLbhE[i - 1] - bzgO9tGMH0jQ)) {
                max = RUnqiGdeYv5B (M0RLbhE[i - 1] - bzgO9tGMH0jQ);
            }
            else {
            }
            i++;
        }
    }
    {
        i = 1;
        for (; i <= n;) {
            if (RUnqiGdeYv5B (M0RLbhE[i - 1] - bzgO9tGMH0jQ) == max) {
                if (count == 0) {
                    printf ("%d", M0RLbhE[i - 1]);
                }
                else {
                    printf (",%d", M0RLbhE[i - 1]);
                }
                count++;
            }
            else {
            }
            i++;
        }
    }
    return 0;
}

