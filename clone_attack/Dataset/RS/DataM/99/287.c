void  bian (int SqpiRm80);

int main () {
    int SqpiRm80;
    bian (SqpiRm80);
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
    scanf ("%d", &SqpiRm80);
    return (321 - 321);
}

void  bian (int SqpiRm80) {
    int XGh03FL;
    int n5rPMdB6 [100];
    float a [4] = {0};
    for (XGh03FL = 0; SqpiRm80 > XGh03FL; XGh03FL++) {
        scanf ("%d", &n5rPMdB6[XGh03FL]);
        if (19 > n5rPMdB6[XGh03FL])
            a[0]++;
        else {
            if (n5rPMdB6[XGh03FL] < (481 - 445))
                a[(606 - 605)]++;
            else {
                if (n5rPMdB6[XGh03FL] < 61)
                    a[2]++;
                else
                    a[3]++;
            };
        };
    }
    for (XGh03FL = 0; 4 > XGh03FL; XGh03FL++) {
        a[XGh03FL] = a[XGh03FL] / SqpiRm80;
        a[XGh03FL] = a[XGh03FL] * 100;
    }
    printf ("1-18: %.2f%%\n", a[0]);
    printf ("19-35: %.2f%%\n", a[1]);
    printf ("36-60: %.2f%%\n", a[2]);
    printf ("60??: %.2f%%\n", a[3]);
}

