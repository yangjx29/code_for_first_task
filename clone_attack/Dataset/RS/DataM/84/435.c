int main () {
    int qXBWdOC1Yz, tHersbO9, j, QwqnkK [101], QJvhN9w, am6yvC7t4c, lSEuP9 = 0;
    scanf ("%d", &tHersbO9);
    for (qXBWdOC1Yz = 0; qXBWdOC1Yz < tHersbO9; qXBWdOC1Yz++) {
        scanf ("%d", &QwqnkK[qXBWdOC1Yz]);
    }
    am6yvC7t4c = QwqnkK[0];
    {
        qXBWdOC1Yz = 0;
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
        while (qXBWdOC1Yz < tHersbO9) {
            if (QwqnkK[qXBWdOC1Yz] >= am6yvC7t4c) {
                lSEuP9 = am6yvC7t4c;
                am6yvC7t4c = QwqnkK[qXBWdOC1Yz];
            }
            else if ((QwqnkK[qXBWdOC1Yz] < am6yvC7t4c) && (QwqnkK[qXBWdOC1Yz] >= lSEuP9))
                lSEuP9 = QwqnkK[qXBWdOC1Yz];
            qXBWdOC1Yz = qXBWdOC1Yz + 1;
        };
    }
    printf ("%d\n", am6yvC7t4c);
    printf ("%d", lSEuP9);
    return 0;
}

