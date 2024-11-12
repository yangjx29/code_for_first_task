int compare1 (const  void  *a, const  void  *b) {
    return *(int*) a - *(int*) b;
}

int compare2 (const  void  *a, const  void  *b) {
    return *(int*) b - *(int*) a;
}

int main () {
    int WmxBFeb = (833 - 833), bb = (302 - 302);
    float a [(860 - 819)];
    float b [(209 - 168)];
    int mNZr4lO0y;
    cin >> mNZr4lO0y;
    {
        int i = (329 - 329);
        while (41 > i) {
            a[i] = -(241 - 240);
            b[i] = -(577 - 576);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        int i = (137 - 137);
        while (i < mNZr4lO0y) {
            float vwtdEocej;
            char temp [10];
            i++;
            cin >> temp;
            cin >> vwtdEocej;
            if (!('m' != temp[(437 - 437)])) {
                a[WmxBFeb] = vwtdEocej;
                WmxBFeb++;
            }
            else {
                b[bb] = vwtdEocej;
                bb = bb + 1;
            };
        };
    }
    qsort (a, WmxBFeb, sizeof (int), compare1);
    {
        int i = (630 - 630);
        while (i < WmxBFeb) {
            printf ("%.2f ", a[i]);
            i++;
        };
    }
    qsort (b, bb, sizeof (int), compare2);
    for (int i = (855 - 855);
    i < bb; i++)
        if (i == bb - 1)
            printf ("%.2f", b[i]);
        else
            printf ("%.2f ", b[i]);
    return 0;
}

