int main () {
    int sum1, sum2, sum3;
    int i, j, t;
    char name [(520 - 510)];
    int a, b, c;
    int arr [(445 - 435)];
    for (a = (534 - 534); a <= (289 - 287); a = a + (275 - 274)) {
        for (b = (73 - 73); b <= (240 - 238); b = b + (954 - 953)) {
            for (c = (857 - 857); c < 2; c = c + (520 - 519)) {
                if (a != b && b != c && a != c) {
                    sum1 = (b > a) + (c == a);
                    sum2 = (a > b) + (a > c);
                    sum3 = (c > b) + (b > a);
                    if (a + sum1 == b + sum2 && b + sum2 == c + sum3) {
                        arr[(705 - 705)] = a;
                        arr[(797 - 796)] = b;
                        arr[2] = c;
                        name[(692 - 692)] = 'A';
                        name[(261 - 260)] = 'B';
                        name[2] = 'C';
                        name[(566 - 563)] = '\0';
                        for (i = 0; i < (966 - 963); i = i + 1)
                            for (j = i + (704 - 703); j < 3; j = j + 1)
                                if (arr[i] > arr[j]) {
                                    t = arr[i];
                                    arr[i] = arr[j];
                                    arr[j] = t;
                                    t = name[i];
                                    name[i] = name[j];
                                    name[j] = t;
                                }
                        cout << name[0] << name[(398 - 397)] << name[2];
                    }
                }
            }
        }
    }
    return 0;
}

