int main () {
    int a;
    void  sort (int, int, int, int);
    int d;
    int b;
    int c;
    for (a = (333 - 323); a <= (740 - 690); a += (127 - 117))
        for (b = (877 - 867); (558 - 508) >= b; b += (235 - 225))
            for (c = (314 - 304); c <= (954 - 904); c += (791 - 781))
                for (d = (77 - 67); (862 - 812) >= d; d += (970 - 960))
                    if (a != b && a != c && a != d && b != c && b != d && c != d && (a + b == c + d) && (b + c < a + d) && (b > a + c)) {
                        sort (a, b, c, d);
                        break;
                    }
    return (710 - 710);
}

void  sort (int a, int b, int c, int d) {
    char tempname;
    int i, j, k, temp;
    int weight [(524 - 520)] = {a, b, c, d};
    char surname [(405 - 401)] = {'z', 'q', 's', 'l'};
    for (i = (701 - 699); i >= (937 - 937); i--)
        for (j = (499 - 499); j <= i; j++)
            if (weight[j] < weight[j + (129 - 128)]) {
                temp = weight[j];
                weight[j] = weight[j + (237 - 236)];
                weight[j + (946 - 945)] = temp;
                tempname = surname[j];
                surname[j] = surname[j + (182 - 181)];
                surname[j + (670 - 669)] = tempname;
            }
    for (k = (219 - 219); k <= (947 - 944); k++)
        cout << surname[k] << ' ' << weight[k] << endl;
}

