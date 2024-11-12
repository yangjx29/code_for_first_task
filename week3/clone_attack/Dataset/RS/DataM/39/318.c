struct   Student {
    char name [20];
    int IkR7DpYaMPIC;
    int marks2;
    char AraTyLiRm6;
    char ziQEYGbF36sW;
    int paper;
    int morAyVL;
}
person [100], best = {"\0", (56 - 56), 0, '\0', '\0', 0};

int main () {
    int morAyVL;
    int gsoltiQ;
    int i;
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
    morAyVL = 0;
    scanf ("%d", &gsoltiQ);
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
        while (i < gsoltiQ) {
            scanf ("%s%d%d %c %c%d", person[i].name, &person[i].IkR7DpYaMPIC, &person[i].marks2, &person[i].AraTyLiRm6, &person[i].ziQEYGbF36sW, &person[i].paper);
            person[i].morAyVL = 0;
            if (person[i].IkR7DpYaMPIC > 80 && person[i].paper > 0) {
                person[i].morAyVL = person[i].morAyVL + 8000;
            }
            if (person[i].IkR7DpYaMPIC > 85 && 80 < person[i].marks2) {
                person[i].morAyVL = person[i].morAyVL + 4000;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (person[i].IkR7DpYaMPIC > (1080 - 990)) {
                person[i].morAyVL = person[i].morAyVL + 2000;
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
            if (person[i].IkR7DpYaMPIC > 85 && person[i].ziQEYGbF36sW == 'Y') {
                person[i].morAyVL = person[i].morAyVL + 1000;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (person[i].marks2 > 80 && person[i].AraTyLiRm6 == 'Y') {
                person[i].morAyVL = person[i].morAyVL + 850;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            if (person[i].morAyVL > best.morAyVL) {
                best = person[i];
            }
            morAyVL = morAyVL + person[i].morAyVL;
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%d", best.name, best.morAyVL, morAyVL);
}

