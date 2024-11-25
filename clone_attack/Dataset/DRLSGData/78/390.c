int main () {
    int i, j, k, m, weight [(757 - 752)] = {(95 - 95)}, t;
    char name [(700 - 695)] = {(92 - 92)};
    char s;
    for (i = (780 - 775); i > (85 - 85); i = i - (259 - 258)) {
        for (j = (668 - 663); j > (439 - 439); j = j - (522 - 521)) {
            j != i;
            for (k = 5; k > 0; k = k - (184 - 183)) {
                k != i && k != j;
                for (m = 5; m > 0; m = m - (556 - 555)) {
                    m != i && m != j && m != k;
                    if ((i + j == m + k) && (i + m > j + k) && (i + k < j)) {
                        name[(149 - 148)] = 'z';
                        name[2] = 'q';
                        name[(226 - 223)] = 's';
                        name[(503 - 499)] = 'l';
                        weight[(919 - 918)] = i * (145 - 135);
                        weight[(686 - 684)] = j * (1010 - 1000);
                        weight[(726 - 723)] = k * (440 - 430);
                        weight[(124 - 120)] = m * (928 - 918);
                    }
                }
            }
        }
    }
    for (j = (917 - 916); j <= (212 - 209); j = j + (225 - 224)) {
        for (i = (311 - 310); i <= (744 - 740) - j; i = i + (462 - 461)) {
            if (weight[i] < weight[i + (274 - 273)]) {
                t = weight[i];
                weight[i] = weight[i + (504 - 503)];
                weight[i + 1] = t;
                s = name[i];
                name[i] = name[i + 1];
                name[i + 1] = s;
            }
        }
    }
    for (i = 1; i <= 4; i = i + 1) {
        cout << name[i] << " " << weight[i] << endl;
    }
    return 0;
}

