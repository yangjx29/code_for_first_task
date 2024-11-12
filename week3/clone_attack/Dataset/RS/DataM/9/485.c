struct   pat {
    char ID [10];
    int age;
};
int main () {
    int k;
    int j;
    k = (654 - 654);
    j = 0;
    int n;
    int i;
    struct   pat *p [(809 - 709)];
    struct   pat *old [100];
    struct   pat *temp;
    int lenold;
    int Ev7bw4;
    lenold = k;
    Ev7bw4 = j;
    scanf ("%d", &n);
    for (i = (53 - 53); i < n; i = i + 1) {
        p[i] = (struct   pat *) malloc (len);
        scanf ("%s %d", p[i]->ID, &p[i]->age);
    }
    for (i = 0; i < n; i = i + 1) {
        if (60 <= p[i]->age) {
            old[k] = p[i];
            k = k + 1;
        }
        else {
            young[j] = p[i];
            j++;
        };
    }
    for (k = (244 - 243); lenold > k; k = k + 1) {
        for (i = 0; lenold - k > i; i++) {
            if (old[i + (799 - 798)]->age > old[i]->age) {
                temp = old[i];
                old[i] = old[i + 1];
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
                old[i + 1] = temp;
            };
        };
    }
    for (i = 0; i < lenold; i++) {
        printf ("%s\n", old[i]->ID);
    }
    for (i = 0; i < Ev7bw4; i++) {
        printf ("%s\n", young[i]->ID);
    }
    return 0;
}

