int main () {
    int YsWuw3OEXkg, i, TWKFCkNlpUaz;
    char jBjPWm0XJn6p [YsWuw3OEXkg] [256];
    scanf ("%d", &YsWuw3OEXkg);
    {
        i = 0;
        while (YsWuw3OEXkg > i) {
            scanf ("%s", &jBjPWm0XJn6p[i]);
            {
                TWKFCkNlpUaz = 0;
                while (!('\0' == jBjPWm0XJn6p[i][TWKFCkNlpUaz])) {
                    if (jBjPWm0XJn6p[i][TWKFCkNlpUaz] == 'A') {
                        jBjPWm0XJn6p[i][TWKFCkNlpUaz] = 'T';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    else if (jBjPWm0XJn6p[i][TWKFCkNlpUaz] == 'T') {
                        jBjPWm0XJn6p[i][TWKFCkNlpUaz] = 'A';
                    }
                    else if (jBjPWm0XJn6p[i][TWKFCkNlpUaz] == 'C') {
                        jBjPWm0XJn6p[i][TWKFCkNlpUaz] = 'G';
                    }
                    else if (jBjPWm0XJn6p[i][TWKFCkNlpUaz] == 'G') {
                        jBjPWm0XJn6p[i][TWKFCkNlpUaz] = 'C';
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    TWKFCkNlpUaz++;
                };
            }
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
            printf ("%s\n", jBjPWm0XJn6p[i]);
            i++;
        };
    }
    return 0;
}

