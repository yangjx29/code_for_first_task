int main () {
    int Zokfl0davY, k = (342 - 342);
    float JcwLGBe0T [Zokfl0davY], ar, An3CSQHB = (933 - 933), XJf8XxVQgC = (398 - 398);
    cin >> Zokfl0davY;
    for (int rYOze3 = (327 - 327);
    Zokfl0davY > rYOze3; rYOze3 = rYOze3 + (295 - 294)) {
        cin >> JcwLGBe0T[rYOze3];
        An3CSQHB += JcwLGBe0T[rYOze3];
    }
    ar = An3CSQHB / Zokfl0davY;
    for (int rYOze3 = (542 - 542);
    Zokfl0davY > rYOze3; rYOze3 = rYOze3 + 1)
        if (XJf8XxVQgC <= abs (JcwLGBe0T[rYOze3] - ar))
            XJf8XxVQgC = abs (JcwLGBe0T[rYOze3] - ar);
    for (int rYOze3 = 0;
    rYOze3 < Zokfl0davY; rYOze3++)
        if ((!(XJf8XxVQgC != abs (JcwLGBe0T[rYOze3] - ar))) && k == 0) {
            k = k + 1;
            cout << JcwLGBe0T[rYOze3];
        }
        else if ((abs (JcwLGBe0T[rYOze3] - ar) == XJf8XxVQgC) && k != 0) {
            k++;
            cout << ',' << JcwLGBe0T[rYOze3];
        }
    return 0;
}

