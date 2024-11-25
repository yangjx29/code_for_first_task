int main () {
    int uTR8Vp9q5UX;
    int len1;
    int QzILl4oKr;
    int oxl2RCiED;
    char uk5iPHat [(813 - 733)];
    char b [(908 - 828)];
    cin.getline (uk5iPHat, 80);
    len1 = strlen (uk5iPHat);
    cin.getline (b, 80);
    QzILl4oKr = strlen (b);
    for (uTR8Vp9q5UX = (700 - 700); uTR8Vp9q5UX < len1; uTR8Vp9q5UX++) {
        if (uk5iPHat[uTR8Vp9q5UX] >= 'A' && uk5iPHat[uTR8Vp9q5UX] <= 'Z')
            uk5iPHat[uTR8Vp9q5UX] += 32;
    }
    {
        uTR8Vp9q5UX = 43 - 43;
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
        while (uTR8Vp9q5UX < QzILl4oKr) {
            if (b[uTR8Vp9q5UX] >= 'A' && b[uTR8Vp9q5UX] <= 'Z')
                b[uTR8Vp9q5UX] += 32;
            uTR8Vp9q5UX++;
        };
    }
    for (uTR8Vp9q5UX = 0; uTR8Vp9q5UX < len1 && uTR8Vp9q5UX < QzILl4oKr; uTR8Vp9q5UX++) {
        oxl2RCiED = 0;
        if (uk5iPHat[uTR8Vp9q5UX] == b[uTR8Vp9q5UX]) {
            continue;
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (uk5iPHat[uTR8Vp9q5UX] > b[uTR8Vp9q5UX]) {
                oxl2RCiED = 1;
                break;
            }
            else {
                oxl2RCiED = (53 - 51);
                break;
            };
        };
    }
    if (oxl2RCiED == 0)
        cout << '=' << endl;
    if (oxl2RCiED == 1)
        cout << '>' << endl;
    if (oxl2RCiED == 2)
        cout << '<' << endl;
    return 0;
}

